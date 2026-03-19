# Vendor Layer Release Notes

XiOne UK Stream Puck RDKE Vendor Layer Release Notes

---

|Summary|Content|
|---|----|
|Classification|Confidential|
|Date|19 Mar 2026|
|Author| pothiraj.paulraj@sky.uk |

---

### Build Information
|  |  |
|---------------|---------------|
| Manifest location | <https://github.com/rdk-e/vendor-manifest-xione-stream> |
| Manifest Tag | 9.5.0 |
| Manifest Name | [xione-realtek-streambox.xml](https://github.com/rdk-e/vendor-manifest-xione-stream/blob/9.5.0/xione-realtek-streambox.xml) |
| Machine Name | xione-uk |
| Platforms supported | Realtek 1319 |
| Yocto Version | kirkstone |
| Release Test Ticket | [RDKEVD-6130](https://ccp.sys.comcast.net/browse/RDKEVD-6130)  |

---

## Table of Contents

- [Vendor Layer Release Notes](#vendor-layer-release-notes)
  - [Build Information](#build-information)
  - [Table of Contents](#table-of-contents)
  - [Release Description](#release-description)
  - [Release layer and components](#release-layer-and-components)
    - [Vendor Release Components](#vendor-release-components)
    - [Stack layer](#stack-layer)
  - [Meta Repos](#meta-repos)
  - [Interface versions](#interface-versions)
  - [Middleware and Production image Integration Dependencies](#middleware-and-production-image-integration-dependencies)
  - [Tickets Summary](#tickets-summary)
    - [Layer Tickets Filter](#layer-tickets-filter)
    - [Product Tickets Filter](#product-tickets-filter)
    - [Epic Tickets List](#epic-tickets-list)
  - [Testing](#testing)
  - [Build instructions](#build-instructions)
    - [Boot Command](#boot-command)
  - [Components details in 'packagegroup-vendor-layer'](#components-details-in-packagegroup-vendor-layer)
  - [Vendor Layer Component Integration Details](#vendor-layer-component-integration-details)
  - [Consolidated change list from vendor layer repositories](#consolidated-change-list-from-vendor-layer-repositories)
    - [Changes in meta repositories](#changes-in-meta-repositories)
    - [Changes in component repositories](#changes-in-component-repositories)

## Release Description

This is a scheduled bi-weekly release from the vendor [RDKEVD-6130](https://ccp.sys.comcast.net/browse/RDKEVD-6130). This release will provide a versioned "meta-vendor-xione-realtek-release" that will be used by the middleware as well as image assembler.

- XiOne Stream Puck RDKE Vendor Layer Release to roll out below fixes,

- [Scope of the issues on 9.5.0](https://ccp.sys.comcast.net/browse/RDKEVD-6135?jql=project%20%3D%20RDKEVD%20AND%20fixVersion%20%3D%20XIONE_REALTEK_VL_9.5.0)

- For full list for changes please refer the [Consolidated change list from vendor layer repositories](#consolidated-change-list-from-vendor-layer-repositories) section of release notes.

## Release layer and components

### Vendor Release Components

| Vendor Release Components | New Version (9.5.0) | Version in Previous Release (9.4.0) |
|------------|---------|------------------------------------|
| Kernel & DTB | | 4.9.119.01-r9  | |
| packagegroup-vendor-layer | 9.4.3-r0 | 9.4.0-r0 | [9.4.0....9.4.3](https://github.com/rdk-e/meta-oem-realtek-stream/compare/9.4.0...9.4.3) |
| packagegroup-common-vendor-layer | 9.5.0-r0 | 9.4.0-r0 |[9.4.0....9.5.0](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/compare/9.4.0...9.5.0)  |

### Stack layer

| Release meta Layer | Tag |
|------|------|
| [meta-vendor-xione-realtek-release](https://github.com/rdk-e/meta-vendor-xione-realtek-release) | [9.5.0](https://github.com/rdk-e/meta-vendor-xione-realtek-release/tree/9.5.0) |

#### Artifactory Location for IPKs

| Product | Location |
|------------|---------|
| XiOne-UK | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-uk-rel/9.5.0/xione-uk/ipks/debug |
| XiOne-Foxtel | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-foxtel-rel/9.5.0/xione-foxtel/ipks/debug |
| XiOne-DE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-de-rel/9.5.0/xione-de/ipks/debug |
| XiOne-Alpaca-De | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-alpaca-de-rel/9.5.0/xione-alpaca-de/ipks/debug |
| XOE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xfinity-stream-box-rel/9.5.0/xfinity-stream-box/ipks/debug |
| WNC Xfinity | https://partners.artifactory.comcast.com/ui/repos/tree/General/wnc-xfinity-stream-box-rel/9.5.0/wnc-xfinity-stream-box/ipks/debug |
| RTK-Flex2 | https://partners.artifactory.comcast.com/ui/repos/tree/General/xumo-stream-box-rel/9.5.0/xumo-stream-box/ipks/debug |
| Xione-IT | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-it-rel/9.5.0/xione-it/ipks/debug |
| RTK-Alpaca-IT | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-alpaca-it-rel/9.5.0/xione-alpaca-it/ipks/debug |

#### OSS Consumption

- We have supported New OSS consumption from 9.0.0 Vendor release onwards. Please find the VL OSS IPK path as below
- OSS Version 4.10.0.

| Product  | Location |
|------------|---------|
| XiOne-UK | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-uk-rel/9.5.0/xione-uk/rdk-arm7ve-oss-vendor/ipks/debug |
| XiOne-Foxtel | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-foxtel-rel/9.5.0/xione-foxtel/rdk-arm7ve-oss-vendor/ipks/debug |
| XiOne-DE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-de-rel/9.5.0/xione-de/rdk-arm7ve-oss-vendor/ipks/debug |
| XiOne-Alpaca-De | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-alpaca-de-rel/9.5.0/xione-alpaca-de/rdk-arm7ve-oss-vendor/ipks/debug |
| XOE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xfinity-stream-box-rel/9.5.0/xfinity-stream-box/rdk-arm7ve-oss-vendor/ipks/debug |
| WNC Xfinity | https://partners.artifactory.comcast.com/ui/repos/tree/General/wnc-xfinity-stream-box-rel/9.5.0/wnc-xfinity-stream-box/rdk-arm7ve-oss-vendor/ipks/debug |
| RTK-Flex2 | https://partners.artifactory.comcast.com/ui/repos/tree/General/xumo-stream-box-rel/9.5.0/xumo-stream-box/rdk-arm7ve-oss-vendor/ipks/debug |
| XiOne IT | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-it-rel/9.5.0/xione-it/rdk-arm7ve-oss-vendor/ipks/debug |
| XiOne Alpaca IT | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-alpaca-it-rel/9.5.0/xione-alpaca-it/rdk-arm7ve-oss-vendor/ipks/debug |

### Common meta layer versions for integration

| Meta Repo |  Version |
|-----------|-------------|
| meta-rdk-halif-headers | 4.1.4 |
| meta-rdk-cpc-halif-headers | 1.0.0 |
| meta-rdk-oss-reference | 4.12.0 |
| meta-rdk-oss-ext | 1.7.0 |
| meta-product-xione | 3.4.9 |
| rdke-common-config | 1.0.17 |
| rdke-region-uk-config | 2.4.3 |
| rdke-region-au-config | 1.2.3 |
| rdke-region-de-config | 1.0.8 |
| rdke-region-us-config | 1.5.2 |
| rdke-region-it-config | 1.1.2 |
| rdke-stb-config | 1.0.0 |

### Versions  of other layers  used for testing

| Meta Repo |  Version |
|-----------|-------------|
| meta-middleware-release | 8.5.2.0 |
| meta-application-release | 4.48.0 |
| meta-cspc-security-release | 4.0.1 [22aa62b78b39764d210e3c3fe2f1b5861c9f66ac] |


### Meta Repos

#### Meta repos maintained by layers layer

| Meta Repo | New Version (9.5.0) | Version in Previous Release (9.4.0) | ChangeList |
|------------|---------|------------------------------------|--------------|
| [meta-rdk-auxiliary](#meta-rdk-auxiliary) |  **1.8.0** | 1.7.0 | [1.7.0...1.8.0](https://github.com/rdkcentral/meta-rdk-auxiliary/compare/1.7.0...1.8.0) |
| [meta-rdk-oss-reference](#meta-rdk-oss-reference) |  **4.12.0** | 4.10.0 | [4.10.0...4.12.0](https://github.com/rdkcentral/meta-rdk-oss-reference/compare/4.10.0...4.12.0) |
| meta-rdk-tools |  | 2.3.1 | |
| meta-vts |  | 1.2.0 | |
| [meta-rdk-soc-realtek](#meta-rdk-soc-realtek) |  **4.1.10** | 4.1.6 | [4.1.6...4.1.10](https://github.com/rdk-e/meta-rdk-soc-realtek/compare/4.1.6...4.1.10) |
| [meta-oem-stream](#meta-oem-stream) |  **4.1.6** | 4.1.2 | [4.1.2...4.1.6](https://github.com/rdk-e/meta-oem-stream/compare/4.1.2...4.1.6) |
| [meta-oem-realtek-stream](#meta-oem-realtek-stream) |  **9.5.0** | 9.4.0 | [9.4.0...9.5.0](https://github.com/rdk-e/meta-oem-realtek-stream/compare/9.4.0...9.5.0) |
| [meta-rdk-vendor-realtek-common](#meta-rdk-vendor-realtek-common) |  **9.4.3** | 9.4.0 | [9.4.0...9.4.3](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/compare/9.4.0...9.4.3) |
| [meta-oss-vendor-realtek](#meta-oss-vendor-realtek) |  **4.1.9** | 4.1.5 | [4.1.5...4.1.9](https://github.com/rdk-e/meta-oss-vendor-realtek/compare/4.1.5...4.1.9) |
| [meta-mediarite-vendor](#meta-mediarite-vendor) |  **21.10** | 21.8 | [21.8...21.10](https://github.com/rdk-e/meta-mediarite-vendor/compare/21.8...21.10) |

#### Meta repos common for RDK-E

| Meta Repo | New Version (9.5.0) | Version in Previous Release (9.4.0) | ChangeList |
|------------|---------|------------------------------------|--------------|
| **buildscripts** ||||
| build-scripts |  | 1.0.1 | |
| | | | |
| **buildsupport** ||||
| meta-image-support |  | 4.2.4 | |
| meta-stack-layering-support |  **3.2.0** | 3.0.0 | [3.0.0...3.2.0](https://github.com/rdkcentral/meta-stack-layering-support/compare/3.0.0...3.2.0) |
| | | | |
| **oe** ||||
| meta-openembedded |  | rdk-4.0.0 | |
| poky |  **rdk-4.6.0** | rdk-4.5.0 | [rdk-4.5.0...rdk-4.6.0](https://github.com/rdkcentral/poky/compare/rdk-4.5.0...rdk-4.6.0) |
| meta-python2 |  | rdk-4.0.0 | |
| | | | |
| **extention** ||||
| meta-rdk-oss-ext |  **1.7.0** | 1.6.0 | [1.6.0...1.7.0](https://github.com/rdk-e/meta-rdk-oss-ext/compare/1.6.0...1.7.0) |
| | | | |
| **configs** ||||
| rdke-region-uk-config |  **2.4.3** | 2.3.1 | [2.3.1...2.4.3](https://github.com/rdk-e/rdke-region-uk-config/compare/2.3.1...2.4.3) |
| rdke-region-au-config |  **1.2.3** | 1.2.1 | [1.2.1...1.2.3](https://github.com/rdk-e/rdke-region-au-config/compare/1.2.1...1.2.3) |
| rdke-region-de-config |  **1.0.8** | 1.0.6 | [1.0.6...1.0.8](https://github.com/rdk-e/rdke-region-de-config/compare/1.0.6...1.0.8) |
| rdke-region-us-config |  | 1.5.2 | |
| rdke-region-it-config |  **1.1.2** | 1.1.1 | [1.1.1...1.1.2](https://github.com/rdk-e/rdke-region-it-config/compare/1.1.1...1.1.2) |
| rdke-common-config |  **1.0.17** | 1.0.8 | [1.0.8...1.0.17](https://github.com/rdkcentral/rdke-common-config/compare/1.0.8...1.0.17) |
| rdke-stb-config |  | 1.0.0 | |
| | | | |
| **rdk** ||||
| meta-rdk-halif-headers |  **4.1.4** | 3.0.2 | [3.0.2...4.1.4](https://github.com/rdkcentral/meta-rdk-halif-headers/compare/3.0.2...4.1.4) |
| meta-rdk-cpc-halif-headers |  | 1.0.0 | |
| meta-rdk-vendor-cpc-common |  **1.7.2** | 1.4.0 | [1.4.0...1.7.2](https://github.com/rdk-e/meta-rdk-vendor-cpc-common/compare/1.4.0...1.7.2) |
| | | | |
| **products** ||||
| meta-product-xione |  **3.4.9** | 3.4.4 | [3.4.4...3.4.9](https://github.com/rdk-e/meta-product-xione/compare/3.4.4...3.4.9) |
| | | | |
| **binder** ||||
| meta-binder |  | 1.0.0 | |
| | | | |
| **release** ||||
| meta-vendor-xione-realtek-release |  **9.4.0** | 9.3.0 | [9.4.0...9.3.0](https://github.com/rdk-e/meta-vendor-xione-realtek-release/compare/9.3.0...9.4.0) |
| | | | |

### Interface versions

| # | HAL Interface Header (rdkcentral github) | New Version (9.5.0) | Version from Previous Release (9.4.0)|
|---|------------------------------------------|-------------|----------------------|
| 1 | media-utils-headers | **1.0.6** | 1.0.5 |
| 2 | hdmicecheader | **1.4.0** | 1.3.10 |
| 3 | deepsleep-manager-headers | **1.0.5** | 1.0.4 |
| 4 | power-manager-headers | **1.0.4** | 1.0.3 |
| 5 | devicesettings-hal-headers | **6.0.1** | 6.0.0 |
| 6 | tvsettings-hal-headers | **3.1.0** | 2.3.0 |
|   |   |  |  |
|   | RDK HAL Headers (RDKE github) |  |  |
|   |   |  |  |
| 7 | iarmmgrs-hal-headers | **1.1.10** | 1.0.12 |
| 8 | closedcaption-hal-headers | | 1.0.0 |
| 9 | iarmbus-headers | | 1.0.1 |
| 10 | rdk-gstreamer-utils-headers | | 2.0.2 |

### Middleware and Production image Integration Dependencies

- This is a monthly release from VL with integrated with latest OSS 4.12.0,HAL 4.1.4

- Refer to the [Common meta layer versions for integration](#common-meta-layer-versions-for-integration) section to **keep meta repo versions consistent** for Middleware and ImageAssembler

- For full-stack validation, **upper layer versions** listed in [Versions of other layers  used for testing](#versions-of-other-layers--used-for-testing), were used.

Image Assembler PR Reference: **<https://github.com/rdk-e/rdke-assembler-manifest/pull/1146>**

Roll Back Dependencies: **None**

New RFC Support (RFC/TR-181): **None**

- Please refer the below dependency changes to include while doing the MW integration. Also this release is build ontop of 8.5.2.0 MW and develop of image asembler manifest.

- https://github.com/rdkcentral/rdke-common-config/pull/126
- https://github.com/rdk-common/meta-cspc-security-release/pull/41
- https://github.com/rdk-e/meta-middleware-cspc-support/pull/2073
- https://github.com/rdk-e/meta-rdk-comcast-video/pull/3327
- https://github.com/rdkcentral/devicesettings/pull/229


### Tickets Summary

#### Layer Tickets Filter

https://ccp.sys.comcast.net/browse/RDKEVD-3349?jql=project%20%3D%20RDKEVD%20AND%20fixVersion%20%3D%20XIONE_REALTEK_VL_9.5.0

#### Product Tickets Filter

https://ccp.sys.comcast.net/browse/XIONE-18440?jql=labels%20%3D%20Release_9.5.0_Product


#### Epic Tickets List

- List of Epics for which selected stories or work items are delivered as part of this release
- CPESP-8916 Get platform‑specific device capabilities dynamically at runtime- Q1 26

## Testing

### Fullstack Image Testing

- Testing details are available in [RDKEVD-6130](https://ccp.sys.comcast.net/browse/RDKEVD-6130).

#### New Issues opne

- https://ccp.sys.comcast.net/browse/RDKEVD-5251?jql=labels%20%3D%20VL_1.6.0_ES1


## Build instructions

- Steps to check out and build the vendor layer project [https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project](https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project)
- Steps to check out and build the image assembler project [https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler](https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler)


### Boot Command

#### Copy image to device /mnt/usb or /opt partitions or connect and mount USB having the image binn- Execute FlashApp command
- Move to directory containing the image
- FlashApp \<dirname\> \<imagename\>
- eg. FlashApp /mnt/usb/SKXI11ADS_9.5.0_VENDOR_DEV.bin

#### USB Flash Method using xboot prompt
- Copy the image `"SKXI11ADS_9.5.0_VENDOR_DEV.bin"` to the usb and connect to the STB
- Switch on the STB
- Press z button multiple time to get the bootloader prompt.
- From bootloader prompt, need to do below method
- Choose option c (flashing image)
- Choose select option h/i (depends on from which bank the image is booting)
- Enter the image name which we need to copy.
- After image flashed successfully. Choose the option "exit"
- Choose the option "exit" (or) Enter "i" (automatically reboot the box

### Network connectivity in Vendor Test Image
- Ethernet Connectivity is supported now
- If IP is not acquired automatically please run udhcpc after connecting Ethernet

## Testing

- Created the `"vendor test image"` `" SKXI11ADS_9.5.0_VENDOR_DEV.bin"` for XiOne-UK and for all other variants as well using the vendor layer jenkins job `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Vendor-Release-Build/"`
- Successfully booted the `"vendor test image"` and obtained the shell prompt.
- Verified vendor layer services up and running
- Verified IP acquisition via Ethernet
- Played clear AV with gst-play-1.0.
- Verified image flashing using FlashApp

Testing details in [RDKEVD-6130](https://ccp.sys.comcast.net/browse/RDKEVD-6130)


## Components details in 'packagegroup-vendor-layer'

 Components which are prebuilt or the ones which installs config files or scripts from meta layer have SRCREV marked as NA

| # | Vendor layer Component | New PV-PR (9.5.0) | PV-PR in Previous Release (9.4.0)| New SRCREV | SRCREV in Previous Release (9.4.0)| Diff |
|---|------------------------------------------|-------------|----------------------|-----------|------------|-----|
| 1 | libdrm | | 2.4.110-r0 |  | NA |  |
| 2 | cairo | | 1.16.0-r1 |  | NA |  |
| 3 | libepoxy | | 1.5.9-r1 |  | NA |  |
| 4 | python3-pygobject | | 3.34.0-r0 |  | NA |  |
| 5 | pango | | 1.44.7-r0 |  | NA |  |
| 6 | librsvg | | 2.40.21-r0 |  | NA |  |
| 7 | python3-pycairo | | 1.19.0-r0 |  | NA |  |
| 8 | vulkan-tools | |  |  | NA |  |
| 9 | vulkan-loader | |  |  | NA |  |
| 10 | vulkan-headers | |  |  | NA |  |
| 11 | vulkan-validationlayers |  | NA |  | NA |  |
| 12 | spirv-tools |  | NA |  | NA |  |
| 13 | spirv-headers |  | NA |  | NA |  |
| 14 | xsign | | 4.0.1-r2 |  | NA |  |
| 15 | mfrlib-hal | | 10.0.0-r0 |  | NA |  |
| 16 | wipe-disk-partitions | | 1.0.0-r2 |  | NA |  |
| 17 | secauthn | | 1.0.0-r0 |  | NA |  |
| 18 | qca-hciattach | | 1.0.0-r1 |  | NA |  |
| 19 | emmc-fw-update | | 1.0.0-r0 |  | NA |  |
| 20 | mount-disk-partition | | 1.0.1-r0 |  | NA |  |
| 21 | image-verifier-lib | | 6.2.0-r1 |  | NA |  |
| 22 | fmtsasidlibs | | 2.4-r1 |  | NA |  |
| 23 | led-boot-pattern | | 1.0.0-r1 |  | NA |  |
| 24 | rtkmali | | 2.20.0-r0 |  | NA |  |
| 25 | rtk-platform-conf | | 2.6.0-r1 |  | NA |  |
| 26 | emmc-read-util | | 4.0.0-r0 |  | 6281804 |  |
| 27 | sky-dropbear | | 1.0.0-r1 |  | NA |  |
| 28 | sysint-soc | | 3.0.0-r0 |  | f8dded4 |  |
| 29 | audiocapturemgr-vendor | | 1.0.0-r0 |  | a063707 |  |
| 30 | displayinfo-soc | | 1.0.0-r0 |  | e7b2c24 |  |
| 31 | install-lib | | 1.2-r0 |  | NA |  |
| 32 | ffmpeg | | |  | NA |  |
| 33 | [media-utils-soc-realtek](#media-utils-soc-realtek) | **1.0.6-2.1.4-r0** | 1.0.5-2.1.1-r1 | **f55db2b** | 30f3fdd |  [30f3fdd...f55db2b](https://github.com/rdk-e/media_utils-soc-realtek/compare/30f3fddd6279407d3d11e4f55451642c912ce32f...f55db2b4421b53ee488b2dbadcf6927789217a6e) |
| 34 | closedcaption-hal-realtek | | 1.0.0-3.1.0-r0 |  | ee52d85 |  |
| 35 | hdmicec-hal-realtek | **1.4.0-3.0.2-r0** | 1.3.10-3.0.2-r0 |  | 6b18674 |  |
| 36 | [rdk-gstreamer-utils-platform](#rdk-gstreamer-utils-platform) | **2.0.2-2.0.1** | 2.0.2-2.0.0 | **2a679f2** | 6ba04b9 |  [6ba04b9...2a679f2](https://github.com/rdk-e/rdk-gstreamer-utils-realtek/compare/6ba04b9cfa06bbd061e166f1aab4ecf330b5f018...2a679f22673c9697356aef2c6554f8bc33b8070d) |
| 37 | devicesettings-hal-realtek | **6.0.1-4.2.5-r0** | 6.0.0-4.2.1-r0 |  |  |  |
| - |  - devicesettings-hal-realtek_devicesettingssocrealtek | |  | **dd6682e** | 09abeeb |  [](https://github.com/rdk-e/rdk-gstreamer-utils-realtek) |
| - |  - devicesettings-hal-realtek_devicesettingsskyes1 | |  | **b4cae97** | 913fe9b |  [](https://github.com/rdk-e/rdk-gstreamer-utils-realtek) |
| 38 | deepsleepmgr-hal-realtek | **1.0.5-1.1.4-r0** | 1.0.4-1.1.2-r0 | **9f90a49** | 499cdcd |  [](https://github.com/rdk-e/rdk-gstreamer-utils-realtek) |
| 39 | pwrmgr-hal-realtek | **1.0.4-1.0.2-r0** | 1.0.3-1.0.1-r0 | **aae77b2** | a39f287 |  [](https://github.com/rdk-e/rdk-gstreamer-utils-realtek) |
| 40 | otp-program | | 2.2-r1 |  | NA |  |
| 41 | gstreamer1.0 | | 1.18.5-r5 |  | NA |  |
| 42 | gstreamer1.0-meta-base | | 1.18.5-r5 |  | NA |  |
| 43 | gstreamer1.0-omx | | 1.10.4-r5 |  | NA |  |
| 44 | gstreamer1.0-libav | | 1.18.5-r5 |  | NA |  |
| 45 | gstreamer1.0-plugins-good | | 1.18.5-r5 |  | NA |  |
| 46 | gstreamer1.0-plugins-good-meta | | 1.18.5-r5 |  | NA |  |
| 47 | gstreamer1.0-plugins-bad | | 1.18.5-r5 |  | NA |  |
| 48 | gstreamer1.0-plugins-bad-meta | | 1.18.5-r5 |  | NA |  |
| 49 | gstreamer1.0-rtsp-server | | 1.18.5-r5 |  | NA |  |
| 50 | gstreamer1.0-plugins-base | | 1.18.5-r5 |  | NA |  |
| 51 | gstreamer1.0-plugins-base-meta | | 1.18.5-r5 |  | NA |  |
| 52 | gstreamer1.0-plugins-base-playback | | 1.18.5-r5 |  | NA |  |
| 53 | gstreamer1.0-plugins-good-wavparse | | 1.18.5-r5 |  | NA |  |
| 54 | gstreamer1.0-plugins-good-audiofx | | 1.18.5-r5 |  | NA |  |
| 55 | gstreamer1.0-plugins-good-isomp4 | | 1.18.5-r5 |  | NA |  |
| 56 | gstreamer1.0-plugins-good-audioparsers | | 1.18.5-r5 |  | NA |  |
| 57 | gstreamer1.0-plugins-good-soup | | 1.18.5-r5 |  | NA |  |
| 58 | gstreamer1.0-plugins-base-gio | | 1.18.5-r5 |  | NA |  |
| 59 | gstreamer1.0-plugins-base-videoconvert | | 1.18.5-r5 |  | NA |  |
| 60 | gstreamer1.0-plugins-base-videoscale | | 1.18.5-r5 |  | NA |  |
| 61 | gstreamer1.0-plugins-base-volume | | 1.18.5-r5 |  | NA |  |
| 62 | gstreamer1.0-plugins-base-typefindfunctions | | 1.18.5-r5 |  | NA |  |
| 63 | gstreamer1.0-plugins-good-autodetect | | 1.18.5-r5 |  | NA |  |
| 64 | gstreamer1.0-plugins-good-avi | | 1.18.5-r5 |  | NA |  |
| 65 | gstreamer1.0-plugins-good-deinterlace | | 1.18.5-r5 |  | NA |  |
| 66 | gstreamer1.0-plugins-good-interleave | | 1.18.5-r5 |  | NA |  |
| 67 | gstreamer1.0-plugins-bad-dash | | 1.18.5-r5 |  | NA |  |
| 68 | gstreamer1.0-plugins-bad-mpegtsdemux | | 1.18.5-r5 |  | NA |  |
| 69 | gstreamer1.0-plugins-bad-smoothstreaming | | 1.18.5-r5 |  | NA |  |
| 70 | gstreamer1.0-plugins-bad-videoparsersbad | | 1.18.5-r5 |  | NA |  |
| 71 | gstreamer1.0-plugins-bad-opusparse | | 1.18.5-r5 |  | NA |  |
| 72 | gstreamer1.0-plugins-bad-dashdemux | | 1.18.5-r5 |  | NA |  |
| 73 | gstreamer1.0-plugins-good-matroska | | 1.18.5-r5 |  | NA |  |
| 74 | gstreamer1.0-plugins-base-app | | 1.18.5-r5 |  | NA |  |
| 75 | gstreamer1.0-plugins-base-audioconvert | | 1.18.5-r5 |  | NA |  |
| 76 | gstreamer1.0-plugins-base-audioresample | | 1.18.5-r5 |  | NA |  |
| 77 | westeros-simpleshell | **2.1.0-r0** | 1.01.59-r0 | **2.1.0** | 9fa8be1 |  [](https://github.com/rdk-e/rdk-gstreamer-utils-realtek) |
| 78 | westeros-simplebuffer | **2.1.0-r0** | 1.01.59-r0 | **2.1.0** | 9fa8be1 |  [](https://github.com/rdk-e/rdk-gstreamer-utils-realtek) |
| 79 | westeros-soc | **2.1.0-r0** | 1.01.59-r0 | **2.1.0** | 9fa8be1 |  [](https://github.com/rdk-e/rdk-gstreamer-utils-realtek) |
| 80 | westeros-sink | **2.1.0-r0** | 1.01.59-r0 |  |  |  |
| - |  - westeros-sink_westeros | |  | **2.1.0** | 9fa8be1 |  [](https://github.com/rdk-e/rdk-gstreamer-utils-realtek) |
| - |  - westeros-sink_realtek | |  | **2058230** | e32f912 |  [](https://github.com/rdk-e/rdk-gstreamer-utils-realtek) |
| 81 | westeros | **2.1.0-r0** | 1.01.59-r0 | **2.1.0** | 9fa8be1 |  [](https://github.com/rdk-e/rdk-gstreamer-utils-realtek) |
| 82 | essos | **2.1.0-r0** | 1.01.59-r0 | **2.1.0** | 9fa8be1 |  [](https://github.com/rdk-e/rdk-gstreamer-utils-realtek) |
| 83 | essosrmgr | **1.99-r0** | NA | **0cc457f** | NA |  [](https://github.com/rdk-e/rdk-gstreamer-utils-realtek) |
| 84 | make-mod-scripts | | 1.0-r0 |  | NA |  |
| 85 | sky-fpbutton-driver | | 3.0.0-r0 |  | acd582d |  |
| 86 | splashscreen-viewer | | 2.0.0-r0 |  | 41e70a2 |  |
| 87 | rtk-tee | | 1.0.0-r0 |  | NA |  |
| 88 | secapi-rtk | | 2.1.0-r2 |  | 95b6bd4 |  |
| 89 | secapi3-rtk | | 3.3.1-r0 |  | f7ed818 |  |
| 90 | secapi2-adapter | | 1.0.0-r0 |  | NA |  |
| 91 | secapi-common-hw | | 2.3.0-r0 |  | 3a51b88 |  |
| 92 | secapi-netflix | | 1.0.0-r0 |  |  |  |
| - |  - secapi-netflix_com_inc_rtk | |  |  | 0fa3af3 |  |
| - |  - secapi-netflix_socrealtek | |  |  | d3c7c87 |  |
| 93 | gst-svp-ext | | 1.2.0-r0 |  | NA |  |
| 94 | systemaudioplatform | | 1.0.0-r0 |  | 776348d |  |
| 95 | miracast-soc | | 1.0.0-r0 |  | 30cb689 |  |
| 96 | secapi-crypto-rtk | | 2.3.1-r0 |  | 5241d45 |  |
| 97 | secapi-common-crypto | | 2.3.0-r0 |  | 3a51b88 |  |
| 98 | qca6390-mod-wifi | | 1.0.3-r1 |  | NA |  |
| 99 | flashapp | | 7.1-r0 |  | NA |  |
| 100 | sky-led-driver | | 2.0.0-r0 |  | f97a795 |  |
| 101 | stark-mod-mali | | 5.10-r0 |  | 753bb6b4d998f1dacee966c751537ea86704f718 & 753bb6b4d998f1dacee966c751537ea86704f718 |  |
| 102 | rtkv1sink | | 2.0.0-r1 |  | 67bdf5b |  |
| 103 | platform-lib | | 2.6.0-r4 |  | NA |  |
| 104 | [rtk-audio-service](#rtk-audio-service) | **3.2.2-r0** | 3.2.0-r0 | **35330ab** | e62564d |  [e62564d...35330ab](https://github.com/rdk-e/RtkAudioService-soc-realtek/compare/e62564de66981d71a6c4fa116f23b542ed043b11...35330ab0f24ec80c45dbc04d296e524ff902390e) |
| 105 | [hdmiservice](#hdmiservice) | **4.2.5-r0** | 4.2.2-r0 | **3ab61cc** | 51eccac |  [51eccac...3ab61cc](https://github.com/rdk-e/hdmiservice-realtek/compare/51eccacacd4128fa6f33a09162792bcc9c218a2c...3ab61ccd4bd85d86cb345020289856d14ed05ca1) |
| 106 | rtkpcrclksink | | 2.0.0-r0 |  | c8272d9 |  |
| 107 | blewakeupenabler | | 1.5.0-r0 |  | 2763f76 |  |
| 108 | hrot-tl | | 1.0.0-r0 |  | NA |  |
| 109 | ctrlm-irdb-plugin | **1.2.0-r0** | 1.1.1-r0 | **1.2.0** | 1.1.1 |  [](https://github.com/rdk-e/hdmiservice-realtek) |
| 110 | ctrlm-irdb-uei | | 2.2.0-r1 |  | NA |  |
| 111 | ctrlm-irdb-ruwido | **2.8.0-r1** | 2.3.0-r1 |  | NA |  |
| 112 | ctrlm-rf4ce-hal | | 1.0.0-r0 |  | NA |  |
| 113 | ctrlm-hal-rf4ce-prebuilt | | 1.0.0-r0 |  | NA |  |
| 114 | qorvo-mod-rf4ce | | 2.11-r0 |  | NA |  |
| 115 | linux-libc-headers | **5.16-r1** | 5.16-r0 |  | NA |  |
| 116 | packagegroup-kernel-modules | **5.10.169-r1** | 5.10.169-r0 |  | NA |  |
| 117 | linux-stark | **5.10.169-r1** | 5.10.169-r0 | **** | 3500cd1 |  [](https://github.com/rdk-e/hdmiservice-realtek) |
| - |  - linux-stark | |  | **c62c661** | NA |  [](https://github.com/rdk-e/hdmiservice-realtek) |
| - |  - linux-stark_android-kernel | |  | **0caf815** | NA |  [](https://github.com/rdk-e/hdmiservice-realtek) |
| - |  - linux-stark_FORMAT | |  | **android-kernel_rtk-files** | NA |  [](https://github.com/rdk-e/hdmiservice-realtek) |
| 118 | [rtkaudiosink](#rtkaudiosink) | **3.1.8-r0** | 3.1.4-r0 | **238bf18** | b5ddc36 |  [b5ddc36...238bf18](https://github.com/rdk-e/rtkaudiosink-soc-realtek/compare/b5ddc36d3105ee21c1792a08581cbee1f6d18c6b...238bf184b5139610d05042a0029e0f7b4d0c3ee8) |
| 119 | mfi-ree | | 2.0.0-r0 |  | 4941717 |  |
| 120 | [sysint-oem](#sysint-oem) | **2.0.0-r0** | 1.0.0-r2 | **e89cfe7** | 0254757 |  [0254757...e89cfe7](https://github.com/rdk-e/sysint-xione-rtk/compare/02547571de7e06c2b582ac58b0611c41dff96fb3...e89cfe71eef4c18baabeb42d3a557fde199c5315) |
| 121 | apparmor-vendor | | 3.3.0-r0 |  | 973fc2f |  |
| 122 | directfb | | 1.7.7-r0 |  | NA |  |
| 123 | realtek-tools-native | | 1.0.0-r0 |  | NA |  |
| 124 | rtk-tee-native | | 1.0.0-r0 |  | NA |  |
| 125 | rtl8852b-mod-bt | | 2.5.0-r0 |  | NA |  |
| 126 | rtl8852be-mod-wifi | | 2.7.0-r0 |  | NA |  |
| 127 | rtkhciattach | | 1.0.0-r0 |  | NA |  |
| 128 | rtl8852b-mod-bt-app | | 1.8.0-r0 |  | NA |  |
| 129 | product-firmware-pb | **1.4.0-r0** | 1.0.9-r0 |  | NA |  |
| 130 | testagentlib | | 3.0.2-r1 |  |  |  |
| - |  - testagentlib_testagentlib | |  |  | b8eb1f8 |  |
| - |  - testagentlib_xione_factory | |  |  | 6281804 |  |
| 131 | testagent-loader | | 2.3.0-r0 |  | NA |  |
| 132 | libbinder | | 1.0.0-r1 |  | 0f7a23b |  |
| 133 | aidl-generator-native | | 1.0.0-r1 |  | 0f7a23b |  |
| 134 | flash-aidl | | 1-r0 |  | ddcceef |  |
| 135 | image-hal-service | | 1.0.0-r0 |  | 7eb82c9 |  |
| 136 | platform-imagehal-lib | | 1.0.0-r0 |  | NA |  |
| 137 | asappsserviced-vendor-conf | **1.5.0-r0** | 1.1.0-r0 | **1.5.0** | 1.1.0 |  [](https://github.com/rdk-e/sysint-xione-rtk) |
| 138 | rtk-resource-manager | **2.0.0-r0** | 1.0.0-r0 | **5d33120** | NA |  [](https://github.com/rdk-e/sysint-xione-rtk) |
| 139 | rtk-install-lib | | 1.0.0-r0 |  | NA |  |
| 140 | mount-tmp-data | **1.0.0-r0** | NA |  | NA |  |


## Consolidated change list from vendor layer repositories

## Changes in meta repositories

## [meta-rdk-auxiliary](https://github.com/rdkcentral/meta-rdk-auxiliary/blob/main/CHANGELOG.md)

- Merge branch 'release/1.8.0' [2a3c611](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/2a3c6113b7a44b2fdca7910aba0b892ee6390ad7)
- RDKE-971: Update Changelog for Rel 1.8.0 [3dbd7e2](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/3dbd7e2f056c9b74c026973e8e87c7e1c808fc11)
- RDKOSS-542: apparmor_binprofiles bbclass to convert text profile to binary ( [#95](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/95))
- RDKMVE-1639: Make install_path configurable for each app ( [#132](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/132))
- RDKOSS-706: Set right permission to OSS repo ( [#130](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/130))
- RDKEMW-10363: Revert  - Update logrotate Conf from Middleware Layer on RDK devi… ( [#133](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/133))
- RDKEMW-10363: Update logrotate Conf from Middleware Layer on RDK devices ( [#109](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/109))
- Update create_fw_version_file.bbclass ( [#126](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/126))
- RDKOSS-699 : Add bbclass to bundle & install factoryapps in rootfs ( [#112](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/112))
- Merge pull request  [#110](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/110) from rdkcentral/feature/RDKE-1014-develop
- Update create_fw_version_file.bbclass [376a797](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/376a7974107c8425b33d727cc0040652dfa36e82)
- CMFSUPPORT-3454 : Add auto_pr_creation github workflow for broadband community manifests ( [#103](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/103))
- Merge pull request  [#102](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/102) from rdkcentral/feature/actions/develop-fossid
- Deploy fossid_integration_stateless_diffscan_target_repo action [8d986aa](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/8d986aa63c98174b2fd2ffeb6d1cc09a88cb837e)
- Merge tag '1.7.0' into develop [a2a094f](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/a2a094f818529eb2d37024a2df1dd2469e75234b)

## [meta-rdk-oss-reference](https://github.com/rdkcentral/meta-rdk-oss-reference/blob/main/CHANGELOG.md)

- Merge branch 'release/4.12.0' [afe7681](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/afe7681fd6c8ec6b1fd2589fe426d192b116dd09)
- RDKE-971: Update Changelog for Rel 4.12.0 [59c15ae](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/59c15ae9a29754f212480da85605abbb90abb36b)
- RDKE-971: Update OSS Release version to 4.12.0 ( [#379](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/379))
- RDKE-971: Fix libarchive version ( [#378](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/378))
- Merge tag '4.11.0' into develop [86ab8b5](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/86ab8b524cec24420c12a4451597d97591196cd2)
- Merge branch 'release/4.11.0' [44c2310](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/44c23106167bb9572dd4c11283602893b1e181ef)
- RDKE-971: Update Changelog for Rel 4.11.0 [1f06b6c](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/1f06b6c956ab1294c4072af99f5ce363d0dcff2e)
- RDKE-971: Update Release version to 4.11.0 ( [#374](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/374))
- RDKOSS-542: Build native variant of apparmor recipe ( [#277](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/277))
- RDKCOM-5411: RDKDEV-1136 Bring Vulkan benchmark recipies to OSS layer ( [#181](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/181))
- RDKEVD-4390: Align Vulkan + SPIR-V versioning ( [#317](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/317))
- RDKOSS-500, RDKOSS-501 : Enable pTest support and validation for OSS components ( [#357](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/357))
- RDKOSS-707: Dnsmasq - Reduce repetitive logging ( [#369](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/369))
- RDKEMW-14200 [RDKE] populate_sdk task fails with rdm and rdmagent ( [#356](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/356))
- RDKEMW-12035 : [RDKAppManagers] Add support for reading yaml files ( [#347](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/347))
- RDKEMW-10284: Migrate stunnel to use P12 cert ( [#314](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/314))
- RDKOSS-573 : Create wpa_supplicant patch to add roaming_thresh parameter ( [#319](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/319))
- RDKOSS-612: Upgrading the libp11 version (0.4.17 from 0.4.16) to include the crash fix as suggested libp11 community. ( [#339](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/339))
- RDK-58162 : Integrate Google stadia patch on xione ( [#326](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/326))
- DELIA-69761: Fix keymapping for Joy-con Left and right controllers ( [#325](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/325))
- RDKOSS-596:  Joy-Con controller detection in libmanette ( [#320](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/320))
- RDKE-997: Backport patch to fix gawk segmentation failure ( [#324](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/324))
- RDKEMW-3774 : Remove unwanted Network services ( [#316](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/316))
- RDKE-981: Add PR for OSS modules released by stack layers ( [#308](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/308))
- RDKOSS-560: Move TARGET_VENDOR configuration ( [#304](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/304))
- Merge tag '4.10.0' into develop [1e596c2](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/1e596c279e5c273c927460d055c917b44249538f)

## [meta-rdk-soc-realtek](https://github.com/rdk-e/meta-rdk-soc-realtek/blob/main/CHANGELOG.md)

- Merge branch 'release/4.1.10' [4577a31](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/4577a31f4224616bcd6c6a42394484e2feed3d5b)
- Merge branch 'main' into release/4.1.10 [40b7a86](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/40b7a86913a2f6977397fe6bac5159a1d09b3545)
- RDKEVD-6130: Tag creation for VL Release 9.5.0 [af15bc7](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/af15bc716902fd46fb72198f9b1fcaa313cfa75a)
- RDKEVD-5274:Stable2 sync code. ( [#193](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/193))
- Update westeros to 2.0.0 ( [#201](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/201))
- Merge pull request  [#197](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/197) from rdk-e/feature/RDKEVD-4534
- Merge pull request  [#200](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/200) from rdk-e/feature/ticket-ES1-3131
- ES1-3131 : Fix stale EDID structure pointer in corner cases [48a1928](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/48a1928cbd93cf568536e4caf0b19630952c77f7)
- Merge pull request  [#196](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/196) from rdk-e/feature/RDKEVD-4868-Westeros-2.0.0
- RDKEVD-5649 : Add sysctl config in vendor layer for vm.min_free_kbytes ( [#198](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/198))
- Update westeros-soc.bb [60a8457](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/60a8457f57c9868eeeb69fbc3d0c14840c884cc5)
- RDKEVD-4534 : support re-encode audio output delay [0a1d390](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/0a1d3909a78c9e2228fb4a46a683af76799e2f61)
- RDKEVD-4534 : support re-encode audio output delay [babd924](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/babd924d9ae327cfa102a9867a19c946c04fb1ac)
- RDK-58551: Modify the Makefiles in Westeros-sink [a283183](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/a283183b3b1eccc73cbc92f587cac1cb07f42183)
- RDKEVD-4534 : support re-encode audio output delay [d5e2eea](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/d5e2eea746f196fba33e9c2530ca2fbbd19cc904)
- RDKEVD-5011 : Add VE1 SEI timecode parsing support ( [#182](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/182))
- RDKEVD-5412: ES1 RTK Release 1.5.0 ( [#191](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/191))
- Merge branch 'release/4.1.9' [f196658](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/f1966585950cacd567bdf1768566aa4fbc912703)
- Merge branch 'main' into release/4.1.9 [dc111b8](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/dc111b8d549c25f8390c1a0cc4fbcf3a6ad811ea)
- RDKEVD-5412: ES1 RTK Release 1.5.0 [47aa396](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/47aa396c02d15a048029f225c691e40d5c76d79b)
- ES1-3096 : Audio heard in DD/DD+ mode when the TV does not support DD/DD+ ( [#188](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/188))
- RDKEVD-5101: Create Release Tag for 1.4.0. ( [#186](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/186))
- Merge branch 'release/4.1.8' [ae3b891](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/ae3b8911dc99729ad32d7083c4cff5d5269558db)
- Merge branch 'main' into release/4.1.8 [4b43fca](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/4b43fcaba9b6e6dc43e139403bbfe0a0590d458d)
- RDKEVD-5101: Create Release Tag for 1.4.0 [1510141](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/15101417df9b2d649729c25d294eba9f77ddcad7)
- RDKEVD-5014:Modify the repo from gerrit to github. ( [#183](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/183))
- RDKEVD-4871 [RDK-E][RTK] Realtek ES1 Release ES1_1.2.0 ( [#181](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/181))
- RDKEVD-4871 [RDK-E][RTK] Realtek ES1 Release ES1_1.2.0 Merge branch 'release/4.1.7' [4e422a3](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/4e422a33607ed9448cde584989b801962bc2482a)
- RDKEVD-4871 [RDK-E][RTK] Realtek ES1 Release ES1_1.2.0 [99b9923](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/99b99233cda94db1a7aba519020f9a4b037e8cd6)
- Merge pull request  [#170](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/170) from rdk-e/feature/RDKEVD-3880
- Merge pull request  [#178](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/178) from rdk-e/feature/RDKEVD-4728
- RDKEVD-4728 : Update tee.log Path Changed for Backup Compliance [c7aa8ce](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/c7aa8ce948de84d83c2af88b6ea2393b7352a19f)
- RDKEVD-4503:Resolve compilation error. ( [#177](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/177))
- Merge pull request  [#176](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/176) from rdk-e/feature/RDKEVD-4503-status-fix
- RDKVED-4503: RMF_GetStatus and RMF_GetCurrentSettings [179666c](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/179666cea3652ae63d3f6b0178b575b5078a834c)
- Merge pull request  [#175](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/175) from rdk-e/main
- RDKEVD-3880: Remove xre-receiver Reason for change: Remove xre-receiver related code from meta-rdk-soc-realtek layer in rdk-e github [8a63992](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/8a63992b3e81c577c1d9d3f29f2190ce7d434c40)

## [meta-oem-stream](https://github.com/rdk-e/meta-oem-stream/blob/main/CHANGELOG.md)

- Merge branch 'release/4.1.6' [02ec5f6](https://github.com/rdk-e/meta-oem-stream/commit/02ec5f6b49be7619d365131bfe351d126e183ed2)
- RDKEVD-6130: Tag creation for VL Release 9.5.0 [13c6399](https://github.com/rdk-e/meta-oem-stream/commit/13c63997e119ece083885a039cf8a4055be6a7d9)
- Merge tag '4.1.5' into develop [a178295](https://github.com/rdk-e/meta-oem-stream/commit/a17829548b5cdb86eb22305bb4b27ee7e4590f44)
- Merge branch 'release/4.1.5' RDKEVD-6038 [RDK-E] [TCHXI6] VL Release 1.1.0 [e41916a](https://github.com/rdk-e/meta-oem-stream/commit/e41916a80d778ef9d732290a758417dc48bd3465)
- RDKEVD-6038 [RDK-E] [TCHXI6] VL Release 1.1.0 [7a5b4e5](https://github.com/rdk-e/meta-oem-stream/commit/7a5b4e526c5298d34229b78548f5b44dbd86bdc6)
- Merge pull request  [#75](https://github.com/rdk-e/meta-oem-stream/pull/75) from rdk-e/feature/RDKEVD-5274-sync-with-stable2
- RDKEVD-5274:Stable2 sync code. [dc2cbbd](https://github.com/rdk-e/meta-oem-stream/commit/dc2cbbde6eb0a2d2a713e4a6811407403cdf7040)
- Merge tag '4.1.4' into develop [cc6fac2](https://github.com/rdk-e/meta-oem-stream/commit/cc6fac28774c70e2b711b3b3b3dbaeee404931ba)
- RDKEVD-4915 [RDK-E][BCM]Provide the broadcom VL Release 4.0.0 Merge branch 'release/4.1.4' [55afd5d](https://github.com/rdk-e/meta-oem-stream/commit/55afd5de3edf705c757a2c886496617b41dd47d5)
- RDKEVD-4915 [RDK-E][BCM]Provide the broadcom VL Release 4.0.0 [06f6d5e](https://github.com/rdk-e/meta-oem-stream/commit/06f6d5e402ddcd2c2ed4662b2ec451c983d21751)
- RDKEVD-4479: Update overlay-init [e4db27f](https://github.com/rdk-e/meta-oem-stream/commit/e4db27fd6648aeafaf2acdf95fa103a099ae3aea)
- RDKEVD-4479 OverlayFS Integration [b41758a](https://github.com/rdk-e/meta-oem-stream/commit/b41758a9bda40090a7eae754d9f7fbc65191e56f)
- RDKEVD-4479 OverlayFS Int [747bc99](https://github.com/rdk-e/meta-oem-stream/commit/747bc9940bf5863fc7386ca7cadd297645a1da86)
- RDKEVD-4801: Gerrit stable2 sync [cd9d6f6](https://github.com/rdk-e/meta-oem-stream/commit/cd9d6f60ab1a1d823437130c0d6a3053df0be155)
- Merge tag '4.1.3' into develop [c831e08](https://github.com/rdk-e/meta-oem-stream/commit/c831e08b943e96604e8c7ecec5ac9dd0b20672d6)
- RDKEVD-4871 [RDK-E][RTK] Realtek ES1 Release ES1_1.2.0 Merge branch 'release/4.1.3' [b591c3d](https://github.com/rdk-e/meta-oem-stream/commit/b591c3d31f02928db628a6ce945434b7b9b88a3e)
- RDKEVD-4871 [RDK-E][RTK] Realtek ES1 Release ES1_1.2.0 [7e769d6](https://github.com/rdk-e/meta-oem-stream/commit/7e769d6accc5d345218ea86a227b44c9ee53a1dd)
- RDKEVD-4479 OverlayFS Int [14560ac](https://github.com/rdk-e/meta-oem-stream/commit/14560ac173d3f68eab4024040500415b56256516)
- RDKEVD-4479 OverlayFS Int [027cf85](https://github.com/rdk-e/meta-oem-stream/commit/027cf856281271c82cd428dd3a5b8aa2f2b8af17)
- Merge tag '4.1.2' into develop [1481801](https://github.com/rdk-e/meta-oem-stream/commit/1481801d579aa9c9aa404c7465dd0a67bc88b4cb)

## [meta-oem-realtek-stream](https://github.com/rdk-e/meta-oem-realtek-stream/blob/main/CHANGELOG.md)

- Merge branch 'hotfix/9.5.0' into support/9.5.0_VL9.5.0_P8.5 [aa99cd1](https://github.com/rdk-e/meta-oem-realtek-stream/commit/aa99cd1639c94c6add638a5cb7cf335b60fa34aa)
- RDKEVD-6130:Release Xione 9.5.0 ES1 1.5.2 [b200f5b](https://github.com/rdk-e/meta-oem-realtek-stream/commit/b200f5b0320b2cbed563c07383bba071df063e27)
- RDKEVD-6130: Tag creation for VL Release 9.5.0 [6639c21](https://github.com/rdk-e/meta-oem-realtek-stream/commit/6639c21aad035e523087ef3afe7154c638a9ea6d)
- Merge pull request  [#685](https://github.com/rdk-e/meta-oem-realtek-stream/pull/685) from rdk-e/feature/RDKEVD-6135-fixes-incomplete-idle-metrics-output
- Merge pull request  [#688](https://github.com/rdk-e/meta-oem-realtek-stream/pull/688) from rdk-e/feature/RDKEVD-6142
- RDKEVD-6142:Remove the unlock logic on TA partition [265f971](https://github.com/rdk-e/meta-oem-realtek-stream/commit/265f971157b0efeecd847b625e237880bb5a5e7d)
- Merge pull request  [#686](https://github.com/rdk-e/meta-oem-realtek-stream/pull/686) from rdk-e/feature/RDKEVD-5936-Westeros-2.1.0-es1
- RDKEVD-5936 : [TV] Update Westeros to 2.1.0 in RDKE [c9dcdae](https://github.com/rdk-e/meta-oem-realtek-stream/commit/c9dcdae76a8c96ad93db1b9f94aafd44cb01003e)
- Merge pull request  [#684](https://github.com/rdk-e/meta-oem-realtek-stream/pull/684) from rdk-e/feature/RDKEVD-5936-Westeros-2.1.0
- RDKEVD-6135: Fixes incomplete IDLE METRICS output [40a9b3d](https://github.com/rdk-e/meta-oem-realtek-stream/commit/40a9b3d7ef1d1b10c06ebedb725adfc4d8b6cc2e)
- Merge pull request  [#679](https://github.com/rdk-e/meta-oem-realtek-stream/pull/679) from rdk-e/topic/RDKEVD-6003
- Merge pull request  [#683](https://github.com/rdk-e/meta-oem-realtek-stream/pull/683) from rdk-e/develop
- Update meta-xione/recipes-extended/rdkappmanagers-config/rdkappmanagers-config_git.bb [603e45c](https://github.com/rdk-e/meta-oem-realtek-stream/commit/603e45cda53c5f40b9389065e84535b8e25e635b)
- Update meta-xione/recipes-extended/rdkappmanagers-config/rdkappmanagers-config_git.bb [e8ac235](https://github.com/rdk-e/meta-oem-realtek-stream/commit/e8ac235c969073016496410d83bbd00a9e547a32)
- Update meta-xione/recipes-extended/rdkappmanagers-config/rdkappmanagers-config_git.bb [1fc786b](https://github.com/rdk-e/meta-oem-realtek-stream/commit/1fc786b4fad18eeab9b111f5d5b28aa756aeac70)
- Update vendor_pkg_versions.inc [a7de1d1](https://github.com/rdk-e/meta-oem-realtek-stream/commit/a7de1d1ee166adbdcbc46bbe05e230e7b3b520ae)
- Update meta-xione/conf/include/vendor_pkg_versions.inc [8eff135](https://github.com/rdk-e/meta-oem-realtek-stream/commit/8eff135ecdcc4b25dd49c9c93669df058249d41f)
- Update meta-xione/recipes-extended/rdkappmanagers-config/rdkappmanagers-config_git.bb [5a718d9](https://github.com/rdk-e/meta-oem-realtek-stream/commit/5a718d92c5699c504a09ca5a8e097428de9e257e)
- RDKEVD-3774: update ctrlm-irdb-plugin to v1.2.0 for multiple IRDB support [e53bb4f](https://github.com/rdk-e/meta-oem-realtek-stream/commit/e53bb4f0090892c2a1856179ef95d441938a3004)
- Merge pull request  [#676](https://github.com/rdk-e/meta-oem-realtek-stream/pull/676) from rdk-e/feature/RDKEVD-5925-clean-up-retained-zombie-process-info
- RDKEVD-5925: Update rtk-audio-service [3327ae9](https://github.com/rdk-e/meta-oem-realtek-stream/commit/3327ae9374c4e51a01fb0de44c5356bd8301e59b)
- Merge branch 'topic/RDKEVD-6003' of github.com:rdk-e/meta-oem-realtek-stream into topic/RDKEVD-6003 [22125d5](https://github.com/rdk-e/meta-oem-realtek-stream/commit/22125d5e33cb192a1ef698577d0b2e9f558cbb3f)
- Merge branch 'topic/RDKEVD-6003' of github.com:rdk-e/meta-oem-realtek-stream into topic/RDKEVD-6003 [e645ae5](https://github.com/rdk-e/meta-oem-realtek-stream/commit/e645ae5e90390adc83424b46d90d8ce8634c6d4c)
- Apply suggestion from @Copilot [8f01d43](https://github.com/rdk-e/meta-oem-realtek-stream/commit/8f01d43772c5b09c88fb792c205dea197b7f9932)
- Merge branch 'topic/RDKEVD-6003' of github.com:rdk-e/meta-oem-realtek-stream into topic/RDKEVD-6003 [760bbb9](https://github.com/rdk-e/meta-oem-realtek-stream/commit/760bbb9cbdeff221b8a5aebf6e8c8005a9539f44)
- Merge branch 'topic/RDKEVD-6003' of github.com:rdk-e/meta-oem-realtek-stream into topic/RDKEVD-6003 [8159ca9](https://github.com/rdk-e/meta-oem-realtek-stream/commit/8159ca95458c6de3e920eb63ad5566cb3490667a)
- Merge pull request  [#678](https://github.com/rdk-e/meta-oem-realtek-stream/pull/678) from rdk-e/develop
- Merge pull request  [#674](https://github.com/rdk-e/meta-oem-realtek-stream/pull/674) from rdk-e/feature/RDKEVD-5314-buildIssue
- RDKEVD-5314: PR3 for XSB with AMC+ Button (Replacing Peacock) [512539f](https://github.com/rdk-e/meta-oem-realtek-stream/commit/512539fd13189963fa72268c86064b28fc9cd9d6)
- Merge pull request  [#672](https://github.com/rdk-e/meta-oem-realtek-stream/pull/672) from rdk-e/feature/RDKEVD-5410-config-cleanup-in-es1
- Merge pull request  [#664](https://github.com/rdk-e/meta-oem-realtek-stream/pull/664) from rdk-e/feature/RDKEVD-5314_PR3-AMC-Keymap
- Merge pull request  [#673](https://github.com/rdk-e/meta-oem-realtek-stream/pull/673) from rdk-e/feature/RDKEVD-6041
- RDKEVD-6041: Tag creation for gstreamer utils. [7619de9](https://github.com/rdk-e/meta-oem-realtek-stream/commit/7619de91b06204585c02b13614a9193ee0e3019c)
- RDKEVD-5936 : [TV] Update Westeros to 2.1.0 in RDKE [901b6dd](https://github.com/rdk-e/meta-oem-realtek-stream/commit/901b6ddce0bc3987a310c60079401f902436c387)
- Merge branch 'topic/RDKEVD-6003' of github.com:rdk-e/meta-oem-realtek-stream into topic/RDKEVD-6003 [c5c3d06](https://github.com/rdk-e/meta-oem-realtek-stream/commit/c5c3d060465a6cde8e7bed7ff765523d804323da)
- RDKEVD-6003: Add rdkappmanagers initial runtime configuration for XiOne [68fde07](https://github.com/rdk-e/meta-oem-realtek-stream/commit/68fde078bd18a5414284c98e84256b6883c81c9a)
- RDKEVD-6003: Add rdkappmanagers initial runtime configuration for XiOne [1ffe034](https://github.com/rdk-e/meta-oem-realtek-stream/commit/1ffe0344e058260465880122386a51ed8b51ce03)
- Merge pull request  [#660](https://github.com/rdk-e/meta-oem-realtek-stream/pull/660) from rdk-e/RDKEVD-5142
- Merge pull request  [#671](https://github.com/rdk-e/meta-oem-realtek-stream/pull/671) from rdk-e/feature/RDKEVD-5415-es1-rtk-pr-v2-mapping
- RDKEVD-5142: joy con when connected, logs flood [d785f1d](https://github.com/rdk-e/meta-oem-realtek-stream/commit/d785f1dcd402d14e51c8f33e683855b3294f1c9c)
- RDKEVD-5415 :  PR-Remote special key mapping [f821c6a](https://github.com/rdk-e/meta-oem-realtek-stream/commit/f821c6ac5f6000a753c30b621613a9c7aed1a3d0)
- RDKEVD-5410 : ES1 - Clean-up the ENTOS experience conf [1be83f8](https://github.com/rdk-e/meta-oem-realtek-stream/commit/1be83f89fefb957fbaa1fa39c9d38292f81955c6)
- Merge pull request  [#642](https://github.com/rdk-e/meta-oem-realtek-stream/pull/642) from rdk-e/feature/RDKEVD-5274-sync-with-stable2
- Merge branch 'develop' into feature/RDKEVD-5274-sync-with-stable2 [8fee1ee](https://github.com/rdk-e/meta-oem-realtek-stream/commit/8fee1eed4e9b4cb8c97b9989c9426fd931389c45)
- Merge branch 'develop' into feature/RDKEVD-5274-sync-with-stable2 [a1e011f](https://github.com/rdk-e/meta-oem-realtek-stream/commit/a1e011f0ec4aac6d023dee2e76e127a06b71de3e)
- Merge pull request  [#670](https://github.com/rdk-e/meta-oem-realtek-stream/pull/670) from rdk-e/feature/RDKEVD-5910
- RDKEVD-5910:Choose the proper bootloader. [e696550](https://github.com/rdk-e/meta-oem-realtek-stream/commit/e696550878857b1dbe3ec4a3a36a6018dc06efbf)
- Merge branch 'develop' into feature/RDKEVD-5314_PR3-AMC-Keymap [dd52cb3](https://github.com/rdk-e/meta-oem-realtek-stream/commit/dd52cb3a96d16654288bcd6eb79033a8436f2720)
- Merge pull request  [#669](https://github.com/rdk-e/meta-oem-realtek-stream/pull/669) from rdk-e/feature/RDKEVD-5410-config-cleanup
- Merge pull request  [#667](https://github.com/rdk-e/meta-oem-realtek-stream/pull/667) from rdk-e/feature/RDKEVD-5274-Comperr
- RDKEVD-5274:Sync code with latest change. [dab2cb9](https://github.com/rdk-e/meta-oem-realtek-stream/commit/dab2cb90535c9e963d6076fc4a3df91694430a1e)
- RDKEVD-5274:Sync-with-stable2 [24b3f54](https://github.com/rdk-e/meta-oem-realtek-stream/commit/24b3f54205cbc0f62a3f89f5c09a8226ae8059ea)
- RDKEVD-5467: Adding missing IR db for es1 devices ( [#644](https://github.com/rdk-e/meta-oem-realtek-stream/pull/644))
- Merge branch 'develop' into feature/RDKEVD-5274-sync-with-stable2 [c1308f3](https://github.com/rdk-e/meta-oem-realtek-stream/commit/c1308f375ee38f3103c527bf494584a78e6a1b61)
- RDKEVD-5410 : Clean-up the ENTOS experience conf [f1bb9ac](https://github.com/rdk-e/meta-oem-realtek-stream/commit/f1bb9acadeb37f9aac28bfedf2fa4a64a2f6f704)
- RDKEVD-5314: PR3 for XSB with AMC+ Button (Replacing Peacock) Reason for change: Keymap support for AMC+ button on RP3 remote (ES1, XOE) Test Procedure: Build & Verify function [c3615ac](https://github.com/rdk-e/meta-oem-realtek-stream/commit/c3615ac7abc0335c3e115892912944c1cd36173e)
- Merge pull request  [#662](https://github.com/rdk-e/meta-oem-realtek-stream/pull/662) from rdk-e/feature/RDKEVD-5193
- RDKEVD-5193:Resolve compile error. [29e47e8](https://github.com/rdk-e/meta-oem-realtek-stream/commit/29e47e8e12654de85adf70f17ef163f6f7edc58e)
- Merge pull request  [#661](https://github.com/rdk-e/meta-oem-realtek-stream/pull/661) from rdk-e/feature/RDKEVD-5415-PLATCO-special-mapping
- RDKEVD-5415 :  PR-Remote special key mapping [9db17db](https://github.com/rdk-e/meta-oem-realtek-stream/commit/9db17db590563099306cdc25328c1e5aa9b20381)
- Merge pull request  [#654](https://github.com/rdk-e/meta-oem-realtek-stream/pull/654) from rdk-e/feature/RDKEVD-5603-chipset
- RDKEVD-5603 :  ES1-RTK Chip ID [6dc20e3](https://github.com/rdk-e/meta-oem-realtek-stream/commit/6dc20e34f34e733ee467bb57fd361cf41ff3f126)
- Merge pull request  [#653](https://github.com/rdk-e/meta-oem-realtek-stream/pull/653) from rdk-e/feature/RDKEVD-4868-Westeros-2.0.0
- RDKEVD-4868: [TV] Update Westeros to 2.0.0 in RDKE [a276817](https://github.com/rdk-e/meta-oem-realtek-stream/commit/a276817a29eed0f249ca9891386fd5713a3cf0a0)
- RDKEVD-5593: Duplicable entries found in /etc/device.properties [522e63e](https://github.com/rdk-e/meta-oem-realtek-stream/commit/522e63e9820b711f59aefc76f0d6f201c2bf8154)
- Merge pull request  [#648](https://github.com/rdk-e/meta-oem-realtek-stream/pull/648) from rdk-e/feature/RDKEVD-2664-aestrick-key-maping-xoe
- Apply suggestion from @Copilot [3637af6](https://github.com/rdk-e/meta-oem-realtek-stream/commit/3637af65b850e9905d52f54f21c6f73a2cf01e76)
- RDKEVD-5524 :  XR16 ASTERISK KEY mapping [b30d087](https://github.com/rdk-e/meta-oem-realtek-stream/commit/b30d087c124a2dc461bcbcd529d23ee6ebcd8319)
- RDKEVD-5274:Stable2 sync code. [565a7a0](https://github.com/rdk-e/meta-oem-realtek-stream/commit/565a7a0e7eb07b9baa81656588cf003be9e38a0c)
- Merge pull request  [#641](https://github.com/rdk-e/meta-oem-realtek-stream/pull/641) from rdk-e/feature/RDKEVD-5441
- Merge tag 'ES1_1.5.0' into develop [cb6486e](https://github.com/rdk-e/meta-oem-realtek-stream/commit/cb6486eecd6045d80fe0145d99cb381fef1d1408)
- Merge branch 'release/ES1_1.5.0' [39fbbe4](https://github.com/rdk-e/meta-oem-realtek-stream/commit/39fbbe4eb45dbb6ccf004106bd083d0b53cc7e2d)
- RDKEVD-5441: [Alpaca-IT]Bootloader Release v14.0.0 [9c47ccb](https://github.com/rdk-e/meta-oem-realtek-stream/commit/9c47ccb5619f515148d586866f5f038dbe5f0a27)
- RDKEVD-5412: ES1 RTK Release 1.5.0 [4547b3e](https://github.com/rdk-e/meta-oem-realtek-stream/commit/4547b3e4f3baeadc46f55485918acb8ea602270b)
- Merge pull request  [#636](https://github.com/rdk-e/meta-oem-realtek-stream/pull/636) from rdk-e/feature/RDKEVD-5248
- |*OEM/SoC*|*Deployment/Build* *Variants*|*Splash Image*| |---|---|---| |RTK XiOne|All Xumo streaming device models|spectrum_line.png| |RTK XiOne|All XOE  device models|spectrum_line.png| |RTK, XiOne, All EU|All UK/IT/DE device models|sky.png| |RTK XiOne Foxtel|AU device models  |changes revered as Foxtel developement is paused| Test procedure: Confirm the driver splashscreen as per the table above is displayed on device bootup. Expected result: The correct splash image is displayed on device bootup as per the table above. Priority: P1 Status: Ready for Testing [3bdae2b](https://github.com/rdk-e/meta-oem-realtek-stream/commit/3bdae2bf3fab2d564aee0e454e9677165a7abf1e)
- RDKEVD-5251: Incorrect driver splash screen at bootup [4c0c76b](https://github.com/rdk-e/meta-oem-realtek-stream/commit/4c0c76bffd7b091620e1508e4e73c2446f4bdd02)
- Merge pull request  [#638](https://github.com/rdk-e/meta-oem-realtek-stream/pull/638) from rdk-e/feature/RDKEVD-4768_spurious_wowfix
- DELIA-69030: Integrate new ruwido 2.8 database [72f4ebe](https://github.com/rdk-e/meta-oem-realtek-stream/commit/72f4ebe36f576ac4f9159cd997cef5d1433ca867)
- Merge tag '9.4.1_HW_COMP' into develop [0356080](https://github.com/rdk-e/meta-oem-realtek-stream/commit/0356080552421333f161d0488fe9f6ea801fca62)
- Merge branch 'release/9.4.1_HW_COMP' [19c3eb3](https://github.com/rdk-e/meta-oem-realtek-stream/commit/19c3eb388bc56c97537233db474cb6a427abd828)
- RDKEVD-5348: Create Release Tag for 9.4.1_HW_COMP [c23af83](https://github.com/rdk-e/meta-oem-realtek-stream/commit/c23af834c0b7d17543a16dd44783249b0bc7c45a)
- RDKEVD-5248 : Update dependency for mount-ta-partition systemd service [718ec88](https://github.com/rdk-e/meta-oem-realtek-stream/commit/718ec88d98bbad47dfe99fa9760af018cc314a96)
- RDKEVD-4768: [XIONE][ RDKE] - Mutliple wake up observed due to false WoW packet [3b84187](https://github.com/rdk-e/meta-oem-realtek-stream/commit/3b841879592addaa235fa9dd47a57ffb0043cafa)
- Merge pull request  [#633](https://github.com/rdk-e/meta-oem-realtek-stream/pull/633) from rdk-e/feature/RDKEVD-4913_wifi_mac_incorrect
- Merge pull request  [#622](https://github.com/rdk-e/meta-oem-realtek-stream/pull/622) from rdk-e/feature/RDKEVD-5017-fixes-dsMgrMain-crash
- Merge branch 'develop' into feature/RDKEVD-5017-fixes-dsMgrMain-crash [3125f85](https://github.com/rdk-e/meta-oem-realtek-stream/commit/3125f8576669a516621617b52ca73609c917c9e6)
- Merge pull request  [#597](https://github.com/rdk-e/meta-oem-realtek-stream/pull/597) from rdk-e/feature/RDKEVD-4503
- Merge pull request  [#630](https://github.com/rdk-e/meta-oem-realtek-stream/pull/630) from rdk-e/feature/RDKEVD-5115
- Merge tag 'ES1_1.4.0' into develop [bb5c755](https://github.com/rdk-e/meta-oem-realtek-stream/commit/bb5c75516a0a5f4d3b2a6e73d58d51cfd44adc69)
- Merge branch 'release/ES1_1.4.0' [8c8bb10](https://github.com/rdk-e/meta-oem-realtek-stream/commit/8c8bb10e3e2dacf0b4c057c81522ce1cf19d5ef3)
- RDKEVD-4913: [ES1][ RDKE] - Wifi Mac is displaying incorrectly in ifconfig [627db25](https://github.com/rdk-e/meta-oem-realtek-stream/commit/627db25ea38a29823e06e7d04cdb1d862d1926c9)
- RDKEVD-5115: WebProcess became unresponsive during Paramount+ app playback [28d4b3b](https://github.com/rdk-e/meta-oem-realtek-stream/commit/28d4b3b2ed8490568a1914dd11836160df88ec75)
- RDKEVD-5101: Create Release Tag for 1.4.0 [b779c7b](https://github.com/rdk-e/meta-oem-realtek-stream/commit/b779c7b891ee12226cfa18ab70d31ca025f04f87)
- Merge pull request  [#625](https://github.com/rdk-e/meta-oem-realtek-stream/pull/625) from rdk-e/ES1-2443-MAX_INACTIVE_APPSto3
- Merge pull request  [#624](https://github.com/rdk-e/meta-oem-realtek-stream/pull/624) from rdk-e/feature/RDKEVD-5032
- Merge pull request  [#626](https://github.com/rdk-e/meta-oem-realtek-stream/pull/626) from rdk-e/revert-606-feature/RDKEVD-3795
- Revert "RDKEVD-3795-[XIONE DE][intermittent] Device Stuck " [cae7ea8](https://github.com/rdk-e/meta-oem-realtek-stream/commit/cae7ea8460d17a7aa4ad28138a1a0624dcec8c84)
- ES1-2443: Update asappserviced "CONF_MAX_INACTIVE_APPS=3" [af5454d](https://github.com/rdk-e/meta-oem-realtek-stream/commit/af5454d5befde5a004dfd01517cbeac4718312d1)
- RDKEVD-5032: [Alpaca-DE]Bootloader Release v14.0.0 [346355b](https://github.com/rdk-e/meta-oem-realtek-stream/commit/346355b74129d70521f7e8ec28ecee5bdf9473e4)
- Merge pull request  [#621](https://github.com/rdk-e/meta-oem-realtek-stream/pull/621) from rdk-e/feature/RDKEVD-5014
- RDKEVD-5014:Modify the repo from gerrit to github. [c608159](https://github.com/rdk-e/meta-oem-realtek-stream/commit/c608159cb95e0c46dc83490e500da99c31ff8d32)
- Merge pull request  [#623](https://github.com/rdk-e/meta-oem-realtek-stream/pull/623) from rdk-e/feature/ES1-3061
- ES1-3061:Missing 4K resolution on UI. [ae476bb](https://github.com/rdk-e/meta-oem-realtek-stream/commit/ae476bb0432c0d96e8fe953be57621f4a7e41dfd)
- RDKEVD-5017: Updates hdmiservice and devicesettings-soc-realtek [50f8736](https://github.com/rdk-e/meta-oem-realtek-stream/commit/50f873644d306956db6946a2f346546fe844b45a)
- Merge pull request  [#620](https://github.com/rdk-e/meta-oem-realtek-stream/pull/620) from rdk-e/feature/RDKEVD-4714
- RDKEVD-4714 : To reduce the playback start freeze. [df2278e8](https://github.com/rdk-e/meta-oem-realtek-stream/commit/df2278e8868f01936622b648d96b0eb1acfcc23a)
- Merge tag 'ES1_1.3.0' into develop [472faa2b](https://github.com/rdk-e/meta-oem-realtek-stream/commit/472faa2bac7615cd7df16cab59676284c4fd90a4)
- Merge branch 'release/ES1_1.3.0' [d9e784e2](https://github.com/rdk-e/meta-oem-realtek-stream/commit/d9e784e2d61b0015c7fe5b972c5c454fbd7a2d6f)
- RDKEVD-4954: Release Tag ES1 1.3.0 [5cc7df85](https://github.com/rdk-e/meta-oem-realtek-stream/commit/5cc7df855810594be40784889f01ccaba7be0b09)
- Merge pull request  [#617](https://github.com/rdk-e/meta-oem-realtek-stream/pull/617) from rdk-e/feature/RDKEVD-4885
- Merge pull request  [#618](https://github.com/rdk-e/meta-oem-realtek-stream/pull/618) from rdk-e/RDKEVD-4887
- RDKEVD-4887:Add SVP,SAP on dobby container. [f116d202](https://github.com/rdk-e/meta-oem-realtek-stream/commit/f116d2022b9997072acbc3a63e1b25481bb813f8)
- RDKEVD-4885:Adding mount tmp data service. [d87dd115](https://github.com/rdk-e/meta-oem-realtek-stream/commit/d87dd1155d4c583ec1c380b3524148b27a255374)
- Merge pull request  [#616](https://github.com/rdk-e/meta-oem-realtek-stream/pull/616) from rdk-e/feature/RDKEVD-4906
- Merge branch 'develop' into feature/RDKEVD-4906 [7447268c](https://github.com/rdk-e/meta-oem-realtek-stream/commit/7447268c47bbd60e0fe7575dc191efd85a387803)
- Merge pull request  [#608](https://github.com/rdk-e/meta-oem-realtek-stream/pull/608) from rdk-e/feature/ENTDAI-2160_update_appsserviced_vendor_config_v1_5_0
- Merge pull request  [#614](https://github.com/rdk-e/meta-oem-realtek-stream/pull/614) from rdk-e/feature/RDKEVD-4886
- Merge branch 'develop' into feature/RDKEVD-4886 [db36abcc](https://github.com/rdk-e/meta-oem-realtek-stream/commit/db36abcc718a5d00057e424fe82a9a8aad62c23e)
- Merge tag 'ES1_1.2.0' into develop [7abe1d6b](https://github.com/rdk-e/meta-oem-realtek-stream/commit/7abe1d6bd33e399b19759c5490eef5d11e43fa16)
- RDKEVD-4871 [RDK-E][RTK] Realtek ES1 Release ES1_1.2.0 Merge branch 'release/ES1_1.2.0' [017ba277](https://github.com/rdk-e/meta-oem-realtek-stream/commit/017ba277694eeb3591d5ccff9ae52859f0bcd3d7)
- RDKEVD-4906:Add SDK Version in the version file. [f4a0d97e](https://github.com/rdk-e/meta-oem-realtek-stream/commit/f4a0d97e905d88c450d4a4d13be502b6fe765a87)
- RDKEVD-4886:Enable ZRAM by default for low-mem devices. [c43748c8](https://github.com/rdk-e/meta-oem-realtek-stream/commit/c43748c8b003003452515fc8e0fa0cfe56cee348)
- RDKEVD-4871 [RDK-E][RTK] Realtek ES1 Release ES1_1.2.0 [7cf43538](https://github.com/rdk-e/meta-oem-realtek-stream/commit/7cf435380c96aeb1e0f3828f2c5713cf17ebc10e)
- RDKEVD-3977: Unable to mount Rootfs on unknown-block [8d2cf339](https://github.com/rdk-e/meta-oem-realtek-stream/commit/8d2cf339ef97bc90890eea313f0136b95717f6ae)
- Update the git tag now the release has been cut. [b2359cf3](https://github.com/rdk-e/meta-oem-realtek-stream/commit/b2359cf3da9d38c587a27db082c50303f0572c10)
- Update the git sha for the config repo. [1967f1f5](https://github.com/rdk-e/meta-oem-realtek-stream/commit/1967f1f521eb0a8f39433b734f2945d900699f21)
- Merge pull request  [#609](https://github.com/rdk-e/meta-oem-realtek-stream/pull/609) from rdk-e/feature/RDKEVD-4854
- ENTDAI-2160: Update appsserviced vendor config to v1.0.5 [db2b6379](https://github.com/rdk-e/meta-oem-realtek-stream/commit/db2b6379c16367d0994ecd774a0be23a42b298f0)
- RDKEVD-4854:Remove the 'no-hw' flag on openssl component. [79732be8](https://github.com/rdk-e/meta-oem-realtek-stream/commit/79732be8df214b209f16370fdff565e4fbb5113c)
- RDKEVD-4854:Remove the 'no-hw' flag on openssl component. [22cc7222](https://github.com/rdk-e/meta-oem-realtek-stream/commit/22cc72226f9d409394fce99e85a77428919551d9)
- Merge pull request  [#600](https://github.com/rdk-e/meta-oem-realtek-stream/pull/600) from rdk-e/feature/RDKEVD-4707-updates-rtkaudiosink
- RDKEVD-4707: Updates rtkaudiosink to 3.1.6 [8fc990dc](https://github.com/rdk-e/meta-oem-realtek-stream/commit/8fc990dc9511dfca4e32be73770ff682730514f8)
- Merge pull request  [#606](https://github.com/rdk-e/meta-oem-realtek-stream/pull/606) from rdk-e/feature/RDKEVD-3795
- Merge pull request  [#584](https://github.com/rdk-e/meta-oem-realtek-stream/pull/584) from rdk-e/feature/RDKEVD-4358_ms12
- Merge pull request  [#556](https://github.com/rdk-e/meta-oem-realtek-stream/pull/556) from rdk-e/feature/RDKEVD-3880
- RDKEVD-3795-[XIONE DE][intermittent] Device Stuck on “One Moment Please” Screen After Factory Reset – Recovers After Reboot [f3744a34](https://github.com/rdk-e/meta-oem-realtek-stream/commit/f3744a347a54b998ec76c974c204128b67250993)
- Merge pull request  [#604](https://github.com/rdk-e/meta-oem-realtek-stream/pull/604) from rdk-e/feature/RDKEVD-4785
- RDKEVD-4785:Provide Profile as STB. [8f6fb523](https://github.com/rdk-e/meta-oem-realtek-stream/commit/8f6fb523b2f4e7b5380276abe3a0d14f1155a6b2)
- Merge pull request  [#602](https://github.com/rdk-e/meta-oem-realtek-stream/pull/602) from rdk-e/feature/RDKEVD-4729
- Merge pull request  [#603](https://github.com/rdk-e/meta-oem-realtek-stream/pull/603) from rdk-e/feature/RDKEVD-4584
- Merge pull request  [#601](https://github.com/rdk-e/meta-oem-realtek-stream/pull/601) from rdk-e/feature/RDKEVD-3978-rtk
- RDKEVD-3978: GetResolution API failure [0b6d2c51](https://github.com/rdk-e/meta-oem-realtek-stream/commit/0b6d2c519c47d283d8fa819fb30774ab683b946e)
- RDKEVD-4729: [ES1]Dolby vulnerability fixes. [cf724282](https://github.com/rdk-e/meta-oem-realtek-stream/commit/cf724282778a9c37bfac80ba4c1380394d1a69f3)
- Merge pull request  [#598](https://github.com/rdk-e/meta-oem-realtek-stream/pull/598) from rdk-e/RDKEVD-3875_ES1-RTK_TLTA_Improvement
- Merge pull request  [#575](https://github.com/rdk-e/meta-oem-realtek-stream/pull/575) from rdk-e/feature/RDKEVD-4205-fix-prime-video-re-buffer
- RDKEVD-4205: Use updated rtkaudiosink 3.1.5 [3587b2b1](https://github.com/rdk-e/meta-oem-realtek-stream/commit/3587b2b19864557e0424265d460bb0c0e9f509f8)
- Merge pull request  [#576](https://github.com/rdk-e/meta-oem-realtek-stream/pull/576) from rdk-e/feature/RDKEVD-4259
- RDKEVD-3875 : tee-supplicant and hrot-tl boot flow change and TLTA and PKCS11 performance improvement [272edcbb](https://github.com/rdk-e/meta-oem-realtek-stream/commit/272edcbb66f37524ae7ec1a1e41da23a2937e90c)
- RDKEVD-4503: Modified SRCREV:pn-media-utils-soc-realtek to point to the correct commit [58cc482a](https://github.com/rdk-e/meta-oem-realtek-stream/commit/58cc482a0c1559170dcfea1fe177e53a86da99cd)
- RDKEVD-4259: The TV will randomly show the 'invalid channel number' on the screen [b6105a81](https://github.com/rdk-e/meta-oem-realtek-stream/commit/b6105a813bcc19315392cd83897cc4b73501d59f)
- RDKEVD-4503: Changed tag versions and SHA for media-utils-soc-realtek [fdbe54f5](https://github.com/rdk-e/meta-oem-realtek-stream/commit/fdbe54f50b6e7b07fcf607680ba49e93f2c508f8)
- RDKEVD-4584:Include asappservice configuration. [03b23a54](https://github.com/rdk-e/meta-oem-realtek-stream/commit/03b23a54f87f5b95c5fc1554a0fbea34d9e3fa4d)
- Merge branch 'hotfix/9.4.0' into support/9.4.0_Baseline [e8931a51](https://github.com/rdk-e/meta-oem-realtek-stream/commit/e8931a510b9970bf89fac2fea907a6561b79da85)
- RDKEVD-4163:Release 9.4.0 [fcd81df9](https://github.com/rdk-e/meta-oem-realtek-stream/commit/fcd81df9d88c4185c77f14a7fa5977b109468b0f)
- Merge pull request  [#590](https://github.com/rdk-e/meta-oem-realtek-stream/pull/590) from rdk-e/feature/ES1-2646
- RDKEVD-4163 [RDK-E][RTK] Realtek Release 9.4.0 [e5063080](https://github.com/rdk-e/meta-oem-realtek-stream/commit/e506308046302f2af53a395d0dfc804993c18c52)
- ES1-2646: Integrate 2.54 and 2.55 wifi drivers from realtek [cc215228](https://github.com/rdk-e/meta-oem-realtek-stream/commit/cc215228710df9a9a94b2db9b51f0fa58b463003)
- RDKEVD-4358,RDKEVD-494: Intergrated MS12_TA_CA binaries. [b79b6b66](https://github.com/rdk-e/meta-oem-realtek-stream/commit/b79b6b6632de8bc645ee420d1da2e17c3672eb31)
- RDKEVD-3880: Remove xre-receiver [e79e0b5d](https://github.com/rdk-e/meta-oem-realtek-stream/commit/e79e0b5d0bff7f446fef689fc8388dd97de364fc)
- RDKEVD-3880: Remove xre-receiver [e3da083f](https://github.com/rdk-e/meta-oem-realtek-stream/commit/e3da083f401eb9b69b2c4d0d702f31b176b524f4)

## [meta-rdk-vendor-realtek-common](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/blob/main/CHANGELOG.md)

- Merge branch 'release/9.4.3' [cf88941](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/cf88941417ee5e8f6d4e565c9f40c92f9d280d3f)
- RDKEVD-6130: Tag creation for VL Release 9.5.0 [b74c8de](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/b74c8deb363eeef00a9c61ebe77937b60304d434)
- Merge pull request  [#88](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/pull/88) from rdk-e/feature/RDKEVD-6061
- RDKEVD-6061: [RDK-E] Device model name upgrade [1c4d0aa](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/1c4d0aa6ae5fb53f033765601bb9f732cfb1db5f)
- Merge pull request  [#86](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/pull/86) from rdk-e/feature/RDKEVD-5834
- RDKEVD-5834: Port Bluetooth script from RDKEVD-5278 [7c32f3e](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/7c32f3e5fd8642c1391dd869866f21349329dc25)
- Merge pull request  [#75](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/pull/75) from rdk-e/feature/RDKEVD-4390
- Merge pull request  [#84](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/pull/84) from rdk-e/feature/RDKEVD-5647
- RDKEVD-5590 : Disable dropbear on prod builds. [f8a8dc4](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/f8a8dc4de47d8957791847f23256cf29cbdcfa3e)
- RDKEVD-4390: Align Vulkan + SPIR-V versioning [cf9d21d](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/cf9d21d7f2b41a072f6fe920ac76185019b6df76)
- Merge pull request  [#74](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/pull/74) from rdk-e/XIONE-18083
- RDKEVD-5278: Add vendor layer script to read Bluetooth address from eMMC [5f378fb](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/5f378fb9e1f9dc4319b7a95d4a5b422fde58d2e5)
- Merge tag '9.4.2' into develop [eb0c022](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/eb0c0221396cb7524821321f413d2c26b19b77f8)
- Merge branch 'release/9.4.2' [4ad5a47](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/4ad5a477576c064f11877d17232672b69cd726b2)
- RDKEVD-5101: Create Release Tag for 1.4.0 [73ede50](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/73ede502468f67000c27bc6d45b512fcbe3f4436)
- RDKEVD-5101: Create Release Tag for 1.4.0 [041dbc8](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/041dbc83e09f9ac24193e369631cfc86eaf98426)
- Merge tag '9.4.1' into develop [63cab1a](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/63cab1aa901ec8443019da8b3db67346085c2be9)
- Merge branch 'release/9.4.1' [1296ccc](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/1296cccf83a3d4af0a3efb4794908e366d257bcd)
- RDKEVD-5101: Create Release Tag for 1.4.0 [3068330](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/3068330bf1a7919c7756da048370017b11cbffef)
- Merge pull request  [#70](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/pull/70) from rdk-e/feature/RDKEMW-12021_fsr
- RDKEMW-12021 : Update the partition to look for fsr trigger file [04420e1](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/04420e1feac8e0f474a485fe00e34fe62484bfe3)
- Merge tag '9.4.0' into develop [498aaf0](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/498aaf0bfb2b05df6c2bb401da8ae3272525681f)

## [meta-oss-vendor-realtek](https://github.com/rdk-e/meta-oss-vendor-realtek/blob/main/CHANGELOG.md)

- Merge branch 'release/4.1.9' [f92c82c](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/f92c82caea511520160c1d36650dc3e30e388a6b)
- RDKEVD-6130: Tag creation for VL Release 9.5.0 [116b25e](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/116b25eaceeda6bcb2c39899a508a0fd640e6498)
- RDKEVD-5356 : Reduce redis CPU usage. ( [#113](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/113))
- Merge pull request  [#121](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/121) from rdk-e/feature/RDKEVD-5936-Westeros-2.1.0
- RDKEVD-5757 : Use monotonic clock for audio underflow detection ( [#122](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/122))
- Update recipes-graphics/westeros/westeros.inc [67d8ff0](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/67d8ff036955f072594264c61203c44574f2a946)
- RDKEVD-5936 : [TV] Update Westeros to 2.1.0 in RDKE [ed2ce58](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/ed2ce584807e1a3c53ae0d16d803329b68993021)
- RDKEVD-5936 : [TV] Update Westeros to 2.1.0 in RDKE [d57698a](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/d57698a4d060272db7287fffab425c93739f3f44)
- RDKEVD-5274:Stable2 sync code. ( [#112](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/112))
- RDKEVD-5894 : Install essosrmgr headers in VL ( [#118](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/118))
- Merge pull request  [#100](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/100) from rdk-e/feature/RDKEVD-4676
- RDKEVD-5459: Adjust AV-sync delta to pass NTS ( [#117](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/117))
- Merge pull request  [#116](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/116) from rdk-e/feature/RDKEVD-4868-Westeros-2.0.0
- Update recipes-graphics/westeros/westeros.bb [95084a3](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/95084a3c66134bfc9a932dffbed836499e371709)
- Apply suggestion from @Copilot [36f5015](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/36f501522c1c1185ab69b64cf7eba1d4f72fd968)
- Update recipes-graphics/westeros/westeros-sink.bb [37630db](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/37630dbc2b159f8c514496023bf1f10ca5a60805)
- Update recipes-graphics/westeros/westeros.bb [4aacc46](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/4aacc460465222a08721f855ac1b23c76b90294b)
- RDKEVD-4676: Enable Wayland explicit sync for Vulkan WSI on RDKE [0f50507](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/0f50507819f206d8b4466212318744bc8f2e66a1)
- RKEVD-5193: Update Westeros to 2.0.0 in RDKE [6f17c56](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/6f17c56349d3ce6d68e50b8a45ab7c0ed3ff823f)
- RDKEVD-4868: [TV] Update Westeros to 2.0.0 in RDKE [19cac74](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/19cac749c65fd398f0ec526b09b0cd6c482df8fc)
- RDK-58551: Modify the Makefiles in Westeros-sink [5412cec](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/5412cec550be03dc8ecf6a2ab7eb237feba154a1)
- RDKEVD-5011 : Add VE1 SEI timecode parsing support ( [#105](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/105))
- Merge tag '4.1.8' into develop [ab42920](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/ab429209b6ee3af13b71bd0611ffbc988dcb24a0)
- Merge branch 'release/4.1.8' [9e21581](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/9e21581c1d7f6b98d9960c03bd5d96b2f72b9859)
- RDKEVD-5412: ES1 RTK Release 1.5.0 [7c4b621](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/7c4b621552f44eb5cb28a9ccb313cd1bf2b160d6)
- ES1-3096 : Audio heard in DD/DD+ mode when the TV does not support DD/DD+ ( [#108](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/108))
- Merge pull request  [#109](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/109) from rdk-e/feature/RDKEMW-12077
- RDKEMW-12077: Device Stuck at Xumo logo after reboot [5717457](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/571745732d7d059dbb0b8239f8dfa59e2c5a2f41)
- RDKEVD-4702 : [ES1 RTK]Adjust es1 aac and opus delta for av sync ( [#99](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/99))
- Merge tag '4.1.7' into develop [6a7b425](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/6a7b425b47cf9b1fceb2085aa0f6026f7ffbd631)
- Merge branch 'release/4.1.7' [44f4e92](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/44f4e922dfd12fec32d6672c11506878f33dffe9)
- RDKEVD-5101: Create Release Tag for 1.4.0 [7cf61f9](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/7cf61f9c2ebf6e6c615c5fcaf42eff6bf80f5508)
- RDKEVD-4755 : To fix the timecode add failed. ( [#102](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/102))
- Merge tag '4.1.6' into develop [8a92e92](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/8a92e9224aefd8034451008b5558ae7d7dbc6fe1)
- RDKEVD-4871 [RDK-E][RTK] Realtek ES1 Release ES1_1.2.0 Merge branch 'release/4.1.6' [27ada2a](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/27ada2a6f54c3ea4a128fb97d4739c5246532a1d)
- RDKEVD-4871 [RDK-E][RTK] Realtek ES1 Release ES1_1.2.0 [8bd1e45](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/8bd1e45a10c73b7544c0034936cb0cd6d28ede50)
- RDKEVD-4814: Adjust aac delta for av sync with ddp out ( [#101](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/101))
- Merge tag '4.1.5' into develop [f28a758](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/f28a758d9083e00ebdd557b0d015a7759141a7f6)

## [meta-mediarite-vendor](https://github.com/rdk-e/meta-mediarite-vendor/blob/main/CHANGELOG.md)

- Merge pull request  [#79](https://github.com/rdk-e/meta-mediarite-vendor/pull/79) from rdk-e/RDKEVD-5240/add-changelog-21.10
- RDKEVD-5240: Add changelog for 21.10 [ccaa7bc](https://github.com/rdk-e/meta-mediarite-vendor/commit/ccaa7bc08bb1f1df2fa60368e938f74e66c53c7b)
- Merge pull request  [#77](https://github.com/rdk-e/meta-mediarite-vendor/pull/77) from rdk-e/feature/RDKEVD-5240-update-versions-for-21.10
- RDKEVD-5240: Update versions for 21.10 [66d63a5](https://github.com/rdk-e/meta-mediarite-vendor/commit/66d63a52bea52c48b2ee2fd625202cc6b83f145c)
- Merge pull request  [#74](https://github.com/rdk-e/meta-mediarite-vendor/pull/74) from rdk-e/MRITE-223-sky-cello-config
- Merge pull request  [#75](https://github.com/rdk-e/meta-mediarite-vendor/pull/75) from rdk-e/create-.tmp-dir-after-cleanup
- MRITE-166: Made tmp dir handler create .tmp folder if tmp dir exists [6e48bc3](https://github.com/rdk-e/meta-mediarite-vendor/commit/6e48bc3b81b36c63b86c1c60ed297fc47797fd6e)
- MRITE-223: Fix Sky Cello config [8f4ce78](https://github.com/rdk-e/meta-mediarite-vendor/commit/8f4ce785b42ada390ba1091c482fbf7831037897)
- Merge pull request  [#71](https://github.com/rdk-e/meta-mediarite-vendor/pull/71) from rdk-e/documentation-for-vendor-release
- MRITE-166 : Implement manifest automations. [552b4e4](https://github.com/rdk-e/meta-mediarite-vendor/commit/552b4e4c58cb02e3b742c754295f001ed04b22dc)
- Merge pull request  [#72](https://github.com/rdk-e/meta-mediarite-vendor/pull/72) from rdk-e/add-gst-plugins-mediarite-inherits-to-check-for-versions
- added gst-plugins-mediarite inherits to check for versions [2039bb5](https://github.com/rdk-e/meta-mediarite-vendor/commit/2039bb5d66d2c22a7f5fa568c35f89c39fa860cd)
- MRITE-166 : added scripting for broadcast-hal-* release [44211b4](https://github.com/rdk-e/meta-mediarite-vendor/commit/44211b4e5ee9531db7bde3abb603b9e5d695f09a)
- MRITE-165 : added release documentation [9a9d980](https://github.com/rdk-e/meta-mediarite-vendor/commit/9a9d9809d4204a8b3267a93bdbd36efb7402f03d)
- Merge pull request  [#68](https://github.com/rdk-e/meta-mediarite-vendor/pull/68) from rdk-e/pre-release/21.9
- Merge pull request  [#67](https://github.com/rdk-e/meta-mediarite-vendor/pull/67) from rdk-e/pre-release/21.9
- RDKEVD-4622: Add changelog for 21.9 [b79ab61](https://github.com/rdk-e/meta-mediarite-vendor/commit/b79ab61a59d89b8d1b61ed73964f64bc10dad0f1)
- Merge pull request  [#65](https://github.com/rdk-e/meta-mediarite-vendor/pull/65) from rdk-e/update-versions-for-release
- Adding necessary dependencies for breakpad-wrapper [3ce5ae6](https://github.com/rdk-e/meta-mediarite-vendor/commit/3ce5ae626d014680eaed7f6615e6c36d1318a121)
- RDKEVD-4622: Update versions for 21.9 [1991288](https://github.com/rdk-e/meta-mediarite-vendor/commit/1991288f1e0ec619976df7f9dbbd7dbdf9161ced)
- Merge pull request  [#63](https://github.com/rdk-e/meta-mediarite-vendor/pull/63) from rdk-e/prerelease/21.8



## Changes in component repositories

## ['media-utils-soc-realtek'](https://github.com/rdk-e/media_utils-soc-realtek/blob/main/CHANGELOG.md)

- Merge branch 'release/2.1.4' [f55db2b](https://github.com/rdk-e/media_utils-soc-realtek/commit/f55db2b4421b53ee488b2dbadcf6927789217a6e)
- Merge branch 'main' into release/2.1.4 [e4ed290](https://github.com/rdk-e/media_utils-soc-realtek/commit/e4ed29042863ce9cabb3396d34992a17823666ca)
- RDKEVD-5274: Stable2 sync [389014a](https://github.com/rdk-e/media_utils-soc-realtek/commit/389014ac0196334af2f785f6f942cb1fd8327050)
- Merge pull request  [#13](https://github.com/rdk-e/media_utils-soc-realtek/pull/13) from rdk-e/feature/RDKEVD-5274-sync-with-stable2
- Merge branch 'stable2_GRT26_v1' into feature/RDKEVD-5274-sync-with-stable2 [0fb9ca0](https://github.com/rdk-e/media_utils-soc-realtek/commit/0fb9ca068d6daf5ffce627f495f90afcc0e757ec)
- Add GitHub Actions workflow file [d943d10](https://github.com/rdk-e/media_utils-soc-realtek/commit/d943d10ef9060d3c254d1161f7066ede2ccb3970)
- Merge pull request  [#11](https://github.com/rdk-e/media_utils-soc-realtek/pull/11) from rdk-e/release/2.1.3
- RDKEVD-4503 creating a new tag 2.1.3 [a958c45](https://github.com/rdk-e/media_utils-soc-realtek/commit/a958c4553dc826ccb91bf31d637b213baa733b5a)
- Merge pull request  [#8](https://github.com/rdk-e/media_utils-soc-realtek/pull/8) from rdk-e/feature/RDKEVD-RDKEVD-4503-status-fix
- RDKEVD-4503 Return proper setting values [2f97ca7](https://github.com/rdk-e/media_utils-soc-realtek/commit/2f97ca72d63d821dc3930390d80fb45200dc2454)
- Merge tag '2.1.1' into develop [93b6912](https://github.com/rdk-e/media_utils-soc-realtek/commit/93b6912d8d335ba77f9353a996047cd096a57f4f)
- XIONE-17111 : RMF_AudioCapture Fixing all the Segmentation faults [25f3aad](https://github.com/rdk-e/media_utils-soc-realtek/commit/25f3aadf872761c39a616e07b7e061478b101631)
- RDKEVD-482 : modify RMF_AudioCapture_GetDefaultSettings API [da075e6](https://github.com/rdk-e/media_utils-soc-realtek/commit/da075e634759daa62528b711533e2c1ad3a6c675)
## ['rdk-gstreamer-utils-platform'](https://github.com/rdk-e/rdk-gstreamer-utils-realtek/blob/main/CHANGELOG.md)

- Merge branch 'release/2.0.1' [2a679f2](https://github.com/rdk-e/rdk-gstreamer-utils-realtek/commit/2a679f22673c9697356aef2c6554f8bc33b8070d)
- RDKEVD-6041: Tag creation for gstreamer utils [5d63197](https://github.com/rdk-e/rdk-gstreamer-utils-realtek/commit/5d63197871eda9d98adcf8691c4b53cbda7375cd)
- Merge pull request  [#14](https://github.com/rdk-e/rdk-gstreamer-utils-realtek/pull/14) from rdk-e/REALTEK-892
- REALTEK-892:[WNC][Netflix] Audio Mixer NTS test cases failed [b6beb91](https://github.com/rdk-e/rdk-gstreamer-utils-realtek/commit/b6beb91b258ce522a6ca0eafca56295abccf8b32)
- Add GitHub Actions workflow file [b79e772](https://github.com/rdk-e/rdk-gstreamer-utils-realtek/commit/b79e772d6956914559106dd7dfef7b08245df65b)
- Remove GitHub Actions workflow file [1bf4040](https://github.com/rdk-e/rdk-gstreamer-utils-realtek/commit/1bf4040dfd56909c6f6c981b048023d568a5bcdc)
- Add CODEOWNERS file [f78fa87](https://github.com/rdk-e/rdk-gstreamer-utils-realtek/commit/f78fa87701cbc9d31ec2d3c10ad4d4a9086f6960)
- Merge tag '2.0.0' into develop [942df40](https://github.com/rdk-e/rdk-gstreamer-utils-realtek/commit/942df407284afc74b7c5ea8f8ee8628d70d0036e)
## ['rtk-audio-service'](https://github.com/rdk-e/RtkAudioService-soc-realtek/blob/main/CHANGELOG.md)

- Merge branch 'release/3.2.2' [35330ab](https://github.com/rdk-e/RtkAudioService-soc-realtek/commit/35330ab0f24ec80c45dbc04d296e524ff902390e)
- RDKEVD-6130: Tag creation for VL Release 9.5.0 [4004211](https://github.com/rdk-e/RtkAudioService-soc-realtek/commit/40042110024b63b3bbbffb70ca01f4de4c2f3ce6)
- Merge pull request  [#16](https://github.com/rdk-e/RtkAudioService-soc-realtek/pull/16) from rdk-e/feature/RDKEVD-5356
- Merge pull request  [#19](https://github.com/rdk-e/RtkAudioService-soc-realtek/pull/19) from rdk-e/main
- Merge branch 'release/3.2.1' [7b21c7b](https://github.com/rdk-e/RtkAudioService-soc-realtek/commit/7b21c7bb5d1ef3c54a8f75a2141e8aaed9565b61)
- RDKEVD-5925: update CHANGELOG.md [43aebb7](https://github.com/rdk-e/RtkAudioService-soc-realtek/commit/43aebb76bfcee13307edb22a867c65f02dab7a00)
- Merge pull request  [#17](https://github.com/rdk-e/RtkAudioService-soc-realtek/pull/17) from rdk-e/feature/RDKEVD-5925-clean-up-retained-zombie-process-info
- RDKEVD-5925: Clear the info when process is in zombie state. [c645802](https://github.com/rdk-e/RtkAudioService-soc-realtek/commit/c6458029e3f9789d65147b563707c86119e4a1d6)
- RDKEVD-5356 : Reduce redis CPU usage [355dbae](https://github.com/rdk-e/RtkAudioService-soc-realtek/commit/355dbaefeb7b453806d54ed75c2720b5f598026b)
- Add GitHub Actions workflow file [27a0ab2](https://github.com/rdk-e/RtkAudioService-soc-realtek/commit/27a0ab24cf8a84ebda9e0034e4750a4eb15fdf48)
- Merge tag '3.2.0' into develop [b7c8a89](https://github.com/rdk-e/RtkAudioService-soc-realtek/commit/b7c8a8955abc778245f503a2dc5a97da9d59c654)
## ['hdmiservice'](https://github.com/rdk-e/hdmiservice-realtek/blob/main/CHANGELOG.md)

- Merge branch 'release/4.2.5' [3ab61cc](https://github.com/rdk-e/hdmiservice-realtek/commit/3ab61ccd4bd85d86cb345020289856d14ed05ca1)
- RDKEVD-5274: Stable2 sync [1c52c0f](https://github.com/rdk-e/hdmiservice-realtek/commit/1c52c0f8d7f398d9e9f4bf7ea26a4508e17d69b2)
- Merge pull request  [#48](https://github.com/rdk-e/hdmiservice-realtek/pull/48) from rdk-e/feature/RDKEVD-5274-sync-with-stable2
- Merge branch 'stable2_GRT26_v1' into feature/RDKEVD-5274-sync-with-stable2 [72580d6](https://github.com/rdk-e/hdmiservice-realtek/commit/72580d644cdd917c9677b91b6b2fc35316c29abe)
- Merge tag '4.2.4' into develop [254127b](https://github.com/rdk-e/hdmiservice-realtek/commit/254127ba1a560ce6c6f6cf82c84d54f9f26cde3b)
- Merge branch 'release/4.2.4' [a08b21c](https://github.com/rdk-e/hdmiservice-realtek/commit/a08b21c607256890a1482e4af14951d266091990)
- RDKEVD-5017: Create latest tag [ad9bd65](https://github.com/rdk-e/hdmiservice-realtek/commit/ad9bd653169496a0f530fb0b3e581c6ad497ad19)
- Merge pull request  [#46](https://github.com/rdk-e/hdmiservice-realtek/pull/46) from rdk-e/feature/RDKEVD-5017-fixes-dsMgrMain-crash
- RDKEVD-5017: Return success when HDCP “enable” state was stored [396065f](https://github.com/rdk-e/hdmiservice-realtek/commit/396065f15750b9db688baeb62cec10122539aecd)
- Merge pull request  [#45](https://github.com/rdk-e/hdmiservice-realtek/pull/45) from rdk-e/main
- Merge branch 'release/4.2.3' [b404125](https://github.com/rdk-e/hdmiservice-realtek/commit/b4041252a335754cc324b19e0456149ba30e6b55)
- RDKEVD-4458: Tag update 4.2.3 [096b35e](https://github.com/rdk-e/hdmiservice-realtek/commit/096b35ed4f5ccb28643a2a24ff4c4e5256c8ffa7)
- Add GitHub Actions workflow file [8bd9e3c](https://github.com/rdk-e/hdmiservice-realtek/commit/8bd9e3c6ab950048ebd6c244c78477e7dda19803)
- Merge pull request  [#43](https://github.com/rdk-e/hdmiservice-realtek/pull/43) from rdk-e/feature/RDKEVD-4458
- RDKEVD-4458 XIONE-16963: Check return value of getHDMIFormatSupport() [2c3a5d5](https://github.com/rdk-e/hdmiservice-realtek/commit/2c3a5d5683ca6a01af95a47400ff4ba4b46748a5)
- REALTEK-870: Skip redundancy audio mute command [f1dceac](https://github.com/rdk-e/hdmiservice-realtek/commit/f1dceacc8153036dfaa346c3d0acfb92c6861d8d)
- Merge tag '4.2.2' into develop [2ce5950](https://github.com/rdk-e/hdmiservice-realtek/commit/2ce59506ed5081096f575e01c3c66a484793b598)
- XIONE-17264: Use HDR_MODE_DV_SDR_VS10 when it's DV stream [0a42e08](https://github.com/rdk-e/hdmiservice-realtek/commit/0a42e08c50f11eb34af8415aca547cf788cc2435)
- XIONE-17646: Disable Hdmi/Hdcp when RxSense off [6433c6a](https://github.com/rdk-e/hdmiservice-realtek/commit/6433c6a199f4f7481c661b17e030ee1d8c36357d)
- XIONE-17642: If not support 10bits deepcolor, use HDR_MODE_DV_SDR_VS10 [6327479](https://github.com/rdk-e/hdmiservice-realtek/commit/632747936e57f80fe82c3e354ee98a5973c8fea5)
- Merge "RDKEVD-477 : Implement Zero-Warning Policy and Code Cleanup" into stable2 [b8395e0](https://github.com/rdk-e/hdmiservice-realtek/commit/b8395e009535d3c14050ee67a7afc985dff1d5ce)
- RDKEVD-477 : Implement Zero-Warning Policy and Code Cleanup [1cd00a3](https://github.com/rdk-e/hdmiservice-realtek/commit/1cd00a366aefacd6ad5307461744f7b64adefe40)
- XIONE-17303: Move Hdmiservice patches to the source code [3bd285c](https://github.com/rdk-e/hdmiservice-realtek/commit/3bd285ce262f4f8573409dec5e6082779693bd71)
## ['rtkaudiosink'](https://github.com/rdk-e/rtkaudiosink-soc-realtek/blob/main/CHANGELOG.md)

- Merge branch 'release/3.1.8' [238bf18](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/238bf184b5139610d05042a0029e0f7b4d0c3ee8)
- RDKEVD-6130: Tag creation for VL Release 9.5.0 [1dc4239](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/1dc4239acedc738adea4ea4ab4c83387dc9152fc)
- Merge pull request  [#29](https://github.com/rdk-e/rtkaudiosink-soc-realtek/pull/29) from rdk-e/feature/RDKEVD-6060
- RDKEVD-6060 : Reduce thread polling frequency. [69f038e](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/69f038e9cf051c8b5d04f610d2c9d2c50ebc4206)
- Merge tag '3.1.7' into develop [7a3bb93](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/7a3bb93f9cffa90be5e2a97fedf5bbb2f6652a4f)
- Merge branch 'release/3.1.7' [b5300d7](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/b5300d7a16f65ec9ba48d3905a6ec4da5857fb5b)
- RDKEVD-5274: Stable2 sync [963ccce](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/963ccce9517b14224081df3780e02e6e086cf5dd)
- Merge pull request  [#27](https://github.com/rdk-e/rtkaudiosink-soc-realtek/pull/27) from rdk-e/feature/RDKEVD-5274-sync-with-stable2
- Merge branch 'develop' into feature/RDKEVD-5274-sync-with-stable2 [ec3cda2](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/ec3cda2af2ee357e2093d3f8af857370383342cc)
- Merge pull request  [#26](https://github.com/rdk-e/rtkaudiosink-soc-realtek/pull/26) from rdk-e/feature/ES1-3029-sync-from-25Q4-sprint
- Merge branch 'stable2_GRT26_v1' into feature/RDKEVD-5274-sync-with-stable2 [b0d30d3](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/b0d30d38ea9389ba2d9309fe88db30863ac7129e)
- ES1-3029 : Revise position reporting logic [d49e493](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/d49e4932a20e6783cba46c4b712aabc00103b42f)
- XIONE-17995 : to reduce log spamming [69a4442](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/69a44425a61f06dfad4030c7d046c02ae83ead4c)
- Merge pull request  [#25](https://github.com/rdk-e/rtkaudiosink-soc-realtek/pull/25) from rdk-e/main
- RDKEVD-4707: Merge branch 'release/3.1.6' [75d3f7d](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/75d3f7d1b5807c9a17b4e88c62a3e355a1b02d60)
- RDKEVD-4707: Updates CHANGELOG.md [661f0f7](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/661f0f74edc6d82c1c338e2c641dca895e51e5c5)
- Merge pull request  [#23](https://github.com/rdk-e/rtkaudiosink-soc-realtek/pull/23) from rdk-e/feature/RDKEVD-4707-fixes-rtkaudiosink-log-spamming
- Add GitHub Actions workflow file [d658d39](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/d658d39be5e9a2b7e28296103b1f891124793a37)
- RDKEVD-4707: to reduce log spamming [468ee41](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/468ee41eab25888d3db070dc395b980689b919bd)
- XIONE-17423 : Avoid update apts less than segment start time [d4f21fd](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/d4f21fdcc9e4a455d209efb639be9045613d02b0)
- Merge pull request  [#22](https://github.com/rdk-e/rtkaudiosink-soc-realtek/pull/22) from rdk-e/main
- RDKEVD-4205: Merge branch 'release/3.1.5' [4ed338d](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/4ed338dd9ac8ee68d8339fd34bc17212d7ee57b0)
- RDKEVD-4205: Updates CHANGELOG.md for release 3.1.5 [57891f4](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/57891f4763937ed6fc2b7b217f48860327b94376)
- Merge pull request  [#20](https://github.com/rdk-e/rtkaudiosink-soc-realtek/pull/20) from rdk-e/feature/RDKEVD-4205-fix-prime-video-re-buffer
- RDKEVD-4205: Avoid update apts less than segment start time [fbaaec3](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/fbaaec381fb17de4015f49466a67272605661921)
- ES1-2591 : Avoid preroll lock stuck. [410bd32](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/410bd32cea7746e02cf5223ffa11b9ab4423bc2f)
- XIONE-17198 : Use correct reporting position. [0bec8e5](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/0bec8e5f9a9a73e3d230599def458aa9bfb190aa)
- Merge tag '3.1.4' into develop [5e891d0](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/5e891d09f1347bf80b0d4537d892d70579e0c43f)
## ['sysint-oem'](https://github.com/rdk-e/sysint-xione-rtk/blob/main/CHANGELOG.md)

