# Vendor Layer Release Notes

XiOne UK REALTEK STB RDKE Vendor Layer Release Notes

---

|Platforms supported|
|-------|
|XiOne-UK UHD 1319|

|Summary|Content|
|---|----|
|Classification|Confidential|
|Date|23 Sep 2024|
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

The aim of this release to integrate the latest oss release 3.3.0. This release will provide a versioned "meta-vendor-xione-realtek-release" that will be used by the middleware, image assembler.

The scope of this release includes:

- OSS Release 3.3.0 [RDK-51113](https://ccp.sys.comcast.net/browse/RDK-51113)
- RDK-E Window Manager version 2.0.0 [RDK-48841](https://ccp.sys.comcast.net/browse/RDK-48841)
- Include HALIF headers version 3.1.2 [RDK-53159](https://ccp.sys.comcast.net/browse/RDK-53159)
- Include vendor version in FlashApp [XIONE-15555](https://ccp.sys.comcast.net/browse/XIONE-15555)
- Include blewakeupenabler [RDK-52599](https://ccp.sys.comcast.net/browse/RDK-52599)
- Stable2 sync hdmiservice [RDK-52733](https://ccp.sys.comcast.net/browse/RDK-52733)
- Removing PACKAGE_ARCH dependency to identify inter stack layer packages [RDKE-177](https://ccp.sys.comcast.net/browse/RDKE-177)
- Moving layering logic from meta-image-support to meta-stack-layering-support [RDKE-159](https://ccp.sys.comcast.net/browse/RDKE-159)

### Vendor Release Components

| Vendor Release Components | New Version | Version in Previous Release (2.6.0) | ChangeList |
|------------|---------|------------------------------------|--------------|
| Kernel & DTB | **4.9.119.01-r5** | 4.9.119.01-r4 | |
| packagegroup-vendor-layer | 2.7.0-r0 | 2.6.0-r0 | [2.7.0...2.6.0](https://github.com/rdk-e/meta-oem-realtek-stream/compare/2.6.0...2.7.0) |

### Meta Repos

#### Meta repos maintained by layers layer

| Meta Repo | New Version | Version in Previous Release (2.6.0) | ChangeList |
|------------|---------|------------------------------------|--------------|
| [meta-oss-reference-release](#meta-oss-reference-release) |  **3.3.0** | 3.2.0 | [3.2.0...3.3.0](https://github.com/rdk-e/meta-oss-reference-release/compare/3.2.0...3.3.0) |
| [meta-rdk-oss-reference](#meta-rdk-oss-reference) |  **3.3.0** | 3.2.0 | [3.2.0...3.3.0](https://github.com/rdk-e/meta-rdk-oss-reference/compare/3.2.0...3.3.0) |
| meta-rdk-tools |  | 2.1.0 | |
| meta-vts |  | 1.1.1 | |
| [meta-rdk-soc-realtek](#meta-rdk-soc-realtek) |  **2.7.0** | 2.6.0 | [2.6.0...2.7.0](https://github.com/rdk-e/meta-rdk-soc-realtek/compare/2.6.0...2.7.0) |
| [meta-oem-stream](#meta-oem-stream) |  **2.7.0** | 2.6.0 | [2.6.0...2.7.0](https://github.com/rdk-e/meta-oem-stream/compare/2.6.0...2.7.0) |
| [meta-oem-realtek-stream](#meta-oem-realtek-stream) |  **2.7.0** | 2.6.0 | [2.6.0...2.7.0](https://github.com/rdk-e/meta-oem-realtek-stream/compare/2.6.0...2.7.0) |
| [meta-oss-vendor-realtek](#meta-oss-vendor-realtek) |  **2.7.0** | 2.6.0 | [2.6.0...2.7.0](https://github.com/rdk-e/meta-oss-vendor-realtek/compare/2.6.0...2.7.0) |
| meta-mediarite-vendor |  | 10.0.34.0a2-1 | |

#### Meta repos common for RDK-E

| Meta Repo | New Version | Version in Previous Release (2.6.0) | ChangeList |
|------------|---------|------------------------------------|--------------|
| **buildscripts** ||||
| build-scripts |  | 2.0.5 | |
| | | | |
| **buildsupport** ||||
| meta-image-support |  **3.0.10** | 3.0.3 | [3.0.3...3.0.10](https://github.com/rdk-e/meta-image-support/compare/3.0.3...3.0.10) |
| | | | |
| **stacklayering** ||||
| meta-stack-layering-support |  **2.0.0** | NA | [2.0.0](https://github.com/rdk-e/meta-stack-layering-support/commits/2.0.0) |
| | | | |
| **oe** ||||
| meta-openembedded |  | v1.0.0_dunfell | |
| poky |  **v1.0.7** | v1.0.6 | [v1.0.6...v1.0.7](https://github.com/rdk-e/poky/compare/v1.0.6...v1.0.7) |
| | | | |
| **configs** ||||
| rdke-region-uk-config |  | 2.1.0 | |
| rdke-common-config |  | 1.0.8 | |
| rdke-stb-config |  | 1.0.1 | |
| | | | |
| **rdk** ||||
| meta-rdk-halif-headers |  **3.1.2** | 3.0.1 | [3.0.1...3.1.2](https://github.com/rdk-e/meta-rdk-halif-headers/compare/3.0.1...3.1.2) |
| | | | |
| **products** ||||
| meta-product-xione |  **2.7.0** | 2.6.0 | [2.6.0...2.7.0](https://github.com/rdk-e/meta-product-xione/compare/2.6.0...2.7.0) |
| | | | |

### Interface versions

| # | HAL Interface Header (rdkcentral github) | New Version | Versionfrom Previous Release (2.6.0)
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
| 7 | iarmmgrs-hal-headers | **2.1.0** | 2.0.3 |
| 8 | closedcaption-hal-headers | | GRT_v2 |
| 9 | iarmbus-headers | | GRT_v2 |
| 10 | rdk-gstreamer-utils-headers | | 1.3.0 |

### Limitations

It should be noted that some services may not run as they have dependencies with other layers. Additionally, the exclusion of inter-layer bbappends/patches might result in the failure to start some services. These limitations should be taken into consideration during the verification process. These Limitations will be addressed in Future Releases.


### Middleware Integration

1. Since we included dobby container json file into vendor layer so please modify the corresponding changes into MW as well(https://github.com/rdk-e/meta-rdk/pull/293/files).
2. Middleware image testing done by using feature branch feature/RDK-53133-Test for https://github.com/rdk-e/rdke-middleware-manifest/blob/feature/RDK-53133-Test/realtek-xione.xml
3. We removed the files(vendor_pkg_versions.inc, vendor_pkg_versions_halif_impl.inc, linux-hank.bb, packagegroup-vendor-layer.bb) from the release vendor layer. So please use the tag 3.0.10 from meta-image-support, 2.0.0 meta-stack-layering-support repo’s

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

Created the "vendor test image" "SKXI11ADS_VENDOR_DEV_refs_tags_2.7.0_20240918160307.bin" using the vendor layer project.
Successfully booted the "vendor test image" and obtained the shell prompt.
For this release testing was done by using feature branch feature/RDK-53133-Test for rdke-middleware-manifest/realtek-xione.xml

## Release layer and components

### Stack layer

| Layer | Tag |
|------|------|
| [meta-vendor-xione-realtek-release](https://github.com/rdk-e/meta-vendor-xione-realtek-release) | 2.7.0 |
#### Artifactory Location for IPKs - https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-uk-release/2.7.0/xione-uk/ipks/debug 

### Components details in 'packagegroup-vendor-layer'

 Components which are prebuilt or the ones which installs config files or scripts from meta layer have SRCREV marked as NA 

| # | Vendor layer Component | New PV-PR | PV-PR in Previous Release (2.6.0)| New SRCREV | SRCREV in Previous Release (2.6.0)| Diff |
|---|------------------------------------------|-------------|----------------------|-----------|------------|-----|
| 1 | media-utils-soc-realtek | | 1.0.4-1.0.0-r0 |  | GRT_STB_v2 | |
| 2 | closedcaption-hal-realtek | | 1.0.0-2.0.0-r0 |  | GRT_STB_v2.1.0 | |
| 3 | hdmicec-hal-realtek | | 1.3.7-1.0.0-r0 |  | GRT_STB_v2 | |
| 4 | iarmmgrs-hal-realtek | **2.1.0-2.0.0-r0** | 2.0.1-2.0.0-r0 |  | GRT_STB_v2.1.0 | |
| 5 | rdk-gstreamer-utils-platform | | 1.3.0-r0 |  | 739cdb7 | |
| 6 | devicesettings-hal-realtek | | 2.0.0-1.0.0-r0 |  |  | |
| - |  - devicesettings-hal-realtek_devicesettingssocrealtek | |  |  | GRT_STB_v2.1.0 | |
| - |  - devicesettings-hal-realtek_devicesettingsskyxione | |  |  | GRT_STB_v2 | |
| 7 | deepsleepmgr-hal-realtek | | 1.0.3-1.0.0-r0 |  | GRT_STB_v1 | |
| 8 | pwrmgr-hal-realtek | | 1.0.2-1.0.0-r0 |  | GRT_STB_v1 | |
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
| 50 | libdrm | | 2.4.100-r0 |  | NA | |
| 51 | westeros-simpleshell | | 1.3.0-r0 |  | NA | |
| 52 | westeros-simplebuffer | | 1.3.0-r0 |  | NA | |
| 53 | westeros-soc | | 1.3.0-r1 |  | NA | |
| 54 | westeros-sink | | 2.0.0-r0 |  | 5724b0f | |
| 55 | westeros | **2.0.0-r0** | 1.0.0-r0 | **3d9ccd8** | NA |  [](https://github.com/rdk-e/meta-product-xione) |
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
| 87 | flashapp | **5.9.5-r0** | 5.9.2-r0 |  | NA | |
| 88 | sky-led-driver | | 1.0.0-r0 |  | NA | |
| 89 | fmtsasidlibs | | 2.4-r0 |  | NA | |
| 90 | hank-mod-mali | | 1.0.0-r1 |  | GRT_STB_v2 | |
| 91 | rtkv1sink | | 2.0.0-r0 |  | GRT_STB_v2 | |
| 92 | led-boot-pattern | | 1.0.0-r0 |  | NA | |
| 93 | rtkmali | | 2.8.0-r0 |  | NA | |
| 94 | platform-lib | | 2.6.0-r2 |  | NA | |
| 95 | [hdmiservice](#hdmiservice) | **2.1.0-r0** | 2.0.0-r0 | **GRT_STB_v2.1.0** | GRT_STB_v2 |  [GRT_STB_v2...GRT_STB_v2.1.0](https://github.com/rdk-e/hdmiservice-realtek/compare/GRT_STB_v2...GRT_STB_v2.1.0) |
| 96 | rtkpcrclksink | | 2.0.0-r0 |  | GRT_STB_v2 | |
| 97 | blewakeupenabler | **1.3.0-r0** | NA | **1.3.0** | NA |  [](https://github.com/rdk-e/hdmiservice-realtek) |
| 98 | linux-libc-headers | **4.9-r5** | 4.9-r4 |  | NA | |
| 99 | packagegroup-kernel-modules | **4.9.119.01-r5** | 4.9.119.01-r4 |  | NA | |
| 100 | linux-hank | **4.9.119.01-r5** | 4.9.119.01-r4 |  | e608d5f | |
| 101 | mediarite-vendor | | 10.0.34.0a2-r0 |  | NA | |
| 102 | gst-plugins-mediarite | | 1.0-r0 |  | NA | |
| 103 | rtkaudiosink | | 2.0.0-r0 |  | GRT_STB_v2 | |
| 104 | sky-dropbear | **1.0.0-r1** | 1.0.0-r0 |  | NA | |
| 105 | mfi-ree | | 2.0.0-r0 |  | GRT_v2 | |
| 106 | sysint-oem | **1.0.0-r1** | 1.0.0-r0 |  | ec0f597 | |
| 107 | sysint-soc | | 1.0.0-r0 |  | c3ae6f4 | |
| 108 | apparmor-vendor | | 1.0.0-r0 |  | 41e3674 | |
| 109 | directfb | | 1.7.7-r0 |  | NA | |
| 110 | audiocapturemgr-vendor | | 1.0.0-r0 |  | a063707 | |




## Vendor Layer Component Integration Details

## Consolidated change list from vendor layer repositories

## Changes in meta repositories

## [meta-oss-reference-release](https://github.com/rdk-e/meta-oss-reference-release/blob/main/CHANGELOG.md)

- Update README.md [9a90456](https://github.com/rdk-e/meta-oss-reference-release/commit/9a90456861ffe29e9005c1875d65b5fbbd2a0006)
- Update README.md [4743610](https://github.com/rdk-e/meta-oss-reference-release/commit/4743610d9559c69e4525142ac086867c78084387)
- RDK-51113: OSS Release 3.3.0 [15a01c0](https://github.com/rdk-e/meta-oss-reference-release/commit/15a01c0b904041ca73ac6777ebe0de4317449991)
- RDKE-164: Include OSS_LAYER_VERSION [be55cab](https://github.com/rdk-e/meta-oss-reference-release/commit/be55cab86a04278e0b8d87b57418e6cb3410919f)
## [meta-rdk-oss-reference](https://github.com/rdk-e/meta-rdk-oss-reference/blob/main/CHANGELOG.md)

- RDK-51113:  OSS release 3.3.0 [f3450d9](https://github.com/rdk-e/meta-rdk-oss-reference/commit/f3450d99861724e011e96970061b69b5d3175ad9)
- RDK-52936: Fix mlprefix for whitelisted packages [1f520f2](https://github.com/rdk-e/meta-rdk-oss-reference/commit/1f520f2096a602bec6cb04e9e0c183ccba9f3898)
- STBT-47325: coverity.bb removing from repo [79578b7](https://github.com/rdk-e/meta-rdk-oss-reference/commit/79578b7c471c5cfb3514b44bf53ab715fd4496d5)
- RDK-52614: Upgrade libusb to 1.0.27 [4acefe0](https://github.com/rdk-e/meta-rdk-oss-reference/commit/4acefe0d5df2cee640cca0162c9e0a5bc064c9d6)
- Update bluez5_5.48.bbappend [d158781](https://github.com/rdk-e/meta-rdk-oss-reference/commit/d158781a11a8631b83ddb3dcb2c1b3d8ca75564e)
- RDKTV-30468: Revert python related changes done previously [b2dcd76](https://github.com/rdk-e/meta-rdk-oss-reference/commit/b2dcd76f92d75db779f8edd7c2e0e27ff67fc88f)
- RDK-51795, RDK-51832:  Add GPLv2 packages to OSS packagegroup [dda7b0e](https://github.com/rdk-e/meta-rdk-oss-reference/commit/dda7b0e132e7b8af884ba0f80a08bfaca9b899d0)
- RDK-51795, RDK-51832: Configure OSS_ARCH for GPLV2 versioned packages [2ecc4f5](https://github.com/rdk-e/meta-rdk-oss-reference/commit/2ecc4f5520ab1325e60ef5abd2943bed66d077c1)
- RDK-51795: Set preferred version for core utils to 6.9 with GPLv2 license [038fd7f](https://github.com/rdk-e/meta-rdk-oss-reference/commit/038fd7fcf33ce82a2b60bbf905041f75d928802b)
- RDK-51795, RDK-51832: Add GPLv2 versioned OSS packages [db40ebe](https://github.com/rdk-e/meta-rdk-oss-reference/commit/db40ebe913ed8549d759b7372aa90a4972ee9e90)
- RDK-52350: Add mongoose to oss layer [aae96c5](https://github.com/rdk-e/meta-rdk-oss-reference/commit/aae96c5810e2cf7ebe406d91bc9199e186a8a7aa)
- Update gstreamer1.0-plugins-good_1.18.5.bb Update gstreamer1.0-plugins-bad_1.18.5.bb Update gstreamer1.0-plugins-base_1.18.5.bb [7563a7d](https://github.com/rdk-e/meta-rdk-oss-reference/commit/7563a7df5a507573db1d23de7d0925c72ff9a5f3)
- Update gstreamer1.0-plugins-good_1.18.5.bb [1851cb4](https://github.com/rdk-e/meta-rdk-oss-reference/commit/1851cb47928d40a6f782fc3b56d10f2902b59d3c)
- RDK-48917: RDKE: reduce gstreamer library footprint [3767b8e](https://github.com/rdk-e/meta-rdk-oss-reference/commit/3767b8e00b8193e39c0fc3ef132dabd4b89b2725)
- RDK-49789: Remove ca-certificate-default-certs from packagegroup-oss [0a68cfe](https://github.com/rdk-e/meta-rdk-oss-reference/commit/0a68cfef65f8a7e69f8338b2178bd093b10ba8d0)
## [meta-rdk-soc-realtek](https://github.com/rdk-e/meta-rdk-soc-realtek/blob/main/CHANGELOG.md)

- RDK-52686 : mf-ree cleanup  ( [#82](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/82))
## [meta-oem-stream](https://github.com/rdk-e/meta-oem-stream/blob/main/CHANGELOG.md)

- RDK-52599 : Including the blewakeupenabler [fbed74a](https://github.com/rdk-e/meta-oem-stream/commit/fbed74afa640090bd5a07e72b2a9d4c2424b61e4)
## [meta-oem-realtek-stream](https://github.com/rdk-e/meta-oem-realtek-stream/blob/main/CHANGELOG.md)

- RDK-53133: Vendor Release 2.7.0. ( [#199](https://github.com/rdk-e/meta-oem-realtek-stream/pull/199))
- RDK-48841: Westeros commit ID Updated ( [#196](https://github.com/rdk-e/meta-oem-realtek-stream/pull/196))
- RDKE-177 : Updated product firmware path with variable name [6edbba0](https://github.com/rdk-e/meta-oem-realtek-stream/commit/6edbba0776a695f50b28a5ee00b7e835d3c85ec7)
- RDKE-177 : Updated  product-firmware path [3c1842b](https://github.com/rdk-e/meta-oem-realtek-stream/commit/3c1842b40796808be08fe63362eeb7b700ddc839)
- XIONE-15555 : Vendor Version in Flashapp [a1b163b](https://github.com/rdk-e/meta-oem-realtek-stream/commit/a1b163be30423cec07e7273b5d379d0ee147911e)
- RDK-53009 : Enabling the scp connection [7c59a8c](https://github.com/rdk-e/meta-oem-realtek-stream/commit/7c59a8c5a7ea18ebac92c3a3f8c06d61eb354199)
- RDK-52599 : Including the blewakeupenabler ( [#194](https://github.com/rdk-e/meta-oem-realtek-stream/pull/194))
- RDK-52733:Stable2 sync hdmiservice ( [#190](https://github.com/rdk-e/meta-oem-realtek-stream/pull/190))
- RDK-52116 : Bringback watch dog enable patch ( [#191](https://github.com/rdk-e/meta-oem-realtek-stream/pull/191))
- RDK-48485:Removed unwanted file in the vendor side ( [#75](https://github.com/rdk-e/meta-oem-realtek-stream/pull/75))
- RDKE-159 : Adding meta-stack-layering-support [fcfab28](https://github.com/rdk-e/meta-oem-realtek-stream/commit/fcfab287261108e1aca469022dacb4ff9ecc15c6)
- RDKE-152: remove wpe-2.28 distro feature append [34ff406](https://github.com/rdk-e/meta-oem-realtek-stream/commit/34ff4063df12c48693827643bbae8139a8e17098)
- RDK-48618: Move device specific dobby config to vendor layer [fccf579](https://github.com/rdk-e/meta-oem-realtek-stream/commit/fccf579390decae4b262c5e817681ee7dd2780a8)
- Create dobby.xi1.json [6cb7441](https://github.com/rdk-e/meta-oem-realtek-stream/commit/6cb744136d48eecba51519ee0987e220ef9419f1)

## Changes in component repositories

## ['hdmiservice'](https://github.com/rdk-e/hdmiservice-realtek/blob/main/CHANGELOG.md)

- XIONE-15176: Implement APIs to Set/Get ALLM mode [a04deed](https://github.com/rdk-e/hdmiservice-realtek/commit/a04deed9863a2435dd1628aac7ad3e753359faed)
- XIONE-15035: Add more edid info to hdmi_wrap_get_information() [16ef898](https://github.com/rdk-e/hdmiservice-realtek/commit/16ef8985d0a3df3575898e588d88a45def8a1797)
- ES1-1496: Don't set higher color depth if non-4K [f0908c4](https://github.com/rdk-e/hdmiservice-realtek/commit/f0908c4a263ba2918fa13aa9a7a9b8700d7c66a1)
- XIONE-14966: Add protection for cancel notify and cec thread [65d3dee](https://github.com/rdk-e/hdmiservice-realtek/commit/65d3deeeb511a2fa1f6a0805af9cd8a49938633b)
- XIONE-14926: Set 1080p driver resolution during bootup [201ae50](https://github.com/rdk-e/hdmiservice-realtek/commit/201ae506902709d368b33b32b8bb769f0e6aed9f)
- ES1-1481: Clear hdcp status when plug out/in HDMI cable [1f08d7f](https://github.com/rdk-e/hdmiservice-realtek/commit/1f08d7fbd80fa9797ec3e571e73e813a75aaded2)
- Add GitHub Actions workflow file [d04e1dd](https://github.com/rdk-e/hdmiservice-realtek/commit/d04e1ddc91c3045c6fc6adec16c0da286d8ac7e8)
