# Vendor Layer Release Notes

XiOne UK REALTEK STB RDKE Vendor Layer Release Notes

---
| Platform supported |
|-------------------|
|XiOne-UK UHD - 1319|

|Summary|Content|
|---|----|
|Classification|Confidential|
|Date|28 May 2024|
|Author|Pothiraj Paulraj|


| Components | Tag |
|----------|--------|
| Linux | 4.9.119.01-r3|
| DTB | 4.9.119.01-r3|
| packagegroup-vendor-layer| 2.1.0-r0|
| meta-rdk-halif-headers|2.1.0|
|meta-oss-reference-release|2.3.1|

## Interface versions

-[No HALIF headers changes between vendor layer release 2.0.0-2.1.0](https://github.com/rdk-e/meta-rdk-halif-headers/compare/2.0.0...2.1.0)

## Table of Contents

- [Vendor Layer Release Notes](#vendor-layer-release-notes)
  - [Table of Contents](#table-of-contents)
  - [Release Description](#release-description)
    - [Limitations](#limitations)
  - [Build instructions](#build-instructions)
    - [Boot Command](#boot-command)
  - [Testing](#testing)
  - [Release layer and components](#release-layer-and-components)
    - [Stack layer](#stack-layer)

## Release Description

The aim of this release to integrate the latest oss release 2.3.1, removed the widevinecdmi from vendor layer. 
Integrated the secapi-netflix,apparmor, alsa sound conf  and directfb component.
This release will provide a versioned "meta-vendor-xione-realtek-release" that will be used by the middleware, image assembler.

The scope of this release includes:
- Integrated latest oss and removal of widevinecdmi component from vendor layer [RDK-50004](https://ccp.sys.comcast.net/browse/RDK-50004)
- Integrated alsa sound conf file into vendor layer[RDK-49877](https://ccp.sys.comcast.net/browse/RDK-49877)
- Integrated directfb component[RDK-48381](https://ccp.sys.comcast.net/browse/RDK-48381)
- Integrated secapi-netflix [RDK-49385](https://ccp.sys.comcast.net/browse/RDK-49385)
- Integration of latest oss-release version of below tag version.
	1. meta-oss-reference-release - refs/tags/2.3.1
	2. meta-rdk-oss-reference - refs/tags/2.3.1
	3. poky - refs/tags/v1.0.4
	4. rdke-common-config - refs/tags/1.0.6
	5. meta-openembedded - refs/tags/v1.0.0_dunfell

From 1.0.0 release onwards we moved some of the OSS and Middleware components to Vendor layer
- Gstreamer,westeros and mentioned in the ticket RDK-46827
- secapi3-rtk,secapi2-adapter,secapi-common-hw,secapi-rtk,secapi-common-crypto moved to Vendor layer
- Mediarite removed from Vendor layer
- Changes to accommodate Vendor specific base-files bbappend contents in Vendor layer
    
### Limitations

It should be noted that some services may not run as they have dependencies with other layers. Additionally, the exclusion of inter-layer bbappends/patches might result in the failure to start some services. These limitations should be taken into consideration during the verification process. These Limitations will be addressed in Future Releases.

## Build instructions

- Steps to check out and build the vendor layer project [https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project](https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project)


### Boot Command

We will not be able to flash the image through `FlashApp`, on 1.0.1 release and We have supported Flash app from 2.0.0 onwards.

- Copy the image to the usb and connect to the TV
- Switch on the STB
- Press z button multiple time to get the bootloader prompt.
- From bootloader prompt, need to do below method
- Choose option c (flashing image)
- Choose select option h/i (depends on from which bank the image is booting)
- Enter the image name which we need to copy.
- After image flashed successfully. Choose the option "exit"
- Choose the option "exit" (or) Enter "i" (automatically reboot the box)

## Testing

- Created the `"vendor test image"` `"SKXI11ADS_vendor_test_20240523114429"` using the vendor layer project.
- Successfully booted the `"vendor test image"` and obtained the shell prompt.
- For this release testing was done by using feature branch feature/RDK-50004-consume-oss231 for rdke-middleware-manifest/realtek-xione.xml

## Release layer and components

|Layer|Tag|
|-----|---|
|[meta-vendor-release](https://github.com/rdk-e/meta-vendor-xione-realtek-release)|2.1.0|

### Stack layer

| Vendor-layer Component | (=version) |
|------------------------|------------|
|secapi-netflix|1.0.0-r0|
|directfb|1.7.7-r0|
|apparmor|1.0.0-r0|

## Consolidated change list from vendor layer repositories
## changes from previous release [2.0.0](https://github.com/rdk-e/meta-vendor-xione-realtek-release/releases/tag/2.0.0) to current release 2.1.0 are below
## [meta-oem-realtek-stream](https://github.com/rdk-e/meta-oem-realtek-stream/blob/main/CHANGELOG.md)

#### [2.1.0](https://github.com/rdk-e/meta-oem-realtek-stream/compare/2.0.0...2.1.0)

- RDK-50146: Release activity 2.1.0. [`#111`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/111)
- RDK-50004: Remove widevinecdmi from vendor layer. [`#107`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/107)
- RDK-48217: Addressing review comments to update [`#106`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/106)
- RDK-48217: Apparmor Vendor related changes for Realtek/SKY-xione [`#105`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/105)
- RDK-44350 Convert Qmake to Cmake [`#96`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/96)
- RDK-49877: asound conf moved to vendor layer. [`#103`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/103)
- RDK-48381:Added the directfb into vendor specific realtek for subtitle drawing [`#102`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/102)
- RDK-49385: Cleanup xione realtek secapi-netflix bbappends [`#100`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/100)
- RDK-48377: Release 2.0.0 [`#99`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/99)
- RDK-48217: Enabling Apparmor support in Kernel. [`f36537c`](https://github.com/rdk-e/meta-oem-realtek-stream/commit/f36537ce2e5fe3dc6c4d6cd5746271723c574a81)
- RDK-48217: Updating apparmor-vendor bb for SKY-Xione based devices and [`3e85f48`](https://github.com/rdk-e/meta-oem-realtek-stream/commit/3e85f48f8934630b3453c75809986cef0b09d0de)
- RDK-44350: Removal of QT dependency from Realtek secapi component [`ba042ae`](https://github.com/rdk-e/meta-oem-realtek-stream/commit/ba042aed6563ecdd0bcd475984ebd13bbb33ac0c)

## [meta-oem-stream](https://github.com/rdk-e/meta-oem-stream/blob/main/CHANGELOG.md)
- [No changes in this repo between 2.0.0-2.1.0](https://github.com/rdk-e/meta-oem-stream/blob/main/CHANGELOG.md)

## [meta-rdk-soc-realtek](https://github.com/rdk-e/meta-rdk-soc-realtek/blob/main/CHANGELOG.md)

#### [2.1.0](https://github.com/rdk-e/meta-rdk-soc-realtek/compare/2.0.0...2.1.0)

- RDK-44350 Changing SRC_URI for secapi-rtk to point to github [`#51`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/51)
- RDK-49877:Added asound conf file into vendor layer [`#57`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/57)
- RDK-49385: Cleanup xione realtek secapi-netflix bbappends [`#55`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/55)
- RDK-48377:Release 2.0.0 [`#54`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/54)

## [meta-oss-vendor-realtek](https://github.com/rdk-e/meta-oss-vendor-realtek/blob/main/CHANGELOG.md)

#### [2.1.0](https://github.com/rdk-e/meta-oss-vendor-realtek/compare/2.0.0...2.1.0)

- RDK-50004: Remove widevinecdmi from vendor layer. [`#19`](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/19)
- RDK-48381:Added the directfb into vendor and this component specific to realtek for subtitle drawing… [`#18`](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/18)
- RDK-48377: Release 2.0.0 [`#16`](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/16)
- RDK-48381:Added the directfb into vendor and this component specific to realtek for subtitle drawing [`a6ad156`](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/a6ad156fa9d99f5445fa855c3dab6bb3706ab33a)
- Add GitHub Actions workflow file [`baef75b`](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/baef75b3e5a8564b29842f2c1c8d682452bf8393)
- Update CODEOWNERS with rdke_vendor_layer_approval_team [`29ef647`](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/29ef6473a815783efaa32f4dd6b3177d1fd70bdb)
