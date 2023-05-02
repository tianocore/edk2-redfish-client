#
# Copyright Notice:
#
# Copyright (c) 2019, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Copyright Notice:
# Copyright 2016 Distributed Management Task Force, Inc. All rights reserved.
# License: BSD 3-Clause License. For full text see link: https://github.com/DMTF/Redfish-Profile-Simulator/blob/master/LICENSE.md
#

import os

from .common_services import RfLogServiceCollection
from .network import RfEthernetCollection, RfNetworkInterfaceCollection
from .resource import RfResource, RfCollection
from .storage import RfSimpleStorageCollection, RfSmartStorage
import flask
import json
from collections import OrderedDict

class RfSystemsCollection(RfCollection):
    def element_type(self):
        return RfSystemObj


class RfSystemObj(RfResource):
    def create_sub_objects(self, base_path, rel_path):
        resource_path = os.path.join(base_path, rel_path)
        contents = os.listdir(resource_path)
        for item in contents:
            if item == "Bios":
                self.components[item] = RfBios(base_path, os.path.join(rel_path, item), parent=self)
            elif item == "EthernetInterfaces":
                self.components[item] = RfEthernetCollection(base_path, os.path.join(rel_path, item), parent=self)
            elif item == "LogServices":
                self.components[item] = RfLogServiceCollection(base_path, os.path.join(rel_path, item), parent=self)
            elif item == "Memory":
                self.components[item] = RfMemoryCollection(base_path, os.path.join(rel_path, item), parent=self)
            elif item == "Processors":
                self.components[item] = RfProcessorCollection(base_path, os.path.join(rel_path, item), parent=self)
            elif item == "SimpleStorage":
                self.components[item] = RfSimpleStorageCollection(base_path, os.path.join(rel_path, item), parent=self)
            elif item == "SmartStorage":
                self.components[item] = RfSmartStorage(base_path, os.path.join(rel_path, item), parent=self)
            elif item == "SecureBoot":
                self.components[item] = RfSecureBoot(base_path, os.path.join(rel_path, item), parent=self)
            elif item == "NetworkInterfaces":
                self.components[item] = RfNetworkInterfaceCollection(base_path, os.path.join(rel_path, item), parent=self)
            elif item == "PCIeDevices":
                self.components[item] = RfPCIeDeviceCollection(base_path, os.path.join(rel_path, item), parent=self)
            elif item == "PCISlots":
                self.components[item] = RfPCISlotCollection(base_path, os.path.join(rel_path, item), parent=self)
            elif item == "FirmwareInventory":
                self.components[item] = RfSystemFirmwareInventory(base_path, os.path.join(rel_path, item), parent=self)
            elif item == "USBDevices":
                self.components[item] = RfUSBDeviceCollection(base_path, os.path.join(rel_path, item), parent=self)
            elif item == "USBPorts":
                self.components[item] = RfUSBPortCollection(base_path, os.path.join(rel_path, item), parent=self)
            elif item == "BootOptions":
                self.components[item] = RfBootOptionCollection(base_path, os.path.join(rel_path, item), parent=self)

    def patch_resource(self, patch_data):
        # first verify client didn't send us a property we cant patch
        for key in patch_data.keys():
            if key != "AssetTag" and key != "IndicatorLED" and key != "Boot" and key != "BiosVersion":
                return 4, 400, "Invalid Patch Property Sent", ""
            elif key == "Boot":
                for prop2 in patch_data["Boot"].keys():
                    if prop2 != "BootSourceOverrideEnabled" and prop2 != "BootSourceOverrideTarget" and prop2 != "BootNext" and prop2 != "BootOrder":
                        return 4, 400, "Invalid Patch Property Sent", ""
        # now patch the valid properties sent
        if "AssetTag" in patch_data:
            print("assetTag:{}".format(patch_data["AssetTag"]))
            self.res_data['AssetTag'] = patch_data['AssetTag']
        if "IndicatorLED" in patch_data:
            self.res_data['IndicatorLED'] = patch_data['IndicatorLED']
        if "BiosVersion" in patch_data:
            self.res_data['BiosVersion'] = patch_data['BiosVersion']
        if "Boot" in patch_data:
            boot_data = patch_data["Boot"]
            if "BootSourceOverrideEnabled" in boot_data:
                value = boot_data["BootSourceOverrideEnabled"]
                valid_values = ["Once", "Disabled", "Continuous"]
                if value in valid_values:
                    self.res_data['Boot']['BootSourceOverrideEnabled'] = value
                else:
                    return 4, 400, "Invalid_Value_Specified: BootSourceOverrideEnable", ""
            if "BootSourceOverrideTarget" in boot_data:
                value = boot_data["BootSourceOverrideTarget"]
                valid_values = self.res_data['Boot']['BootSourceOverrideTarget@Redfish.AllowableValues']
                if value in valid_values:
                    self.res_data['Boot']['BootSourceOverrideTarget'] = value
                else:
                    return 4, 400, "Invalid_Value_Specified: BootSourceOverrideTarget", ""
            if "BootNext" in boot_data:
                self.res_data['Boot']['BootNext'] = boot_data['BootNext']
            if "BootOrder" in boot_data:
                self.res_data['Boot']['BootOrder'] = boot_data['BootOrder']

        resp = flask.Response(json.dumps(self.res_data,indent=4))
        return 0, 200, None, resp

    def reset_resource(self, reset_data):
        if "ResetType" in reset_data:
            # print("RESETDATA: {}".format(resetData))
            value = reset_data['ResetType']
            valid_values = self.res_data["Actions"]["#ComputerSystem.Reset"]["ResetType@Redfish.AllowableValues"]
            if value in valid_values:
                # it is a supoported reset action  modify other properties appropritely
                if value == "On" or value == "ForceRestart" or value == "GracefulRestart":
                    self.res_data["PowerState"] = "On"
                    print("PROFILE_SIM--SERVER WAS RESET. power now ON")
                elif value == "GracefulShutdown" or value == "ForceOff":
                    self.res_data["PowerState"] = "Off"
                    print("PROFILE_SIM--SERVER WAS RESET. Power now Off")
                return 0, 204, "System Reset", ""
            else:
                return 4, 400, "Invalid reset value: ResetType", ""
        else:  # invalid request
            return 4, 400, "Invalid request property", ""


# subclass Logs Collection
class RfMemoryCollection(RfCollection):
    def element_type(self):
        return RfMemory


class RfMemory(RfResource):
    pass


class RfProcessorCollection(RfCollection):
    def element_type(self):
        return RfProcessor


class RfProcessor(RfResource):
    pass


class RfBios(RfResource):
    def create_sub_objects(self, base_path, rel_path):
        resource_path = os.path.join(base_path, rel_path)
        contents = os.listdir(resource_path)
        for item in contents:
            if item == "Settings":
                self.components[item] = RfBiosSettings(base_path, os.path.join(rel_path, item), parent=self)

    def reset_resource(self, req_data):
        print("bios was reset")
        return 0, 204, "Bios Reset", ""

    def change_password(self, req_data):
        if "PasswordName" in req_data and "OldPassword" in req_data and "NewPassword" in req_data:
            print("changed password of type %s" % req_data["PasswordName"])
            return 0, 204, "Password Change", ""
        else:  # invalid request
            return 4, 400, "Invalid request property", ""


class RfBiosSettings(RfResource):
    def patch_resource(self, patch_data):
        if "Attributes" not in patch_data:
            return 4, 400, "Invalid Payload. No Attributes found", ""
        self.res_data["Attributes"] = OrderedDict()
        for key in patch_data["Attributes"].keys():
            print("Check key in patch_data:{}".format(key))
            # verify client didn't send us a property we cant patch
            if key not in self.parent.res_data["Attributes"]:
                print("Invalid Patch Property Sent")
                return 4, 400, "Invalid Patch Property Sent", ""
            else:
                self.res_data["Attributes"][key] = patch_data["Attributes"][key]
        resp = flask.Response(json.dumps(self.res_data,indent=4))
        return 0, 200, None, resp


class RfPCIeDeviceCollection(RfCollection):
    def element_type(self):
        return RfPCIeDevice


class RfPCIeDevice(RfResource):
    pass


class RfPCISlotCollection(RfCollection):
    def element_type(self):
        return RfPCISlot


class RfPCISlot(RfResource):
    pass


class RfSecureBoot(RfResource):
    pass


class RfSystemFirmwareInventory(RfResource):
    pass


class RfUSBDeviceCollection(RfCollection):
    def element_type(self):
        return RfUSBDevice


class RfUSBDevice(RfResource):
    pass


class RfUSBPortCollection(RfCollection):
    def element_type(self):
        return RfUSBPort


class RfUSBPort(RfResource):
    pass

class RfBootOptionCollection(RfCollection):
    def final_init_processing(self, base_path, rel_path):
        self.maxIdx = 0
        self.bootOptions = {}

    def element_type(self):
        return RfBootOption

    def post_resource(self, post_data):
        print("Members@odata.count:{}".format(self.res_data["Members@odata.count"]))
        print("Members:{}".format(self.res_data["Members"]))
        print("post_data:{}".format(post_data))

        self.res_data["Members@odata.count"] = self.res_data["Members@odata.count"] + 1
        self.maxIdx = self.maxIdx + 1
        newBootOptIdx = self.maxIdx
        newBootOptUrl = self.res_data["@odata.id"] + "/" + str(newBootOptIdx)
        self.res_data["Members"].append({"@odata.id":newBootOptUrl})

        post_data["@odata.id"] = newBootOptUrl
        self.bootOptions[str(newBootOptIdx)] = post_data

        resp = flask.Response(json.dumps(post_data,indent=4))
        resp.headers["Location"] = newBootOptUrl
        return 0, 200, None, resp

    def patch_bootOpt(self, Idx, patch_data):
        self.bootOptions[str(Idx)] = {**self.bootOptions[str(Idx)], **patch_data}
        resp = flask.Response(json.dumps(self.bootOptions[str(Idx)],indent=4))
        return 0, 200, None, resp

    def get_bootOpt(self, Idx):
        return json.dumps(self.bootOptions[Idx],indent=4)

    def delete_bootOpt(self, Idx):
        print("in delete_bootOpt")

        resp = flask.Response(json.dumps(self.bootOptions[Idx],indent=4))

        self.bootOptions.pop(Idx)
        self.res_data["Members@odata.count"] = self.res_data["Members@odata.count"] - 1

        bootOptUrl = self.res_data["@odata.id"] + "/" + str(Idx)
        self.res_data["Members"].remove({"@odata.id":bootOptUrl})
        return 0, 200, None, resp

class RfBootOption(RfResource):
