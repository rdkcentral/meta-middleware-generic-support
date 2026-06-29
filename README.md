# Vendor Layer Release Notes

XiOne UK Stream Puck RDKE Vendor Layer Release Notes

---

|Summary|Content|
|---|----|
|Classification|Confidential|
|Date|26 Jun 2026|
|Author| Auto Generated |

---

### Build Information
|  |  |
|---------------|---------------|
| Manifest location | <https://github.com/rdk-e/vendor-manifest-xione-stream> |
| Manifest Tag | 9.7.1 |
| Manifest Name | [xione-realtek-streambox.xml](https://github.com/rdk-e/vendor-manifest-xione-stream/blob/9.7.1/xione-realtek-streambox.xml) |
| Machine Name | xione-uk |
| Platforms supported | Realtek 1319 |
| Yocto Version | kirkstone |
| Release Test Ticket | [RDKEVD-7871](https://ccp.sys.comcast.net/browse/RDKEVD-7871) |

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

This release is from the vendor [RDKEVD-7871](https://ccp.sys.comcast.net/browse/RDKEVD-7871). This release will provide a versioned "meta-vendor-xione-realtek-release" that will be used by the middleware as well as image assembler.

- XiOne UK Stream Puck RDKE Vendor Layer Release to roll out below fixes,

- [Scope of the release 9.7.1](https://ccp.sys.comcast.net/issues/?jql=project+%3D+RDKEVD+AND+fixVersion+%3D+XIONE_REALTEK_VL_9.7.1)

- For full list for changes please refer the [Consolidated change list from vendor layer repositories](#consolidated-change-list-from-vendor-layer-repositories) section of release notes.

## Release layer and components

### Vendor Release Components

| Vendor Release Components | New Version (9.7.1) | Version in Previous Release (9.6.1) |
|------------|---------|------------------------------------|
| Kernel & DTB | | 4.9.119.01-r9  | |
| packagegroup-vendor-layer | 9.7.1-r0 | 9.6.1-r0 | [9.6.1....9.7.1](https://github.com/rdk-e/meta-oem-realtek-stream/compare/9.6.1...9.7.1) |
| packagegroup-common-vendor-layer | X9.7.0_E1.8.0 | X9.5.1_E1.3.1-r0 |  |

### Stack layer

| Release meta Layer | Tag |
|------|------|
| [meta-vendor-xione-realtek-release](https://github.com/rdk-e/meta-vendor-xione-realtek-release) | [9.7.1](https://github.com/rdk-e/meta-vendor-xione-realtek-release/tree/9.7.1) |

#### Artifactory Location for IPKs

| Product | Location |
|------------|---------|
| XiOne-UK | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-uk-rel/9.7.1/xione-uk/ipks/debug |
| XiOne-DE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-de-rel/9.7.1/xione-de/ipks/debug |
| XiOne-Alpaca-De | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-alpaca-de-rel/9.7.1/xione-alpaca-de/ipks/debug |
| XOE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xfinity-stream-box-rel/9.7.1/xfinity-stream-box/ipks/debug |
| WNC Xfinity | https://partners.artifactory.comcast.com/ui/repos/tree/General/wnc-xfinity-stream-box-rel/9.7.1/wnc-xfinity-stream-box/ipks/debug |
| Xione-IT | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-it-rel/9.7.1/xione-it/ipks/debug |
| RTK-Alpaca-IT | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-alpaca-it-rel/9.7.1/xione-alpaca-it/ipks/debug |

#### OSS Consumption

- We have supported New OSS consumption from 9.0.0 Vendor release onwards. Please find the VL OSS IPK path as below
- OSS Version 4.13.0.

| Product  | Location |
|------------|---------|
| XiOne-UK | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-uk-rel/9.7.1/xione-uk/rdk-arm7ve-oss-vendor/ipks/debug |
| XiOne-DE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-de-rel/9.7.1/xione-de/rdk-arm7ve-oss-vendor/ipks/debug |
| XiOne-Alpaca-De | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-alpaca-de-rel/9.7.1/xione-alpaca-de/rdk-arm7ve-oss-vendor/ipks/debug |
| XOE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xfinity-stream-box-rel/9.7.1/xfinity-stream-box/rdk-arm7ve-oss-vendor/ipks/debug |
| WNC Xfinity | https://partners.artifactory.comcast.com/ui/repos/tree/General/wnc-xfinity-stream-box-rel/9.7.1/wnc-xfinity-stream-box/rdk-arm7ve-oss-vendor/ipks/debug |
| XiOne IT | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-it-rel/9.7.1/xione-it/rdk-arm7ve-oss-vendor/ipks/debug |
| XiOne Alpaca IT | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-alpaca-it-rel/9.7.1/xione-alpaca-it/rdk-arm7ve-oss-vendor/ipks/debug |

### Common meta layer versions for integration

| Meta Repo |  Version |
|-----------|-------------|
| meta-rdk-halif-headers | 4.1.4 |
| meta-rdk-cpc-halif-headers | 1.0.0 |
| meta-rdk-oss-reference | 4.13.0 |
| meta-rdk-oss-ext | 1.8.0 |
| meta-product-xione | 3.7.0 |
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
| meta-middleware-release | 8.6.2.0 |
| meta-application-release | 4.56.0 |
| meta-cspc-security-release | 4.0.7 |


### Meta Repos

#### Meta repos maintained by layers layer

| Meta Repo | New Version (9.7.1) | Version in Previous Release (9.6.0) | ChangeList |
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

| Meta Repo | New Version (9.7.1) | Version in Previous Release (9.6.1) | ChangeList |
|------------|---------|------------------------------------|--------------|
| **buildscripts** ||||
| build-scripts |  | 1.0.2 | |
| | | | |
| **buildsupport** ||||
| meta-image-support |  | 4.2.4 | |
| meta-stack-layering-support |  **4.0.2** | 3.3.1 | [3.3.1...4.0.2](https://github.com/rdkcentral/meta-stack-layering-support/compare/3.3.1...4.0.2) |
| | | | |
| **oe** ||||
| meta-openembedded |  | rdk-4.0.0 | |
| poky |  **rdk-4.7.0** | rdk-4.6.0 | [rdk-4.6.0...rdk-4.7.0](https://github.com/rdkcentral/poky/compare/rdk-4.6.0...rdk-4.7.0) |
| meta-python2 |  | rdk-4.0.0 | |
| | | | |
| **extention** ||||
| meta-rdk-oss-ext |  **1.8.0** | 1.7.0 | [1.7.0...1.8.0](https://github.com/rdk-e/meta-rdk-oss-ext/compare/1.7.0...1.8.0) |
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
| | | | |
| **products** ||||
| meta-product-xione |  **3.7.0** | 3.5.0 | [3.5.0...3.7.0](https://github.com/rdk-e/meta-product-xione/compare/3.5.0...3.7.0) |
| | | | |
| **binder** ||||
| meta-binder |  | 1.0.0 | |
| | | | |
| **release** ||||
| meta-vendor-xione-realtek-release |  **9.7.1** | 9.6.1 | [9.6.1...9.7.1](https://github.com/rdk-e/meta-vendor-xione-realtek-release/compare/9.6.1...9.7.1) |
| | | | |

### Interface versions

| # | HAL Interface Header (rdkcentral github) | New Version (9.7.1) | Version from Previous Release (9.6.1)|
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

Image Assembler PR Reference: **<https://github.com/rdk-e/rdke-assembler-manifest/pull/1440>**

Roll Back Dependencies: **None**

New RFC Support (RFC/TR-181): **None**

&nbsp;

### Tickets Summary

#### Layer Tickets Filter

  - [XIONE_REALTEK_VL_9.7.1](https://ccp.sys.comcast.net/issues/?jql=project+%3D+RDKEVD+AND+fixVersion+%3D+XIONE_REALTEK_VL_9.7.0)


#### Product Tickets Filter

-

#### Epic Tickets List

-

&nbsp;

## Testing

### High Level Vendor Memory Usage Data

- Testing details are available in [RDKEVD-7871](https://ccp.sys.comcast.net/browse/RDKEVD-7871).

### Fullstack Image Testing

- Testing details are available in [RDKEVD-7871](https://ccp.sys.comcast.net/browse/RDKEVD-7871).

#### New Issues

- [new issues found](https://ccp.sys.comcast.net/issues/?jql=labels%20%3D%20VL_9.7.1)

## Build instructions

- Steps to check out and build the vendor layer project [https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project](https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project)
- Steps to check out and build the image assembler project [https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler](https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler)


### Boot Command

#### Copy image to device /mnt/usb or /opt partitions or connect and mount USB having the image binn- Execute FlashApp command
- Move to directory containing the image
- FlashApp \<dirname\> \<imagename\>
- eg. FlashApp /mnt/usb/SKXI11ADS_9.7.1_VENDOR_DEV.bin

#### USB Flash Method using xboot prompt
- Copy the image `"SKXI11ADS_9.7.1_VENDOR_DEV.bin"` to the usb and connect to the STB
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

- Created the `"vendor test image"` `" SKXI11ADS_9.7.1_VENDOR_DEV.bin"` for XiOne-UK and for all other variants as well using the vendor layer jenkins job `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Vendor-Release-Build/"`
- Successfully booted the `"vendor test image"` and obtained the shell prompt.
- Verified vendor layer services up and running
- Verified IP acquisition via Ethernet
- Played clear AV with gst-play-1.0.
- Verified image flashing using FlashApp

Testing details in [RDKEVD-7871](https://ccp.sys.comcast.net/browse/RDKEVD-7871)

## Components details in 'packagegroup-vendor-layer'

 Components which are prebuilt or the ones which installs config files or scripts from meta layer have SRCREV marked as NA

| # | Vendor layer Component | New PV-PR (9.7.1) | PV-PR in Previous Release (9.6.1)| New SRCREV | SRCREV in Previous Release (9.6.1)| Diff |
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
| 37 | devicesettings-hal-realtek | | 6.0.1-4.3.0-r0 |  |  |  |
| - |  - devicesettings-hal-realtek_devicesettingssocrealtek | |  |  | 4.3.0 |  |
| - |  - devicesettings-hal-realtek_devicesettingsskyes1 | |  |  | 2.2.0 |  |
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
| 77 | westeros-simpleshell | | 2.1.1-r0 |  | 2.1.1 |  |
| 78 | westeros-simplebuffer | | 2.1.1-r0 |  | 2.1.1 |  |
| 79 | westeros-soc | | 2.1.1-r0 |  | 2.1.1 |  |
| 80 | westeros-sink | | 2.1.1-r0 |  |  |  |
| - |  - westeros-sink_westeros | |  |  | 2.1.1 |  |
| - |  - westeros-sink_realtek | |  |  | 3.2.0 |  |
| 81 | westeros | | 2.1.1-r0 |  | 2.1.1 |  |
| 82 | essos | | 2.1.1-r0 |  | 2.1.1 |  |
| 83 | essosrmgr | | 1.99-r0 |  | d51dc56 |  |
| 84 | make-mod-scripts | | 1.0-r0 |  | NA |  |
| 85 | sky-fpbutton-driver | | 3.0.0-r0 |  | acd582d |  |
| 86 | splashscreen-viewer | | 2.0.0-r0 |  | 41e70a2 |  |
| 87 | rtk-tee | | 1.0.0-r0 |  | NA |  |
| 88 | secapi-rtk | | 2.1.0-r2 |  | 95b6bd4 |  |
| 89 | [secapi3-rtk](#secapi3-rtk) | **3.3.1-r0** | 3.3.0-r0 | **f7ed818** | 570df40 |  [570df40...f7ed818](https://github.com/rdk-e/secapi3-soc-realtek-cpc/compare/570df4041c863710c747ec9640d5dec1bbc09e35...f7ed81834c894d68b24c691cb6cc157c33147dfb) |
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
| 108 | blewakeupenabler | **1.6.1-r0** | 1.6.0-r0 | **2fcdd9f** | af84c33 |  [](https://github.com/rdk-e/secapi3-soc-realtek-cpc) |
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
| 138 | asappsserviced-vendor-conf | | 1.5.0-r0 |  | 1.5.0 |  |
| 139 | rtk-resource-manager | | 2.0.0-r0 |  | 281c271 |  |
| 140 | rtk-install-lib | | 1.0.0-r0 |  | NA |  |
| 141 | mount-tmp-data | | 1.0.0-r0 |  | NA |  |




## Consolidated change list from vendor layer repositories

## Changes in meta repositories

## [meta-rdk-auxiliary](https://github.com/rdkcentral/meta-rdk-auxiliary/blob/main/CHANGELOG.md)

- Merge branch 'release/1.9.0' [aae3c71](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/aae3c7105f3788c76c0f70242012be223b03707d)
- 1.9.0 test release change log updates [430dd06](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/430dd06121ae1fc171620e11a5e384fee4f9dd46)
- Merge tag '1.8.3' into develop [2eba527](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/2eba5278476f508d39b2cc6f6028bbc44b3d34a8)
- Merge branch 'release/1.8.3' [2390ded](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/2390ded643ae79f7b7baf6107886ac4ced2f6ea1)
- 1.8.3 test release change log updates [bb8cb17](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/bb8cb1726c900208a29c85d6c0c9d2b152f99dab)
- RDKEMW-10733: mauth-certs.service failure ( [#153](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/153))
- RDKOSS-891: embed-source-metadata: emit unnamed SRCREV alongside named pairs ( [#154](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/154))
- Merge pull request  [#152](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/152) from rdkcentral/topic/RDKOSS-891
- embed-source-metadata: skip name=rev pairs when SRCREV_name is unset [df2678e](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/df2678e58f817de261d8101f27935c5a852d6012)
- manifest-srcuri,embed-source-metadata: address round-3 Copilot review comments [cc7b419](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/cc7b4196c8c5c084d728d24ac7c6d5c3fab735a1)
- manifest-srcuri, embed-source-metadata: address Copilot review comments (round 2) [8043263](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/80432632a739efa3971fc82f2796c28691fdff12)
- manifest-srcuri.bbclass: address blackduck failure [1ae7718](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/1ae7718b7a6fe73cab45362cdb675d35d32d7bce)
- manifest-srcuri.bbclass: address blackduck failure [c61c1d8](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/c61c1d8c721dff215917d75cb4652c61ae348a36)
- manifest-srcuri, embed-source-metadata: address Copilot review comments [2ea168b](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/2ea168bbaa33e5a7fe27c81a66599724b67570cf)
- RDKOSS-891:enrich rootfs.manifest file [7ce62e9](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/7ce62e9a428e2c4abd775760f718567c43a0c2db)
- Merge pull request  [#144](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/144) from rdkcentral/sbarre01-patch-1
- Update CODEOWNERS [c465e18](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/c465e18cf7da04a63d9ce2ca91f3f7c1da2a3b41)
- Update logrotate_config.bbclass ( [#141](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/141))
- RDKEMW-14646: Add fdo bbclass ( [#140](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/140))
- Merge pull request  [#138](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/138) from rdkcentral/RDKEMW-13335
- Apply suggestions from code review [15a60b4](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/15a60b441c597d9e9d1d7e01d92fe71091f08b86)
- Update post-rootfs-hooks.bbclass [f8b845c](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/f8b845c37e14404ba791696db122886531b05273)
- Apply suggestions from code review [4ba0c9d](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/4ba0c9d3fcb8fee7168da40db3727f8dc8ee7aae)
- Merge pull request  [#137](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/137) from rdkcentral/develop
- RDKE-1042: Add IPK_FEED_URIS to version.txt ( [#121](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/121))
- Update post-rootfs-hooks.bbclass [7068e5e](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/7068e5e4d6b64b786819f0533936fcfef3e1811a)
- Merge tag '1.8.0' into develop [17855cc](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/17855cca465b1c50ea6bb49943e791d4289ace59)

## [meta-rdk-oss-reference](https://github.com/rdkcentral/meta-rdk-oss-reference/blob/main/CHANGELOG.md)

- Merge branch 'release/4.13.0' [f6b06d2](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/f6b06d266de2c1a8312570fc4bd8cf354a9d8e7f)
- 4.13.0 test release change log updates [cb7cc1c](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/cb7cc1c6b9e78b08a29f04b75294237b612b3d59)
- SERXIONE-8424: Enable SAE and add patch in wpa-supplicant ( [#433](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/433))
- RDKE-1040: OSS release version 4.13.0 ( [#432](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/432))
- RDKE-1040: Bump Revisions properly ( [#431](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/431))
- Merge tag '4.12.5' into develop [3153283](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/3153283e8619c12f5bbe52e163a7540c50ccc1f6)
- Merge branch 'release/4.12.5' [041af87](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/041af87e3cc51776d0a028f7e635854edbf81dea)
- 4.12.5 test release change log updates [a98dfa0](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/a98dfa0eba734086698c12348cec23bd2f911660)
- RDKE-1040: Test release 4.12.5 ( [#428](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/428))
- RDKOSS-940:Bring iw 5.4 ( [#424](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/424))
- Revert "RDKEVD-4868 : Westeros Upgrade to 2.0.0 ( [#336](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/336))" ( [#336](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/336))
- RDKEVD-4868 : Westeros Upgrade to 2.0.0 ( [#336](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/336))
- RDK-56341 : Migrate glib-2.0 to 2.74.6 version and glib-networking to 2.74.0 version ( [#420](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/420))
- RDKOSS-927 : Exclude native opkg from prebuilt consumption ( [#421](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/421))
- RDKOSS-927:  Fix for opkg fails to install provides with version ( [#419](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/419))
- Merge pull request  [#418](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/418) from rdkcentral/feature/RDKOSS-930
- Update package_revisions_oss.inc [94ce353](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/94ce3536d559fa49f32a8bf7f89b158b7263d797)
- RDKOSS-802: Add possibility to ignore cache mtime depending on the FONTCONFIG_IGNORE_CACHE_MODTIME env variable value. ( [#417](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/417))
- RDKEMW-6898: Add latest recipes for gssdp latest version. ( [#402](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/402))
- RDKTV-39704: [RDKE]Network manager crash during Standby State ( [#407](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/407))
- RDKEMW-18031: sky Cinema video freezes after seeking and resuming playback ( [#415](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/415))
- RDKOSS-709: handle revoked evdev devices ( [#373](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/373))
- RDKEMW-14423: RDKE: Remove wpa_supplicant_utc_timestamp_2.10.patch and update wpa-supplicant_2.10.bbappend ( [#385](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/385))
- RDK-59201 : Patch CVEs for critical components ( [#354](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/354))
- RDK-56341 : Migrate glib-2.0 to 2.74.6 version and glib-networking to 2.74.0 version ( [#15](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/15))
- Merge pull request  [#410](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/410) from rdkcentral/sbarre01-patch-2
- Update CODEOWNERS [095eedf](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/095eedffe04e9acb18999243b0deff14c6db3f15)
- Merge pull request  [#409](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/409) from rdkcentral/sbarre01-patch-1
- Update CODEOWNERS [53b139c](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/53b139ca2aaad435e5bcd244630f2a5a3a9527f7)
- Merge branch 'hotfix/4.12.2' into support/4.12.0 [1b8c07a](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/1b8c07a0a79df73a4feb8471d20a075acac51df9)
- RDKE-1060: Update changelog for 4.12.2 [4dcea24](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/4dcea2495fe5bef784bc26b4e5b4a6d4c93cd532)
- RDKE-1060: OSS hotfix release 4.12.2 [d29f350](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/d29f35073350e537df86e0749cfb377853900869)
- RDKOSS-820: Fix cairo librsvg  build error ( [#404](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/404))
- RDKOSS-820: Fix cairo librsvg  build error ( [#404](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/404))
- Merge pull request  [#398](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/398) from rdkcentral/feature/RDKOSS-510
- Update package_revisions_oss.inc [c63031c](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/c63031c40914b1295700c939f53b8a962507428f)
- Merge pull request  [#399](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/399) from rdkcentral/develop
- Update libarchive_%.bbappend [c525514](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/c525514bf21ad08cd2c6e59a296a20e7d5ec2d16)
- Update libarchive_%.bbappend [de587e7](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/de587e7c56014c4d902f809667f49119a9f0f2b4)
- Update package_revisions_oss.inc [ae85acf](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/ae85acf2aa5b80ba03c992e2914b16d97191f2ed)
- Create run-ptest [18d7130](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/18d7130f11ec08ce4dafe69b942836c13bbde597)
- Create libtool_%.bbappend [c9ceed9](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/c9ceed98bd6f9b8755b9893314d7a55e83fb7f0a)
- Create run-ptest [4e7bafd](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/4e7bafd27e7d255c52c3589a901c157f7c63c144)
- Create psmisc_%.bbappend [0340777](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/0340777497e083d2f02ed44a2ccc496f013b60d9)
- Create run-ptest [378d611](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/378d611c1e44cef5fb5b0372c57f99fffa0a5362)
- Create dtc_%.bbappend [e5d5652](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/e5d56522743bbdf46ce4e638bdfd5dcf02535c08)
- Create run-ptest [f47b8dc](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/f47b8dc69ab2e182a8fafde2ea13c7fbc6c50e34)
- Create ncurses_%.bbappend [5cbe3f0](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/5cbe3f07156aff70df93a051c5f71c94cc0343e9)
- Update run-ptest [113e877](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/113e877f10bac8d6c63f8f5325231a05f2a120a8)
- Create libxcrypt_%.bbappend [05bfa08](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/05bfa08c39cad916ceeda834a8d362727c1060e8)
- Create run-ptest [f7f0c83](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/f7f0c831adad831dd2fce7d84d6ae4aef3c6efaf)
- Create binutils_%.bbappend [02510ec](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/02510ec108bd8fd74a213977a272f6041ea4ad74)
- Create run-ptest [d5ca609](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/d5ca609a2d8269f348e9bc5e0bd2238b81083c63)
- Merge branch 'hotfix/4.12.1' into support/4.12.0 [be31aba](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/be31aba7ec45cf2223bc44855c40358ad54190f4)
- RDKOSS-797: Update Changelog for 4.12.1 [ee97af6](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/ee97af683a8c066960861fa8d73421c1caef2059)
- Create run-ptest [13fcaf8](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/13fcaf899f6de6276527db7c1919e43216bf1087)
- Create liburcu_%.bbappend [437cf23](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/437cf2374708b806a42b9ee36cdbc1661851fd28)
- Create libarchive_%.bbappend [0ae2c21](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/0ae2c2116e48df7d0fe69b6e5e536436b3c4469a)
- Create run-ptest [e7959d8](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/e7959d84dd0a435a6524db1387a170da432ae45c)
- Create run-ptest [05deaf5](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/05deaf5800830d3c61d05ed5b77ca4ef1146177c)
- Update iptables_%.bbappend [80324d4](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/80324d447ca1797a64edde3d698c29cc663cd243)
- Create run-ptest [0cdc808](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/0cdc80809fc30f64823495dd2d8dc4517bc87eee)
- Create libffi_%.bbappend [dcbc413](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/dcbc413a5e12e4ddc88bf8a65940a23bff4cc79b)
- Update run-ptest [e154b23](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/e154b23e9166fda7f5fe866416aa3d4a2ec522f8)
- Create run-ptest [083a1e6](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/083a1e693088b3188c995ef324679642d44b2a8a)
- Update procps_%.bbappend [b6ed37a](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/b6ed37a9327d00c85f340d60835ea494255ca939)
- RDKOSS-797 :  Add idlemetrics header support in 5.16 linux-libc header ( [#389](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/389))
- RDKOSS-797 :  Add idlemetrics header support in 5.16 linux-libc header ( [#389](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/389))
- Create iproute2_%.bbappend [e4d5413](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/e4d541397283b5bb0897b949ae9f58de492bb487)
- Create run-ptest [7685a88](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/7685a88141adf171f15e5b3d68699739ca2ac880)
- Merge tag '4.12.0' into develop [5d014f4](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/5d014f4dfd47771a2e58d51e5148c194591d932c)

## [meta-rdk-vendor-test-utils](https://github.com/rdk-e/meta-rdk-vendor-test-utils/blob/main/CHANGELOG.md)

- RDKEVD-7846 : Remove append operators from meta-rdk-vendor-test-utils - phase 1 ( [#94](https://github.com/rdk-e/meta-rdk-vendor-test-utils/pull/94))
- RDKEVD-7847 : Remove append operators from meta-rdk-vendor-test-utils - phase 2 ( [#95](https://github.com/rdk-e/meta-rdk-vendor-test-utils/pull/95))
- Merge tag '1.20.0' into develop [a7f7c0d](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/a7f7c0d03d53e88f1971d15d77c97e388fcc4ddd)
- Merge branch 'release/1.20.0' [6d4bb7c](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/6d4bb7c7af3c28a411b7cdeb3b22cd068ffb17c7)
- RDKEVD-8042: Update changelog for release 1.20.0 [20c4d21](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/20c4d21dda060a7ab17ef35b5a4dac0d7a6686b5)
- RDKEVD-7903: Add run time options for memtest in gstPerfTestApp ( [#100](https://github.com/rdk-e/meta-rdk-vendor-test-utils/pull/100))
- Revert "RDKEVD-7903: Add run time options for memtest in gstPerfTestApp ( [#96](https://github.com/rdk-e/meta-rdk-vendor-test-utils/pull/96))" ( [#96](https://github.com/rdk-e/meta-rdk-vendor-test-utils/pull/96))
- RDKEVD-7903: Add run time options for memtest in gstPerfTestApp ( [#96](https://github.com/rdk-e/meta-rdk-vendor-test-utils/pull/96))
- Merge tag '1.19.1' into develop [529e5e6](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/529e5e65bf0bf455ca3ee66ecea760abb5044c63)
- Merge branch 'release/1.19.1' [ac30561](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/ac30561e22cc438410c055e0dabe61618120b3e3)
- RDKEVD-7187: Update changelog for release 1.19.1 [8775e49](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/8775e49f383550048d6e60d7c0f7edeaaebbf867)
- RDKEVD-7187 : add glmark2 gpu benchmark app to build [18c417a](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/18c417abaf85dc81e6fd3898f7342cb2933fbb26)
- Merge branch 'release/1.19.0' [0fc9213](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/0fc9213e26729273581cb5ee3327fd2d3475b5b8)
- Merge tag '1.19.0' into develop [8084612](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/808461258766a0fd550c09f14e1dba0a9fb4d20b)
- RDKEVD-6917: Update changelog for release 1.19.0 [e73241b](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/e73241bce26b32ab793dd3ded7a7dbcff3b195cc)
- Merge tag '1.18.2' into develop [6fe264d](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/6fe264d0d32c070734589d6563efdad1236c5769)
- Merge branch 'release/1.18.2' [8d8eaf9](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/8d8eaf9d97b43553c8caee0224ffd0b3dc440288)
- RDKEVD-6812: Update changelog for release 1.18.2 [8674cee](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/8674cee741b3a8390b04b716dcaed64bbfee5c5c)
- RDKEVD-6606 : fix workflow erro ( [#1646](https://github.com/rdk-e/meta-rdk-vendor-test-utils/pull/1646))
- RDKEVD-6606 : fix workflow erro ( [#1646](https://github.com/rdk-e/meta-rdk-vendor-test-utils/pull/1646))
- Merge release/test-0318-1.19.0 into main [c21b602](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/c21b6021b760663a744900fde543fb7f023d7dcd)
- Merge release/test-0318-1.19.0 into develop [71345e7](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/71345e782c66df7b062d5ed99de1a3faf8208a0d)
- RDKTEVD-999997: Update changelog for release 1.19.0 [5624692](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/56246923d48bc612570ee46848ee927a35bc7671)
- RDKEVD-6491 : Move check-develop-merge yaml workflow from engineering tools [fba0c3c](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/fba0c3c5b4de95787da957fcd271389266b3aa95)
- RDKEVD-6491: Move check-develop-merge yaml workflow from engineering tools [53978a0](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/53978a0a79f652216d57fe4457356f36a794d8bf)
- RDKEVD-6309: Add workflow scripts [8efde80](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/8efde806821240028e1f3374c1c12b4ed5afcd9e)
- RDKEVD-6309: Add workflow script to validate the PR title formats [1c4bc65](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/1c4bc65578535f8db7b94148dc700514c14b2556)
- RDKEVD-6309: Add workflow scripts [320760e](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/320760e32845edd3c5dc814d49952925940e636c)
- Merge tag '1.18.1' into develop [1bc57bc](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/1bc57bcaaf7c213b15e73d167ea751e6462e9af6)
- Merge branch 'release/1.18.1' [461d630](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/461d630134f476cc95e07ca2bec972e7ec50a713)
- RDKEVD-5734: Update changelog for release 1.18.1 [56b1e50](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/56b1e50cc641d5db4140fecb7fc1321e2e12f46e)
- RDKEVD-4812 : mtk enable trace-cmd [bf8cabb](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/bf8cabb8f6f6ce28d43d9cd23ed99f183df8c13b)
- create vendor_pkg_test_utils_versions.inc file [35ed69d](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/35ed69df6a262524e54f0d59901122b77ba13cfb)
- Merge tag '1.18.0' into develop [225f976](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/225f976dd22309018583155cf831bb270ef2053a)
- Merge branch 'release/1.18.0' [fa71944](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/fa719446d8fb793d07525296c81410290a52b6ec)
- RDKEVD-5429: Update changelog for release 1.18.0 [89a74d6](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/89a74d68a23a0016b9a8d1ddd53dc6b449ee00dd)
- RDKEVD-5189  : gstPerfTestApp source code [6715063](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/6715063e8752f97298e5d478b30a0bf275614974)
- RDKEVD-5189 : Integrate gstPerfTestApp as part of vendorbuild [210d4b0](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/210d4b007eb10b4b9835cc881541db58ddfd8afc)
- Merge tag '1.17.0' into develop [136359a](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/136359ad5b845115b538144f3789638e60e8adc5)
- Merge branch 'release/1.17.0' [1c049cb](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/1c049cb21b16bee802c2134431026ce229983609)
- RDKEVD-4846: Update changelog for release 1.17.0 [57b2848](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/57b2848fc9514be87f504d6320a8fb6bb73be588)
- RDKEVD-2006 : Integration of testapp for client composition [1159760](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/11597609cf5d95c7f658f7df64d3d8f92edf9aaf)
- MTK-1241: Bring in AFD changes into feature branch [ce75690](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/ce756906881e47fa986a86b081d8715561025ae0)
- Merge tag '1.16.0' into develop [f1c4141](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/f1c41411b0992949fb5d0177b78ff3e9f31b1aa2)
- Merge branch 'release/1.16.0' [c8b0091](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/c8b00914d51d7d44e6062dfc1d5b5ba3bf99bafe)
- RDKEVD-4052: Update changelog for release 1.16.0 [95813bd](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/95813bd65722b74396a9cc0a8805cb420720b598)
- RDKEVD-3805 : Fine-tuning gfx test app [3cccf1e](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/3cccf1e0ed5c474d03742f88e74b0b2c5003d158)
- RDKEVD-3805 : Fine-tuning gfx test app [4dcf89a](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/4dcf89a73f25c9abf16d48eaee04db452f3c78d5)
- RDKEVD-3805 : Fine-tuning gfx test app [3e9b5b6](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/3e9b5b6e0b46351c67a1f911a67102e67c47a850)
- RDKEVD-3805 : Fine-tuning gfx test app [52d173c](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/52d173cc6526024a70935cf55c54c077d4fa0042)
- RDKEVD-3805 : Fine-tuning gfx test app [0afc39d](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/0afc39df4a97e03a4c6d019aedd54e1af7e41b12)
- Merge tag '1.15.1' into develop [fbcc5b2](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/fbcc5b2223a70e702791de94ca8bb1944310ae42)
- Merge branch 'release/1.15.1' [8d14ecc](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/8d14ecc3875983b4d7011a02d1bc6b0fe3d94ee1)
- RDKEVD-3435: Update changelog for release 1.15.1 [007c7f9](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/007c7f96b1cf0af8108233d33d13896012a86bb2)
- RDKEVD-748 : wrapper to run gfx test apps [d4676fc](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/d4676fc5da2c090cd42b790f293f0dd88491ef57)
- Merge tag '1.15.0' into develop [29dd21f](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/29dd21f202dc3d328facceef7e112b57b496d688)
- Merge branch 'release/1.15.0' [f69dacb](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/f69dacbf58c4038adb12fcae3e3204cf44784902)
- RDKEVD-3086: Update changelog for release 1.15.0 [18e405a](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/18e405a11731c0854ac6cc840a8197507ef7a65e)
- RDKEVD-2047 : gfx app update [55d62f9](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/55d62f9ce7ee0705e8508859c3463721dfed3ba2)
- Add GitHub Actions workflow file [1f5b3bc](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/1f5b3bceb27b69322afc138badba7f5751884b53)
- Remove GitHub Actions workflow file [f2f3282](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/f2f328226abddecd237ef3a927f1d31a426350ad)
- RDKEVD-2936 : remove from packagegroup [18be761](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/18be761ba61f9472d21818decab9d7f3f98e08d5)
- Merge tag '1.14.0' into develop [a9c8a99](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/a9c8a993297d38bae62af9559f28b280dc9bcd30)
- Merge branch 'release/1.14.0' [81aa76d](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/81aa76ddd7fd03d4ac498a2ce077ff3f6218d84a)
- RDKEVD-2821: Update changelog for release 1.14.0 [539b2a9](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/539b2a9b1edc97dc6534760454234aad0e9271c5)
- RDKEVD-2296 : Generate system utilization report from procmon output [ba1ee53](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/ba1ee53ed051eb99168dcabbc0b047d41e536d85)
- RDKEVD-2296 : Update procmon.bb [714edd2](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/714edd24698749b20762ae1206076369d3ac970e)
- RDKEVD-2296 : Update SHA [d310328](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/d310328b774cff22b2bafd7e771060fcb613db8c)
- Merge tag '1.13.0' into develop [f364e8d](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/f364e8d3c3e253bc55d4317454e0d62c49dd28c2)
- Merge branch 'release/1.13.0' [ae68d2e](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/ae68d2e9d6daca4a6c13e7721fa4d659eea46a4b)
- RDKEVD-2623: Update changelog for release 1.13.0 [f3c8f18](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/f3c8f18260310adbee0a63e7f80a2eff78a504e0)
- RDKEVD-2296 : Update procmon.bb [37cda94](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/37cda94b1dbcdb4b65a2a93a53336a18929fd41b)
- RDKEVD-2296 : Generate system utilization report from procmon output [dec35b1](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/dec35b1f804cdc43d717c320bf357018adf96736)
- RDK-58295: Start using westeros-gst-test app to validate westeros scaling [6b2e585](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/6b2e585ccd64b839a1f4734a072a09656adef3c1)
- RDKEVD-2047 : westeros-gfx-test-util update [5449c72](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/5449c72f1a238acd4c49ba89e4831ba39f6b2fcb)
- RDKEVD-2047 : westeros-gfx-test-util update [3b319af](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/3b319af4c2dafb1d1e910d24cc14470b9eca99d6)
- Merge tag '1.12.0' into develop [1f95911](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/1f95911dd1e5e609155942395213501d7ed76ee7)
- Merge branch 'release/1.12.0' [737b81f](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/737b81f22c28d01b73e244b22bb741db425ecd76)
- RDKEVD-2398: Update changelog for release 1.12.0 [bdc6202](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/bdc620276b8449c150d6a29434f6c93ff0b0e1ba)
- RDKEVD-2367 : Update PR checklist [23f4e65](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/23f4e650ecb649a0eb00a93740f0df50851631ce)
- RDKEVD-2367 : Update PR checklist [db17064](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/db17064ebcfcfd00c1d1f71220a31423f506f180)
- RDKEVD-2367 : Update PR checklist [61fec07](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/61fec07b8d828832c5cec16f3ad96a98e55936b1)
- RDKEVD-2367 : Update PR checklist [fb09d27](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/fb09d274e9b56ccd4cdd0a648673eb1128e568cc)
- RDKEVD-2047 : gfx test app [4114127](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/41141272a25cfee8d47dadc2bf8860afa48eeca3)
- Add GitHub Actions workflow file [d581d8e](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/d581d8e5ce43272c041f49edcfaee89583a440df)
- RDKEVD-21 : Add process monitor tool recipe [f9f2c40](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/f9f2c40543a543d9d12cc92dacb38473c0e8c7ec)
- RDKEVD-21 : Update procmon.bb [172339b](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/172339b332ee167d631e8fb885abe2b6ccdc7328)
- RDK-58295: Start using westeros-gst-test app to validate westeros scaling [9f32cb7](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/9f32cb7e1e079644bb264fa6b271fda089a2842b)
- Merge tag '1.11.0' into develop [e71a9cb](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/e71a9cb1065c7367ed5fb3b26444947ff5d2e55e)
- Merge branch 'release/1.11.0' [41f7628](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/41f7628fbd852c1e6569ccc3b28efb3286a5e705)
- RDKEVD-2153: Update changelog for release 1.11.0 [c63702e](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/c63702e55b1c7435a116b6de32324fef02c04ec7)
- Revert "RDKEVD-2006: Integration of testapp for client composition" [bb88a26](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/bb88a2665c9041245c02b1a59ee1409ce4fa82bf)
- Revert "RDKEVD-2006: Integration of testapp for client composition" [14497b6](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/14497b6f8f9cf699df67bb42e1c4f4579aa0cfe1)
- RDKEVD-2006: Integration of testapp for client composition [35b2151](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/35b2151bb85691efaec834175c9d76d29c664902)
- RDKEVD-2006: Integration of testapp for client composition [98c3e8d](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/98c3e8df706d97e3463ae1a9a4c658ddb06930b9)
- Merge tag '1.10.0' into develop [53c6940](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/53c6940089433e14ae0fb629de2c23fba7b44974)
- Merge branch 'release/1.10.0' [14fddd2](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/14fddd21b564f619f83b093877db394f50678f2a)
- RDKEVD-1714: Update changelog for release 1.10.0 [f8dd351](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/f8dd35108d477fa5cbfdad057f0219808f48c84e)
- RDKEVD-1553: Apple provisioning changes [2614b3a](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/2614b3a0496d9233368876a968be376ed0c13aeb)
- RDKEVD-1553: Apple provisioning changes [d134b0e](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/d134b0e6f7b440201dc54f0d2fa9357ddd6d4c21)
- Merge tag '1.9.0' into develop [09a14fa](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/09a14fa510e405c99249f42bed7949b40a211523)
- Merge branch 'release/1.9.0' [dc24d90](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/dc24d900709fda34049d001b56a42d40529be3c6)
- RDKEVD-1535: Update changelog for release 1.9.0 [49c8a7f](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/49c8a7fe6b632ecb67d1617b5a6acf7785dfaab2)
- RDKEVD-1477: test_fkps with Netflix provisioning changes [d5d6aec](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/d5d6aecaa8972d6d5fd697a72506ac8e5ec4b032)
- RDKEVD-1477: test_fkps with Netflix provisioning changes [8f21600](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/8f216005e1b30cdb658487203ff1913fbb837b7d)
- Merge pull request  [#45](https://github.com/rdk-e/meta-rdk-vendor-test-utils/pull/45) from rdk-e/feature/RDKEVD-947_MIK_to_yocto
- RDKEVD-1202: Test app with Playready and Widevine provisioning [19dc251](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/19dc25122097d45c1d15a703f10995de4920d406)
- RDKEVD-947 : Update dependency with new recipes [cd56aed](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/cd56aede11a31ceb69c9a174a5b33f9b3dfc852b)
- RDKEVD-1202: Test app with Playready and Widevine provisioning [0a58d11](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/0a58d115ed58885451b5f30b1c3996870e693cd1)
- Merge tag '1.8.0' into develop [a4d995c](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/a4d995c3c0f65651a5d15babe0688b7284b9e298)
- Merge branch 'release/1.8.0' [817e676](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/817e67681f05ba80a239fa21814f0300aaaf5415)
- RDKEVD-1229: Update changelog for release 1.8.0 [31f5848](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/31f58480dcab9dc298ce5253ab6eb1f2d8938000)
- RDKEVD-748 : RDKShell test client initial change [c57d0dc](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/c57d0dc952b494a82c62fc953b23aba1c7f7d20f)
- Merge tag '1.7.0' into develop [45ad00d](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/45ad00d800dcbab3ae7fcc6acf71c3f44fbcd8ef)
- Merge branch 'release/1.7.0' [340301e](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/340301e1dcfe7842ee3da954413ab37e2dc4fe69)
- RDKEVD-860: Update changelog for release 1.7.0 [a98e19d](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/a98e19d23d14962a9438579b555a8f6b2a2ece71)
- MTK-708: Integrate FKPS Test App in Vendor Layer [7bef565](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/7bef5652868bba54f9b27ad67e72ca8f03342503)
- MTK-708: Integrate FKPS Test App in Vendor Layer [3de2f9f](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/3de2f9f4afb21aa259661b2348f988ee1635937b)
- Merge tag '1.6.0' into develop [861beac](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/861beac1056d7cd19ff81f6d793bb4eb1836498e)
- Merge branch 'release/1.6.0' [06a73b5](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/06a73b55af0cecbc7ba3212c0dc93b903287d0d3)
- RDKEVD-775: Update changelog for release 1.6.0 [50db1b7](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/50db1b783fce76b15bb7829447806491f932f842)
- RDKEVD-642: Integrate Device Auth Apps [5e544cf](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/5e544cfca6fc82cbd9436f2b71221c35673a12bc)
- Update sec-auth-test_git.bb [8dcb9d1](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/8dcb9d1b7ffd0f9dee09592608c8659314a6c774)
- Update sec-auth-test_git.bb [39b79bc](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/39b79bce334f13e7b6a69870065a7bff8f950bde)
- RDKEVD-748 : Add test app for mp4 playback test [c2c63db](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/c2c63dbba4cfc85cdfbdc1ed6477a0b0ab8678a7)
- Update vendor_test_utils_srcrev.conf [7f1e4fc](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/7f1e4fc1d684fbe97192e322d03e64017adcceb3)
- MTK-708: Update vendor_test_utils_srcrev.conf [7d5cc63](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/7d5cc63ea927b45ffcbd10d852a0922a5ed69c61)
- Update sec-auth-test_git.bb [aa15b11](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/aa15b11d74df51eac655953a7c8c33288dd99a2f)
- Update vendor_test_utils_srcrev.conf [2a537ba](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/2a537baebbafb2aa0d242ade76e0526ed13f2627)
- RDKEVD-748 : RDKShell test client initial change [f524a81](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/f524a8174cb16dea971c0ae43a4ecd2ee6874115)
- RDKEVD-642: Integrate Device Auth test app in vendor test image [243e44b](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/243e44bee6e5bfdaa2b95e543cbe2194fa9abcc6)
- RDKEVD-718 : bbclass to print srcuri [30eceee](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/30eceeea0288c1a1fa136382a3b4be03ed29caa5)
- RDKEVD-718 : bbclass to print srcuri [77e1528](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/77e1528468a5315cf2199a6932f3fc8d1f829252)
- RDKEVD-718 : bbclass to print srcuri [6c0c153](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/6c0c153109c7c719e6930aab0b429a720f13dda4)
- Merge tag '1.5.1' into develop [366e2c2](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/366e2c253ebac32b3e857f2e30e1f45f979bcd42)
- Merge branch 'release/1.5.1' [7dfe668](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/7dfe668abb894634b48517166362c8c6c6ebe564)
- RDKEVD-707: Update changelog for release 1.5.1 [520c165](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/520c165f605919fbc1920206c9a072aab7d7a90e)
- RDKEVD-505 : Build failure on multilib platforms with test-utils [55504a7](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/55504a7ac52c1963fde60e22d15783c947a6483e)
- RDKEVD-505 : Build failure on multilib platforms with test-utils [c2bad36](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/c2bad364abf19c73a6d5fb7eb033aa10383dba15)
- Merge tag '1.5.0' into develop [f547572](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/f547572412ca384bf39cd33c686e14c0cad62a31)
- Merge branch 'release/1.5.0' [eec317c](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/eec317cecf21f132ab451a59b108888598343366)
- RDKEVD-707: Update changelog for release 1.5.0 [bb0c6df](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/bb0c6df56d3bf259e2a370129b7d83fb06eae245)
- RDKEVD-505: Enable oem vendor test suit support in amlogic [4b7c252](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/4b7c252bdd887a311053d41ff266e80e49e32459)
- RDKEVD-505: Enable oem vendor test suit support in amlogic [5ce0978](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/5ce0978fa32fe4b90095d32f05bd171fd4dda8b7)
- RDKEVD-381 Integrate FKPS test app to MTK vendor [e391e9b](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/e391e9b88e71aa2d8c8b23f6764c7a114badc9f3)
- RDKEVD-381 Integrate FKPS test app to MTK vendor [476e91e](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/476e91e2bd503691747179a8d69de45b4540ebb3)
- MTK-510 : basic network setup [027f638](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/027f638e950e20e2cfb1f2361205a2e32f03d353)
- MTK-510 : basic network setup [f304314](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/f30431493bc2ccb4cddedd080ea7a3e4d9ea63f2)
- Merge tag '1.4.0' into develop [97cc988](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/97cc988333ee3b44bf4a075e2373b783f0e5bd09)
- Merge branch 'release/1.4.0' [57f4c78](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/57f4c78170976a993977ed3566aad78c05c62b53)
- RDKEVD-515: Update changelog for release 1.4.0 [adc0905](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/adc09053100537163d5de7b78de6ef9150a97c7b)
- Merge pull request  [#31](https://github.com/rdk-e/meta-rdk-vendor-test-utils/pull/31) from rdk-e/feature/mtk-558_drm_ut
- MTK-558: Add DRM Unit Tests to vendor test image [4536c59](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/4536c59ac8ab76fa13deed6cdb5a425bb3bcf95e)
- RDKEVD-381 Integrate FKPS test app to MTK vendor [3fb8847](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/3fb8847d23c6919b517fefc2c01cf8b4c9e18671)
- Merge tag '1.3.0' into develop [4004136](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/4004136a5e1889434bd6bab3d0f0c490fa76cb67)
- Merge branch 'release/1.3.0' [8326ca9](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/8326ca9161c49fd1a0c935be36cbd44681848992)
- RDKEVD-331: Update changelog for release 1.3.0 [be83798](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/be8379882e2f41a1b569fb807d7a8808cf6bf6c0)
- Merge pull request  [#28](https://github.com/rdk-e/meta-rdk-vendor-test-utils/pull/28) from rdk-e/RDKEVD-352_cobalt
- RDKEVD-352 : Integrate Cobalt-24 & libloader app to vendor test image [6102fcf](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/6102fcffd08bc6530684f9cbcea0cd3b96e8b57f)
- Merge tag '1.2.0' into develop [3488215](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/3488215f1c651ec984a5a5bacc8f5739b2569fae)
- Merge branch 'release/1.2.0' [c890460](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/c8904603fe44b7736c5d83daec85e0e2dc8b8fa0)
- RDKEVD-307: Update changelog for release 1.2.0 [19d3c01](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/19d3c015d1c71126bcfedf4b554570d2272b408a)
- Merge pull request  [#24](https://github.com/rdk-e/meta-rdk-vendor-test-utils/pull/24) from rdk-e/RDKEVD-309_aamp_upgrade
- RDKEVD-309: Update AAMP v7.1.1.0 [76875d3](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/76875d3117e16661c3651c8f9233a13fa777df94)
- Merge pull request  [#23](https://github.com/rdk-e/meta-rdk-vendor-test-utils/pull/23) from rdk-e/RDKEVD-309_aamp_upgrade
- RDKEVD-309: Update to AAMP v7.1.1.0 [e1566ed](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/e1566edc3a0fb9abeb26383c0e9abce20012709f)
- Merge tag '1.1.0' into develop [b9e081b](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/b9e081b5263ca3736648088ac5412ad79345c251)
- Merge branch 'release/1.1.0' [05d5e7e](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/05d5e7eb073b932ea00dafc69845ed4c1220e49f)
- RDKEVD-307: Update changelog for release 1.1.0 [5d52b98](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/5d52b9865c5cc233a7784b51425d08d1ba4b1c2f)
- Merge pull request  [#20](https://github.com/rdk-e/meta-rdk-vendor-test-utils/pull/20) from rdk-e/feature/RDKEVD-221_flashapp_integration
- RDKEVD-221 : Move startup script from generic to oem layer [d7ca7e6](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/d7ca7e6c7be734052c734a0135ff71f6fd6278b0)
- Merge pull request  [#18](https://github.com/rdk-e/meta-rdk-vendor-test-utils/pull/18) from rdk-e/feature/rdkevd144_testapp_recipe
- RDKEVD-144 : enable the test app [0f0d33a](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/0f0d33aef6d44718a3469cc7909aa28afba268f4)
- Merge tag '1.0.0' into develop [e08e935](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/e08e9359afb6272adc754cf6558731407ce8fe98)
- Merge branch 'release/1.0.0' [d976db9](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/d976db9cd5f91bf8bc1bd686af6d159254d0a9e6)
- RDKEVD-180: Update changelog for release 1.0.0 [b06f142](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/b06f1424fe8ebb86acc895b00f9d376e7af81746)
- RDKEVD-21 : Add process monitor tool recipe [0150c48](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/0150c4837a1db26095e8403e10624abc291388c4)
- Merge pull request  [#14](https://github.com/rdk-e/meta-rdk-vendor-test-utils/pull/14) from rdk-e/feature/RDKTV-33990-recipes-aidl-client
- Merge pull request  [#15](https://github.com/rdk-e/meta-rdk-vendor-test-utils/pull/15) from rdk-e/feature/MTK-291-add-ca-certificates-trust-store
- MTK-291 : add ca-certificates-trust-store [01099f9](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/01099f9813c9dea773491e0bb97590c2f555b593)
- RDKTV-33990-aidl-example-client [e4d6205](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/e4d6205fee57c99fa3d2d9510e0c730dc49d2893)
- Merge pull request  [#13](https://github.com/rdk-e/meta-rdk-vendor-test-utils/pull/13) from rdk-e/feature/RDKTV-33990-fix-build-error
- RDKTV-33990 : Clean up SRC_URI [2338342](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/2338342335ba1fb23644f7baa1957f266a7c1bb4)
- Merge pull request  [#12](https://github.com/rdk-e/meta-rdk-vendor-test-utils/pull/12) from rdk-e/feature/RDKTV-33990-recipes-aidl
- RDKTV-33990-aidl-example-service-changes [e3fe907](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/e3fe907a220da07bb8f730ad69223d078ceb6820)
- RDKTV-33990-aidl-example-service [1265a51](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/1265a512b711318709cc1f1ac265752a717d7cdb)
- Merge pull request  [#11](https://github.com/rdk-e/meta-rdk-vendor-test-utils/pull/11) from rdk-e/feature/RDKTV-34483-build_setup
- RDKTV-34483: callback test. Added gst-callback-test to the build.  This also covers the requested change for RDKTV-34482.  It was neater to put them in one test. [6cf787d](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/6cf787dfaed03cf7357b296ac9a22746988a45df)
- Merge pull request  [#9](https://github.com/rdk-e/meta-rdk-vendor-test-utils/pull/9) from rdk-e/feature/RDKTV-34305_underflow_build_setup
- Merge pull request  [#10](https://github.com/rdk-e/meta-rdk-vendor-test-utils/pull/10) from rdk-e/feature/MTK-228-move_to_rdkcentral
- MTK-228 : Move repos to rdkcentral to avoid permission issue for soc [ed3d81f](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/ed3d81fb08cd53bcb767c72949d41cc8b53128a3)
- RDKTV-34305: Gstreamer Test application to check & log underflow events build set up for gst-underflow-test [a175990](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/a17599056769fdf6be9f29a9a43dd924118adf01)
- Merge pull request  [#7](https://github.com/rdk-e/meta-rdk-vendor-test-utils/pull/7) from rdk-e/RDKTV-34363_gst-av-test-build-failure
- RDKTV-34363 gst-av-test build failure [e79cc40](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/e79cc40c0eeb14565b49507e9fdb9a163ca7df1e)
- Merge pull request  [#6](https://github.com/rdk-e/meta-rdk-vendor-test-utils/pull/6) from rdk-e/feature/RDKTV-34166-gst-av-test-recipe
- RDKTV-34166:  Gstreamer Test application to check audio/video Operation. Removed reference to sky and renamed to gst. [baa7115](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/baa7115f5aa0cb0b167e1398675b90e8b19ada43)
- Merge pull request  [#1](https://github.com/rdk-e/meta-rdk-vendor-test-utils/pull/1) from rdk-e/feature/RDKTV-33706-extended-VTI
- RDKTV-33706 : Add support for extended vti [70d0a4e](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/70d0a4e738a3216b6790d62bced601579a94d004)
- RDKTV-33668 : Add aamp for clear IP playback test [75a02f8](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/75a02f83c3ec45d8b9a5cefb1168eda7a0f0efdb)
- RDKTV-33706 : Add extended VTI [7a1fe35](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/7a1fe358dc46d52749af0b667d8fb5a801a94740)
- Initial commit [638050d](https://github.com/rdk-e/meta-rdk-vendor-test-utils/commit/638050d151ab2a5d9bffa4a3dac5be5b45a079c1)

## [meta-rdk-soc-realtek](https://github.com/rdk-e/meta-rdk-soc-realtek/blob/main/CHANGELOG.md)

- RDKEVD-7871 Provide the XiOne,ES1 VL release 9.7.1, 1.8.1 Merge branch 'release/4.5.0' [a5823b4](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/a5823b45cff40a691a07aff4f35e21c8277fd0ba)
- Merge branch 'main' into release/4.5.0 [bf044b3](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/bf044b30859db43bec86e17a7085dacdcf31605e)
- RDKEVD-7871 Provide the Xi1, ES1 VL release 9.7.1, 1.8.1 [aab9301](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/aab930128e689ba5e84d50367eaeb72e6116c8d5)
- RDKEVD-7953:IA Build failure. ( [#242](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/242))
- RDKEVD-7871 Provide the XiOne,ES1 VL release 9.7.0, 1.8.0 Merge branch 'release/4.4.0' [99d0e6f](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/99d0e6f6c424bf33ebd344c789cb67397ed9ccb1)
- Merge branch 'main' into release/4.4.0 [e43acc8](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/e43acc80a281a5c793954303304e8b0f792474f4)
- RDKEVD-7871 Provide the XiOne,ES1 VL release 9.7.0, 1.8.0 [77277e6](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/77277e63e6ab24cb8e6ad9303cf63a0ce48cbaf0)
- Merge pull request  [#236](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/236) from rdk-e/feature-rdkevd-7129-fix-i2c-errors-when-enter-into-deepsleep
- rdkevd-7129: Control of tuner/demod power (gpio 53) now handled in kernel driver [8fe5b29](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/8fe5b29b9bb83bee962d5d3e021f457168717730)
- RDKEVD-7376: XiOne ES1 RTK Release 9.6.0/1.7.0 ( [#221](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/221))

## [meta-oem-stream](https://github.com/rdk-e/meta-oem-stream/blob/main/CHANGELOG.md)

- Merge branch 'release/4.1.8' [919888b](https://github.com/rdk-e/meta-oem-stream/commit/919888b75fc6f36f5a1387fa72693c33d145d689)
- RDKEVD-7870 : RDK-E XiOne-BCM VL Release 4.3.0 ( Tag: 4.1.8 ) [1691fb4](https://github.com/rdk-e/meta-oem-stream/commit/1691fb4a47b5f87454835d08592f42d2592c2cc9)
- RDKEVD-7647 [RDK-E] [TCHXI6] To remove enable_icrypto_mgk Distro feature [c89ce89](https://github.com/rdk-e/meta-oem-stream/commit/c89ce894d65bb730e771d3a84f0809268d793532)
- Merge tag '4.1.7' into develop [5d99497](https://github.com/rdk-e/meta-oem-stream/commit/5d994974922ecca06d7577f1d09d7b62dc3d2640)

## [meta-oem-realtek-stream](https://github.com/rdk-e/meta-oem-realtek-stream/blob/main/CHANGELOG.md)

- RDKEVD-7871 Provide the XiOne,ES1 VL release 9.7.1, 1.8.1 Merge branch 'release/X9.7.1_E1.8.1' [8dcadd9](https://github.com/rdk-e/meta-oem-realtek-stream/commit/8dcadd9707b147cee77225d99cf7b702b38cdfd8)
- RDKEVD-7871 Provide the Xi1, ES1 VL release 9.7.1, 1.8.1 [5474662](https://github.com/rdk-e/meta-oem-realtek-stream/commit/5474662a6260bca9ef297d76700292482db420f3)
- rm33527 : excessive pmo core traces in QCA wlan driver [978adf0](https://github.com/rdk-e/meta-oem-realtek-stream/commit/978adf0da24b07c55c8d0174f4caafdcde56afbc)
- Merge tag 'X9.7.0_E1.8.1' into develop [56ced6a](https://github.com/rdk-e/meta-oem-realtek-stream/commit/56ced6a97b9b73c71b389b4848bdf8c4631324dc)
- RDKEVD-7871 Provide the XiOne,ES1 VL release 9.7.0, 1.8.0 Merge branch 'release/X9.7.0_E1.8.1' [152217c](https://github.com/rdk-e/meta-oem-realtek-stream/commit/152217c56a714bfe5488dfb22a564032a647ccbd)
- RDKEVD-7871 Provide the XiOne,ES1 VL release 9.7.0, 1.8.1 [0d66c82](https://github.com/rdk-e/meta-oem-realtek-stream/commit/0d66c8295b85174611e589874707fd8cb3377600)
- Merge pull request  [#809](https://github.com/rdk-e/meta-oem-realtek-stream/pull/809) from rdk-e/RDKEVD-7745_Carry_CEDM_ECC_Key_in_TLTA
- Merge tag 'X9.7.0_E1.8.0' into develop [16f45b5](https://github.com/rdk-e/meta-oem-realtek-stream/commit/16f45b50eebc612bd0cc390f61d50c95b195d096)
- RDKEVD-7871 Provide the XiOne,ES1 VL release 9.7.0, 1.8.0 Merge branch 'release/X9.7.0_E1.8.0' [0315102](https://github.com/rdk-e/meta-oem-realtek-stream/commit/0315102631498a92e619c0f92b7c61b2781c302e)
- RDKEVD-7871 Provide the XiOne,ES1 VL release 9.7.0, 1.8.0 [235716b](https://github.com/rdk-e/meta-oem-realtek-stream/commit/235716bab3a23424cd2a9d16f5ee07a0bd8f5632)
- RDKEVD-7318: Log vendor soc specific details [eff3be0](https://github.com/rdk-e/meta-oem-realtek-stream/commit/eff3be034d16433d0992df15598b66e00c79b9cc)
- RDKEVD-7871: Merge selective '9.4.6' into develop [eb61759](https://github.com/rdk-e/meta-oem-realtek-stream/commit/eb61759257c53e8f103ae15c2b899e58dfec035a)
- Merge tag 'X9.7.0_E1.8.0' into develop [b61ebc8](https://github.com/rdk-e/meta-oem-realtek-stream/commit/b61ebc8d526ee950953de98569169191ce321fcc)
- RDKEVD-7871 Provide the XiOne,ES1 VL release 9.7.0, 1.8.0 Merge branch 'release/X9.7.0_E1.8.0' [9065374](https://github.com/rdk-e/meta-oem-realtek-stream/commit/906537447e96b3e726277bb789cc1dc1eddb2a40)
- RDKEVD-7871 Provide the XiOne,ES1 VL release 9.7.0, 1.8.0 [71536b8](https://github.com/rdk-e/meta-oem-realtek-stream/commit/71536b8fcf92a6b64c8ad691b221c81a79065165)
- Merge pull request  [#816](https://github.com/rdk-e/meta-oem-realtek-stream/pull/816) from rdk-e/feature/RDKEVD-6908
- RDKEVD-6908: blewakeupenabler hardening changes [c590e4b](https://github.com/rdk-e/meta-oem-realtek-stream/commit/c590e4badc3f15b5df5e5134c5b20b8fbcfefa34)
- RDKEVD-7299: Tag update for deepsleep-mgr source [13e64e4](https://github.com/rdk-e/meta-oem-realtek-stream/commit/13e64e450c0149af799b2a160d3bc653688fe371)
- RDKEVD-7745: [ES1-RTK] CEDM key import from TLTA insted of emmc [2c05756](https://github.com/rdk-e/meta-oem-realtek-stream/commit/2c05756cfb2322c5d4dd3bf209f801cc0c58f8cb)
- Merge pull request  [#810](https://github.com/rdk-e/meta-oem-realtek-stream/pull/810) from rdk-e/feature/RDKEVD-6553-led
- RDKEVD-6553 : LED driver autoload [3099ac1](https://github.com/rdk-e/meta-oem-realtek-stream/commit/3099ac1453ecfe62c697c408289fe7a60a984f0d)
- RDKEVD-7376: Provide the XiOne,ES1 VL 9.6.1/1.7.1 release Merge branch 'hotfix/X9.6.1_E1.7.1' into support/X9.6.1_E1.7.1 [6691831](https://github.com/rdk-e/meta-oem-realtek-stream/commit/6691831284367669caa5a86a2f9515c52adb4aa0)
- RDKEVD-7376: Provide the XiOne,ES1 VL 9.6.1/1.7.1 release [f3a5edc](https://github.com/rdk-e/meta-oem-realtek-stream/commit/f3a5edc4d0ea584bd92ce788b516ab27c265fca3)
- RDKEVD-7745: [ES1-RTK] CEDM key import from TLTA insted of emmc [bc2a3b2](https://github.com/rdk-e/meta-oem-realtek-stream/commit/bc2a3b2880184c27211320f895b97bfadb2eebd0)
- RDKEVD-7399: Update the default UK build to handle the re-worked Foxtel Hardware Reason for change: Adding flashapp changes to handle the re-worked foxtel hardware [743592b](https://github.com/rdk-e/meta-oem-realtek-stream/commit/743592b081a3c67cef4aa067610b0bb2443ff228)
- RDKEVD-7399: Update the default UK build to handle the re-worked Foxtel Hardware Reason for change: Adding flashapp changes to handle the re-worked foxtel hardware [2b63697](https://github.com/rdk-e/meta-oem-realtek-stream/commit/2b63697abfc09337b2c70e219e6dade0b87f6897)
- Merge pull request  [#801](https://github.com/rdk-e/meta-oem-realtek-stream/pull/801) from rdk-e/feature/RDKEVD-7469-wlan-disable-fwdump-driverState-0x47-develop
- Merge pull request  [#788](https://github.com/rdk-e/meta-oem-realtek-stream/pull/788) from rdk-e/feature/rdkevd-7129-fix-i2c-errors-when-enter-into-deepsleep-develop
- RDKEVD-7469: wlan disable fw dump on driver state 0x47 [de728c7](https://github.com/rdk-e/meta-oem-realtek-stream/commit/de728c79310c7658c76fb6bbe77bff46147b274e)
- RDKEVD-7376: XiOne ES1 RTK Release 9.6.1/1.7.1 [86ef9bb](https://github.com/rdk-e/meta-oem-realtek-stream/commit/86ef9bb667ac869fcb9ffe726492f0f50f293ea4)
- RDKEVD-7129: Fix i2c error when entering DEEPSLEEP [620b5e4](https://github.com/rdk-e/meta-oem-realtek-stream/commit/620b5e4099904484f7ba523ebb197d244c76629b)

## [meta-rdk-vendor-realtek-common](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/blob/main/CHANGELOG.md)

- RDKEVD-7871 Provide the XiOne,ES1 VL release 9.7.0, 1.8.0 Merge branch 'release/X9.7.0_E1.8.0' [6427b01](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/6427b01934bc44bf7f54f7d84a722d2d37739fe2)
- RDKEVD-7871 Provide the XiOne,ES1 VL release 9.7.0, 1.8.0 [348f881](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/348f881fbdac68e67c38acac4bc528842b5bfdcc)
- RDKEVD-5021: [RDK-E] Vendor layer support for store and read blocklist flag values in bootloader flash securely [6410af3](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/6410af38c5094ac547426aa631909f2d9d029a73)
- Merge pull request  [#108](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/pull/108) from rdk-e/feature/RDKEVD-6553-led
- RDKEVD-6553 : LED boot pattern update [ed72b53](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/ed72b530066132a7ac8ffd1aabded387619c75a7)
- RDKEVD-7399: Update the default UK build to handle the re-worked Foxtel Hardware Reason for change: including image-verifier prebuilt changes to handle the re-worked foxtel hardware [6568263](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/6568263d7005bc139b7a7c3336e7c10be9b8b435)
- RDKEVD-7399: Update the default UK build to handle the re-worked Foxtel Hardware Reason for change: Adding mfrlib changes to handle the re-worked foxtel hardware [a8e3eb1](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/a8e3eb1f7bdcfe086b4bc8860d6687b50fdfafde)
- Merge tag 'X9.5.1_E1.3.1' into develop [60ea6e4](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/60ea6e4cd66bb192912ffecb8113c2cb8190ca43)

## [meta-oss-vendor-realtek](https://github.com/rdk-e/meta-oss-vendor-realtek/blob/main/CHANGELOG.md)

- Merge branch 'release/4.4.0' [5da05c9](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/5da05c911beeacac4c7c18880bfba1525605b538)
- RDKEVD-7871 : Update change ES1/XiOne VL release 9.7.0/1.8.0 [d073d34](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/d073d34b55a613d59b047f320daab10dbfc1244d)
- RDKEVD-7245,RDKEVD-2522: Migrate sysctl cfg [9a2560b](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/9a2560bb5dad564a6806b4d52057a4f5ad8dcc5f)
- RDKEVD-7677 : Fix the plane transition crash. ( [#153](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/153))
- Merge tag '4.3.0' into develop [c30ee5c](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/c30ee5cba61feef32f2646ebc0618de7ff2c318d)

## [meta-mediarite-vendor](https://github.com/rdk-e/meta-mediarite-vendor/blob/main/CHANGELOG.md)

- Merge pull request  [#118](https://github.com/rdk-e/meta-mediarite-vendor/pull/118) from rdk-e/RDKEVD-5735/add-changelog-21.11
- RDKEVD-5735: Add changelog for 21.11 [50405f7](https://github.com/rdk-e/meta-mediarite-vendor/commit/50405f7fc09d664e0352411ff1e64f6c6624326f)
- Merge pull request  [#116](https://github.com/rdk-e/meta-mediarite-vendor/pull/116) from rdk-e/feature/RDKEVD-5735-update-versions-for-21.11
- RDKEVD-5735: Update versions for release [3d8819d](https://github.com/rdk-e/meta-mediarite-vendor/commit/3d8819d8ee10dc82a028a344508a94a3233e1249)
- Merge pull request  [#114](https://github.com/rdk-e/meta-mediarite-vendor/pull/114) from rdk-e/feature/MRITE-331
- MRITE-331: Fix version check for test builds [4abaf0b](https://github.com/rdk-e/meta-mediarite-vendor/commit/4abaf0b4bbc84d56273304635f05ed96cbc4b260)
- Merge pull request  [#112](https://github.com/rdk-e/meta-mediarite-vendor/pull/112) from rdk-e/hotfix/RDKEVD-6861-minerva-bringup
- Merge pull request  [#111](https://github.com/rdk-e/meta-mediarite-vendor/pull/111) from rdk-e/hotfix/RDKEVD-6861-minerva-bringup
- Add CHANGELOG.md for 21.10.7 [4e6c0e5](https://github.com/rdk-e/meta-mediarite-vendor/commit/4e6c0e56e2fd676e0fcd6aaeca14242477493d94)
- RDKEVD-4293, RDKEVD-4294 : Bring up changhong panels ( [#85](https://github.com/rdk-e/meta-mediarite-vendor/pull/85))
- RDKEVD-4293, RDKEVD-4294 : Bring up changhong panels ( [#85](https://github.com/rdk-e/meta-mediarite-vendor/pull/85))
- Merge pull request  [#110](https://github.com/rdk-e/meta-mediarite-vendor/pull/110) from rdk-e/feature/MRITE-217-custom-BHAL-versions
- Added attempt to stash changes before failure [f805f9c](https://github.com/rdk-e/meta-mediarite-vendor/commit/f805f9c483f604e835e2f41a293ffb579e4f5995)
- MRITE-217: Add utility to use latest commit [f06c3c8](https://github.com/rdk-e/meta-mediarite-vendor/commit/f06c3c8b998abd81627a8ab127d6aee9d6f56d2f)
- Merge pull request  [#109](https://github.com/rdk-e/meta-mediarite-vendor/pull/109) from rdk-e/hotfix/RDKEVD-6719
- Merge pull request  [#108](https://github.com/rdk-e/meta-mediarite-vendor/pull/108) from rdk-e/hotfix/RDKEVD-6719
- Add CHANGELOG.md for 21.10.6 [68bf73c](https://github.com/rdk-e/meta-mediarite-vendor/commit/68bf73c25932d140025ae63554bc6bc853229a82)
- MRITE-324: Make Cello use the linuxDVB interface [08b9d78](https://github.com/rdk-e/meta-mediarite-vendor/commit/08b9d783a5178ff2e6f5d849f787d8842ead5b63)
- Merge pull request  [#107](https://github.com/rdk-e/meta-mediarite-vendor/pull/107) from rdk-e/feature/MRITE-324
- MRITE-324: Make Cello use the linuxDVB interface [2d1ebae](https://github.com/rdk-e/meta-mediarite-vendor/commit/2d1ebae316b8cf05265dadcb2b911ddff897f3e3)
- Merge pull request  [#106](https://github.com/rdk-e/meta-mediarite-vendor/pull/106) from rdk-e/feature/MRITE-323
- MRITE-323: Allow version/tag missmatch in test builds [6bc7479](https://github.com/rdk-e/meta-mediarite-vendor/commit/6bc7479b52fbb0dd23d4d760e0a37da63b667215)
- Merge pull request  [#86](https://github.com/rdk-e/meta-mediarite-vendor/pull/86) from rdk-e/add-minerva-products-to-release-script
- Added minerva products to release script [60ebbff](https://github.com/rdk-e/meta-mediarite-vendor/commit/60ebbfffad4beb5bf6a324f9b938beffdb32901e)
- Merge pull request  [#105](https://github.com/rdk-e/meta-mediarite-vendor/pull/105) from rdk-e/MRITE-301/prepend-mediarite-vendor-verions-bbclass
- MRITE-301: Prepend mrite-vendor bbclass instead append [ec7668b](https://github.com/rdk-e/meta-mediarite-vendor/commit/ec7668b56ece26eaff4499a1c6b2b500ca7f623c)
- Merge pull request  [#101](https://github.com/rdk-e/meta-mediarite-vendor/pull/101) from rdk-e/MRITE-301/store-meta-mediarite-vendor-version-in-file
- Clean up release script [9540b21](https://github.com/rdk-e/meta-mediarite-vendor/commit/9540b21499cb42c334451da80065dc387dcb81b1)
- MRITE-301: Added meta-mediarite-vendor to versions.inc [cfce2db](https://github.com/rdk-e/meta-mediarite-vendor/commit/cfce2db6a221fcd55b85d3ccb763bf7b100ac76b)
- Merge pull request  [#103](https://github.com/rdk-e/meta-mediarite-vendor/pull/103) from rdk-e/hotfix/RDKEVD-6434-config-overrides
- Merge pull request  [#102](https://github.com/rdk-e/meta-mediarite-vendor/pull/102) from rdk-e/hotfix/RDKEVD-6434-config-overrides
- Add CHANGELOG.md for 21.10.5 [d859901](https://github.com/rdk-e/meta-mediarite-vendor/commit/d859901be75c8149330193a1ef95f18665eff5f2)
- RDKEVD-6434: Remove middleware override [e67beb0](https://github.com/rdk-e/meta-mediarite-vendor/commit/e67beb0cb0e93b81459b5941296f947013ffcacf)
- Merge pull request  [#100](https://github.com/rdk-e/meta-mediarite-vendor/pull/100) from rdk-e/hotfix/RDKEVD-6255
- Merge pull request  [#99](https://github.com/rdk-e/meta-mediarite-vendor/pull/99) from rdk-e/hotfix/RDKEVD-6255
- RDKEVD-6255: Add changelog for 21.10.4 [1381fae](https://github.com/rdk-e/meta-mediarite-vendor/commit/1381fae9ece6d366cbb30176acb5384d044e9eab)
- RDKEVD-6255: Update versions for 21.10.4 [66fed72](https://github.com/rdk-e/meta-mediarite-vendor/commit/66fed72c53aefa77f3ce202596125f180f01f3bf)
- Merge pull request  [#70](https://github.com/rdk-e/meta-mediarite-vendor/pull/70) from rdk-e/add-missing-glib-dependency-in-broadcast-hal-libs
- Merge pull request  [#92](https://github.com/rdk-e/meta-mediarite-vendor/pull/92) from rdk-e/RDKEVD-5860/add-changelog-21.10.3
- Merge pull request  [#91](https://github.com/rdk-e/meta-mediarite-vendor/pull/91) from rdk-e/RDKEVD-5860/add-changelog-21.10.3
- RDKEVD-5860: Add changelog for 21.10.3 [fa803fd](https://github.com/rdk-e/meta-mediarite-vendor/commit/fa803fdbaa2203a416cf1954d70f59275741ed3e)
- Merge pull request  [#90](https://github.com/rdk-e/meta-mediarite-vendor/pull/90) from rdk-e/feature/MRITE-235-point-to-new-release-branch
- MRITE-235: Point to new BHAL release branch [b48cf4b](https://github.com/rdk-e/meta-mediarite-vendor/commit/b48cf4b2267d4dd91900153e8983d9d6868c7d17)
- Merge pull request  [#89](https://github.com/rdk-e/meta-mediarite-vendor/pull/89) from rdk-e/RDKEVD-5860/add-changelog-21.10.2
- Merge pull request  [#88](https://github.com/rdk-e/meta-mediarite-vendor/pull/88) from rdk-e/RDKEVD-5860/add-changelog-21.10.2
- RDKEVD-5860: Add changelog for 21.10.2 [776d4b7](https://github.com/rdk-e/meta-mediarite-vendor/commit/776d4b700e6ba18c7f1e8ef6555b4105c2dbc288)
- Merge pull request  [#87](https://github.com/rdk-e/meta-mediarite-vendor/pull/87) from rdk-e/feature/RDKEVD-5860-update-versions-for-21.10.2
- RDKEVD-5860: Update versions for 21.10.2 [5b08292](https://github.com/rdk-e/meta-mediarite-vendor/commit/5b0829278c6adab39d436500317113a402d31b7f)
- Merge pull request  [#83](https://github.com/rdk-e/meta-mediarite-vendor/pull/83) from rdk-e/RDKEVD-5553/add-changelog-21.10.1
- Merge pull request  [#82](https://github.com/rdk-e/meta-mediarite-vendor/pull/82) from rdk-e/RDKEVD-5553/add-changelog-21.10.1
- RDKEVD-5553: Add changelog for 21.10.1 [f4bf9e8](https://github.com/rdk-e/meta-mediarite-vendor/commit/f4bf9e8a417b6c6eec858e73240d86b36fe2946b)
- Merge pull request  [#81](https://github.com/rdk-e/meta-mediarite-vendor/pull/81) from rdk-e/feature/RDKEVD-5553-update-versions-for-21.10.1
- RDKEVD-5553: Update versions for 21.10.1 [7743dc3](https://github.com/rdk-e/meta-mediarite-vendor/commit/7743dc30ae6251a1996bc38ca1d650fac16207ae)
- Merge pull request  [#80](https://github.com/rdk-e/meta-mediarite-vendor/pull/80) from rdk-e/Fix-findings-from-release
- MRITE-226: Fix wrapped commits and multi file changes [36b60b7](https://github.com/rdk-e/meta-mediarite-vendor/commit/36b60b72e728c45f9e7494ec63083c0ecf333542)
- MRITE-226: Add --no-pager argument to git diffs [0107772](https://github.com/rdk-e/meta-mediarite-vendor/commit/0107772d03ce3d68a18d1e55c0a12df0dedef0e6)
- MRITE-266: Update each relevant repo at the beginning of each step [9397028](https://github.com/rdk-e/meta-mediarite-vendor/commit/9397028b3124dc40da8b7234283403dc0854c1b2)
- Merge pull request  [#76](https://github.com/rdk-e/meta-mediarite-vendor/pull/76) from rdk-e/automate-collection-of-PR-urls
- Merge pull request  [#78](https://github.com/rdk-e/meta-mediarite-vendor/pull/78) from rdk-e/RDKEVD-5240/add-changelog-21.10
- MRITE-218: automate collection of PR URLs [ef96ca7](https://github.com/rdk-e/meta-mediarite-vendor/commit/ef96ca7161332388285ed3fd3314a82e58f5706a)
- Added missing glib dependency for broadcast-hal-libs [1643289](https://github.com/rdk-e/meta-mediarite-vendor/commit/16432891e65b650a5667373a79ee1f26eb73c697)



## Changes in component repositories

## ['secapi3-rtk'](https://github.com/rdk-e/secapi3-soc-realtek-cpc/blob/main/CHANGELOG.md)

- Merge branch 'release/3.3.1' [f7ed818](https://github.com/rdk-e/secapi3-soc-realtek-cpc/commit/f7ed81834c894d68b24c691cb6cc157c33147dfb)
- RDKEVD-1730 : Latest product tag 3.3.1 [6aa4fd6](https://github.com/rdk-e/secapi3-soc-realtek-cpc/commit/6aa4fd6ce890c83c3c97642b8525a89bc063cdd9)
- Merge pull request  [#5](https://github.com/rdk-e/secapi3-soc-realtek-cpc/pull/5) from rdk-e/feature/RDKEVD-1730-sync-with-stable2
- Merge branch  'stable2_june_10' into feature/RDKEVD-1730-sync-with-stable2 [27039b2](https://github.com/rdk-e/secapi3-soc-realtek-cpc/commit/27039b2b394c9d6cec3c57914da677266f213f62)
- REALTEK-852 : XiOne & ES1 Nightly jobs failing due to compilation errors [147c8cc](https://github.com/rdk-e/secapi3-soc-realtek-cpc/commit/147c8cccbd04316afd21dc019ed21e7e5586dd45)
- Add CODEOWNERS file [e85a771](https://github.com/rdk-e/secapi3-soc-realtek-cpc/commit/e85a7711ea19bf36b84c4cc017e06118445769c8)
- Merge tag '3.3.0' into develop [62b1690](https://github.com/rdk-e/secapi3-soc-realtek-cpc/commit/62b1690ef383594552ee45f0706e0c24e76eebcf)

