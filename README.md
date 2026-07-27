# Vendor Layer Release Notes

XiOne UK Stream Puck RDKE Vendor Layer Release Notes

---

|Summary|Content|
|---|----|
|Classification|Confidential|
|Date|27 Jul 2026|
|Author| Auto Generated |

---

### Build Information
|  |  |
|---------------|---------------|
| Manifest location | <https://github.com/rdk-e/vendor-manifest-xione-stream> |
| Manifest Tag | 8.7-1.0.0 |
| Manifest Name | [xione-realtek-streambox.xml](https://github.com/rdk-e/vendor-manifest-xione-stream/blob/8.7-1.0.0/xione-realtek-streambox.xml) |
| Machine Name | xione-uk |
| Platforms supported | Realtek 1319 |
| Yocto Version | kirkstone |
| Release Test Ticket | [RDKEVD-8346](https://ccp.sys.comcast.net/browse/RDKEVD-8346) |

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
 
This release is from the vendor [RDKEVD-8346](https://ccp.sys.comcast.net/browse/RDKEVD-8346). This release will provide a versioned "meta-vendor-xione-realtek-release" that will be used by the middleware as well as image assembler.

- XiOne UK Stream Puck RDKE Vendor Layer Release to roll out below fixes,

- [Scope of the release 8.7-1.0.0](https://ccp.sys.comcast.net/browse/RDKEVD-8074?jql=project%20%3D%20RDKEVD%20AND%20fixVersion%20%3D%20XIONE_RTK_8.7-1.0.0)

- For full list for changes please refer the [Consolidated change list from vendor layer repositories](#consolidated-change-list-from-vendor-layer-repositories) section of release notes.

## Release layer and components

### Vendor Release Components

| Vendor Release Components | New Version (8.7-1.0.0) | Version in Previous Release (9.7.1) |
|------------|---------|------------------------------------|
| Kernel & DTB | | 4.9.119.01-r9  | |
| packagegroup-vendor-layer | 8.7-X1.0.0_E1.0.0-r0 | X9.7.1_E1.8.1-r0 | [X9.7.1_E1.8.1...8.7-X1.0.0_E1.0.0](https://github.com/rdk-e/meta-oem-realtek-stream/compare/X9.7.1_E1.8.1...8.7-X1.0.0_E1.0.0) |
| packagegroup-common-vendor-layer | 8.7-X1.0.0_E1.0.0 | X9.7.0_E1.8.0-r0 | [X9.7.0_E1.8.0...8.7-X1.0.0_E1.0.0](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/compare/X9.7.0_E1.8.0...8.7-X1.0.0_E1.0.0) | 

### Stack layer

| Release meta Layer | Tag |
|------|------|
| [meta-vendor-xione-realtek-release](https://github.com/rdk-e/meta-vendor-xione-realtek-release) | [8.7-1.0.0](https://github.com/rdk-e/meta-vendor-xione-realtek-release/tree/8.7-1.0.0) |

#### Artifactory Location for IPKs - 

| Product | Location |
|------------|---------|
| XiOne-UK | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-uk-rel/8.7-1.0.0/xione-uk/ipks/debug |
| XiOne-DE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-de-rel/8.7-1.0.0/xione-de/ipks/debug |
| XiOne-Alpaca-De | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-alpaca-de-rel/8.7-1.0.0/xione-alpaca-de/ipks/debug |
| XOE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xfinity-stream-box-rel/8.7-1.0.0/xfinity-stream-box/ipks/debug |
| WNC Xfinity | https://partners.artifactory.comcast.com/ui/repos/tree/General/wnc-xfinity-stream-box-rel/8.7-1.0.0/wnc-xfinity-stream-box/ipks/debug |
| Xione-IT | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-it-rel/8.7-1.0.0/xione-it/ipks/debug |
| RTK-Alpaca-IT | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-alpaca-it-rel/8.7-1.0.0/xione-alpaca-it/ipks/debug |

#### OSS Consumption

- We have supported New OSS consumption from 9.0.0 Vendor release onwards. Please find the VL OSS IPK path as below
- OSS Version 4.13.0.

| Product  | Location |
|------------|---------|
| XiOne-UK | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-uk-rel/8.7-1.0.0/xione-uk/rdk-arm7ve-oss-vendor/ipks/debug |
| XiOne-DE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-de-rel/8.7-1.0.0/xione-de/rdk-arm7ve-oss-vendor/ipks/debug |
| XiOne-Alpaca-De | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-alpaca-de-rel/8.7-1.0.0/xione-alpaca-de/rdk-arm7ve-oss-vendor/ipks/debug |
| XOE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xfinity-stream-box-rel/8.7-1.0.0/xfinity-stream-box/rdk-arm7ve-oss-vendor/ipks/debug |
| WNC Xfinity | https://partners.artifactory.comcast.com/ui/repos/tree/General/wnc-xfinity-stream-box-rel/8.7-1.0.0/wnc-xfinity-stream-box/rdk-arm7ve-oss-vendor/ipks/debug |
| XiOne IT | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-it-rel/8.7-1.0.0/xione-it/rdk-arm7ve-oss-vendor/ipks/debug |
| XiOne Alpaca IT | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-alpaca-it-rel/8.7-1.0.0/xione-alpaca-it/rdk-arm7ve-oss-vendor/ipks/debug |

### Common meta layer versions for integration

| Meta Repo |  Version |
|-----------|-------------|
| meta-rdk-halif-headers | 4.1.4 |
| meta-rdk-cpc-halif-headers | 1.0.0 |
| meta-rdk-oss-reference | 4.13.0 |
| meta-rdk-oss-ext | 1.8.0 |
| meta-product-xione | 3.9.0 |
| rdke-common-config | 1.0.22 |
| rdke-region-uk-config | 2.4.5 |
| rdke-region-au-config | 1.2.3 |
| rdke-region-de-config | 1.0.10 |
| rdke-region-us-config | 1.5.8 |
| rdke-region-it-config | 1.1.6 |
| rdke-stb-config | 1.0.0 |

### Versions  of other layers  used for testing

| Meta Repo |  Version |
|-----------|-------------|
| meta-middleware-release | 8.6.2.0 |
| meta-application-release | 4.57.0 |
| meta-cspc-security-release | 4.0.7 |


### Meta Repos

#### Meta repos maintained by layers layer

| Meta Repo | New Version (8.7-1.0.0) | Version in Previous Release (9.7.1) | ChangeList |
|------------|---------|------------------------------------|--------------|
| [meta-rdk-auxiliary](#meta-rdk-auxiliary) |  **1.9.0** | 1.8.0 | [1.8.0...1.9.0](https://github.com/rdkcentral/meta-rdk-auxiliary/compare/1.8.0...1.9.0) |
| [meta-rdk-oss-reference](#meta-rdk-oss-reference) |  **4.13.0** | 4.12.2 | [4.12.2...4.13.0](https://github.com/rdkcentral/meta-rdk-oss-reference/compare/4.12.2...4.13.0) |
| meta-rdk-tools |  | 2.3.1 | |
| meta-vts |  | 1.2.0 | |
| [meta-rdk-vendor-test-utils](#meta-rdk-vendor-test-utils) |  **1.19.1** | NA | [1.19.1](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commits/1.19.1) |
| [meta-rdk-soc-realtek](#meta-rdk-soc-realtek) |  **4.5.0** | 4.3.0 | [4.3.0...4.5.0](https://github.com/rdk-e/meta-rdk-soc-realtek/compare/4.3.0...4.5.0) |
| [meta-oem-stream](#meta-oem-stream) |  **4.1.8** | 4.1.7 | [4.1.7...4.1.8](https://github.com/rdk-e/meta-oem-stream/compare/4.1.7...4.1.8) |
| [meta-oem-realtek-stream](#meta-oem-realtek-stream) |  **X9.7.1_E1.8.1** | X9.6.1_E1.7.1 | [X9.6.1_E1.7.1...X9.7.1_E1.8.1](https://github.com/rdk-e/meta-oem-realtek-stream/compare/X9.6.1_E1.7.1...X9.7.1_E1.8.1) |
| [meta-rdk-vendor-realtek-common](#meta-rdk-vendor-realtek-common) |  **X9.7.0_E1.8.0** | X9.5.1_E1.3.1 | [X9.5.1_E1.3.1...X9.7.0_E1.8.0](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/compare/X9.5.1_E1.3.1...X9.7.0_E1.8.0) |
| [meta-oss-vendor-realtek](#meta-oss-vendor-realtek) |  **4.4.0** | 4.3.0 | [4.3.0...4.4.0](https://github.com/rdk-e/meta-oss-vendor-realtek/compare/4.3.0...4.4.0) |
| [meta-mediarite-vendor](#meta-mediarite-vendor) |  **21.11** | 21.10 | [21.10...21.11](https://github.com/rdk-e/meta-mediarite-vendor/compare/21.10...21.11) |

#### Meta repos common for RDK-E

| Meta Repo | New Version (8.7-1.0.0) | Version in Previous Release (9.7.1) | ChangeList |
|------------|---------|------------------------------------|--------------|
| **buildscripts** ||||
| build-scripts |  | 1.0.2 | |
| | | | |
| **buildsupport** ||||
| meta-image-support |  | 4.2.4 | |
| meta-stack-layering-support |  **4.0.3** | 4.0.2 | [4.0.2...4.0.3](https://github.com/rdkcentral/meta-stack-layering-support/compare/4.0.2...4.0.3) |
| | | | |
| **oe** ||||
| meta-openembedded |  | rdk-4.0.0 | |
| poky |  | rdk-4.7.0 | |
| meta-python2 |  | rdk-4.0.0 | |
| | | | |
| **extention** ||||
| meta-rdk-oss-ext |  | 1.8.0 | |
| | | | |
| **configs** ||||
| rdke-region-uk-config |  | 2.4.3 | |
| rdke-region-au-config |  | 1.2.3 | |
| rdke-region-de-config |  | 1.0.8 | |
| rdke-region-us-config |  | 1.5.2 | |
| rdke-region-it-config |  | 1.1.2 | |
| rdke-common-config |  | 1.0.17 | |
| rdke-stb-config |  | 1.0.0 | |
| | | | |
| **rdk** ||||
| meta-rdk-halif-headers |  | 4.1.4 | |
| meta-rdk-cpc-halif-headers |  | 1.0.0 | |
| meta-rdk-vendor-cpc-common |  | 1.7.2 | |
| meta-rdk-vendor-bluetooth-common |  **1.0.0** | NA | [1.0.0](https://github.com/rdk-e/meta-rdk-vendor-bluetooth-common/commits/1.0.0) |
| meta-rdk-bluetooth |  **1.0.0** | NA | [1.0.0](https://github.com/rdkcentral/meta-rdk-bluetooth/commits/1.0.0) |
| | | | |
| **products** ||||
| meta-product-xione |  **3.9.0** | 3.7.0 | [3.7.0...3.9.0](https://github.com/rdk-e/meta-product-xione/compare/3.7.0...3.9.0) |
| | | | |
| **binder** ||||
| meta-binder |  | 1.0.0 | |
| | | | |
| **release** ||||
| meta-vendor-xione-realtek-release |  **9.7.2** | 9.6.1 | [9.6.1...9.7.2](https://github.com/rdk-e/meta-vendor-xione-realtek-release/compare/9.6.1...9.7.2) |
| | | | |

### Interface versions

| # | HAL Interface Header (rdkcentral github) | New Version (8.7-1.0.0) | Version from Previous Release (9.7.1)|
|---|------------------------------------------|-------------|----------------------|
| 1 | media-utils-headers | | 1.0.6 |
| 2 | hdmicecheader | | 1.4.0 |
| 3 | deepsleep-manager-headers | | 1.0.5 |
| 4 | power-manager-headers | | 1.0.4 |
| 5 | devicesettings-hal-headers | | 6.0.1 |
| 6 | tvsettings-hal-headers | | 3.1.0 |
|   |   |  |  |
|   | RDK HAL Headers (RDKE github) |  |  |
|   |   |  |  |
| 7 | iarmmgrs-hal-headers | | 1.1.10 |
| 8 | closedcaption-hal-headers | | 1.0.0 |
| 9 | iarmbus-headers | | 1.0.1 |
| 10 | rdk-gstreamer-utils-headers | | 2.0.2 |

### Middleware and Production image Integration Dependencies

- This is a monthly release from VL with integrated with latest OSS 4.13.0

- Refer to the [Common meta layer versions for integration](#common-meta-layer-versions-for-integration) section to **keep meta repo versions consistent** for Middleware and ImageAssembler

- For full-stack validation, **upper layer versions** listed in [Versions of other layers  used for testing](#versions-of-other-layers--used-for-testing), were used.

Image Assembler PR Reference: **<https://github.com/rdk-e/rdke-assembler-manifest/pull/1486>**

Roll Back Dependencies: **None**

New RFC Support (RFC/TR-181): **None**

&nbsp;

### Tickets Summary

#### Layer Tickets Filter

  - [XIONE_RTK_8.7-1.0.0](https://ccp.sys.comcast.net/browse/RDKEVD-8346?jql=project%20%3D%20RDKEVD%20AND%20fixVersion%20%3D%20XIONE_RTK_8.7-1.0.0)

#### Product Tickets Filter

  - [VL_X8.7-1.0.0](https://ccp.sys.comcast.net/browse/XIONE-18955?jql=labels%20%3D%20VL_X8.7-1.0.0)

#### Epic Tickets List

-

&nbsp;

## Testing

### High Level Vendor Memory Usage Data

- Testing details are available in [RDKEVD-8346](https://ccp.sys.comcast.net/browse/RDKEVD-8346).

### Fullstack Image Testing

- Testing details are available in [RDKEVD-8346](https://ccp.sys.comcast.net/browse/RDKEVD-8346).

#### New Issues

- [new issues found](https://ccp.sys.comcast.net/browse/XIONE-19011?jql=labels%20%3D%20RTK_VL_8.7-1.0.0)

## Build instructions

- Steps to check out and build the vendor layer project [https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project](https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project)
- Steps to check out and build the image assembler project [https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler](https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler)


### Boot Command

#### Copy image to device /mnt/usb or /opt partitions or connect and mount USB having the image binn- Execute FlashApp command
- Move to directory containing the image
- FlashApp \<dirname\> \<imagename\>
- eg. FlashApp /mnt/usb/SKXI11ADS_8.7-1.0.0_VENDOR_DEV.bin

#### USB Flash Method using xboot prompt
- Copy the image `"SKXI11ADS_8.7-1.0.0_VENDOR_DEV.bin"` to the usb and connect to the STB
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

- Created the `"vendor test image"` `" SKXI11ADS_8.7-1.0.0_VENDOR_DEV.bin"` for XiOne-UK and for all other variants as well using the vendor layer jenkins job `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Vendor-Release-Build/"`
- Successfully booted the `"vendor test image"` and obtained the shell prompt.
- Verified vendor layer services up and running
- Verified IP acquisition via Ethernet
- Played clear AV with gst-play-1.0.
- Verified image flashing using FlashApp

Testing details in [RDKEVD-8346](https://ccp.sys.comcast.net/browse/RDKEVD-8346)

## Components details in 'packagegroup-vendor-layer'

 Components which are prebuilt or the ones which installs config files or scripts from meta layer have SRCREV marked as NA

| # | Vendor layer Component | New PV-PR (8.7-1.0.0) | PV-PR in Previous Release (9.7.1)| New SRCREV | SRCREV in Previous Release (9.7.1)| Diff |
|---|------------------------------------------|-------------|----------------------|-----------|------------|-----|
| 1 | libdrm | | 2.4.110-r0 |  | NA |  |
| 2 | cairo | | 1.16.0-r1 |  | NA |  |
| 3 | libepoxy | | 1.5.9-r1 |  | NA |  |
| 4 | python3-pygobject | | 3.34.0-r0 |  | NA |  |
| 5 | pango | | 1.44.7-r0 |  | NA |  |
| 6 | librsvg | | 2.40.21-r0 |  | NA |  |
| 7 | python3-pycairo | | 1.19.0-r0 |  | NA |  |
| 8 | vulkan-tools | | ERROR-r0 |  | NA |  |
| 9 | vulkan-loader | | ERROR-r0 |  | NA |  |
| 10 | vulkan-headers | | ERROR-r0 |  | NA |  |
| 11 | vulkan-validationlayers | | ERROR-r0 |  | NA |  |
| 12 | spirv-tools | | ERROR-r0 |  | NA |  |
| 13 | spirv-headers | | ERROR-r0 |  | NA |  |
| 14 | xsign | | 4.0.1-r2 |  | NA |  |
| 15 | mfrlib-hal-xione | | 8.1.5-r0 |  | NA |  |
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
| 29 | sky-led-app | | 1.0.0-r0 |  | NA |  |
| 30 | audiocapturemgr-vendor | | 1.0.0-r0 |  | a063707 |  |
| 31 | displayinfo-soc | | 1.0.0-r0 |  | e7b2c24 |  |
| 32 | ffmpeg | | ERROR-r1 |  | NA |  |
| 33 | media-utils-soc-realtek | | 1.0.6-2.1.4-r0 |  | f55db2b |  |
| 34 | closedcaption-hal-realtek | | 1.0.0-3.1.0-r0 |  | ee52d85 |  |
| 35 | hdmicec-hal-realtek | | 1.4.0-3.0.2-r0 |  | 6b18674 |  |
| 36 | rdk-gstreamer-utils-platform | | 2.0.2-2.0.1 |  | 2a679f2 |  |
| 37 | devicesettings-hal-realtek | **6.0.1-4.3.1-r0** | 6.0.1-4.3.0-r0 |  |  |  |
| - |  - devicesettings-hal-realtek_devicesettingssocrealtek | |  | **4.3.1** | 4.3.0 |  [](https://github.com/rdk-e/meta-vendor-xione-realtek-release) |
| - |  - devicesettings-hal-realtek_devicesettingsskyes1 | |  | **2.3.0** | 2.2.0 |  [](https://github.com/rdk-e/meta-vendor-xione-realtek-release) |
| 38 | deepsleepmgr-hal-realtek | | 1.0.5-1.1.4-r0 |  | 0267f70 |  |
| 39 | pwrmgr-hal-realtek | | 1.0.4-1.0.2-r0 |  | aae77b2 |  |
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
| 77 | westeros-simpleshell | **2.1.2-r0** | 2.1.1-r0 | **2.1.2** | 2.1.1 |  [](https://github.com/rdk-e/meta-vendor-xione-realtek-release) |
| 78 | westeros-simplebuffer | **2.1.2-r0** | 2.1.1-r0 | **2.1.2** | 2.1.1 |  [](https://github.com/rdk-e/meta-vendor-xione-realtek-release) |
| 79 | westeros-soc | **2.1.2-r0** | 2.1.1-r0 | **2.1.2** | 2.1.1 |  [](https://github.com/rdk-e/meta-vendor-xione-realtek-release) |
| 80 | westeros-sink | | 2.1.1-r0 |  |  |  |
| - |  - westeros-sink_westeros | |  |  | 2.1.1 |  |
| - |  - westeros-sink_realtek | |  |  | 3.2.0 |  |
| 81 | westeros | **2.1.2-r0** | 2.1.1-r0 | **2.1.2** | 2.1.1 |  [](https://github.com/rdk-e/meta-vendor-xione-realtek-release) |
| 82 | essos | **2.1.2-r0** | 2.1.1-r0 | **2.1.2** | 2.1.1 |  [](https://github.com/rdk-e/meta-vendor-xione-realtek-release) |
| 83 | essosrmgr | | 1.99-r0 |  | d51dc56 |  |
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
| 98 | widevinecdmi | | 1.4.2-r0 |  | 11d6937 |  |
| 99 | qca6390-mod-wifi | | 1.0.3-r1 |  | NA |  |
| 100 | flashapp | | 7.1-r0 |  | NA |  |
| 101 | sky-led-driver | | 2.0.0-r0 |  | f97a795 |  |
| 102 | stark-mod-mali | | 5.10-r0 |  | 753bb6b4d998f1dacee966c751537ea86704f718 & 753bb6b4d998f1dacee966c751537ea86704f718 |  |
| 103 | rtkv1sink | | 2.0.0-r1 |  | 67bdf5b |  |
| 104 | platform-lib | | 2.6.0-r4 |  | NA |  |
| 105 | rtk-audio-service | | 3.3.0-r0 |  | ${PV} |  |
| 106 | hdmiservice | | 4.4.0-r0 |  | ${PV} |  |
| 107 | rtkpcrclksink | | 2.0.0-r0 |  | c8272d9 |  |
| 108 | blewakeupenabler | | 1.6.1-r0 |  | 2fcdd9f |  |
| 109 | hrot-tl | | 1.0.0-r0 |  | NA |  |
| 110 | ctrlm-irdb-plugin | | 1.2.0-r0 |  | 1.2.0 |  |
| 111 | ctrlm-irdb-uei | | 2.2.0-r1 |  | NA |  |
| 112 | ctrlm-irdb-ruwido | | 2.8.0-r1 |  | NA |  |
| 113 | ctrlm-rf4ce-hal | | 1.0.0-r0 |  | NA |  |
| 114 | ctrlm-hal-rf4ce-prebuilt | | 1.0.0-r0 |  | NA |  |
| 115 | qorvo-mod-rf4ce | | 2.11-r0 |  | NA |  |
| 116 | linux-libc-headers | | 5.16-r1 |  | NA |  |
| 117 | packagegroup-kernel-modules | | 5.10.169-r1 |  | NA |  |
| 118 | linux-stark | | 5.10.169-r1 |  |  |  |
| - |  - linux-stark | |  |  | 6884f4e |  |
| - |  - linux-stark_android-kernel | |  |  | 0caf815 |  |
| - |  - linux-stark_FORMAT | |  |  | android-kernel_rtk-files |  |
| 119 | rtkaudiosink | | 3.2.0-r0 |  | ${PV} |  |
| 120 | mfi-ree | | 2.0.0-r0 |  | 4941717 |  |
| 121 | sysint-oem | | 2.0.0-r0 |  | e89cfe7 |  |
| 122 | apparmor-vendor | | 3.3.0-r0 |  | 973fc2f |  |
| 123 | directfb | | 1.7.7-r0 |  | NA |  |
| 124 | realtek-tools-native | | 1.0.0-r0 |  | NA |  |
| 125 | rtk-tee-native | | 1.0.0-r0 |  | NA |  |
| 126 | rtl8852b-mod-bt | | 2.5.0-r0 |  | NA |  |
| 127 | rtl8852be-mod-wifi | | 2.7.0-r0 |  | NA |  |
| 128 | rtkhciattach | | 1.0.0-r0 |  | NA |  |
| 129 | rtl8852b-mod-bt-app | | 1.8.0-r0 |  | NA |  |
| 130 | product-firmware-pb | | 1.4.0-r0 |  | NA |  |
| 131 | testagentlib | | 3.0.2-r1 |  |  |  |
| - |  - testagentlib_testagentlib | |  |  | b8eb1f8 |  |
| - |  - testagentlib_xione_factory | |  |  | 6281804 |  |
| 132 | testagent-loader | | 2.3.0-r0 |  | NA |  |
| 133 | libbinder | | 1.0.0-r1 |  | 0f7a23b |  |
| 134 | aidl-generator-native | | 1.0.0-r1 |  | 0f7a23b |  |
| 135 | flash-aidl | | 1-r0 |  | ddcceef |  |
| 136 | image-hal-service | | 1.0.0-r0 |  | 7eb82c9 |  |
| 137 | platform-imagehal-lib | | 1.0.0-r0 |  | NA |  |
| 138 | asappsserviced-vendor-conf | **1.7.0-r0** | 1.5.0-r0 | **1.7.0** | 1.5.0 |  [](https://github.com/rdk-e/meta-vendor-xione-realtek-release) |
| 139 | rtk-resource-manager | | 2.0.0-r0 |  | 281c271 |  |
| 140 | rtk-install-lib | | 1.0.0-r0 |  | NA |  |
| 141 | mount-tmp-data | | 1.0.0-r0 |  | NA |  |






## Consolidated change list from vendor layer repositories

## Changes in meta repositories

## [meta-rdk-soc-realtek](https://github.com/rdk-e/meta-rdk-soc-realtek/blob/main/CHANGELOG.md)

- RDKEVD-8346: [RDK-E][XiOne,ES1-RTK]Provide the XiOne,ES1 VL release 8.7-1.0.0. [1e218d1](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/1e218d119e92432f9041ead66368dbfa0bced464)
- Merge branch 'main' into release/4.6.1 [3028693](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/30286930a78644fe326b2634cd3bc3a3db2e54d1)
- RDKEVD-8346: [RDK-E][XiOne,ES1-RTK]Provide the XiOne,ES1 VL release 8.7-1.0.0 [b47ace7](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/b47ace76a2fb913084eb5ccc9cc4341e4b123443)
- RDKEVD-8153: [RTK] update tee supplicant service target level ( [#245](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/245))
- RDKEVD-2277: Integrate vkmark into RDKE build ( [#238](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/238))

## [meta-oem-realtek-stream](https://github.com/rdk-e/meta-oem-realtek-stream/blob/main/CHANGELOG.md)

- RDKEVD-8346: [RDK-E][XiOne,ES1-RTK]Provide the XiOne,ES1 VL release 8.7-1.0.0 [2c7b586](https://github.com/rdk-e/meta-oem-realtek-stream/commit/2c7b5867f8e48d1941cf3afbdaef6707883c8628)
- RDKEVD-8346: [RDK-E][XiOne,ES1-RTK]Provide the XiOne,ES1 VL release 8.7-1.0.0 [211c9ea](https://github.com/rdk-e/meta-oem-realtek-stream/commit/211c9ea64fbba64347ebe14d62e25ce3a1866590)
- Merge pull request  [#849](https://github.com/rdk-e/meta-oem-realtek-stream/pull/849) from rdk-e/feature/RDKEVD-8282
- Merge pull request  [#861](https://github.com/rdk-e/meta-oem-realtek-stream/pull/861) from rdk-e/release/8.7-X1.0.0_E1.0.0
- Merge branch 'release/8.7-X1.0.0_E1.0.0' [1a8ad26](https://github.com/rdk-e/meta-oem-realtek-stream/commit/1a8ad269168bbe1e580d92a793dffb78c3a34567)
- RDKEVD-8346: [RDK-E][XiOne,ES1-RTK]Provide the XiOne,ES1 VL release 8.7-1.0.0 [896340f](https://github.com/rdk-e/meta-oem-realtek-stream/commit/896340f54de9054217e1c248543c6e823475bf4b)
- Merge pull request  [#857](https://github.com/rdk-e/meta-oem-realtek-stream/pull/857) from rdk-e/feature/RDKEVD-8063-update
- RDKEVD-8063: g_HdmiHotplugState should be update even without callback [9545c0a](https://github.com/rdk-e/meta-oem-realtek-stream/commit/9545c0ace87ac33360995cbcf1c993b9591a92bb)
- Merge pull request  [#851](https://github.com/rdk-e/meta-oem-realtek-stream/pull/851) from rdk-e/feature/RDKEVD-8153_tee_srv_target_change2
- RDKEVD-8153: [RTK] update tee supplicant service target level [b3095dc](https://github.com/rdk-e/meta-oem-realtek-stream/commit/b3095dc3f6f65ebf21325c4604b4217caf13c6be)
- RDKEVD-8282: Fix incorrect logging of vendor Bluetooth address [859e2fc](https://github.com/rdk-e/meta-oem-realtek-stream/commit/859e2fce24dd889e7cb9f1ab9c0c9ff272bd8f50)
- Merge pull request  [#839](https://github.com/rdk-e/meta-oem-realtek-stream/pull/839) from rdk-e/RDKEMW-20261_Change_the_default_value_for_Download_On_Demand
- Reason for change: Enable Download on demand for all devices [e45c687](https://github.com/rdk-e/meta-oem-realtek-stream/commit/e45c6877c20d57b079b3a1c7401b6e0f172c98a5)
- Updated asappsserviced-vendor-conf to release1.7.0 [e61f5a6](https://github.com/rdk-e/meta-oem-realtek-stream/commit/e61f5a66c4af93df8f7393151c67fc5335aad11e)
- Merge pull request  [#836](https://github.com/rdk-e/meta-oem-realtek-stream/pull/836) from rdk-e/feature/RDKOSS-615
- Merge pull request  [#848](https://github.com/rdk-e/meta-oem-realtek-stream/pull/848) from rdk-e/develop
- Merge pull request  [#844](https://github.com/rdk-e/meta-oem-realtek-stream/pull/844) from rdk-e/feature/RDKEVD-7992
- Merge pull request  [#834](https://github.com/rdk-e/meta-oem-realtek-stream/pull/834) from rdk-e/feature/RDKEVD-8074
- Merge branch 'develop' into feature/RDKEVD-8074 [297bd85](https://github.com/rdk-e/meta-oem-realtek-stream/commit/297bd85de4e3c991c9f2ae3dc505c8f3deff7eca)
- RDKEVD-8151/RDKEVD-5218: Deepsleep SiS WDT mitigation [449a2ff](https://github.com/rdk-e/meta-oem-realtek-stream/commit/449a2ff9b003cc8d6272652dc818f8fba902f14e)
- Merge pull request  [#843](https://github.com/rdk-e/meta-oem-realtek-stream/pull/843) from rdk-e/feature/RDKEVD-4566-3006-1
- RDKEVD-4566:Move the product configuration to product folder. [10e6eda](https://github.com/rdk-e/meta-oem-realtek-stream/commit/10e6edaa4e89921ca1931fe057f31f3c9f67967c)
- RDKEMW-20261: Change the default value for Download On Demand [ebc3472](https://github.com/rdk-e/meta-oem-realtek-stream/commit/ebc34727940b8b5a146a78728ef065288470c372)
- Apply suggestions from code review [75c0f1b](https://github.com/rdk-e/meta-oem-realtek-stream/commit/75c0f1bcf077dbfcdd56faa7262ea74081e1cf41)
- Apply suggestions from code review [e50ed2b](https://github.com/rdk-e/meta-oem-realtek-stream/commit/e50ed2bd4b85d6692ce01e26f7711c7420931165)
- Merge pull request  [#802](https://github.com/rdk-e/meta-oem-realtek-stream/pull/802) from rdk-e/feature/RDKEVD-4743-install-gstPerfTestApp-on-vendor-test-image
- RDKEVD-4743: Install gstperftestapp on debug image variants only [c83cf33](https://github.com/rdk-e/meta-oem-realtek-stream/commit/c83cf334bda4de2c0423d3034b4cc75c52fe85a6)
- RDKEVD-4743: Install gstPerfApp on vendor-test-image for L4 Tests [855716a](https://github.com/rdk-e/meta-oem-realtek-stream/commit/855716a9820e53876e79a87cf9738086b65c1f05)
- Merge pull request  [#835](https://github.com/rdk-e/meta-oem-realtek-stream/pull/835) from rdk-e/develop
- RDKEVD-8074:XiOne-Realtek Audio profile caps yaml file. [a49eb1e](https://github.com/rdk-e/meta-oem-realtek-stream/commit/a49eb1ebf74b4f9fd00cc7137557aa2884d094e4)
- Merge pull request  [#831](https://github.com/rdk-e/meta-oem-realtek-stream/pull/831) from rdk-e/feature/RDKEVD-6285_ethernet_interface_flap_issue_dev
- Update rdke-vendor-bbmask.inc [ae12bdc](https://github.com/rdk-e/meta-oem-realtek-stream/commit/ae12bdc89b6af54206e939a5d59897503ccb809a)
- Update bblayers.conf.sample [2609d15](https://github.com/rdk-e/meta-oem-realtek-stream/commit/2609d1508aef96206773eeeaa112944b8d48bfe6)
- Update rdke-vendor-bbmask.inc [1d7c3f6](https://github.com/rdk-e/meta-oem-realtek-stream/commit/1d7c3f69fee17bc13947d457a8df3d7ac6bb32b5)
- Merge tag 'X9.7.1_E1.8.1' into develop [39e8278](https://github.com/rdk-e/meta-oem-realtek-stream/commit/39e82787d59935ccc2e7e71c0d2e67c17ca46133)
- RDKEVD-6285_ethernet_interface_flap_issue [d6d61eb](https://github.com/rdk-e/meta-oem-realtek-stream/commit/d6d61eb110e8bdecfd0f784d425e64eb8fdd29ff)

## [meta-rdk-vendor-realtek-common](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/blob/main/CHANGELOG.md)

- RDKEVD-8346: [RDK-E][XiOne,ES1-RTK]Provide the XiOne,ES1 VL release 8.7-1.0.0 [f8e64d6](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/f8e64d67a7f9991d3ea2f9cecc88ef9f849df8f8)
- RDKEVD-8346: [RDK-E][XiOne,ES1-RTK]Provide the XiOne,ES1 VL release 8.7-1.0.0 [90729e3](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/90729e33262f0f162df238e17b9d8053cb4ce8b3)
- Merge pull request  [#115](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/pull/115) from rdk-e/RDKOSS-615
- Merge pull request  [#114](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/pull/114) from rdk-e/develop
- Merge pull request  [#103](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/pull/103) from rdk-e/feature/RDKEVD-2277-vkmark
- Merge pull request  [#112](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/pull/112) from rdk-e/develop
- Merge pull request  [#111](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/pull/111) from rdk-e/feature/RDKEVD-8027_voltage_reg_fix
- RDKEVD-8027: CPU voltage result of testagenthal library is beyond the upper threshold limit Reason for change: Adding voltage regulator fix in mfrlib [464e539](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/464e539234858e4f278b0e93da7d0658ec1b6c73)
- Update packagegroup-common-vendor-layer.bb [97c40e6](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/97c40e6d6a7f64d212193584448f843d83073fb2)
- Update vendor_common_pkg_versions.inc [78bf3b2](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/78bf3b2331dad26f4797ea0b4fa2dc1ee053e4f3)
- Update vendor_common_pkg_versions.inc [4ea6ccc](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/4ea6ccc620609aa2703e0a8354b696a4c3d60beb)
- Update vendor_common_pkg_versions.inc [f97a742](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/f97a7424f5122bc36f993ca5cf8f3694a4b29662)
- Merge pull request  [#110](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/pull/110) from rdk-e/develop
- Update vendor_common_pkg_versions.inc [2826dbb](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/2826dbb11d8d9c8e7febaccd1967fa0954d3453b)
- Update vendor_common_pkg_versions.inc [fd2d7db](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/fd2d7db287789f31e8342011d5eea30d47cad562)
- RDKEVD-2277: Modifying layer extension for assimp [b3f0a09](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/b3f0a095df19bbec2de0e0bfc86a7d4d4f8a50f0)
- Merge tag 'X9.7.0_E1.8.0' into develop [312ad8a](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/312ad8a3e74451f16ebb9c845888e180113611d8)
- Merge pull request  [#90](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/pull/90) from rdk-e/develop
- Merge pull request  [#85](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/pull/85) from rdk-e/develop
- Update vendor_common_pkg_versions.inc [13510d7](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/13510d7c918a1d568d0e63eb094c61a41220cd44)
- Update vendor_common_pkg_versions.inc [f5b383f](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/f5b383f49b94524e6e5cada333ce5b700564de6c)
- Update vendor_common_pkg_versions.inc [10fe8d3](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/10fe8d36a8cb0e0362b3076d5aa9d39042dfeaca)
- Update packagegroup-common-vendor-layer.bb [3dc70fe](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/3dc70fe6eb234b7e7918164f413c14931f81981d)

## [meta-oss-vendor-realtek](https://github.com/rdk-e/meta-oss-vendor-realtek/blob/main/CHANGELOG.md)

- RDKEVD-8346: [RDK-E][XiOne,ES1-RTK]Provide the XiOne,ES1 VL release 8.7-1.0.0. [3ff90e7](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/3ff90e75688c1830fe1511ae287e4a683c1a4f80)
- RDKEVD-8346: [RDK-E][XiOne,ES1-RTK]Provide the XiOne,ES1 VL release 8.7-1.0.0 [75654d9](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/75654d965b74b6d4c1acca79f0964db0df1efb72)
- RDKEVD-7992: Update westeros-June release ( [#162](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/162))
- 4.4.0 [c098496](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/c09849695eab740eb660b4b9c1fbb257f19410ad)



## Changes in component repositories


