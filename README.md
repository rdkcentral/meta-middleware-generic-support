# Vendor Layer Release Notes

XiOne UK Stream Puck RDKE Vendor Layer Release Notes

---

|Summary|Content|
|---|----|
|Classification|Confidential|
|Date|08 June 2026|
|Author| pawan.narayanarao@sky.uk |

---

### Build Information
|  |  |
|---------------|---------------|
| Manifest location | <https://github.com/rdk-e/vendor-manifest-xione-stream> |
| Manifest Tag | 9.6.1 |
| Manifest Name | [xione-realtek-streambox.xml](https://github.com/rdk-e/vendor-manifest-xione-stream/blob/9.6.1/xione-realtek-streambox.xml) |
| Machine Name | xione-uk |
| Platforms supported | Realtek 1319 |
| Yocto Version | kirkstone |
| Release Test Ticket | [RDKEVD-7376](https://ccp.sys.comcast.net/browse/RDKEVD-7376) |

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

This release is from the vendor [RDKEVD-7376](https://ccp.sys.comcast.net/browse/RDKEVD-7376). This release will provide a versioned "meta-vendor-xione-realtek-release" that will be used by the middleware as well as image assembler.

- XiOne UK Stream Puck RDKE Vendor Layer Release to roll out below fixes,

- [Scope of the release 9.6.1](https://ccp.sys.comcast.net/issues/?jql=project+%3D+RDKEVD+AND+fixVersion+%3D+XIONE_REALTEK_VL_9.6.1)

- For full list for changes please refer the [Consolidated change list from vendor layer repositories](#consolidated-change-list-from-vendor-layer-repositories) section of release notes.

## Release layer and components

### Vendor Release Components

| Vendor Release Components | New Version (9.6.1) | Version in Previous Release (9.5.0) |
|------------|---------|------------------------------------|
| Kernel & DTB | | 4.9.119.01-r9  | |
| packagegroup-vendor-layer | 9.6.1-r0 | 9.5.0-r0 | [9.5.0....9.6.1](https://github.com/rdk-e/meta-oem-realtek-stream/compare/9.5.0...9.6.1) |
| packagegroup-common-vendor-layer |  | X9.5.1_E1.3.1-r0 |  |

### Stack layer

| Release meta Layer | Tag |
|------|------|
| [meta-vendor-xione-realtek-release](https://github.com/rdk-e/meta-vendor-xione-realtek-release) | [9.6.1](https://github.com/rdk-e/meta-vendor-xione-realtek-release/tree/9.6.1) |

#### Artifactory Location for IPKs - TODO

| Product | Location |
|------------|---------|
| XiOne-UK | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-uk-rel/9.6.1/xione-uk/ipks/debug |
| XiOne-DE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-de-rel/9.6.1/xione-de/ipks/debug |
| XiOne-Alpaca-De | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-alpaca-de-rel/9.6.1/xione-alpaca-de/ipks/debug |
| XOE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xfinity-stream-box-rel/9.6.1/xfinity-stream-box/ipks/debug |
| WNC Xfinity | https://partners.artifactory.comcast.com/ui/repos/tree/General/wnc-xfinity-stream-box-rel/9.6.1/wnc-xfinity-stream-box/ipks/debug |
| Xione-IT | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-it-rel/9.6.1/xione-it/ipks/debug |
| RTK-Alpaca-IT | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-alpaca-it-rel/9.6.1/xione-alpaca-it/ipks/debug |

#### OSS Consumption

- We have supported New OSS consumption from 9.0.0 Vendor release onwards. Please find the VL OSS IPK path as below
- OSS Version 4.12.2.

| Product  | Location |
|------------|---------|
| XiOne-UK | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-uk-rel/9.6.1/xione-uk/rdk-arm7ve-oss-vendor/ipks/debug |
| XiOne-DE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-de-rel/9.6.1/xione-de/rdk-arm7ve-oss-vendor/ipks/debug |
| XiOne-Alpaca-De | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-alpaca-de-rel/9.6.1/xione-alpaca-de/rdk-arm7ve-oss-vendor/ipks/debug |
| XOE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xfinity-stream-box-rel/9.6.1/xfinity-stream-box/rdk-arm7ve-oss-vendor/ipks/debug |
| WNC Xfinity | https://partners.artifactory.comcast.com/ui/repos/tree/General/wnc-xfinity-stream-box-rel/9.6.1/wnc-xfinity-stream-box/rdk-arm7ve-oss-vendor/ipks/debug |
| XiOne IT | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-it-rel/9.6.1/xione-it/rdk-arm7ve-oss-vendor/ipks/debug |
| XiOne Alpaca IT | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-alpaca-it-rel/9.6.1/xione-alpaca-it/rdk-arm7ve-oss-vendor/ipks/debug |

### Common meta layer versions for integration

| Meta Repo |  Version |
|-----------|-------------|
| meta-rdk-halif-headers | 4.1.4 |
| meta-rdk-cpc-halif-headers | 1.0.0 |
| meta-rdk-oss-reference | 4.12.2 |
| meta-rdk-oss-ext | 1.7.0 |
| meta-product-xione | 3.5.0 |
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
| meta-middleware-release | 8.6.1.0 |
| meta-application-release | 4.52.0 |
| meta-cspc-security-release | 4.0.6 |


### Meta Repos

#### Meta repos maintained by layers layer

| Meta Repo | New Version (9.6.1) | Version in Previous Release (9.5.0) | ChangeList |
|------------|---------|------------------------------------|--------------|
| meta-rdk-auxiliary |  | 1.8.0 | |
| [meta-rdk-oss-reference](#meta-rdk-oss-reference) |  **4.12.2** | 4.12.0 | [4.12.0...4.12.2](https://github.com/rdkcentral/meta-rdk-oss-reference/compare/4.12.0...4.12.2) |
| meta-rdk-tools |  | 2.3.1 | |
| meta-vts |  | 1.2.0 | |
| [meta-rdk-soc-realtek](#meta-rdk-soc-realtek) |  **4.3.0** | 4.1.10 | [4.1.10...4.3.0](https://github.com/rdk-e/meta-rdk-soc-realtek/compare/4.1.10...4.3.0) |
| [meta-oem-stream](#meta-oem-stream) |  **4.1.7** | 4.1.6 | [4.1.6...4.1.7](https://github.com/rdk-e/meta-oem-stream/compare/4.1.6...4.1.7) |
| [meta-oem-realtek-stream](#meta-oem-realtek-stream) |  **X9.6.1_E1.7.1** | 9.5.0 | [9.5.0...X9.6.1_E1.7.1](https://github.com/rdk-e/meta-oem-realtek-stream/compare/9.5.0...X9.6.1_E1.7.1) |
| [meta-rdk-vendor-realtek-common](#meta-rdk-vendor-realtek-common) |  **X9.5.1_E1.3.1** | 9.4.3 | [9.4.3...X9.5.1_E1.3.1](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/compare/9.4.3...X9.5.1_E1.3.1) |
| [meta-oss-vendor-realtek](#meta-oss-vendor-realtek) |  **4.3.0** | 4.1.9 | [4.1.9...4.3.0](https://github.com/rdk-e/meta-oss-vendor-realtek/compare/4.1.9...4.3.0) |
| meta-mediarite-vendor |  | 21.10 | |

#### Meta repos common for RDK-E

| Meta Repo | New Version (9.6.1) | Version in Previous Release (9.5.0) | ChangeList |
|------------|---------|------------------------------------|--------------|
| **buildscripts** ||||
| build-scripts |  **1.0.2** | 1.0.1 | [1.0.1...1.0.2](https://github.com/rdkcentral/build-scripts/compare/1.0.1...1.0.2) |
| | | | |
| **buildsupport** ||||
| meta-image-support |  | 4.2.4 | |
| meta-stack-layering-support |  **3.3.1** | 3.2.0 | [3.2.0...3.3.1](https://github.com/rdkcentral/meta-stack-layering-support/compare/3.2.0...3.3.1) |
| | | | |
| **oe** ||||
| meta-openembedded |  | rdk-4.0.0 | |
| poky |  | rdk-4.6.0 | |
| meta-python2 |  | rdk-4.0.0 | |
| | | | |
| **extention** ||||
| meta-rdk-oss-ext |  | 1.7.0 | |
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
| meta-product-xione |  **3.5.0** | 3.4.9 | [3.4.9...3.5.0](https://github.com/rdk-e/meta-product-xione/compare/3.4.9...3.5.0) |
| | | | |
| **binder** ||||
| meta-binder |  | 1.0.0 | |
| | | | |
| **release** ||||
| meta-vendor-xione-realtek-release |  **9.6.1** | 9.5.0 | [9.5.0...9.6.0](https://github.com/rdk-e/meta-vendor-xione-realtek-release/compare/9.5.0...9.6.1) |
| | | | |

### Interface versions

| # | HAL Interface Header (rdkcentral github) | New Version (9.6.1) | Version from Previous Release (9.5.0)|
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

- This is a monthly release from VL with integrated with latest OSS 4.12.0,HAL 4.1.4

- Refer to the [Common meta layer versions for integration](#common-meta-layer-versions-for-integration) section to **keep meta repo versions consistent** for Middleware and ImageAssembler

- For full-stack validation, **upper layer versions** listed in [Versions of other layers  used for testing](#versions-of-other-layers--used-for-testing), were used.

Image Assembler PR Reference: **<https://github.com/rdk-e/rdke-assembler-manifest/pull/1320>**

Roll Back Dependencies: **None**

New RFC Support (RFC/TR-181): **None**

&nbsp;

### Tickets Summary

#### Layer Tickets Filter

  - [XIONE_REALTEK_VL_9.6.1](https://ccp.sys.comcast.net/browse/RDKEVD-7055?jql=project%20%3D%20RDKEVD%20AND%20fixVersion%20%3D%20XIONE_REALTEK_VL_9.6.1)


## Testing

### High Level Vendor Memory Usage Data

- Testing details are available in [RDKEVD-7376](https://ccp.sys.comcast.net/browse/RDKEVD-7376).

### Fullstack Image Testing

- Testing details are available in [RDKEVD-7376](https://ccp.sys.comcast.net/browse/RDKEVD-7376).

#### New Issues

- [new issues found](https://ccp.sys.comcast.net/issues/?jql=labels%20in%20(VL_9.6.1%2C%20VL_1.7.1_ES1) )

## Build instructions

- Steps to check out and build the vendor layer project [https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project](https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project)
- Steps to check out and build the image assembler project [https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler](https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler)


### Boot Command

#### Copy image to device /mnt/usb or /opt partitions or connect and mount USB having the image binn- Execute FlashApp command
- Move to directory containing the image
- FlashApp \<dirname\> \<imagename\>
- eg. FlashApp /mnt/usb/SKXI11ADS_9.6.0_VENDOR_DEV.bin

#### USB Flash Method using xboot prompt
- Copy the image `"SKXI11ADS_9.6.0_VENDOR_DEV.bin"` to the usb and connect to the STB
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

- Created the `"vendor test image"` `" SKXI11ADS_9.6.0_VENDOR_DEV.bin"` for XiOne-UK and for all other variants as well using the vendor layer jenkins job `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Vendor-Release-Build/"`
- Successfully booted the `"vendor test image"` and obtained the shell prompt.
- Verified vendor layer services up and running
- Verified IP acquisition via Ethernet
- Played clear AV with gst-play-1.0.
- Verified image flashing using FlashApp

Testing details in [RDKEVD-7376](https://ccp.sys.comcast.net/browse/RDKEVD-7376)

## Components details in 'packagegroup-vendor-layer'

 Components which are prebuilt or the ones which installs config files or scripts from meta layer have SRCREV marked as NA

| # | Vendor layer Component | New PV-PR (9.6.1) | PV-PR in Previous Release (9.5.0)| New SRCREV (9.6.1) | SRCREV in Previous Release (9.5.0)| Diff |
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
| 15 | mfrlib-hal-xione | **8.1.5-r0** | 8.1.2-r0 |  | NA |  |
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
| 37 | devicesettings-hal-realtek | **6.0.1-4.3.0-r0** | 6.0.1-4.2.5-r0 |  |  |  |
| - |  - devicesettings-hal-realtek_devicesettingssocrealtek | |  | **4.3.0** | dd6682e |  [](https://github.com/rdk-e/meta-vendor-xione-realtek-release) |
| - |  - devicesettings-hal-realtek_devicesettingsskyes1 | |  | **2.2.0** | b4cae97 |  [](https://github.com/rdk-e/meta-vendor-xione-realtek-release) |
| 38 | deepsleepmgr-hal-realtek | | 1.0.5-1.1.4-r0 | **0267f70** | 9f90a49 |  [](https://github.com/rdk-e/meta-vendor-xione-realtek-release) |
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
| 77 | westeros-simpleshell | **2.1.1-r0** | 2.1.0-r0 | **2.1.1** | 2.1.0 |  [](https://github.com/rdk-e/meta-vendor-xione-realtek-release) |
| 78 | westeros-simplebuffer | **2.1.1-r0** | 2.1.0-r0 | **2.1.1** | 2.1.0 |  [](https://github.com/rdk-e/meta-vendor-xione-realtek-release) |
| 79 | westeros-soc | **2.1.1-r0** | 2.1.0-r0 | **2.1.1** | 2.1.0 |  [](https://github.com/rdk-e/meta-vendor-xione-realtek-release) |
| 80 | westeros-sink | **2.1.1-r0** | 2.1.0-r0 |  |  |  |
| - |  - westeros-sink_westeros | |  | **2.1.1** | 2.1.0 |  [](https://github.com/rdk-e/meta-vendor-xione-realtek-release) |
| - |  - westeros-sink_realtek | |  | **3.2.0** | 2058230 |  [](https://github.com/rdk-e/meta-vendor-xione-realtek-release) |
| 81 | westeros | **2.1.1-r0** | 2.1.0-r0 | **2.1.1** | 2.1.0 |  [](https://github.com/rdk-e/meta-vendor-xione-realtek-release) |
| 82 | essos | **2.1.1-r0** | 2.1.0-r0 | **2.1.1** | 2.1.0 |  [](https://github.com/rdk-e/meta-vendor-xione-realtek-release) |
| 83 | essosrmgr | | 1.99-r0 | **d51dc56** | 0cc457f |  [](https://github.com/rdk-e/meta-vendor-xione-realtek-release) |
| 84 | make-mod-scripts | | 1.0-r0 |  | NA |  |
| 85 | sky-fpbutton-driver | | 3.0.0-r0 |  | acd582d |  |
| 86 | splashscreen-viewer | | 2.0.0-r0 |  | 41e70a2 |  |
| 87 | rtk-tee | | 1.0.0-r0 |  | NA |  |
| 88 | secapi-rtk | | 2.1.0-r2 |  | 95b6bd4 |  |
| 89 | [secapi3-rtk](#secapi3-rtk) | **3.3.0-r0** | 3.3.1-r0 | **570df40** | f7ed818 |  [f7ed818...570df40](https://github.com/rdk-e/secapi3-soc-realtek-cpc/compare/f7ed81834c894d68b24c691cb6cc157c33147dfb...570df4041c863710c747ec9640d5dec1bbc09e35) |
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
| 98 | widevinecdmi | **1.4.2-r0** | NA | **11d6937** | NA |  [](https://github.com/rdk-e/secapi3-soc-realtek-cpc) |
| 99 | qca6390-mod-wifi | | 1.0.3-r1 |  | NA |  |
| 100 | flashapp | | 7.1-r0 |  | NA |  |
| 101 | sky-led-driver | | 2.0.0-r0 |  | f97a795 |  |
| 102 | stark-mod-mali | | 5.10-r0 |  | 753bb6b4d998f1dacee966c751537ea86704f718 & 753bb6b4d998f1dacee966c751537ea86704f718 |  |
| 103 | rtkv1sink | | 2.0.0-r1 |  | 67bdf5b |  |
| 104 | platform-lib | | 2.6.0-r4 |  | NA |  |
| 105 | [rtk-audio-service](#rtk-audio-service) | **3.3.0-r0** | 3.2.2-r0 | **${PV}** | 35330ab |  [35330ab...${PV}](https://github.com/rdk-e/RtkAudioService-soc-realtek/compare/35330ab0f24ec80c45dbc04d296e524ff902390e...${PV}) |
| 106 | [hdmiservice](#hdmiservice) | **4.4.0-r0** | 4.2.5-r0 | **${PV}** | 3ab61cc |  [3ab61cc...${PV}](https://github.com/rdk-e/hdmiservice-realtek/compare/3ab61ccd4bd85d86cb345020289856d14ed05ca1...${PV}) |
| 107 | rtkpcrclksink | | 2.0.0-r0 |  | c8272d9 |  |
| 108 | blewakeupenabler | **1.6.0-r0** | 1.5.0-r0 | **af84c33** | 2763f76 |  [](https://github.com/rdk-e/hdmiservice-realtek) |
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
| - |  - linux-stark | |  | **6884f4e** | c62c661 |  [](https://github.com/rdk-e/hdmiservice-realtek) |
| - |  - linux-stark_android-kernel | |  |  | 0caf815 |  |
| - |  - linux-stark_FORMAT | |  |  | android-kernel_rtk-files |  |
| 119 | [rtkaudiosink](#rtkaudiosink) | **3.2.0-r0** | 3.1.8-r0 | **${PV}** | 238bf18 |  [238bf18...${PV}](https://github.com/rdk-e/rtkaudiosink-soc-realtek/compare/238bf184b5139610d05042a0029e0f7b4d0c3ee8...${PV}) |
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
| 139 | rtk-resource-manager | | 2.0.0-r0 | **281c271** | 5d33120 |  [](https://github.com/rdk-e/rtkaudiosink-soc-realtek) |
| 140 | rtk-install-lib | | 1.0.0-r0 |  | NA |  |
| 141 | mount-tmp-data | | 1.0.0-r0 |  | NA |  |




## Consolidated change list from vendor layer repositories

## Changes in meta repositories

## [meta-rdk-oss-reference](https://github.com/rdkcentral/meta-rdk-oss-reference/blob/main/CHANGELOG.md)

- Merge branch 'hotfix/4.12.2' into support/4.12.0 [1b8c07a](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/1b8c07a0a79df73a4feb8471d20a075acac51df9)
- RDKE-1060: Update changelog for 4.12.2 [4dcea24](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/4dcea2495fe5bef784bc26b4e5b4a6d4c93cd532)
- RDKE-1060: OSS hotfix release 4.12.2 [d29f350](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/d29f35073350e537df86e0749cfb377853900869)
- RDKOSS-820: Fix cairo librsvg  build error ( [#404](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/404))
- Merge branch 'hotfix/4.12.1' into support/4.12.0 [be31aba](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/be31aba7ec45cf2223bc44855c40358ad54190f4)
- RDKOSS-797: Update Changelog for 4.12.1 [ee97af6](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/ee97af683a8c066960861fa8d73421c1caef2059)
- RDKOSS-797 :  Add idlemetrics header support in 5.16 linux-libc header ( [#389](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/389))

## [meta-rdk-soc-realtek](https://github.com/rdk-e/meta-rdk-soc-realtek/blob/main/CHANGELOG.md)

- Merge branch 'release/4.3.0' [2c9045a](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/2c9045aac02690e85c2bfe21b6f6eb039395d054)
- Merge branch 'main' into release/4.3.0 [a6cffe4](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/a6cffe481157b03d1008603f0ec011568db46fe6)
- RDKEVD-7376: XiOne ES1 RTK Release 9.6.0/1.7.0 [0e4a2ab](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/0e4a2ab23b0f611f3500beb3c230825df29ff9cc)
- RDKEVD-7376: Change the latest revision to all component. ( [#230](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/230))
- REALTEK-896 : CVE-2026-31431 - high severity linux kernel vulnerability ( [#229](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/229))
- RDKEVD-7376: Change the latest revision to all component. ( [#228](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/228))
- RDKEVD-7376: Change the latest revision to all component. ( [#227](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/227))
- ES1-3030 : fix rtd16xxb_vpu_free_dma_buffer() doesn't call vunmap() ( [#226](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/226))
- Update westeros-soc.bb ( [#222](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/222))
- Merge branch 'release/4.2.0' [e53b582](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/e53b582cc242c1bcc4ec39f96cfbbcf5c39c4c33)
- Merge branch 'main' into release/4.2.0 [797b323](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/797b323fa245386b2ac254281f30e1cb5dabeb8e)
- RDKEVD-7376: XiOne ES1 RTK Release 9.6.0/1.7.0 [a8094c7](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/a8094c7123973a9fa2feca32bc1c07dda40baeec)
- XIONE-18553 : Support query anycase drop count. ( [#219](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/219))
- RDKEVD-4695, RDKEVD-6544: Enable rtk-resource-manager ( [#206](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/206))
- RDKEVD-1758:Remove Unmapped Binaries in secapi mfiree vendor layer. ( [#218](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/218))
- RDKEVD-5744 : Remove Secapi unittest binary ( [#212](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/212))
- RDKEVD-5744 : Update SecAPI to 3.4.1 ( [#199](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/199))
- RDKEVD-1758 : Remove Unmapped Binaries in Realtek-vendor layer. ( [#211](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/211))
- RDKEVD-1758 : Remove Unmapped Binaries in Realtek-vendor layer ( [#208](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/208))
- RDKEMW-15976: Fix ion node permission ( [#207](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/207))
- Merge pull request  [#205](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/205) from rdk-e/feature/RDKEMW-14218
- RDKEMW-14218: Fix populate_sdk task failures [2dc6b97](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/2dc6b978b1182dc1c72101c32472c21a74ec64d1)
- Merge pull request  [#204](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/204) from rdk-e/feature/RDKEVD-6104
- RDKEVD-6104 : Enable VE1 with buflock flow [858086b](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/858086b74e37d0dbfff53bf67eba62dc39af6d1b)

## [meta-oem-stream](https://github.com/rdk-e/meta-oem-stream/blob/main/CHANGELOG.md)

- Merge branch 'release/4.1.7' [c4edce5](https://github.com/rdk-e/meta-oem-stream/commit/c4edce500025f807e5c95dfe54c277ea16e2c469)
- RDKEVD-6870: [TCHXI6] VL Release 1.2.0 [ab963fd](https://github.com/rdk-e/meta-oem-stream/commit/ab963fd632ad381f10f4f75eea0b0e5b77527311)
- Merge pull request  [#78](https://github.com/rdk-e/meta-oem-stream/pull/78) from rdk-e/feature/RDKEVD-6317
- RDKEVD-6317:Splash screen wrongly displayed. [7c5b4b8](https://github.com/rdk-e/meta-oem-stream/commit/7c5b4b8bb64b805ffafd50e034dcf9b3ef7d98b5)
- Merge tag '4.1.6' into develop [a6f5da6](https://github.com/rdk-e/meta-oem-stream/commit/a6f5da6c65345029064c6d9d79aecd00b5a3c5e1)

## [meta-oem-realtek-stream](https://github.com/rdk-e/meta-oem-realtek-stream/blob/main/CHANGELOG.md)

- RDKEVD-7376: Provide the XiOne,ES1 VL 9.6.1/1.7.1 release Merge branch 'hotfix/X9.6.1_E1.7.1' into support/X9.6.1_E1.7.1 [6691831](https://github.com/rdk-e/meta-oem-realtek-stream/commit/6691831284367669caa5a86a2f9515c52adb4aa0)
- RDKEVD-7376: Provide the XiOne,ES1 VL 9.6.1/1.7.1 release [f3a5edc](https://github.com/rdk-e/meta-oem-realtek-stream/commit/f3a5edc4d0ea584bd92ce788b516ab27c265fca3)
- RDKEVD-7376: XiOne ES1 RTK Release 9.6.1/1.7.1 [86ef9bb](https://github.com/rdk-e/meta-oem-realtek-stream/commit/86ef9bb667ac869fcb9ffe726492f0f50f293ea4)
- Merge pull request  [#796](https://github.com/rdk-e/meta-oem-realtek-stream/pull/796) from rdk-e/feature/RDKEVD-4566-2605-2
- RDKEVD-6755: Fix HDCP disabled notification not sent on HDMI plug-out. [c693757](https://github.com/rdk-e/meta-oem-realtek-stream/commit/c69375762988b6de7ea7fdeedf01de80cef17050)
- Merge pull request  [#795](https://github.com/rdk-e/meta-oem-realtek-stream/pull/795) from rdk-e/feature/RDKEVD-4566-2605-1
- RDKEVD-4566: Realtek Include Media caps yaml file in rootfs. [2c98cc3](https://github.com/rdk-e/meta-oem-realtek-stream/commit/2c98cc3543b287a8541f103d22f99e83ff8f464e)
- Merge pull request  [#794](https://github.com/rdk-e/meta-oem-realtek-stream/pull/794) from rdk-e/feature/RDKEVD-4566-2605
- RDKEVD-4566: Realtek Include Media caps yaml file in rootfs. [1730754](https://github.com/rdk-e/meta-oem-realtek-stream/commit/17307548f25050e34ac017613bd164206de335e8)
- Merge pull request  [#785](https://github.com/rdk-e/meta-oem-realtek-stream/pull/785) from rdk-e/feature/RDKEVD-7180
- Merge pull request  [#792](https://github.com/rdk-e/meta-oem-realtek-stream/pull/792) from rdk-e/feature/RDKEVD-7013
- RDKEVD-7180: DD and DD plus option not available in the EPG. [2094399](https://github.com/rdk-e/meta-oem-realtek-stream/commit/20943993891bf8588a678600adc479721f4d4218)
- Merge tag 'X9.6.0_E1.7.0' into develop [71f05b6](https://github.com/rdk-e/meta-oem-realtek-stream/commit/71f05b654ba13b29bf114577b5585421e3747121)
- Merge branch 'release/X9.6.0_E1.7.0' [4449238](https://github.com/rdk-e/meta-oem-realtek-stream/commit/4449238a1455b1e978b68c4609cc757e2fc76562)
- RDKEVD-7013: playback controls change colour when swapping between apps. [f965c9d](https://github.com/rdk-e/meta-oem-realtek-stream/commit/f965c9dd1003c695e9362926a2ac5dfc2869a28c)
- RDKEVD-7376: XiOne ES1 RTK Release 9.6.0/1.7.0 [f1685fb](https://github.com/rdk-e/meta-oem-realtek-stream/commit/f1685fb594ae08db11bdbd0b4b579fcd8edf9f30)
- Merge pull request  [#779](https://github.com/rdk-e/meta-oem-realtek-stream/pull/779) from rdk-e/feature/RDKEVD-7376-LAT-1305
- RDKEVD-7376: XiOne ES1 RTK Release 9.6.0/1.7.0 [826eab6](https://github.com/rdk-e/meta-oem-realtek-stream/commit/826eab676619a9dc3036bf2bdd6f8565b77f8377)
- Merge pull request  [#770](https://github.com/rdk-e/meta-oem-realtek-stream/pull/770) from rdk-e/feature/RDKEVD-7209-Westeros-2.1.1
- Merge branch 'develop' into feature/RDKEVD-7209-Westeros-2.1.1 [8357d6c](https://github.com/rdk-e/meta-oem-realtek-stream/commit/8357d6c8792f60b5c4426dca97a7b96ad18ab848)
- Merge pull request  [#775](https://github.com/rdk-e/meta-oem-realtek-stream/pull/775) from rdk-e/feature/RDKEVD-7376-LAT-1
- RDKEVD-7376: Change the latest revision to all component. [7cd90d4](https://github.com/rdk-e/meta-oem-realtek-stream/commit/7cd90d4c5e9e21242d0cbd9aea27a4be5fc304ba)
- Merge pull request  [#774](https://github.com/rdk-e/meta-oem-realtek-stream/pull/774) from rdk-e/feature/RDKEVD-7376-LAT
- RDKEVD-7376: Change the latest revision to all component. [5083449](https://github.com/rdk-e/meta-oem-realtek-stream/commit/5083449d5aa12cd5c16a4ae789ded41a19e3d30b)
- Merge pull request  [#756](https://github.com/rdk-e/meta-oem-realtek-stream/pull/756) from rdk-e/feature/RDKEVD-5466-updates-es1-idle-metrics-patch
- Merge pull request  [#772](https://github.com/rdk-e/meta-oem-realtek-stream/pull/772) from rdk-e/feature/RDKEVD-7344-AFW
- Merge branch 'develop' into feature/RDKEVD-7209-Westeros-2.1.1 [c917996](https://github.com/rdk-e/meta-oem-realtek-stream/commit/c91799664f53ca6a788585779628cd59abd28dfb)
- RDKEVD-5466: updates ES1 IDLE METRICS patch [7af89ad](https://github.com/rdk-e/meta-oem-realtek-stream/commit/7af89adcfc9817e48c6782c90ada5943b9853b0a)
- Merge pull request  [#705](https://github.com/rdk-e/meta-oem-realtek-stream/pull/705) from rdk-e/feature/RDKEVD-4695
- Merge pull request  [#751](https://github.com/rdk-e/meta-oem-realtek-stream/pull/751) from rdk-e/feature/RDKEVD-6594_Integrate_RTK_driver_v65
- RDKEVD-7344: playback controls change colour when swapping between apps. [9712ba8](https://github.com/rdk-e/meta-oem-realtek-stream/commit/9712ba808990e600307242935c05103887be1590)
- Merge pull request  [#763](https://github.com/rdk-e/meta-oem-realtek-stream/pull/763) from rdk-e/feature/RDKEMW-15911
- Merge pull request  [#762](https://github.com/rdk-e/meta-oem-realtek-stream/pull/762) from rdk-e/develop
- Merge pull request  [#755](https://github.com/rdk-e/meta-oem-realtek-stream/pull/755) from rdk-e/feature/RDKEVD-7260
- RDKEVD-7260: Include widevinecdmi package into ES1 Realtek. [6cc2d7f](https://github.com/rdk-e/meta-oem-realtek-stream/commit/6cc2d7f2c16125bba6ef7707cf72bdfae97bb3bd)
- Update westeros to 2.1.1 [45964c1](https://github.com/rdk-e/meta-oem-realtek-stream/commit/45964c10d30f8e928e78009fdc3d032cf64a2b37)
- RDKEVD-6594 : Integrate RTK driver v65 wpa3 fix [b561e05](https://github.com/rdk-e/meta-oem-realtek-stream/commit/b561e0590504635dc0176ebe2d52504ed0a98c94)
- Merge pull request  [#750](https://github.com/rdk-e/meta-oem-realtek-stream/pull/750) from rdk-e/develop
- RDKEVD-6660: Enable configuration for ENTDAI-1658 app download on demand [082119c](https://github.com/rdk-e/meta-oem-realtek-stream/commit/082119c1a1a32d05cc8c03baa6528c6d3ee03839)
- Merge pull request  [#746](https://github.com/rdk-e/meta-oem-realtek-stream/pull/746) from rdk-e/feature/RDKEVD-6712
- RDKEMW-15911 :  bbappend clean-up [34213b2](https://github.com/rdk-e/meta-oem-realtek-stream/commit/34213b20c6c4226b3b99e219f6947cf3fe1e5f01)
- Merge pull request  [#741](https://github.com/rdk-e/meta-oem-realtek-stream/pull/741) from rdk-e/develop
- Merge pull request  [#708](https://github.com/rdk-e/meta-oem-realtek-stream/pull/708) from rdk-e/feature/RDKEVD-6676_skip_fw_verification
- RDKEVD-4695, RDKEVD-6544 : RtkResourceManager related change syncup. [c9df7d1](https://github.com/rdk-e/meta-oem-realtek-stream/commit/c9df7d178e5a05879ad25e18413c1ba5a01713a0)
- Merge pull request  [#730](https://github.com/rdk-e/meta-oem-realtek-stream/pull/730) from rdk-e/feature/RDKEVD-6919-Update-blewakeupenabler-to-1_6_0
- RDKEVD-6919: Re-enable Bluez restart during suspend-resume sequence [5b398b3](https://github.com/rdk-e/meta-oem-realtek-stream/commit/5b398b3d2dfb33d035b4c7443d93de31208a504e)
- RDKEVD-6676:[RDK-E] Skipping system cert verification from ES1 realtek Reason for change: This file verification is not requied as it's not actual .ta file [e72b356](https://github.com/rdk-e/meta-oem-realtek-stream/commit/e72b356044e5265eea300ca4e10f7c539f2cf134)
- Merge pull request  [#725](https://github.com/rdk-e/meta-oem-realtek-stream/pull/725) from rdk-e/feature/RDKEVD-6223-blewakeupenabler-update
- RDKEVD-6223: Making blewakeupenabler more robust [7d61a67](https://github.com/rdk-e/meta-oem-realtek-stream/commit/7d61a671dac76993fd0fdbecdfe188784025934e)
- Merge pull request  [#722](https://github.com/rdk-e/meta-oem-realtek-stream/pull/722) from rdk-e/feature/RDKEVD-5744-1
- RDKEVD-5744 : Update SecAPI to 3.4.1 [f9fdfec](https://github.com/rdk-e/meta-oem-realtek-stream/commit/f9fdfecc715d4a8c0e806ff777268ba0ebaf4f7d)
- Merge pull request  [#721](https://github.com/rdk-e/meta-oem-realtek-stream/pull/721) from rdk-e/feature/RDKEVD-4918_Integrate_RTK_driver_v60_DFS
- Merge pull request  [#720](https://github.com/rdk-e/meta-oem-realtek-stream/pull/720) from rdk-e/feature/RDKEVD-6305-wifi-qualcomm-fw-release-v33-22
- Merge pull request  [#663](https://github.com/rdk-e/meta-oem-realtek-stream/pull/663) from rdk-e/feature/SecAPI-3.4.1
- RDKEVD-5744 : Update SecAPI to 3.4.1 Reason for change: Update dependency version to 3.4.1 Test Procedure: Run SecApi unit test Risks: low Priority: P0 [22e65cd](https://github.com/rdk-e/meta-oem-realtek-stream/commit/22e65cd4b8a2d6b65f8889b6bee205bef953363a)
- Merge pull request  [#718](https://github.com/rdk-e/meta-oem-realtek-stream/pull/718) from rdk-e/feature/RDKEVD-424-VTS-L1-deepsleep
- RDKEVD-424 : Deepsleep VTS-L1 Fix [f6bc303](https://github.com/rdk-e/meta-oem-realtek-stream/commit/f6bc303859e901549414bf3ada989c00fd33eada)
- RDKEVD-4918: Integrate RTK wifi driver v2-60 DFS support [7aa4183](https://github.com/rdk-e/meta-oem-realtek-stream/commit/7aa41835fef88f0c6562938488ec01f88002685c)
- Merge pull request  [#715](https://github.com/rdk-e/meta-oem-realtek-stream/pull/715) from rdk-e/RDKEMW-16737_RDK-E_Xione_Verdi_no_widevinecdmi_1
- RDKEMW-16737: RDK-E Xione Verdi no widevinecdmi [c9d2edf](https://github.com/rdk-e/meta-oem-realtek-stream/commit/c9d2edf70bf672aef8de3f3c91a3be5d3d80e40e)
- RDKEVD-6712: kernel panic observed with "BUG: Fatal exception" [17284c3](https://github.com/rdk-e/meta-oem-realtek-stream/commit/17284c3734b3563a9372d50cc63a314ba345e2d6)
- Merge pull request  [#709](https://github.com/rdk-e/meta-oem-realtek-stream/pull/709) from rdk-e/feature/RDKEVD-6240
- RDKEVD-6240 : Reclaim non-existent playback pid slot. [8dcffe2](https://github.com/rdk-e/meta-oem-realtek-stream/commit/8dcffe204bee11219bd11d815c3eeda3be39b593)
- Merge pull request  [#707](https://github.com/rdk-e/meta-oem-realtek-stream/pull/707) from rdk-e/feature/RDKEVD-6193-1
- RDKEVD-6193: Update the devicesettings tag sha. [63bfacb](https://github.com/rdk-e/meta-oem-realtek-stream/commit/63bfacb2d90cb685af1bb4efc9ad15c07722e987)
- Merge pull request  [#706](https://github.com/rdk-e/meta-oem-realtek-stream/pull/706) from rdk-e/feature/RDKEVD-6471_AMC_PLUS_DS
- Merge branch 'develop' into feature/RDKEVD-6471_AMC_PLUS_DS [d2ac360](https://github.com/rdk-e/meta-oem-realtek-stream/commit/d2ac3601ba8b89c2a37bb0427fce0e58504e7534)
- Merge pull request  [#677](https://github.com/rdk-e/meta-oem-realtek-stream/pull/677) from rdk-e/feature/RDKEVD-6010-PR1-settings-key-mapping
- RDKEVD-6010 : PR1 RCU settings key mapping [6814672](https://github.com/rdk-e/meta-oem-realtek-stream/commit/68146724eb4e922ccfe7f3349530c1b8b5bbaefc)
- RDKEVD-6471: [RTK] Integration AMC+ RCU Key Handling in Deep Sleep HAL [7b8d402](https://github.com/rdk-e/meta-oem-realtek-stream/commit/7b8d40248a45432d2e3f7583b9b2968e015630df)
- Merge pull request  [#704](https://github.com/rdk-e/meta-oem-realtek-stream/pull/704) from rdk-e/support/9.5.0_VL9.5.0_P8.5
- RDKEVD-6305-wifi-qualcomm-fw-release-v33-22 [33bf5c7](https://github.com/rdk-e/meta-oem-realtek-stream/commit/33bf5c74bd8d725ef049ea2d42180d13f8686533)
- RDKEVD-6305-wifi-qualcomm-fw-release-v33-22 [c2354a6](https://github.com/rdk-e/meta-oem-realtek-stream/commit/c2354a6f6cd1589c7c8affe2d4b89cc3dca6bca1)
- Merge pull request  [#675](https://github.com/rdk-e/meta-oem-realtek-stream/pull/675) from rdk-e/RDKEVD-5142_ES1
- RDKEVD-5142: joy con when connected, logs flood [9409a67](https://github.com/rdk-e/meta-oem-realtek-stream/commit/9409a67b73671dc23c654182d47b0f89941af0c5)

## [meta-rdk-vendor-realtek-common](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/blob/main/CHANGELOG.md)

- Merge branch 'release/X9.5.1_E1.3.1' [eaafc12](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/eaafc12aedcd6b5bb0e53ff0af77a2aec9d284f7)
- RDKEVD-7376: XiOne ES1 RTK Release 9.6.0/1.7.0 [67dee28](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/67dee285418c82e5386a0878d0ab56bfe769bd15)
- Merge tag '9.5.0' into develop [c78821b](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/c78821bf4df088b93421aeb2271d351eca25d836)
- Merge branch 'release/9.5.0' [68eee6a](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/68eee6a25e057b87bf510c7da79814a183941261)
- RDKEVD-7376: XiOne ES1 RTK Release 9.6.0/1.7.0 [4fc749f](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/4fc749fa673d90dfefa6cc9213c993dd653f9197)
- Merge pull request  [#93](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/pull/93) from rdk-e/feature/RDKEVD-6529
- RDKEVD-6529: Set Bluetooth MAC address if zeroed [23796c3](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/23796c3bf95775d282991b489acc9ba53ab90e93)
- Merge pull request  [#94](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/pull/94) from rdk-e/feature/RDKEVD-6322-IT-NAGRA-8-1-5
- RDKEVD-6322 , RDKEVD-6879 : [RDK-E] IT-NAGRA removel [6772d56](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/6772d56386fa884d0f74de069365a1e19980b564)
- Merge tag '9.4.3' into develop [5d84338](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/5d843381a9b4cf090979fa810a36f936ea661959)

## [meta-oss-vendor-realtek](https://github.com/rdk-e/meta-oss-vendor-realtek/blob/main/CHANGELOG.md)

- Merge branch 'release/4.3.0' [62403ba](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/62403bab093e1db58fea215dc0797d16c29d85ed)
- RDKEVD-7376: XiOne ES1 RTK Release 9.6.0/1.7.0 [904365c](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/904365c72bd264f43ee854f0757f92acad272156)
- Update westeros to 2.1.1 ( [#149](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/149))
- Merge tag '4.2.0' into develop [a457eb4](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/a457eb412db85b6473bb25d31e4ac5e283835030)
- Merge branch 'release/4.2.0' [5ac00e3](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/5ac00e3c513daec9408be8b6958e0e74634f3327)
- RDKEVD-7376: XiOne ES1 RTK Release 9.6.0/1.7.0 [7008625](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/7008625d3a0d74fad17c9addee0e5111592db6fa)
- RDKEVD-4695, RDKEVD-6544: Enable rtk-resource-manager ( [#130](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/130))
- RDKEVD-6151 : To fix the EOS drain slow response. ( [#140](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/140))
- Merge pull request  [#126](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/126) from rdk-e/feature/RDKEVD-6002
- Merge pull request  [#125](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/125) from rdk-e/feature/RDKEVD-6104
- RDKEVD-6104 : Enable VE1 with buflock flow [32a36e6](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/32a36e67f23d15b8cbae11bd1bb9fe8562ab5f5c)
- RDKEVD-6002 : Enable VE1 rollback mode by default. [f0429d1](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/f0429d1501b9d43b253d899b746881f7265ae766)
- Merge pull request  [#124](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/124) from rdk-e/feature/RDKEVD-5757-update
- RDKEVD-5757 : update patch to resolve conflict [8749bbd](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/8749bbd41b1e53e961c26b3a6a43fbcf1f113673)
- RDKEVD-5183 : Relax the criteria for underflow ( [#107](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/107))
- Merge tag '4.1.9' into develop [9633fa8](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/9633fa8b5b450c67ea74c8fc3064975894c66697)



## Changes in component repositories

## ['secapi3-rtk'](https://github.com/rdk-e/secapi3-soc-realtek-cpc/blob/main/CHANGELOG.md)

- Merge branch 'release/3.3.1' [f7ed818](https://github.com/rdk-e/secapi3-soc-realtek-cpc/commit/f7ed81834c894d68b24c691cb6cc157c33147dfb)
- RDKEVD-1730 : Latest product tag 3.3.1 [6aa4fd6](https://github.com/rdk-e/secapi3-soc-realtek-cpc/commit/6aa4fd6ce890c83c3c97642b8525a89bc063cdd9)
- Merge pull request  [#5](https://github.com/rdk-e/secapi3-soc-realtek-cpc/pull/5) from rdk-e/feature/RDKEVD-1730-sync-with-stable2
- Merge branch  'stable2_june_10' into feature/RDKEVD-1730-sync-with-stable2 [27039b2](https://github.com/rdk-e/secapi3-soc-realtek-cpc/commit/27039b2b394c9d6cec3c57914da677266f213f62)
- REALTEK-852 : XiOne & ES1 Nightly jobs failing due to compilation errors [147c8cc](https://github.com/rdk-e/secapi3-soc-realtek-cpc/commit/147c8cccbd04316afd21dc019ed21e7e5586dd45)
- Add CODEOWNERS file [e85a771](https://github.com/rdk-e/secapi3-soc-realtek-cpc/commit/e85a7711ea19bf36b84c4cc017e06118445769c8)
- Merge tag '3.3.0' into develop [62b1690](https://github.com/rdk-e/secapi3-soc-realtek-cpc/commit/62b1690ef383594552ee45f0706e0c24e76eebcf)
## ['rtk-audio-service'](https://github.com/rdk-e/RtkAudioService-soc-realtek/blob/main/CHANGELOG.md)

## ['hdmiservice'](https://github.com/rdk-e/hdmiservice-realtek/blob/main/CHANGELOG.md)

## ['rtkaudiosink'](https://github.com/rdk-e/rtkaudiosink-soc-realtek/blob/main/CHANGELOG.md)


