#
# Copyright (c) 2019, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#

from .resource import RfResource, RfCollection

class RfRegistryCollection(RfCollection):
    def element_type(self):
        return RfRegistry

#subclass Bios
class RfRegistry(RfResource):
    pass
