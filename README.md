# Vendor Layer Release Notes

XiOne UK REALTEK STB RDKE Vendor Layer Release Notes

---

|Platforms supported|
|-------|
|XiOne-UK UHD 1319|

|Summary|Content|
|---|----|
|Classification|Confidential|
|Date|23 Aug 2024|
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
  - [Consolidated change list from vendor layer repositories](#consolidated-change-list-from-vendor-layer-repositories)
    - [Changes in meta repositories](#changes-in-meta-repositories)
    - [Changes in component repositories](#changes-in-component-repositories)

## Release Description

The aim of this release to integrate the latest oss release 3.2.0. This release will provide a versioned "meta-vendor-xione-realtek-release" that will be used by the middleware, image assembler.

The scope of this release includes:

- OSS Release 3.2.0 [RDK-50925](https://ccp.sys.comcast.net/browse/RDK-50925)
- Iarmmgrs hal recipe restructure [RDK-51506](https://ccp.sys.comcast.net/browse/RDK-51506)
- Include gstreamer latest sync recipe [RDK-52421](https://ccp.sys.comcast.net/browse/RDK-52421)
- cleanup closedcaption hal realtek [XIONE-15346](https://ccp.sys.comcast.net/browse/XIONE-15346)
- Move cairo generic patches to oss [RDK-52174](https://ccp.sys.comcast.net/browse/RDK-52174)
- Remove RDK component libjpeg-turbo from RDKE [RDK-49606](https://ccp.sys.comcast.net/browse/RDK-49606)

### Vendor Release Components

| Vendor Release Components | New Version | Version in Previous Release (2.5.0) | ChangeList |
|------------|---------|------------------------------------|-------------|
| Kernel & DTB|  | 4.9.119.01-r4 | |
| packagegroup-vendor-layer | 2.6.0-r0 | 2.5.0-r0 | [2.6.0...2.50](https://github.com/rdk-e/meta-oem-realtek-stream/compare/release/2.5.0...release/2.6.0) |

### Meta Repos

#### Meta repos maintained by layers layer

| Meta Repo | New Version | Version in Previous Release (2.5.0) | ChangeList |
|------------|---------|------------------------------------|--------------|
| [meta-oss-reference-release](#meta-oss-reference-release) |  **3.2.0** | 3.1.0 | [3.1.0...3.2.0](https://github.com/rdk-e/meta-oss-reference-release/compare/3.1.0...3.2.0) |
| [meta-rdk-oss-reference](#meta-rdk-oss-reference) |  **3.2.0** | 3.1.0 | [3.1.0...3.2.0](https://github.com/rdk-e/meta-rdk-oss-reference/compare/3.1.0...3.2.0) |
| meta-rdk-tools |  | 2.1.0 | |
| meta-vts |  | 1.1.1 | |
| [meta-rdk-soc-realtek](#meta-rdk-soc-realtek) |  **2.6.0** | 2.4.0 | [2.4.0...2.6.0](https://github.com/rdk-e/meta-rdk-soc-realtek/compare/2.4.0...2.6.0) |
| [meta-oem-stream](#meta-oem-stream) |  **2.6.0** | 2.2.0 | [2.2.0...2.6.0](https://github.com/rdk-e/meta-oem-stream/compare/2.2.0...2.6.0) |
| [meta-oem-realtek-stream](#meta-oem-realtek-stream) |  **2.6.0** | 2.5.0 | [2.5.0...2.6.0](https://github.com/rdk-e/meta-oem-realtek-stream/compare/2.5.0...2.6.0) |
| [meta-oss-vendor-realtek](#meta-oss-vendor-realtek) |  **2.6.0** | 2.2.0 | [2.2.0...2.6.0](https://github.com/rdk-e/meta-oss-vendor-realtek/compare/2.2.0...2.6.0) |
| meta-mediarite-vendor |  | 10.0.34.0a2-1 | |

#### Meta repos common for RDK-E

| Meta Repo | New Version | Version in Previous Release (2.5.0) | ChangeList |
|------------|---------|------------------------------------|--------------|
| **buildscripts** ||||
| build-scripts |  | 2.0.5 | |
| | | | |
| **imagebuilder** ||||
| meta-image-support |  | 3.0.3 | |
| | | | |
| **oe** ||||
| meta-openembedded |  | v1.0.0_dunfell | |
| poky |  **v1.0.6** | v1.0.4 | [v1.0.4...v1.0.6](https://github.com/rdk-e/poky/compare/v1.0.4...v1.0.6) |
| | | | |
| **configs** ||||
| rdke-region-uk-config |  | 2.1.0 | |
| rdke-common-config |  | 1.0.8 | |
| rdke-stb-config |  | 1.0.1 | |
| | | | |
| **rdk** ||||
| meta-rdk-halif-headers |  | 3.0.1 | |
| | | | |
| **products** ||||
| meta-product-xione |  **2.6.0** | 2.3.0 | [2.3.0...2.6.0](https://github.com/rdk-e/meta-product-xione/compare/2.3.0...2.6.0) |
| | | | |

### Interface versions

| # | HAL Interface Header (rdkcentral github) | New Version | Versionfrom Previous Release (2.5.0)
|---|------------------------------------------|-------------|----------------------|
| 1 | media-utils-headers | | 1.0.4 |
| 2 | hdmicecheader | | 1.3.7 |
| 3 | deepsleep-manager-headers | | 1.0.3 |
| 4 | power-manager-headers | | 1.0.2 |
| 5 | devicesettings-hal-headers | | 2.0.0 |
| 6 | tvsettings-hal-headers | | 1.2.0 |
|   |   |  |  |
|   | RDK HAL Headers (RDKE github) |  |  |
|   |   |  |  |
| 7 | iarmmgrs-hal-headers | | 2.0.3 |
| 8 | closedcaption-hal-headers | | GRT_v2 |
| 9 | iarmbus-headers | | GRT_v2 |
| 10 | rdk-gstreamer-utils-headers | | 1.3.0 |

### Limitations

It should be noted that some services may not run as they have dependencies with other layers. Additionally, the exclusion of inter-layer bbappends/patches might result in the failure to start some services. These limitations should be taken into consideration during the verification process. These Limitations will be addressed in Future Releases.

### Middleware Integration

1. Since we restructures iarmmgr,power and deepsleep mgr has source code. So MW team expect to include this change into meta-rdk-video layer
https://github.com/rdk-e/meta-rdk-video/commit/8ed61491ff351ba2c1dee0b5006918abc0f6114b
2. We have integrated the OSS 3.2.0 into VL layer. So please remove the libjpeg-turbo and add libjpeg into MW layer. 

## Build instructions

Steps to check out and build the vendor layer project 
https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project

### Boot Command

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

Created the "vendor test image" "SKXI11ADS_VENDOR_DEV_develop_20240822143001.bin" using the vendor layer project.
Successfully booted the "vendor test image" and obtained the shell prompt.
For this release testing was done by using feature branch feature/RDK-52326-ReleaseActivity2.6.0 for rdke-middleware-manifest/realtek-xione.xml

## Release layer and components

### Stack layer

| Layer | Tag |
|------|------|
| [meta-vendor-xione-realtek-release](https://github.com/rdk-e/meta-vendor-xione-realtek-release) | 2.6.0 |

#### Artifactory Location for IPKs - https://partners.artifactory.comcast.com/ui/repos/tree/General/opkg/xione-uk/ipks/xione-uk-vendor/2-6-0

### Components details in 'packagegroup-vendor-layer'

 Components which are prebuilt or the ones which installs config files or scripts from meta layer have SRCREV marked as NA 

| # | Vendor layer Component | New PV-PR | PV-PR in Previous Release (2.5.0)| New SRCREV | SRCREV in Previous Release (2.5.0)| Diff |
|---|------------------------------------------|-------------|----------------------|-----------|------------|-----|
| 1 | media-utils-soc-realtek | | 1.0.4-1.0.0-r0 |  | GRT_STB_v2 | |
| 2 | [closedcaption-hal-realtek](#closedcaption-hal-realtek) | **1.0.0-2.0.0-r0** | 1.0.0-1.0.0-r0 | **GRT_STB_v2.1.0** | GRT_STB_v2 |  [GRT_STB_v2...GRT_STB_v2.1.0](https://github.com/rdk-e/closedcaption-soc-realtek/compare/GRT_STB_v2...GRT_STB_v2.1.0) |
| 3 | hdmicec-hal-realtek | | 1.3.7-1.0.0-r0 |  | GRT_STB_v2 | |
| 4 | [iarmmgrs-hal-realtek](#iarmmgrs-hal-realtek) | **2.0.1-2.0.0-r0** | 2.0.1-1.0.0-r0 | **GRT_STB_v2.1.0** | GRT_STB_v2 |  [GRT_STB_v2...GRT_STB_v2.1.0](https://github.com/rdk-e/iarmmgrs-soc-realtek/compare/GRT_STB_v2...GRT_STB_v2.1.0) |
| 5 | rdk-gstreamer-utils-platform | | 1.3.0-r0 |  | 739cdb7 | |
| 6 | devicesettings-hal-realtek | | 2.0.0-1.0.0-r0 |  |  | |
| - |  - devicesettings-hal-realtek_devicesettingssocrealtek | |  | **GRT_STB_v2.1.0** | GRT_STB_v2 |  [](https://github.com/rdk-e/iarmmgrs-soc-realtek) |
| - |  - devicesettings-hal-realtek_devicesettingsskyxione | |  |  | GRT_STB_v2 | |
| 7 | deepsleepmgr-hal-realtek | **1.0.3-1.0.0-r0** | NA | **GRT_STB_v1** | NA |  [](https://github.com/rdk-e/iarmmgrs-soc-realtek) |
| 8 | pwrmgr-hal-realtek | **1.0.2-1.0.0-r0** | NA | **GRT_STB_v1** | NA |  [](https://github.com/rdk-e/iarmmgrs-soc-realtek) |
| 9 | rtk-platform-conf | | 2.6.0-r0 |  | NA | |
| 10 | testagentlib | | 2.9.0-r0 |  | NA | |
| 11 | emmc-read-util | | 3.3.4-r0 |  | NA | |
| 12 | otp-program | | 2.2-r1 |  | NA | |
| 13 | gstreamer1.0 | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 14 | gstreamer1.0-meta-base | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 15 | gstreamer1.0-omx | **1.10.4-r3** | 1.10.4-r2 |  | NA | |
| 16 | gstreamer1.0-libav | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 17 | gstreamer1.0-plugins-good | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 18 | gstreamer1.0-plugins-good-meta | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 19 | gstreamer1.0-plugins-bad | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 20 | gstreamer1.0-plugins-bad-meta | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 21 | gstreamer1.0-rtsp-server | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 22 | gstreamer1.0-plugins-base | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 23 | gstreamer1.0-plugins-base-meta | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 24 | gstreamer1.0-plugins-base-playback | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 25 | gstreamer1.0-plugins-good-wavparse | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 26 | gstreamer1.0-plugins-good-audiofx | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 27 | gstreamer1.0-plugins-good-isomp4 | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 28 | gstreamer1.0-plugins-good-audioparsers | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 29 | gstreamer1.0-plugins-good-soup | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 30 | gstreamer1.0-plugins-base-gio | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 31 | gstreamer1.0-plugins-base-videoconvert | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 32 | gstreamer1.0-plugins-base-videoscale | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 33 | gstreamer1.0-plugins-base-volume | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 34 | gstreamer1.0-plugins-base-typefindfunctions | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 35 | gstreamer1.0-plugins-good-autodetect | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 36 | gstreamer1.0-plugins-good-avi | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 37 | gstreamer1.0-plugins-good-deinterlace | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 38 | gstreamer1.0-plugins-good-interleave | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 39 | gstreamer1.0-plugins-bad-dash | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 40 | gstreamer1.0-plugins-bad-mpegtsdemux | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 41 | gstreamer1.0-plugins-bad-smoothstreaming | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 42 | gstreamer1.0-plugins-bad-videoparsersbad | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 43 | gstreamer1.0-plugins-bad-opusparse | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 44 | gstreamer1.0-plugins-bad-dashdemux | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 45 | gstreamer1.0-plugins-good-matroska | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 46 | gstreamer1.0-plugins-base-app | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 47 | gstreamer1.0-plugins-base-audioconvert | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 48 | gstreamer1.0-plugins-base-audioresample | **1.18.5-r3** | 1.18.5-r2 |  | NA | |
| 49 | rtk-audio-service | | 2.0.0-r0 |  | e52aef88fc80d0e3b6166000e8553a7b7dc7fa7a & 6bb3a0f37357296c4f0697c1c4ecd9d69f45eb02 | |
| 50 | libdrm | | 2.4.100-r0 |  | NA | |
| 51 | westeros-simpleshell | | 1.3.0-r0 |  | NA | |
| 52 | westeros-simplebuffer | | 1.3.0-r0 |  | NA | |
| 53 | westeros-soc | | 1.3.0-r1 |  | NA | |
| 54 | westeros-sink | | 2.0.0-r0 |  | 5724b0f | |
| 55 | westeros | | 1.0.0-r0 |  | NA | |
| 56 | essos | | 1.0.0-r0 |  | NA | |
| 57 | cairo | | 1.16.0-r0 |  | NA | |
| 58 | libepoxy | | 1.5.4-r1 |  | NA | |
| 59 | python3-pygobject | | 3.34.0-r0 |  | NA | |
| 60 | pango | | 1.44.7-r0 |  | NA | |
| 61 | make-mod-scripts | | 1.0-r0 |  | NA | |
| 62 | librsvg | | 2.40.21-r0 |  | NA | |
| 63 | python3-pycairo | | 1.19.0-r0 |  | NA | |
| 64 | sky-fpbutton-driver | | 2.8-r0 |  | NA | |
| 65 | xsign | | 4.0.1-r1 |  | NA | |
| 66 | mfrlib-hal-xione | | 7.0.4-r0 |  | NA | |
| 67 | wipe-disk-partitions | | 1.0.0-r0 |  | NA | |
| 68 | early-display | | 2.0.0-r0 |  | GRT_STB_v2 | |
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
| 79 | secapi-crypto-rtk | | 2.3.0-r0 |  | f5eb924 | |
| 80 | secapi-common-crypto | | 2.3.0-r0 |  | 3a51b88 | |
| 81 | testagent-loader | | 2.3.0-r0 |  | NA | |
| 82 | qca6390-mod-wifi | | 1.0.0-r0 |  | NA | |
| 83 | qca-hciattach | | 1.0.0-r0 |  | NA | |
| 84 | emmc-fw-update | | 1.0.0-r0 |  | NA | |
| 85 | mount-disk-partition | | 1.0.0-r0 |  | NA | |
| 86 | image-verifier-lib | | 6.2.0-r0 |  | NA | |
| 87 | flashapp | | 5.9.2-r0 |  | NA | |
| 88 | sky-led-driver | | 1.0.0-r0 |  | NA | |
| 89 | fmtsasidlibs | | 2.4-r0 |  | NA | |
| 90 | hank-mod-mali | | 1.0.0-r1 |  | GRT_STB_v2 | |
| 91 | rtkv1sink | | 2.0.0-r0 |  | GRT_STB_v2 | |
| 92 | led-boot-pattern | | 1.0.0-r0 |  | NA | |
| 93 | rtkmali | | 2.8.0-r0 |  | NA | |
| 94 | platform-lib | | 2.6.0-r2 |  | NA | |
| 95 | hdmiservice | | 2.0.0-r0 |  | GRT_STB_v2 | |
| 96 | rtkpcrclksink | | 2.0.0-r0 |  | GRT_STB_v2 | |
| 97 | linux-libc-headers | | 4.9-r4 |  | NA | |
| 98 | packagegroup-kernel-modules | | 4.9.119.01-r4 |  | NA | |
| 99 | linux-hank | | 4.9.119.01-r4 |  | e608d5f | |
| 100 | mediarite-vendor | | 10.0.34.0a2-r0 |  | NA | |
| 101 | gst-plugins-mediarite | | 1.0-r0 |  | NA | |
| 102 | rtkaudiosink | | 2.0.0-r0 |  | GRT_STB_v2 | |
| 103 | sky-dropbear | | 1.0.0-r0 |  | NA | |
| 104 | mfi-ree | | 2.0.0-r0 |  | GRT_v2 | |
| 105 | sysint-oem | | 1.0.0-r0 |  | ec0f597 | |
| 106 | sysint-soc | | 1.0.0-r0 |  | c3ae6f4 | |
| 107 | apparmor-vendor | | 1.0.0-r0 |  | 41e3674 | |
| 108 | directfb | | 1.7.7-r0 |  | NA | |
| 109 | audiocapturemgr-vendor | | 1.0.0-r0 |  | a063707 | |


## Components Removed

| # |  Component Name | Reason |
|----|--------------|------|
| 1 | realtek-collectd-plugins | Removed as collectd is now added via jenkins option |


## Consolidated change list from vendor layer repositories

## Changes in meta repositories

## [meta-oss-reference-release](https://github.com/rdk-e/meta-oss-reference-release/blob/main/CHANGELOG.md)

- RDK-50925: OSS Release 3.2.0 [e4bf989](https://github.com/rdk-e/meta-oss-reference-release/commit/e4bf98970e9da70757bf49cc83bdb0ef28c9689b)
## [meta-rdk-oss-reference](https://github.com/rdk-e/meta-rdk-oss-reference/blob/main/CHANGELOG.md)

- LLAMA-14037: playbin3 - don't reconfigure output during flush [35ace52](https://github.com/rdk-e/meta-rdk-oss-reference/commit/35ace52244b29568749a4d59345e7ce29c194558)
- RDK-50925: Increment module revision for oss 3.2.0 [23ee03d](https://github.com/rdk-e/meta-rdk-oss-reference/commit/23ee03d26a84789e0a4fbd4fb3d0ef3b4bc28307)
- RDK-50925: OSS release 3.2.0 [bb1d708](https://github.com/rdk-e/meta-rdk-oss-reference/commit/bb1d70896b05fdf2cd8d7aa00d6da0dbb1d40acd)
- RDK-49789: Update ca-certificate package revision [44deb47](https://github.com/rdk-e/meta-rdk-oss-reference/commit/44deb47bcde96b3a74cf97cd04ff01095b683646)
- RDK-51858: Enabled wireless tools [192a80c](https://github.com/rdk-e/meta-rdk-oss-reference/commit/192a80c7571825d299a0a9c3d65c484689e7219d)
- RDK-52174: cairo move the generic patches to oss [7bacaae](https://github.com/rdk-e/meta-rdk-oss-reference/commit/7bacaaefac6e9f4a0ec82a1722acd123e0d90c7d)
- RDK-51396: Added multi thread support to install components in parellel. [5e04992](https://github.com/rdk-e/meta-rdk-oss-reference/commit/5e049924ab7e30ad688d2ad7ef6299d669e812d1)
- RDK-51467: Fix wayland-protocol dev packages [42f6ca4](https://github.com/rdk-e/meta-rdk-oss-reference/commit/42f6ca4df6d6790011456ca8e6c3166fbb91e673)
- RDK-51719: remove core-boot packagegroup form oss [b54dbc0](https://github.com/rdk-e/meta-rdk-oss-reference/commit/b54dbc0b56e0c6072ecabb4ae9dc7720d391082a)
- RDK-49789: Remove package arch for ca-certificates-default-certs [d144302](https://github.com/rdk-e/meta-rdk-oss-reference/commit/d1443024f78651b2a299443843c1b8b9eb081258)
- Update ca-certificates_%.bbappend [0fd3941](https://github.com/rdk-e/meta-rdk-oss-reference/commit/0fd3941f2ffa37bb45db7fb005271e17de37bbbe)
- RDK-49789: Add Package arch for ca-certificates-default-certs [5383981](https://github.com/rdk-e/meta-rdk-oss-reference/commit/5383981f9d6335fe2684b679d157a06b459f06e9)
- RDK-52021: libjpeg-turbo is replaced by libjpeg [9a0efb3](https://github.com/rdk-e/meta-rdk-oss-reference/commit/9a0efb3cfd76b16eff34fbd7fac282573b98c17d)
- XIONE-15016: Syncing qtdemux patches with stable2 [3b633d8](https://github.com/rdk-e/meta-rdk-oss-reference/commit/3b633d8dfe8daec9d6080d44506d2008bb9738ba)
- RDK-52021:  libjpeg-turbo is rebuilding across layers [d55457d](https://github.com/rdk-e/meta-rdk-oss-reference/commit/d55457db6d327ea5c78f7bec848a036df00ed757)
- RDK-49789: Add ca-certificate-default-certs to packagegroup-oss-layer [ea52d7a](https://github.com/rdk-e/meta-rdk-oss-reference/commit/ea52d7a5c1dd559178d458ad6df414bb74c78c67)
- RDK-49789: Package ca-certificates from OSS in ${PN}-default-certs [caf0786](https://github.com/rdk-e/meta-rdk-oss-reference/commit/caf078675cb9aed8294a735265511c090a23d72f)
- RDK-51874: Nothing provides systemd-rfkill-conf [54c2708](https://github.com/rdk-e/meta-rdk-oss-reference/commit/54c2708fcf9cca06c48e8ad43bc287de7eea6206)
- RDK-49606: Remove RDK component libjpeg-turbo from RDKE [34b539c](https://github.com/rdk-e/meta-rdk-oss-reference/commit/34b539c26dc726d9d98c89736ae49a600bce1f36)
- RDK-42490 : Remove giflib from RDKE branch [5b93539](https://github.com/rdk-e/meta-rdk-oss-reference/commit/5b93539e9e01eed0d010c487efedc0fa96e8fcc6)
- Update wpa-supplicant_2.10.bbappend [860a96a](https://github.com/rdk-e/meta-rdk-oss-reference/commit/860a96a2a0edee375f74ef4916fedf6726cc7492)
- Update wpa-supplicant_2.10.bbappend [1b5d85f](https://github.com/rdk-e/meta-rdk-oss-reference/commit/1b5d85fc450c24c52bb25acf69985dffddf66ee7)
- Update unii3_country_code_check.patch [58b6b4e](https://github.com/rdk-e/meta-rdk-oss-reference/commit/58b6b4ead95ecdd2f3ffc6379ee479f2744facf0)
- RDK-50734: Patch rename and editted folder structure in patch files [bbd3b8e](https://github.com/rdk-e/meta-rdk-oss-reference/commit/bbd3b8eb82800d4228db2047677e96ecb3e4c032)
- XIONE-15199: sync up libsoup2 patches [cb9a3e2](https://github.com/rdk-e/meta-rdk-oss-reference/commit/cb9a3e289ceb0215d5c3c5fc42c0040fd03dd2a6)
- RDK-51680: move core-boot pkg group to oss layer [0e7e1aa](https://github.com/rdk-e/meta-rdk-oss-reference/commit/0e7e1aad6240552a09861f7001a80727f3cc4da3)
- RDK-51165: Removed CONFIG_AP disabling from bbappends [4f69a6f](https://github.com/rdk-e/meta-rdk-oss-reference/commit/4f69a6fd7630b16ee3ea2508fee7351a49e1a3cc)
- RDKTV-28274: wpa status shows wrong interface [b72a6c2](https://github.com/rdk-e/meta-rdk-oss-reference/commit/b72a6c25764b1e10f2022f78511bc6ed86da3b35)
- RDK-51165: Update PR for wpa-supplicant in package_revisions_oss.inc [e0e415d](https://github.com/rdk-e/meta-rdk-oss-reference/commit/e0e415df34ca74b57723055799e3f3e6295cd899)
- RDK-48131: Prepare separate wpa p2p conf for Element D4 and X3. [2fcabb6](https://github.com/rdk-e/meta-rdk-oss-reference/commit/2fcabb6edde8e257f741f49ece27f2e0434b41b3)
- RDKTV-27645 : Miracast changes [1abb867](https://github.com/rdk-e/meta-rdk-oss-reference/commit/1abb8676c0a1fe03d0efc1e7ccd6844d5b43e2c3)
- Revert "RDK-49789: Remove ca-certificates provided from OSS layer" [fe266c9](https://github.com/rdk-e/meta-rdk-oss-reference/commit/fe266c9c99c6e45f48c0799c537c939b439386d4)
- RDK-47759: Remove RDM Agent from OSS layer ( [#256](https://github.com/rdk-e/meta-rdk-oss-reference/pull/256))
- RDK-51587: Exclude qemuwrapper-cross and volatile-binds from oss [a550c9f](https://github.com/rdk-e/meta-rdk-oss-reference/commit/a550c9f71f6bf936fd6b7f33fae4c69630fa5ea0)
- RDK-49789: Remove ca-certificates installed from OSS layer [2a960b2](https://github.com/rdk-e/meta-rdk-oss-reference/commit/2a960b2ae7c852b29b20929333794e768f8fa998)
- RDK-49789: Remove ca-certificates provided from OSS layer [b5fd4ff](https://github.com/rdk-e/meta-rdk-oss-reference/commit/b5fd4ff9ba1e18c980c6bd59698722c98cc38f78)
- Revert "RDK-50310: Remove oss arch for libpcap" [da91a06](https://github.com/rdk-e/meta-rdk-oss-reference/commit/da91a06bf6a9e5e08b6f93d6b6d6d05488e1a19d)
- RDK-50760: No providers for "sqlite3-dev" packages [1dc6dba](https://github.com/rdk-e/meta-rdk-oss-reference/commit/1dc6dbae3130f495748c7cec26e9388efadf5607)
- RDKTV-30468:Remove python file installation to Middleware rootFS [6fa2708](https://github.com/rdk-e/meta-rdk-oss-reference/commit/6fa2708152622b57394aa467b6c8f20c73397bf5)
- RDK-50310: Remove oss arch for libpcap [4a60266](https://github.com/rdk-e/meta-rdk-oss-reference/commit/4a60266a95241f561a1a615466d3c926bd8067fa)
- RDK-49514: Remove volatile-bind dependency with systemd [935109d](https://github.com/rdk-e/meta-rdk-oss-reference/commit/935109d60dfd7af9e2b2758f1bc5c89d114512aa)
## [meta-rdk-soc-realtek](https://github.com/rdk-e/meta-rdk-soc-realtek/blob/main/CHANGELOG.md)

- RDK-51506 : iarmmgrs hal recipe restructure ( [#71](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/71))
- RDK-52421:Include wpeprocess update. ( [#79](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/79))
- RDK-49606: Remove RDK component libjpeg-turbo from RDKE ( [#70](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/70))
- RDK-52041 : Disabled INHIBIT_PACKAGE_DEBUG_SPLIT [f97b9d3](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/f97b9d3778f34bdc60ee8210bf0eab1729659a46)
- XIONE-15346: cleanup closedcaption hal realtek ( [#75](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/75))
## [meta-oem-stream](https://github.com/rdk-e/meta-oem-stream/blob/main/CHANGELOG.md)

- RDK-51506 : iarmmgrs hal recipe restructure [7a837d8](https://github.com/rdk-e/meta-oem-stream/commit/7a837d806a71a880abe958788a309568beac84ef)
## [meta-oem-realtek-stream](https://github.com/rdk-e/meta-oem-realtek-stream/blob/main/CHANGELOG.md)

- RDK-52326: Vendor Release 2.6.0. ( [#184](https://github.com/rdk-e/meta-oem-realtek-stream/pull/184))
- RDK-52326: Vendor Release 2.6.0. ( [#183](https://github.com/rdk-e/meta-oem-realtek-stream/pull/183))
- RDK-52326: Vendor Release 2.6.0. ( [#182](https://github.com/rdk-e/meta-oem-realtek-stream/pull/182))
- RDK-52116 : Revert watch dog enable patch ( [#180](https://github.com/rdk-e/meta-oem-realtek-stream/pull/180))
- RDK-50814 : Service file change for IP ( [#181](https://github.com/rdk-e/meta-oem-realtek-stream/pull/181))
- RDK-51506 : iarmmgrs hal recipe restructure ( [#159](https://github.com/rdk-e/meta-oem-realtek-stream/pull/159))
- RDK-52421:Include wpeprocess update. ( [#176](https://github.com/rdk-e/meta-oem-realtek-stream/pull/176))
- RDK-52116 : Bring back watch dog enable patch. ( [#175](https://github.com/rdk-e/meta-oem-realtek-stream/pull/175))
- RDKE-135: Remove tools from package group vendor layer ( [#174](https://github.com/rdk-e/meta-oem-realtek-stream/pull/174))
- RDKE-135: Remove tools from package group middleware layer ( [#173](https://github.com/rdk-e/meta-oem-realtek-stream/pull/173))
- RDK-51794: Add stub api in devicesettings-soc-realtek. ( [#170](https://github.com/rdk-e/meta-oem-realtek-stream/pull/170))
- RDK-52315:Include volatile bind. ( [#167](https://github.com/rdk-e/meta-oem-realtek-stream/pull/167))
- RDK-52254:OSS release 3.2.0 inclusion in VL. ( [#166](https://github.com/rdk-e/meta-oem-realtek-stream/pull/166))
- RDK-52041 : Disabled INHIBIT_PACKAGE_DEBUG_SPLIT [0657761](https://github.com/rdk-e/meta-oem-realtek-stream/commit/0657761113ac1ef24894d990c87f832ab44aed18)
- RDK-51742: Display VL Name & RM pkg info. ( [#162](https://github.com/rdk-e/meta-oem-realtek-stream/pull/162))
- XIONE-15346:cleanup closedcaption hal realtek ( [#161](https://github.com/rdk-e/meta-oem-realtek-stream/pull/161))
## [meta-oss-vendor-realtek](https://github.com/rdk-e/meta-oss-vendor-realtek/blob/main/CHANGELOG.md)

- RDK-52421:Include wpeprocess update. ( [#30](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/30))
- RDK-52174: cairo move the generic patches to oss ( [#29](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/29))


## Changes in component repositories

## ['closedcaption-hal-realtek'](https://github.com/rdk-e/closedcaption-soc-realtek/blob/main/CHANGELOG.md)

- XIONE-15346: cleanup closedcaption hal realtek [2f87bd6](https://github.com/rdk-e/closedcaption-soc-realtek/commit/2f87bd671a82e919e63a971e3a2797dffbe9e5d0)
- XIONE-15346: cleanup closedcaption hal realtek [640f1c2](https://github.com/rdk-e/closedcaption-soc-realtek/commit/640f1c2edf859ad1484a56696a2a69dc2e3c649d)
- Add GitHub Actions workflow file [3181e26](https://github.com/rdk-e/closedcaption-soc-realtek/commit/3181e26d3b0d242bd846264ebf9716731c19ec8d)
## ['iarmmgrs-hal-realtek'](https://github.com/rdk-e/iarmmgrs-soc-realtek/blob/main/CHANGELOG.md)

- RDK-51506 : Cleanup the iarmmgrs soc hal realtek [f42ceb1](https://github.com/rdk-e/iarmmgrs-soc-realtek/commit/f42ceb123e2a67df3d40e56004117459bc8aedee)
- Add GitHub Actions workflow file [4b07001](https://github.com/rdk-e/iarmmgrs-soc-realtek/commit/4b07001a4da1f83e51b0a0d0d03042ad01014459)
## ['powermanager-hal-realtek'](https://github.com/rdk-e/power-manager-soc-realtek/blob/main/CHANGELOG.md)

- RDK-51656: Power manager hal source code [`#1`](https://github.com/rdk-e/power-manager-soc-realtek/pull/1)
## ['Deepsleep-hal-realtek'](https://github.com/rdk-e/deepsleep-manager-soc-realtek/blob/main/CHANGELOG.md)

- RDK-51657: DEEPSLEEP manager hal source code [`#1`](https://github.com/rdk-e/deepsleep-manager-soc-realtek/pull/1)
