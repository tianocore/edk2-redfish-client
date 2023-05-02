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

import json
import os
import sys

import flask

if sys.version_info >= (3, 5):
    from typing import Type


class RfResource:
    def __init__(self, base_path, rel_path, parent=None):
        self.parent = parent
        self.components = {}

        path = os.path.join(base_path, rel_path)
        indx_file_path = os.path.join(path, "index.json")
        print("*****Loading Mockup json file:{}".format(indx_file_path))
        if os.path.exists(indx_file_path):
            res_file = open(indx_file_path, "r")
            res_rawdata = res_file.read()
            self.res_data = json.loads(res_rawdata,object_pairs_hook=OrderedDict)
            self.create_sub_objects(base_path, rel_path)
            self.final_init_processing(base_path, rel_path)
        else:
            self.res_data = {}

    def create_sub_objects(self, base_path, rel_path):
        pass

    def final_init_processing(self, base_path, rel_path):
        pass

    def get_resource(self):
        self.response=json.dumps(self.res_data,indent=4)
        try:
            # SHA1 should generate well-behaved etags
            response = flask.make_response(self.response)
            etag = hashlib.sha1(self.response.encode('utf-8')).hexdigest()
            response.set_etag(etag)
            return response
        except KeyError:
            flask.abort(404)

    def get_attribute(self, attribute):
        return flask.jsonify(self.res_data[attribute])

    def get_component(self, component):
        if component in self.components:
            return self.components[component]
        else:
            return None

    def patch_resource(self, patch_data):
        for key in patch_data.keys():
            if key in self.res_data:
                self.res_data[key] = patch_data[key]
            else:
                raise Exception("attribute %s not found" % key)

        resp = flask.Response(json.dumps(self.res_data,indent=4))
        return 0, 200, None, resp

    def post_resource(self, post_data):
        pass

    def delete_resource(self):
        pass

class RfResourceRaw:
    def __init__(self, base_path, rel_path, parent=None):
        self.parent = parent
        path = os.path.join(base_path, rel_path)
        indx_file_path = os.path.join(path, "index.xml")
        print("*****Loading Mockup raw data file:{}".format(indx_file_path))
        res_file = open(indx_file_path, "r")
        res_raw_data = res_file.read()
        self.res_data = res_raw_data
        self.create_subobjects(base_path, rel_path)
        self.final_init_processing(base_path, rel_path)

    def create_subobjects(self, base_path, rel_path):
        pass

    def final_init_processing(self, base_path, rel_path):
        pass

    def get_resource(self):
        return flask.Response(response=self.res_data, status=200, mimetype='application/xml')


class RfCollection(RfResource):
    def create_sub_objects(self, base_path, rel_path):
        self.elements = {}
        subpath = os.path.join(base_path, rel_path)
        contents = os.listdir(subpath)
        for item in contents:
            item_path = os.path.join(subpath, item)
            if os.path.isdir(item_path):
                etype = self.element_type()  # type: Type[RfResource]
                self.elements[item] = etype(base_path,
                                            os.path.normpath("%s/%s" % (rel_path, item)),
                                            parent=self)

    def element_type(self):
        pass

    def get_elements(self):
        return self.elements

    def get_element(self, element_id):
        return self.elements[element_id]
