# Tianocore Redfish Client
This repository holds EDKII Redfish client libraries, drivers and applications.
EDKII Redfish client work with EDKII [RedfishPkg](https://github.com/tianocore/edk2/tree/master/RedfishPkg),
and provides the functionality to support Redfish service hosted by Board Management Controller (BMC) in server.
Please check [Readme.md](https://github.com/tianocore/edk2/blob/master/RedfishPkg/Readme.md) for the design of
UEFI Redfish EDK2 implementation.

# License
The majority of the content in the EDK Redfish Client open source project uses a
[BSD-2-Clause Plus Patent License](LICENSE).

# Maintainers

See [Maintainers.txt](Maintainers.txt).

# Contributing

The patch review process would be the same as edk2, and adding prefix **[edk2-redfish-client]**
specifically for the patches against edk2-redfish-client repository. For more details, please
see [CONTRIBUTING.md](CONTRIBUTING.md).

# How to build (Ubuntu Environment)
## Prerequisite
### Install packages
```
apt-get update; apt-get install install gcc g++ make uuid-dev nasm
```
If the `nasm` installed above shows build error during build process, we need to install
newer version of `nasm` manually:
- Download `nasm`
  ```
  wget https://www.nasm.us/pub/nasm/releasebuilds/2.15rc12/nasm-2.15rc12.tar.gz"
  ```
- Extract file
  ```
  tar zxvf nasm-2.15rc12.tar.gz"
  ```
- Build and install `nasm`
  ```
  cd nasm-2.15rc12
  ./configure --prefix=/usr
  sudo make install
  ```
- Check to see if `nasm` reports desired version or not
  ```
  nasm -v
  ```
### Build EDKII base tools
- Initial submodule (skip this if you already did this)
  ```
  git submodule update --init
  ```
- Build base tools
  ```
  cd BaseTools
  make
  ```
## Build RedfishClientPkg
In order to reference RedfishClientPkg, we need to set `PACKAGES_PATH` and specify the location
of edk2-redfish-client repository.
```
export PACKAGES_PATH=$PWD/edk2:$PWD/edk2-redfish-client
cd $PWD/edk2
. ./edksetup.sh
build -p RedfishClientPkg/RedfishClientPkg.dsc -t GCC5 -a X64
```
