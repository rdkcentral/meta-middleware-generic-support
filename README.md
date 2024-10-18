# Vendor Layer Release Notes

XiOne UK REALTEK STB RDKE Vendor Layer Release Notes

---

|Platforms supported|
|-------|
|XiOne-UK UHD 1319|

|Yocto version|
|-------|
|kirkstone|

|Summary|Content|
|---|----|
|Classification|Confidential|
|Date|18 Oct 2024|
|Author|pothiraj.paulraj@sky.uk|

---

## Table of Contents

- [Vendor Layer Release Notes](#vendor-layer-release-notes)
  - [Table of Contents](#table-of-contents)
  - [Release Description](#release-description)
  - [Vendor Release Components](#vendor-release-components)
  - [Meta Repos](#meta-repos)
  - [Interface versions](#interface-versions)
  - [Limitations](#limitations)
  - [Middleware Integration](#middleware-integration)
  - [Build instructions](#build-instructions)
    - [Boot Command](#boot-command)
  - [Testing](#testing)
  - [Release layer and components](#release-layer-and-components)
    - [Stack layer](#stack-layer)
    - [Components details in 'packagegroup-vendor-layer'](#components-details-in-packagegroup-vendor-layer)
  - [Vendor Layer Component Integration Details](#vendor-layer-component-integration-details)
  - [Consolidated change list from vendor layer repositories](#consolidated-change-list-from-vendor-layer-repositories)
    - [Changes in meta repositories](#changes-in-meta-repositories)
    - [Changes in component repositories](#changes-in-component-repositories)

## Release Description

The aim of this release to integrate the latest oss release 4.1.0. This release will provide a versioned "meta-vendor-xione-realtek-release" that will be used by the middleware, image assembler.

The scope of this release includes:

- OSS Release 4.1.0 [RDK-53920](https://ccp.sys.comcast.net/browse/RDK-53920)
- Merge kirkstone changes to develop branch [RDK-53345](https://ccp.sys.comcast.net/browse/RDK-53345)
- Bluez clean-up [RDK-53522](https://ccp.sys.comcast.net/browse/RDK-53522)
- Secapi-crypto size optimization [XIONE-15748](https://ccp.sys.comcast.net/browse/XIONE-15748)
- Add RDK profile [XIONE-15913](https://ccp.sys.comcast.net/browse/XIONE-15913)
- Sync dsfpd from 23Q4 [RDK-53733](https://ccp.sys.comcast.net/browse/RDK-53733)
- Integrate splash screen [RDK-52921](https://ccp.sys.comcast.net/browse/RDK-52921)
- Header file cleanup in oem layer [RDK-53199](https://ccp.sys.comcast.net/browse/RDK-53199)

### Vendor Release Components

| Vendor Release Components | New Version | Version in Previous Release (2.7.0) | ChangeList |
|------------|---------|------------------------------------|--------------|
| Kernel & DTB |  | 4.9.119.01-r5 | |
| packagegroup-vendor-layer | 3.0.1-r0 | 2.7.0-r0 | [3.0.1...2.7.0](https://github.com/rdk-e/meta-oem-realtek-stream/compare/2.7.0...3.0.1) |

### Meta Repos

#### Meta repos maintained by layers layer

| Meta Repo | New Version | Version in Previous Release (2.7.0) | ChangeList |
|------------|---------|------------------------------------|--------------|
| [meta-rdk-auxiliary](#meta-rdk-auxiliary) |  **4.0.0** | NA | [4.0.0](https://github.com/rdk-e/meta-rdk-auxiliary/commits/4.0.0) |
| [meta-oss-reference-release](#meta-oss-reference-release) |  **4.1.0** | 3.3.0 | [3.3.0...4.1.0](https://github.com/rdk-e/meta-oss-reference-release/compare/3.3.0...4.1.0) |
| [meta-rdk-oss-reference](#meta-rdk-oss-reference) |  **4.1.0** | 3.3.0 | [3.3.0...4.1.0](https://github.com/rdk-e/meta-rdk-oss-reference/compare/3.3.0...4.1.0) |
| [meta-rdk-tools](#meta-rdk-tools) |  **2.2.0** | 2.1.0 | [2.1.0...2.2.0](https://github.com/rdk-e/meta-rdk-tools/compare/2.1.0...2.2.0) |
| [meta-vts](#meta-vts) |  **1.2.0** | 1.1.1 | [1.1.1...1.2.0](https://github.com/rdk-e/meta-vts/compare/1.1.1...1.2.0) |
| [meta-rdk-soc-realtek](#meta-rdk-soc-realtek) |  **3.0.0** | 2.7.0 | [2.7.0...3.0.0](https://github.com/rdk-e/meta-rdk-soc-realtek/compare/2.7.0...3.0.0) |
| [meta-oem-stream](#meta-oem-stream) |  **3.0.0** | 2.7.0 | [2.7.0...3.0.0](https://github.com/rdk-e/meta-oem-stream/compare/2.7.0...3.0.0) |
| [meta-oem-realtek-stream](#meta-oem-realtek-stream) |  **3.0.1** | 2.7.0 | [2.7.0...3.0.1](https://github.com/rdk-e/meta-oem-realtek-stream/compare/2.7.0...3.0.1) |
| [meta-oss-vendor-realtek](#meta-oss-vendor-realtek) |  **3.0.0** | 2.7.0 | [2.7.0...3.0.0](https://github.com/rdk-e/meta-oss-vendor-realtek/compare/2.7.0...3.0.0) |
| [meta-mediarite-vendor](#meta-mediarite-vendor) |  **10.0.34.0a2-r2** | 10.0.34.0a2-1 | [10.0.34.0a2-1...10.0.34.0a2-r2](https://github.com/rdk-e/meta-mediarite-vendor/compare/10.0.34.0a2-1...10.0.34.0a2-r2) |

#### Meta repos common for RDK-E

| Meta Repo | New Version | Version in Previous Release (2.7.0) | ChangeList |
|------------|---------|------------------------------------|--------------|
| **buildscripts** ||||
| build-scripts |  **4.0.0** | 2.0.5 | [2.0.5...4.0.0](https://github.com/rdk-e/build-scripts/compare/2.0.5...4.0.0) |
| | | | |
| **buildsupport** ||||
| meta-image-support |  **4.0.0** | 3.0.10 | [3.0.10...4.0.0](https://github.com/rdk-e/meta-image-support/compare/3.0.10...4.0.0) |
| | | | |
| **stacklayering** ||||
| meta-stack-layering-support |  **3.0.0** | 2.0.0 | [2.0.0...3.0.0](https://github.com/rdk-e/meta-stack-layering-support/compare/2.0.0...3.0.0) |
| | | | |
| **oe** ||||
| meta-openembedded |  **v4.1.0** | v1.0.0_dunfell | [v1.0.0_dunfell...v4.1.0](https://github.com/rdk-e/meta-openembedded/compare/v1.0.0_dunfell...v4.1.0) |
| poky |  **v4.1.0** | v1.0.7 | [v1.0.7...v4.1.0](https://github.com/rdk-e/poky/compare/v1.0.7...v4.1.0) |
| meta-python2 |  **v4.0.0** | NA | [v4.0.0](https://github.com/rdk-e/meta-python2/commits/v4.0.0) |
| | | | |
| **configs** ||||
| rdke-region-uk-config |  **2.1.5** | 2.1.0 | [2.1.0...2.1.5](https://github.com/rdk-e/rdke-region-uk-config/compare/2.1.0...2.1.5) |
| rdke-common-config |  **4.1.0** | 1.0.8 | [1.0.8...4.1.0](https://github.com/rdk-e/rdke-common-config/compare/1.0.8...4.1.0) |
| rdke-stb-config |  **1.0.2** | 1.0.1 | [1.0.1...1.0.2](https://github.com/rdk-e/rdke-stb-config/compare/1.0.1...1.0.2) |
| | | | |
| **rdk** ||||
| meta-rdk-halif-headers |  **3.1.3** | 3.1.2 | [3.1.2...3.1.3](https://github.com/rdk-e/meta-rdk-halif-headers/compare/3.1.2...3.1.3) |
| | | | |
| **products** ||||
| meta-product-xione |  **3.0.0** | 2.7.0 | [2.7.0...3.0.0](https://github.com/rdk-e/meta-product-xione/compare/2.7.0...3.0.0) |
| | | | |

### Interface versions

| # | HAL Interface Header (rdkcentral github) | New Version | Versionfrom Previous Release (2.7.0)
|---|------------------------------------------|-------------|----------------------|
| 1 | media-utils-headers |  | 1.0.4  |
| 2 | hdmicecheader |  | 1.3.7  |
| 3 | deepsleep-manager-headers |  | 1.0.3  |
| 4 | power-manager-headers |  | 1.0.2  |
| 5 | devicesettings-hal-headers |  | 2.0.0  |
| 6 | tvsettings-hal-headers |  | 1.2.0 |
|   |   |  |  |
|   | RDK HAL Headers (RDKE github) |  |  |
|   |   |  |  |
| 7 | iarmmgrs-hal-headers |  | 2.1.0 |
| 8 | closedcaption-hal-headers |  | GRT_v2 |
| 9 | iarmbus-headers |  | GRT_v2 |
| 10 | rdk-gstreamer-utils-headers |  | 1.3.0 |

### Limitations

It should be noted that some services may not run as they have dependencies with other layers. Additionally, the exclusion of inter-layer bbappends/patches might result in the failure to start some services. These limitations should be taken into consideration during the verification process. These Limitations will be addressed in Future Releases.

### Middleware Integration

Middleware image testing done by using feature branch feature/RDK-53646-3.0.0-Release-ipks for https://github.com/rdk-e/rdke-middleware-manifest/blob/feature/RDK-53646-3.0.0-Release-ipks/realtek-xione.xml

## Build instructions

Steps to check out and build the vendor layer project
https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project


### Boot Command

#### Copy image to device and Flash

- Copy image to device /mnt/usb or /opt partitions or connect and mount USB having the image bin
- Execute FlashApp command
    - Move to directory containing the image
    - FlashApp \<dirname\> \<imagename\>
    - eg. FlashApp /mnt/usb/SKXI11ADS_MIDDLEWARE_DEV_feature_RDK-53646-3.0.0-Release-ipks_20241018104755.bin

We will not be able to flash the image through FlashApp, on 1.0.1 release and We have supported Flash app from 2.0.0 onwards.

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

Created the "vendor test image" "SKXI11ADS_VENDOR_DEV_refs_tags_3.0.1_20241017170433.bin" using the vendor layer project.
Successfully booted the "vendor test image" and obtained the shell prompt.
For this release testing was done by using feature branch  feature/RDK-53646-3.0.0-Release-ipks for rdke-middleware-manifest/realtek-xione.xml

## Release layer and components

### Stack layer

| Layer | Tag |
|------|------|
| [meta-vendor-xione-realtek-release](https://github.com/rdk-e/meta-vendor-xione-realtek-release) | 3.0.1 |
#### Artifactory Location for IPKs - https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-uk-release/3.0.1/xione-uk/ipks/debug

### Components details in 'packagegroup-vendor-layer'

 Components which are prebuilt or the ones which installs config files or scripts from meta layer have SRCREV marked as NA 

| # | Vendor layer Component | New PV-PR | PV-PR in Previous Release (2.7.0)| New SRCREV | SRCREV in Previous Release (2.7.0)| Diff |
|---|------------------------------------------|-------------|----------------------|-----------|------------|-----|
| 1 | [media-utils-soc-realtek](#media-utils-soc-realtek) | | 1.0.4-1.0.0-r0 | **5e71382** | GRT_STB_v2 |  [GRT_STB_v2...5e71382](https://github.com/rdk-e/media_utils-soc-realtek/compare/GRT_STB_v2...5e713820e7b55d176cd135eea0f3f2b1ec0756d7) |
| 2 | [closedcaption-hal-realtek](#closedcaption-hal-realtek) | | 1.0.0-2.0.0-r0 | **e2ae730** | GRT_STB_v2.1.0 |  [GRT_STB_v2.1.0...e2ae730](https://github.com/rdk-e/closedcaption-soc-realtek/compare/GRT_STB_v2.1.0...e2ae73072f3b64d7a4ec78383e4fe16c1b5f9e59) |
| 3 | [hdmicec-hal-realtek](#hdmicec-hal-realtek) | | 1.3.7-1.0.0-r0 | **3a54a46** | GRT_STB_v2 |  [GRT_STB_v2...3a54a46](https://github.com/rdk-e/hdmicec-soc-realtek/compare/GRT_STB_v2...3a54a46a2d09d0f838153eabca833c99d2640b0b) |
| 4 | [iarmmgrs-hal-realtek](#iarmmgrs-hal-realtek) | | 2.1.0-2.0.0-r0 | **a15d303** | GRT_STB_v2.1.0 |  [GRT_STB_v2.1.0...a15d303](https://github.com/rdk-e/iarmmgrs-soc-realtek/compare/GRT_STB_v2.1.0...a15d3038ce4ab7e9a8c7fd4026c2eb6ec17cbe21) |
| 5 | rdk-gstreamer-utils-platform | | 1.3.0-r0 |  | 739cdb7 | |
| 6 | devicesettings-hal-realtek | **2.0.0-1.0.0-r1** | 2.0.0-1.0.0-r0 |  |  | [#89](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/89) |
| - |  - devicesettings-hal-realtek_devicesettingssocrealtek | |  | **1e3edb0** | GRT_STB_v2.1.0 |  [](https://github.com/rdk-e/iarmmgrs-soc-realtek) |
| - |  - devicesettings-hal-realtek_devicesettingsskyxione | |  | **6929995** | GRT_STB_v2 |  [](https://github.com/rdk-e/iarmmgrs-soc-realtek) |
| 7 | deepsleepmgr-hal-realtek | | 1.0.3-1.0.0-r0 | **cbe53a0** | GRT_STB_v1 |  [](https://github.com/rdk-e/iarmmgrs-soc-realtek) |
| 8 | pwrmgr-hal-realtek | | 1.0.2-1.0.0-r0 | **c91e047** | GRT_STB_v1 |  [](https://github.com/rdk-e/iarmmgrs-soc-realtek) |
| 9 | rtk-platform-conf | | 2.6.0-r0 |  | NA | |
| 10 | testagentlib | | 2.9.0-r0 |  | NA | |
| 11 | emmc-read-util | | 3.3.4-r0 |  | NA | |
| 12 | otp-program | | 2.2-r1 |  | NA | |
| 13 | gstreamer1.0 | | 1.18.5-r3 |  | NA | |
| 14 | gstreamer1.0-meta-base | | 1.18.5-r3 |  | NA | |
| 15 | gstreamer1.0-omx | | 1.10.4-r3 |  | NA | |
| 16 | gstreamer1.0-libav | | 1.18.5-r3 |  | NA | |
| 17 | gstreamer1.0-plugins-good | | 1.18.5-r3 |  | NA | |
| 18 | gstreamer1.0-plugins-good-meta | | 1.18.5-r3 |  | NA | |
| 19 | gstreamer1.0-plugins-bad | | 1.18.5-r3 |  | NA | |
| 20 | gstreamer1.0-plugins-bad-meta | | 1.18.5-r3 |  | NA | |
| 21 | gstreamer1.0-rtsp-server | | 1.18.5-r3 |  | NA | |
| 22 | gstreamer1.0-plugins-base | | 1.18.5-r3 |  | NA | |
| 23 | gstreamer1.0-plugins-base-meta | | 1.18.5-r3 |  | NA | |
| 24 | gstreamer1.0-plugins-base-playback | | 1.18.5-r3 |  | NA | |
| 25 | gstreamer1.0-plugins-good-wavparse | | 1.18.5-r3 |  | NA | |
| 26 | gstreamer1.0-plugins-good-audiofx | | 1.18.5-r3 |  | NA | |
| 27 | gstreamer1.0-plugins-good-isomp4 | | 1.18.5-r3 |  | NA | |
| 28 | gstreamer1.0-plugins-good-audioparsers | | 1.18.5-r3 |  | NA | |
| 29 | gstreamer1.0-plugins-good-soup | | 1.18.5-r3 |  | NA | |
| 30 | gstreamer1.0-plugins-base-gio | | 1.18.5-r3 |  | NA | |
| 31 | gstreamer1.0-plugins-base-videoconvert | | 1.18.5-r3 |  | NA | |
| 32 | gstreamer1.0-plugins-base-videoscale | | 1.18.5-r3 |  | NA | |
| 33 | gstreamer1.0-plugins-base-volume | | 1.18.5-r3 |  | NA | |
| 34 | gstreamer1.0-plugins-base-typefindfunctions | | 1.18.5-r3 |  | NA | |
| 35 | gstreamer1.0-plugins-good-autodetect | | 1.18.5-r3 |  | NA | |
| 36 | gstreamer1.0-plugins-good-avi | | 1.18.5-r3 |  | NA | |
| 37 | gstreamer1.0-plugins-good-deinterlace | | 1.18.5-r3 |  | NA | |
| 38 | gstreamer1.0-plugins-good-interleave | | 1.18.5-r3 |  | NA | |
| 39 | gstreamer1.0-plugins-bad-dash | | 1.18.5-r3 |  | NA | |
| 40 | gstreamer1.0-plugins-bad-mpegtsdemux | | 1.18.5-r3 |  | NA | |
| 41 | gstreamer1.0-plugins-bad-smoothstreaming | | 1.18.5-r3 |  | NA | |
| 42 | gstreamer1.0-plugins-bad-videoparsersbad | | 1.18.5-r3 |  | NA | |
| 43 | gstreamer1.0-plugins-bad-opusparse | | 1.18.5-r3 |  | NA | |
| 44 | gstreamer1.0-plugins-bad-dashdemux | | 1.18.5-r3 |  | NA | |
| 45 | gstreamer1.0-plugins-good-matroska | | 1.18.5-r3 |  | NA | |
| 46 | gstreamer1.0-plugins-base-app | | 1.18.5-r3 |  | NA | |
| 47 | gstreamer1.0-plugins-base-audioconvert | | 1.18.5-r3 |  | NA | |
| 48 | gstreamer1.0-plugins-base-audioresample | | 1.18.5-r3 |  | NA | |
| 49 | rtk-audio-service | | 2.0.0-r0 |  | e52aef88fc80d0e3b6166000e8553a7b7dc7fa7a & 6bb3a0f37357296c4f0697c1c4ecd9d69f45eb02 | |
| 50 | libdrm | **2.4.110-r0** | 2.4.100-r0 |  | NA | [#327](https://github.com/rdk-e/meta-rdk-oss-reference/pull/327) |
| 51 | westeros-simpleshell | | 1.3.0-r0 |  | NA | |
| 52 | westeros-simplebuffer | | 1.3.0-r0 |  | NA | |
| 53 | westeros-soc | | 1.3.0-r1 |  | NA | |
| 54 | westeros-sink | | 2.0.0-r0 |  | 5724b0f | |
| 55 | westeros | | 2.0.0-r0 |  | 3d9ccd8 | |
| 56 | essos | | 1.0.0-r0 |  | NA | |
| 57 | cairo | | 1.16.0-r0 |  | NA | |
| 58 | libepoxy | **1.5.9-r1** | 1.5.4-r1 |  | NA | [#327](https://github.com/rdk-e/meta-rdk-oss-reference/pull/327) |
| 59 | python3-pygobject | | 3.34.0-r0 |  | NA | |
| 60 | pango | | 1.44.7-r0 |  | NA | |
| 61 | make-mod-scripts | | 1.0-r0 |  | NA | |
| 62 | librsvg | | 2.40.21-r0 |  | NA | |
| 63 | python3-pycairo | | 1.19.0-r0 |  | NA | |
| 64 | sky-fpbutton-driver | | 2.8-r0 |  | NA | |
| 65 | xsign | | 4.0.1-r1 |  | NA | |
| 66 | mfrlib-hal-xione | | 7.0.4-r0 |  | NA | |
| 67 | wipe-disk-partitions | | 1.0.0-r0 |  | NA | |
| 68 | [splashscreen-viewer](#splashscreen-viewer) | **2.0.0-r0** | NA | **41e70a2** | NA |  [41e70a2](ssh:git@github.com:rdk-e/splashscreen-viewer.git/commits/41e70a2d13db7163e984b7eb3e7c20da737135ff) |
| 69 | rtk-tee | | 1.0.0-r0 |  | NA | |
| 70 | secauthn | | 1.0.0-r0 |  | NA | |
| 71 | secapi-rtk | | 2.1.0-r1 |  | 95b6bd4 | |
| 72 | secapi3-rtk | | 3.0.0-r0 |  | aa3c293 | |
| 73 | secapi2-adapter | | 1.0.0-r0 |  | NA | |
| 74 | secapi-common-hw | | 2.3.0-r0 |  | 3a51b88 | |
| 75 | secapi-netflix | | 1.0.0-r0 |  |  | |
| - |  - secapi-netflix_com_inc_rtk | |  |  | 0fa3af3 | |
| - |  - secapi-netflix_socrealtek | |  |  | d3c7c87 | |
| 76 | gst-svp-ext | | 1.0.0-r0 |  | NA | |
| 77 | systemaudioplatform | | 1.0.0-r0 |  | 776348d | |
| 78 | dvrmgr-hal-realtek | | 1.0.0-r0 |  | NA | |
| 79 | [secapi-crypto-rtk](#secapi-crypto-rtk) | **2.3.1-r0** | 2.3.0-r0 | **5241d45** | f5eb924 |  [f5eb924...5241d45](https://github.com/rdk-e/sec-apis-crypto-cpc/compare/f5eb9240383e67fb9aaf0a8d67791ca5ad2b91f7...5241d4573f44dda750f6cad12331f5daa6161245) |
| 80 | secapi-common-crypto | | 2.3.0-r0 |  | 3a51b88 | |
| 81 | testagent-loader | | 2.3.0-r0 |  | NA | |
| 82 | qca6390-mod-wifi | | 1.0.0-r0 |  | NA | |
| 83 | qca-hciattach | **1.0.0-r1** | 1.0.0-r0 |  | NA | [#202](https://github.com/rdk-e/meta-oem-realtek-stream/pull/202) |
| 84 | emmc-fw-update | | 1.0.0-r0 |  | NA | |
| 85 | mount-disk-partition | | 1.0.0-r0 |  | NA | |
| 86 | image-verifier-lib | | 6.2.0-r0 |  | NA | |
| 87 | flashapp | **7.1-r0** | 5.9.5-r0 |  | NA | [#202](https://github.com/rdk-e/meta-oem-realtek-stream/pull/202) |
| 88 | sky-led-driver | | 1.0.0-r0 |  | NA | |
| 89 | fmtsasidlibs | **2.4-r1** | 2.4-r0 |  | NA | [#205](https://github.com/rdk-e/meta-oem-realtek-stream/pull/205) |
| 90 | [hank-mod-mali](#hank-mod-mali) | | 1.0.0-r1 | **3ad45d0** | GRT_STB_v2 |  [GRT_STB_v2...3ad45d0](https://github.com/rdk-e/kernel-modules-mali-soc-realtek/compare/GRT_STB_v2...3ad45d0cca66d4bdc06d5fb637784f19435bb223) |
| 91 | [rtkv1sink](#rtkv1sink) | | 2.0.0-r0 | **67bdf5b** | GRT_STB_v2 |  [GRT_STB_v2...67bdf5b](https://github.com/rdk-e/rtkv1sink-soc-realtek/compare/GRT_STB_v2...67bdf5b0c084fdb466e062d0a14eaa71a93392c2) |
| 92 | led-boot-pattern | | 1.0.0-r0 |  | NA | |
| 93 | rtkmali | | 2.8.0-r0 |  | NA | |
| 94 | platform-lib | | 2.6.0-r2 |  | NA | |
| 95 | [hdmiservice](#hdmiservice) | | 2.1.0-r0 | **66c8242** | GRT_STB_v2.1.0 |  [GRT_STB_v2.1.0...66c8242](https://github.com/rdk-e/hdmiservice-realtek/compare/GRT_STB_v2.1.0...66c82425431726a7bb4a47295f57bcf60f5e3c3c) |
| 96 | [rtkpcrclksink](#rtkpcrclksink) | | 2.0.0-r0 | **c8272d9** | GRT_STB_v2 |  [GRT_STB_v2...c8272d9](https://github.com/rdk-e/rtkpcrclksink-soc-realtek/compare/GRT_STB_v2...c8272d9293dc8e1869198a18be0aa9e978936320) |
| 97 | blewakeupenabler | | 1.3.0-r0 | **7c0eb9c** | 1.3.0 |  [](https://github.com/rdk-e/rtkpcrclksink-soc-realtek) |
| 98 | linux-libc-headers | | 4.9-r5 |  | NA | |
| 99 | packagegroup-kernel-modules | | 4.9.119.01-r5 |  | NA | |
| 100 | linux-hank | | 4.9.119.01-r5 |  | e608d5f | |
| 101 | mediarite-vendor | | 10.0.34.0a2-r0 |  | NA | |
| 102 | gst-plugins-mediarite | | 1.0-r0 |  | NA | |
| 103 | [rtkaudiosink](#rtkaudiosink) | | 2.0.0-r0 | **9000f66** | GRT_STB_v2 |  [GRT_STB_v2...9000f66](https://github.com/rdk-e/rtkaudiosink-soc-realtek/compare/GRT_STB_v2...9000f666fec77f86e620f3abbc516ffbe84c8511) |
| 104 | sky-dropbear | | 1.0.0-r1 |  | NA | |
| 105 | [mfi-ree](#mfi-ree) | | 2.0.0-r0 | **1f5a100** | GRT_v2 |  [GRT_v2...1f5a100](https://github.com/rdk-e/mfi-ree-cpc/compare/GRT_v2...1f5a100a7c4f26489b54b0fdebc197ba3db047f9) |
| 106 | sysint-oem | **1.0.0-r2** | 1.0.0-r1 |  | ec0f597 | [#202](https://github.com/rdk-e/meta-oem-realtek-stream/pull/202) |
| 107 | sysint-soc | | 1.0.0-r0 |  | c3ae6f4 | |
| 108 | apparmor-vendor | | 1.0.0-r0 |  | 41e3674 | |
| 109 | directfb | | 1.7.7-r0 |  | NA | |
| 110 | audiocapturemgr-vendor | | 1.0.0-r0 |  | a063707 | |

## Components Removed

| # |  Component Name | Reason |
|----|--------------|------|
| 1 | early-display | Replaced by splash screen |

## Consolidated change list from vendor layer repositories

## Changes in meta repositories

## [meta-rdk-auxiliary](https://github.com/rdk-e/meta-rdk-auxiliary/blob/main/CHANGELOG.md)

- RDK-53345: Merge kirkstone changes to develop branch ( [#5](https://github.com/rdk-e/meta-rdk-auxiliary/pull/5))
- Create coverity.bbclass [d03ef01](https://github.com/rdk-e/meta-rdk-auxiliary/commit/d03ef012988385ec8ea68ed44b9675b07f422626)
- Update layer.conf [b952015](https://github.com/rdk-e/meta-rdk-auxiliary/commit/b952015b2cfb90fe585ccab7c9b90bca44fcb0fb)
- Create user-classes.inc [684f2c7](https://github.com/rdk-e/meta-rdk-auxiliary/commit/684f2c7c37620e0c050dcf14a5fe4f28be2e34d4)
- Create image-classes.inc [6545a0a](https://github.com/rdk-e/meta-rdk-auxiliary/commit/6545a0acbd62b73ac708119549c8396964631871)
- Create layer.conf [1db4e7b](https://github.com/rdk-e/meta-rdk-auxiliary/commit/1db4e7ba6e303992a69f6fbc72e7ede55f8ca577)
- RDK-53053: meta-rdk-auxiliary layer Reason for change: Move bbclasses from meta-image-support to meta-rdk-auxiliary [1ec5720](https://github.com/rdk-e/meta-rdk-auxiliary/commit/1ec5720868d56ceb172be76994cbf126931992d8)
- Add CODEOWNERS file [79c89d7](https://github.com/rdk-e/meta-rdk-auxiliary/commit/79c89d7f408754e5e83f0f656981829f1a999cb4)
- Initial commit [cb3bb53](https://github.com/rdk-e/meta-rdk-auxiliary/commit/cb3bb530b6b5cdc0b3921fb8b21be116e498e662)
## [meta-oss-reference-release](https://github.com/rdk-e/meta-oss-reference-release/blob/main/CHANGELOG.md)

- RDK-53920: OSS 4.1.0 updated [74969c5](https://github.com/rdk-e/meta-oss-reference-release/commit/74969c57a37dd78eef3c795cd5c7f4552e49d843)
- RDK-53608: Update configuration for OSS release 4.0.0 [08562b1](https://github.com/rdk-e/meta-oss-reference-release/commit/08562b170332f0d7432f1b378a7b62b4a2e0f8f1)
- RDK-53442: updated test oss release path ( [#66](https://github.com/rdk-e/meta-oss-reference-release/pull/66))
- RDK-53345: Merge kirkstone changes to develop branch ( [#62](https://github.com/rdk-e/meta-oss-reference-release/pull/62))
- RDK-53376: OSS release 3.4.0 [2ee1ad0](https://github.com/rdk-e/meta-oss-reference-release/commit/2ee1ad0918ee03203006d000b4e6760f852f10b6)
## [meta-rdk-oss-reference](https://github.com/rdk-e/meta-rdk-oss-reference/blob/main/CHANGELOG.md)

- RDK-53920: Updated oss packagegroup version to 4.1.0 [eb26042](https://github.com/rdk-e/meta-rdk-oss-reference/commit/eb260425ab273ea6c635748323217a3630d17e0a)
- RDK-48916:RDKE:Reduce rootfs size - reduce FFMPEG library footprint [ab91af0](https://github.com/rdk-e/meta-rdk-oss-reference/commit/ab91af0509771f4ff46fc05d9411566492060bed)
- RDK-53860: Rename branch from 'master' to 'main' [00e15ba](https://github.com/rdk-e/meta-rdk-oss-reference/commit/00e15ba96a415e9d1ed7eb93849619016fa99803)
- RDK-53522 : Bluez clean-up [66fdaeb](https://github.com/rdk-e/meta-rdk-oss-reference/commit/66fdaeb93e98801b51d3d7cabba21cc042c4cbfa)
- RDK-53608: OSS Kirkstone release 4.0.0 [a53ba57](https://github.com/rdk-e/meta-rdk-oss-reference/commit/a53ba574a236b33d1c7a1ce55b7bb21d4a99d1cb)
- RDK-53608: Fix libdash patch [a1ae4b5](https://github.com/rdk-e/meta-rdk-oss-reference/commit/a1ae4b59e13a6a581ca6d6c55a1b79808bbc663e)
- RDKE-139-Build meta-toolchain target [0c28c56](https://github.com/rdk-e/meta-rdk-oss-reference/commit/0c28c5662537c4534cfd64114618d32efe0e7324)
- Update bash_3.2.57.bbappend [da9c28d](https://github.com/rdk-e/meta-rdk-oss-reference/commit/da9c28d150c954b3cd63ef704546905b27c5b6f5)
- RDK-53345: Merge kirkstone changes to develop branch ( [#327](https://github.com/rdk-e/meta-rdk-oss-reference/pull/327))
- RDK-53376: Update packagegroup-oss-layer.bb [45497a1](https://github.com/rdk-e/meta-rdk-oss-reference/commit/45497a1ed9155393878213782a3d6e2c63bd6340)
- RDKE-271: Fix meta-toolchain target [d49a70c](https://github.com/rdk-e/meta-rdk-oss-reference/commit/d49a70cbd83a222d1c2c1b3db919e85a3e91f300)
- Create COPYING [36ce539](https://github.com/rdk-e/meta-rdk-oss-reference/commit/36ce5399828dd65db607c6994725335c849f2b5f)
- Create NOTICE [ce739c3](https://github.com/rdk-e/meta-rdk-oss-reference/commit/ce739c3218f68549509a646937422537ddf8c488)
- Create CONTRIBUTING.md [cf9f54d](https://github.com/rdk-e/meta-rdk-oss-reference/commit/cf9f54d0c7cd72b9a5d1ca2deac9d44456129e61)
- RDK-50713: Update wpa-supplicant package revision [5db4bd7](https://github.com/rdk-e/meta-rdk-oss-reference/commit/5db4bd764ec80152e2038f8de60dd8ab56abd6ca)
- XIONE-15613: Include evtest [a6d1601](https://github.com/rdk-e/meta-rdk-oss-reference/commit/a6d160125ef5c6750c8d436aacad4750a6765dc3)
- RDK-50713: Split wpa-supplicant service dependencies [15cc3b7](https://github.com/rdk-e/meta-rdk-oss-reference/commit/15cc3b7788cc8de6dbe4bcab428b88588f1f32b4)
## [meta-rdk-tools](https://github.com/rdk-e/meta-rdk-tools/blob/main/CHANGELOG.md)

- RDK-53345: Merge kirkstone changes to develop branch ( [#12](https://github.com/rdk-e/meta-rdk-tools/pull/12))
## [meta-vts](https://github.com/rdk-e/meta-vts/blob/main/CHANGELOG.md)

- RDK-49856: ADd kirkstone support for meta layer and update old override syntax ( [#10](https://github.com/rdk-e/meta-vts/pull/10))
- Remove GitHub Actions workflow file [0b2cd3b](https://github.com/rdk-e/meta-vts/commit/0b2cd3b1e41fe794794c7951028d92e1ea69c076)
- Remove GitHub Actions workflow file [d3d11bc](https://github.com/rdk-e/meta-vts/commit/d3d11bcb7022323e2639ce3930497ff9ca557acb)
- Add GitHub Actions workflow file [e5d34b8](https://github.com/rdk-e/meta-vts/commit/e5d34b8bd252aaf72baa5c522d4590adbd71920e)
- Add GitHub Actions workflow file [da0919f](https://github.com/rdk-e/meta-vts/commit/da0919f0d115ebf677ac541309c405b7c2a9c01d)
## [meta-rdk-soc-realtek](https://github.com/rdk-e/meta-rdk-soc-realtek/blob/main/CHANGELOG.md)

- RDK-53732:Remove the AUTOREV ( [#91](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/91))
- RDK-53345: Merge kirkstone changes to develop branch ( [#89](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/89))
- XIONE-15767 : Platform-lib cleanup ( [#87](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/87))
## [meta-oem-stream](https://github.com/rdk-e/meta-oem-stream/blob/main/CHANGELOG.md)

- RDK-49856: Update old-override syntax ( [#22](https://github.com/rdk-e/meta-oem-stream/pull/22))
- RDK-52921:Integrate splash screen [a8bc30c](https://github.com/rdk-e/meta-oem-stream/commit/a8bc30cab7cc8c7f8623e997038cf98cd9a0350f)
## [meta-oem-realtek-stream](https://github.com/rdk-e/meta-oem-realtek-stream/blob/main/CHANGELOG.md)

- RDK-53646: Vendor Release 3.0.1. ( [#215](https://github.com/rdk-e/meta-oem-realtek-stream/pull/215))
- RDK-53646: Vendor Release 3.0.0. ( [#211](https://github.com/rdk-e/meta-oem-realtek-stream/pull/211))
- RDK-53522 : Bluez clean-up [9fade7f](https://github.com/rdk-e/meta-oem-realtek-stream/commit/9fade7f5eeb4a63aae204e956ba7252bb047c2be)
- XIONE-15748 : Secapi-crypto size optimization [b7a841e](https://github.com/rdk-e/meta-oem-realtek-stream/commit/b7a841e10e6e835ea7b899a5ebb4d4243809c5b1)
- XIONE-15913:Add RDK profile ( [#208](https://github.com/rdk-e/meta-oem-realtek-stream/pull/208))
- RDK-53733:Sync dsfpd from 23Q4 ( [#207](https://github.com/rdk-e/meta-oem-realtek-stream/pull/207))
- RDK-53732:Remove the AUTOREV ( [#205](https://github.com/rdk-e/meta-oem-realtek-stream/pull/205))
- RDK-52921:Integrate splash screen ( [#204](https://github.com/rdk-e/meta-oem-realtek-stream/pull/204))
- RDK-53199 : Header file cleanup in oem layer [a71d0da](https://github.com/rdk-e/meta-oem-realtek-stream/commit/a71d0da24f441da4742790ac00a2c15c15244af0)
- RDK-53345: Merge kirkstone changes to develop branch ( [#202](https://github.com/rdk-e/meta-oem-realtek-stream/pull/202))
- Update bblayers.conf.sample [ba866e5](https://github.com/rdk-e/meta-oem-realtek-stream/commit/ba866e5f266d9e8c3a8c15a7889751593a2b577c)
## [meta-oss-vendor-realtek](https://github.com/rdk-e/meta-oss-vendor-realtek/blob/main/CHANGELOG.md)

- RDK-53345: Merge kirkstone changes to develop branch ( [#33](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/33))
## [meta-mediarite-vendor](https://github.com/rdk-e/meta-mediarite-vendor/blob/main/CHANGELOG.md)

- RDK-50981-Run convert-overrides.py over mediarite layer to apply new ( [#9](https://github.com/rdk-e/meta-mediarite-vendor/pull/9))
- RDK-52040 : Disabled INHIBIT_PACKAGE_STRIP [8c9a7a1](https://github.com/rdk-e/meta-mediarite-vendor/commit/8c9a7a16dd990543c4dc9180d3793cf565c6ebd1)


## Changes in component repositories

