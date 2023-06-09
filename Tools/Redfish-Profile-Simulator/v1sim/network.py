import os

from .resource import RfCollection, RfResource


class RfNetworkService(RfResource):
    pass


class RfEthernetCollection(RfCollection):
    def element_type(self):
        return RfEthernet

    def create_sub_objects(self, base_path, rel_path):
        self.elements = {}
        resource_path = os.path.join(base_path, rel_path);
        contents = os.listdir(resource_path)
        for item in contents:
            if item == "VLANs":
                self.components[item] = RfVLanCollection(base_path, os.path.join(rel_path, item), parent=self)
            else:
                item_path = os.path.join(resource_path, item)
                if os.path.isdir(item_path):
                    etype = self.element_type()  # type: Type[RfEthernetCollection]
                    self.elements[item] = etype(base_path,
                                                os.path.normpath("%s/%s" % (rel_path, item)),
                                                parent=self)

class RfEthernet(RfResource):
    pass


class RfVLanCollection(RfCollection):
    def element_type(self):
        return RfVLan


class RfVLan(RfResource):
    pass


class RfNetworkInterfaceCollection(RfCollection):
    def element_type(self):
        return RfNetworkInterface


class RfNetworkInterface(RfResource):
    pass
