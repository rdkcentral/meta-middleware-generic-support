# Vendor Layer Release Notes

XiOne Foxtel REALTEK STB RDKE Vendor Layer Release Notes

---

|Platforms supported|
|-------|
|Realtek 1319|

|Yocto version|
|-------|
|kirkstone|

|Summary|Content|
|---|----|
|Classification|Confidential|
|Date|14 Feb 2025|
|Author|pothiraj.paulraj@sky.uk|

---

## Table of Contents

- [Vendor Layer Release Notes](#vendor-layer-release-notes)
  - [Table of Contents](#table-of-contents)
  - [Release Description](#release-description)
  - [Release layer and components](#release-layer-and-components)
    - [Vendor Release Components](#vendor-release-components)
    - [Stack layer](#stack-layer)
  - [Meta Repos](#meta-repos)
  - [Interface versions](#interface-versions)
  - [Limitations](#limitations)
  - [Middleware and Production image Integration](#middleware-and-production-image-integration)
  - [Build instructions](#build-instructions)
    - [Boot Command](#boot-command)
  - [Network Connectivity](#network-connectivity)
  - [Testing](#testing)
  - [Components details in 'packagegroup-vendor-layer'](#components-details-in-packagegroup-vendor-layer)
  - [Vendor Layer Component Integration Details](#vendor-layer-component-integration-details)
  - [Consolidated change list from vendor layer repositories](#consolidated-change-list-from-vendor-layer-repositories)
    - [Changes in meta repositories](#changes-in-meta-repositories)
    - [Changes in component repositories](#changes-in-component-repositories)

## Release Description

The aim of this release is to include R35 sync code for trail candidate at vendor layer, latest oss 4.4.0. This release will provide a versioned "meta-vendor-xione-realtek-release" that will be used by the middleware as well as image assembler.

The scope of this release includes:

- R35 Branch Sync from RDK-V [RDKEVD-257](https://ccp.sys.comcast.net/browse/RDKEVD-257)

## Release layer and components

### Vendor Release Components

| Vendor Release Components | New Version | Version in Previous Release (5.0.2) |
|------------|---------|------------------------------------|
| Kernel & DTB | | 4.9.119.01-r6  | |
| packagegroup-vendor-layer | 5.1.0-r0 | 5.0.2-r0 | https://github.com/rdk-e/meta-oem-realtek-stream/compare/5.0.2...5.1.0 |
| packagegroup-common-vendor-layer | 1.0.2-r0 | 1.0.0-r0 | https://github.com/rdk-e/meta-rdk-vendor-realtek-common/compare/1.0.0...1.0.2 |

### Stack layer

| Layer | Tag |
|------|------|
| [meta-vendor-release](https://github.com/rdk-e/meta-vendor-xione-realtek-release) | [5.1.0](https://github.com/rdk-e/meta-vendor-xione-realtek-release/tree/5.1.0) |

#### Artifactory Location for IPKs

| Product | Location |
|------------|---------|
| XiOne-UK | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-uk-release/5.1.0/xione-uk/ipks/debug |

### Meta Repos

#### Meta repos maintained by layers layer

| Meta Repo | New Version (5.1.0) | Version in Previous Release (5.0.2) | ChangeList |
|------------|---------|------------------------------------|--------------|
| meta-rdk-auxiliary |  | 4.1.5 | |
| meta-oss-reference-release |  | 4.4.0 | |
| meta-rdk-oss-reference |  | 4.4.0 | |
| meta-rdk-tools |  | 2.2.0 | |
| meta-vts |  | 1.2.0 | |
| meta-rdk-soc-realtek |  **4.0.2** | 4.0.1 | [4.0.1...4.0.2](https://github.com/rdk-e/meta-rdk-soc-realtek/compare/4.0.1...4.0.2) |
| meta-oem-stream |  **4.0.2** | 4.0.1 | [4.0.1...4.0.2](https://github.com/rdk-e/meta-oem-stream/compare/4.0.1...4.0.2) |
| meta-oem-realtek-stream |  **5.1.0** | 5.0.2 | [5.0.2...5.1.0](https://github.com/rdk-e/meta-oem-realtek-stream/compare/5.0.2...5.1.0) |
| meta-rdk-vendor-realtek-common |  **1.0.2** | 1.0.1 | [1.0.1...1.0.2](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/compare/1.0.1...1.0.2) |
| meta-oss-vendor-realtek |  **4.0.4** | 4.0.2 | [4.0.2...4.0.4](https://github.com/rdk-e/meta-oss-vendor-realtek/compare/4.0.2...4.0.4) |
| meta-mediarite-vendor |  | 10.0.34.0a2-r2 | |

#### Meta repos common for RDK-E

| Meta Repo | New Version | Version in Previous Release (5.0.2) | ChangeList |
|------------|---------|------------------------------------|--------------|
| **buildscripts** ||||
| build-scripts |  | 4.1.0 | |
| | | | |
| **buildsupport** ||||
| meta-image-support |  | 4.1.1 | |
| meta-stack-layering-support |  | 1.0.0 | |
| | | | |
| **oe** ||||
| meta-openembedded |  | v4.1.0 | |
| poky |  | v4.1.2 | |
| meta-python2 |  | v4.0.0 | |
| | | | |
| **configs** ||||
| rdke-region-uk-config |  | 2.1.5 | |
| rdke-region-au-config |  **1.0.0** | NA | [1.0.0](https://github.com/rdk-e/rdke-region-au-config/commits/1.0.0) |
| rdke-common-config |  | 4.1.0 | |
| rdke-stb-config |  | 1.0.2 | |
| | | | |
| **rdk** ||||
| meta-rdk-halif-headers |  **4.0.0** | 3.2.2 | [3.2.2...4.0.0](https://github.com/rdk-e/meta-rdk-halif-headers/compare/3.2.2...4.0.0) |
| | | | |
| **products** ||||
| meta-product-xione |  | 3.3.0 | |
| | | | |

### Interface versions

| # | HAL Interface Header (rdkcentral github) | New Version | Version from Previous Release (5.0.2)|
|---|------------------------------------------|-------------|----------------------|
| 1 | media-utils-headers | **1.0.5** | 1.0.4 |
| 2 | hdmicecheader | **1.3.10** | 1.3.7 |
| 3 | deepsleep-manager-headers | **1.0.4** | 1.0.3 |
| 4 | power-manager-headers | **1.0.3** | 1.0.2 |
| 5 | devicesettings-hal-headers | **4.1.2** | 2.0.0 |
| 6 | tvsettings-hal-headers | **2.1.0** | 1.4.0 |
|   |   |  |  |
|   | RDK HAL Headers (RDKE github) |  |  |
|   |   |  |  |
| 7 | iarmmgrs-hal-headers | | 2.1.5 |
| 8 | closedcaption-hal-headers | | 1.0.0 |
| 9 | iarmbus-headers | | 1.0.0 |
| 10 | rdk-gstreamer-utils-headers | | 1.3.0 |

### Limitations

It should be noted that some services may not run as they have dependencies with other layers. Additionally, the exclusion of inter-layer bbappends/patches might result in the failure to start some services. These limitations should be taken into consideration during the verification process. These Limitations will be addressed in Future Releases.


### Middleware and Production image Integration

##### XiOne-UK
- Created the  middleware image `"SKXI11ADSSOFT_MIDDLEWARE_DEV_feature_RDKEVD-185-ReleaseAct-5.0.2-Foxtel_20250127151030.bin"` from the `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Middleware-Build/10532/"`

- Testing done by using feature branch`"feature_RDKEVD-185-ReleaseAct-5.0.2-Foxtel for XiOne-Foxtel"` included of latest vendor ipk feed info https://github.com/rdk-e/meta-vendor-xione-realtek-release/blob/release/5.0.2/conf/machine/include/vendor.inc and the middleware manifest branched from develop branch on 27Jan24.
- Feature branch details here `"XiOne-Foxtel(https://github.com/rdk-e/rdke-middleware-manifest/blob/feature/RDKEVD-185-ReleaseAct-5.0.2-Foxtel/realtek-xione.xml)"`

## Build instructions

- Steps to check out and build the vendor layer project [https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project](https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project)
- Steps to check out and build the image assembler project [https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler](https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler)

### Boot Command

#### Copy image to device /mnt/usb or /opt partitions or connect and mount USB having the image binn- Execute FlashApp command
- Move to directory containing the image
- FlashApp \<dirname\> \<imagename\>
- eg. FlashApp /mnt/usb/SKXI11ADSSOFT_VENDOR_DEV_refs_tags_5.0.2_20250124172925.bin

#### USB Flash Method using xboot prompt
- Copy the image to the usb and connect to the STB
- Switch on the STB
- Press z button multiple time to get the bootloader prompt.
- From bootloader prompt, need to do below method
- Choose option c (flashing image)
- Choose select option h/i (depends on from which bank the image is booting)
- Enter the image name which we need to copy.
- After image flashed successfully. Choose the option "exit"
- Choose the option "exit" (or) Enter "i" (automatically reboot the box)

### Network connectivity


## Testing

- Created the `"vendor test image"` `"SKXI11ADSSOFT_VENDOR_DEV_refs_tags_5.0.2_20250124172925.bin for XiOne-Foxtel"` using the vendor layer jenkins job `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Vendor-Release-Build/50/"`
  - Successfully booted the `"vendor test image"` and obtained the shell prompt.
  - Verified vendor layer services up and running
  - Verified IP acquisition via Ethernet
  - Played clear AV with gst-play-1.0.
  - Verified image flashing using FlashApp

Testing details in [RDKEVD-257](https://ccp.sys.comcast.net/browse/RDKEVD-257)

#### High Level Vendor Memory usage data

- Test results for use case of UHD60FPS playback on Xione Uk puck  with 4GB DDR Size . The device has a dual decode capability with UHD+FHD support. Very minimal services are running in the vendor test image while  running the test.

|      **Field**       |   **Description**    |
|------------------|-------------------|
|Vendor Static Reserved   |    Amount of fixed static memory which is used by vendor layer for any UseCase       |
|Vendor Baseline Memory  | Amount memory used at Boot up minus vendor CMA used |
|Vendor Dynamic usage on uhd_play      | Dynamically allocated memory during the execution of Usecase |
|Vendor Dynamic Total      | Dynamically allocated Total Memory system wide |
|Available Memory       | Available Memory in the system |

##### XiOne-UK

| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| Jan 07 2025 |  SKXI11ADS_VENDOR_DEV_refs_tags_5.0.1_20250106184824 | 1547368 | 447174 | 29121 | 476295 | 2170385 |
| Dec 30 2024 |  SKXI11ADS_VENDOR_DEV_refs_tags_5.0.0_20241224172552 | 1547368 | 445508 | 29135 | 474643 | 2172037 |
| Dec 03 2024 |  SKXI11ADS_VENDOR_DEV_refs_tags_4.0.1_20241203115633 | 1547368 | 447008 | 26733 | 473741 | 2172939 |

### Fullstack image testing

##### XiOne-UK
- Created Image Assembler build `"SKXI11ADS_DEV_feature_RDKEVD-65-ReleaseAct-5.0.1_20250106220555.bin from the jenkins job https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Image-Assembler-Build/1055/"` based on Middleware version 2.1.4 and the latest develop MW manifest branched to `"feature/RDKEVD-65-ReleaseAct-5.0.1"`.

- Included the application release 4.12.0 using [rdke-assembler-manifest](https://github.com/rdk-e/rdke-assembler-manifest) feature branch `"feature/RDKEVD-65-ReleaseAct-5.0.1"` 
- Tested the below scenarios as part of [RDKEVD-257](https://ccp.sys.comcast.net/browse/RDKEVD-257)

  - Successfully booted \"SKXI11ADS_DEV_feature_RDKEVD-65-ReleaseAct-5.0.1_20250106220555.bin\" and obtained the shell prompt and UI.
  - Verified UI navigation
  - Verified AV with Disney+ App
  - Verified AV with Xumo Play
  - Verified AV with Netflix
  - Verified AV with Amazon Prime
  - Verified AV with YouTube
  - Verified remote control pairing
  - Verified Log files are present in /opt/logs

## Components details in 'packagegroup-common-vendor-layer'

| # | Vendor layer Component | New PV-PR (5.1.0) | PV-PR in Previous Release (5.0.2)| New SRCREV (5.1.0) | SRCREV in Previous Release (5.0.2)| Diff |
|---|------------------------------------------|-------------|----------------------|-----------|------------|-----|
| 1 | libdrm | | 2.4.110-r0 |  | NA | |
| 2 | cairo | | 1.16.0-r1 |  | NA | |
| 3 | libepoxy | | 1.5.9-r1 |  | NA | |
| 4 | python3-pygobject | | 3.34.0-r0 |  | NA | |
| 5 | pango | | 1.44.7-r0 |  | NA | |
| 6 | librsvg | | 2.40.21-r0 |  | NA | |
| 7 | python3-pycairo | | 1.19.0-r0 |  | NA | |
| 8 | xsign | **4.0.1-r2** | 4.0.1-r1 |  | NA | |
| 9 | mfrlib-hal-xione | **8.1.0-r0** | 7.0.4-r0 |  | NA | |
| 10 | wipe-disk-partitions | | 1.0.0-r0 |  | NA | |
| 11 | secauthn | | 1.0.0-r0 |  | NA | |
| 12 | testagent-loader | **2.3.0-r1** | 2.3.0-r0 |  | NA | |
| 13 | qca6390-mod-wifi | | 1.0.0-r0 |  | NA | |
| 14 | qca-hciattach | | 1.0.0-r1 |  | NA | |
| 15 | emmc-fw-update | | 1.0.0-r0 |  | NA | |
| 16 | mount-disk-partition | | 1.0.0-r0 |  | NA | |
| 17 | image-verifier-lib | **6.2.0-r1** | 6.2.0-r0 |  | NA | |
| 18 | fmtsasidlibs | | 2.4-r1 |  | NA | |
| 19 | led-boot-pattern | **1.0.0-r1** | 1.0.0-r0 |  | NA | |
| 20 | rtkmali | | 2.8.0-r0 |  | NA | |
| 21 | blewakeupenabler | | 1.3.0-r0 |  | 7c0eb9c | |
| 22 | rtk-platform-conf | **2.6.0-r1** | 2.6.0-r0 |  | NA | |
| 23 | emmc-read-util | | 4.0.0-r0 |  | 6281804 | |
| 24 | sky-dropbear | | 1.0.0-r1 |  | NA | |
| 25 | sysint-oem | | 3.0.0-r0 |  | 50d274a | |
| 26 | sysint-soc | | 3.0.0-r0 |  | f8dded4 | |
| 27 | sky-led-app | | 1.0.0-r0 |  | NA | |
| 28 | audiocapturemgr-vendor | | 1.0.0-r0 |  | a063707 | |
| 29 | displayinfo-soc | **1.0.0-r0** | NA | **e7b2c24** | NA |  [](https://github.com/rdk-e/meta-rdk-halif-headers) |
| 30 | ffmpeg | | ERROR-r1 |  | NA | |


## Components Removed

| # |  Component Name | Reason |
|----|--------------|------|
| 1 |  - testagentlib_testagentlib |  |
| 2 |  - testagentlib_xione_factory |  |


## Components details in 'packagegroup-vendor-layer'

| # | Vendor layer Component | New PV-PR | PV-PR in Previous Release (5.0.2)| New SRCREV | SRCREV in Previous Release (5.0.2)| Diff |
|---|------------------------------------------|-------------|----------------------|-----------|------------|-----|
| 1 | media-utils-soc-realtek | **1.0.5-1.0.0-r1** | 1.0.4-1.0.0-r1 |  | 5e71382 | |
| 2 | closedcaption-hal-realtek | | 1.0.0-3.0.0-r0 |  | 2f365d0 | |
| 3 | hdmicec-hal-realtek | **1.3.10-3.0.0-r0** | 1.3.7-3.0.0-r0 |  | 15cb845 | |
| 4 | iarmmgrs-hal-realtek | | 2.1.5-2.0.0-r1 |  | a15d303 | |
| 5 | rdk-gstreamer-utils-platform | | 1.3.0-1.0.0-r0 |  | 739cdb7 | |
| 6 | devicesettings-hal-realtek | **4.1.2-4.0.1-r0** | 2.0.0-3.0.0-r1 |  |  | |
| - |  - devicesettings-hal-realtek_devicesettingssocrealtek | |  | **85c82ea** | 5fff287 |  [](https://github.com/rdk-e/meta-rdk-halif-headers) |
| - |  - devicesettings-hal-realtek_devicesettingsskyxione | |  |  | 6929995 | |
| 7 | deepsleepmgr-hal-realtek | **1.0.4-1.0.0-r0** | 1.0.3-1.0.0-r0 |  | cbe53a0 | |
| 8 | pwrmgr-hal-realtek | **1.0.3-1.0.0-r0** | 1.0.2-1.0.0-r0 |  | c91e047 | |
| 9 | otp-program | | 2.2-r1 |  | NA | |
| 10 | gstreamer1.0 | | 1.18.5-r4 |  | NA | |
| 11 | gstreamer1.0-meta-base | | 1.18.5-r4 |  | NA | |
| 12 | gstreamer1.0-omx | | 1.10.4-r4 |  | NA | |
| 13 | gstreamer1.0-libav | | 1.18.5-r4 |  | NA | |
| 14 | gstreamer1.0-plugins-good | | 1.18.5-r4 |  | NA | |
| 15 | gstreamer1.0-plugins-good-meta | | 1.18.5-r4 |  | NA | |
| 16 | gstreamer1.0-plugins-bad | | 1.18.5-r4 |  | NA | |
| 17 | gstreamer1.0-plugins-bad-meta | | 1.18.5-r4 |  | NA | |
| 18 | gstreamer1.0-rtsp-server | | 1.18.5-r4 |  | NA | |
| 19 | gstreamer1.0-plugins-base | | 1.18.5-r4 |  | NA | |
| 20 | gstreamer1.0-plugins-base-meta | | 1.18.5-r4 |  | NA | |
| 21 | gstreamer1.0-plugins-base-playback | | 1.18.5-r4 |  | NA | |
| 22 | gstreamer1.0-plugins-good-wavparse | | 1.18.5-r4 |  | NA | |
| 23 | gstreamer1.0-plugins-good-audiofx | | 1.18.5-r4 |  | NA | |
| 24 | gstreamer1.0-plugins-good-isomp4 | | 1.18.5-r4 |  | NA | |
| 25 | gstreamer1.0-plugins-good-audioparsers | | 1.18.5-r4 |  | NA | |
| 26 | gstreamer1.0-plugins-good-soup | | 1.18.5-r4 |  | NA | |
| 27 | gstreamer1.0-plugins-base-gio | | 1.18.5-r4 |  | NA | |
| 28 | gstreamer1.0-plugins-base-videoconvert | | 1.18.5-r4 |  | NA | |
| 29 | gstreamer1.0-plugins-base-videoscale | | 1.18.5-r4 |  | NA | |
| 30 | gstreamer1.0-plugins-base-volume | | 1.18.5-r4 |  | NA | |
| 31 | gstreamer1.0-plugins-base-typefindfunctions | | 1.18.5-r4 |  | NA | |
| 32 | gstreamer1.0-plugins-good-autodetect | | 1.18.5-r4 |  | NA | |
| 33 | gstreamer1.0-plugins-good-avi | | 1.18.5-r4 |  | NA | |
| 34 | gstreamer1.0-plugins-good-deinterlace | | 1.18.5-r4 |  | NA | |
| 35 | gstreamer1.0-plugins-good-interleave | | 1.18.5-r4 |  | NA | |
| 36 | gstreamer1.0-plugins-bad-dash | | 1.18.5-r4 |  | NA | |
| 37 | gstreamer1.0-plugins-bad-mpegtsdemux | | 1.18.5-r4 |  | NA | |
| 38 | gstreamer1.0-plugins-bad-smoothstreaming | | 1.18.5-r4 |  | NA | |
| 39 | gstreamer1.0-plugins-bad-videoparsersbad | | 1.18.5-r4 |  | NA | |
| 40 | gstreamer1.0-plugins-bad-opusparse | | 1.18.5-r4 |  | NA | |
| 41 | gstreamer1.0-plugins-bad-dashdemux | | 1.18.5-r4 |  | NA | |
| 42 | gstreamer1.0-plugins-good-matroska | | 1.18.5-r4 |  | NA | |
| 43 | gstreamer1.0-plugins-base-app | | 1.18.5-r4 |  | NA | |
| 44 | gstreamer1.0-plugins-base-audioconvert | | 1.18.5-r4 |  | NA | |
| 45 | gstreamer1.0-plugins-base-audioresample | | 1.18.5-r4 |  | NA | |
| 46 | westeros-simpleshell | | 1.01.57-r0 |  | 3cd00f7 | |
| 47 | westeros-simplebuffer | | 1.01.57-r0 |  | 3cd00f7 | |
| 48 | westeros-soc | | 1.01.57-r0 |  | 3cd00f7 | |
| 49 | westeros-sink | | 1.01.57-r0 |  |  | |
| - |  - westeros-sink_westeros | |  |  | 3cd00f7 | |
| - |  - westeros-sink_realtek | |  |  | 80d02bd | |
| 50 | westeros | | 1.01.57-r0 |  | 3cd00f7 | |
| 51 | essos | | 1.01.57-r0 |  | 3cd00f7 | |
| 52 | python3-pygobject | | 3.34.0-r0 |  | NA | |
| 53 | make-mod-scripts | | 1.0-r0 |  | NA | |
| 54 | python3-pycairo | | 1.19.0-r0 |  | NA | |
| 55 | sky-fpbutton-driver | | 3.0.0-r0 |  | acd582d | |
| 56 | splashscreen-viewer | | 2.0.0-r0 |  | 41e70a2 | |
| 57 | rtk-tee | | 1.0.0-r0 |  | NA | |
| 58 | secauthn | | 1.0.0-r0 |  | NA | |
| 59 | secapi-rtk | **2.1.0-r2** | 2.1.0-r1 |  | 95b6bd4 | |
| 60 | secapi3-rtk | | 3.3.0-r0 |  | 570df40 | |
| 61 | secapi2-adapter | | 1.0.0-r0 |  | NA | |
| 62 | secapi-common-hw | | 2.3.0-r0 |  | 3a51b88 | |
| 63 | secapi-netflix | | 1.0.0-r0 |  |  | |
| - |  - secapi-netflix_com_inc_rtk | |  |  | 0fa3af3 | |
| - |  - secapi-netflix_socrealtek | |  |  | d3c7c87 | |
| 64 | gst-svp-ext | | 1.1.0-r0 |  | NA | |
| 65 | systemaudioplatform | | 1.0.0-r0 |  | 776348d | |
| 66 | miracast-soc | | 1.0.0-r0 |  | 30cb689 | |
| 67 | secapi-crypto-rtk | | 2.3.1-r0 |  | 5241d45 | |
| 68 | secapi-common-crypto | | 2.3.0-r0 |  | 3a51b88 | |
| 69 | qca6390-mod-wifi | | 1.0.0-r1 |  | NA | |
| 70 | flashapp | | 7.1-r0 |  | NA | |
| 71 | sky-led-driver | | 2.0.0-r0 |  | f97a795 | |
| 72 | [hank-mod-mali](#hank-mod-mali) | **3.0.0-r0** | 1.0.0-r1 | **a574cc2** | 3ad45d0 |  [3ad45d0...a574cc2](https://github.com/rdk-e/kernel-modules-mali-soc-realtek/compare/3ad45d0cca66d4bdc06d5fb637784f19435bb223...a574cc2187891f2028b2c4ae9aa7483897f13e6d) |
| 73 | rtkv1sink | | 2.0.0-r1 |  | 67bdf5b | |
| 74 | led-boot-pattern | | 1.0.0-r0 |  | NA | |
| 75 | rtkmali | | 2.8.0-r0 |  | NA | |
| 76 | platform-lib | **2.6.0-r3** | 2.6.0-r2 |  | NA | |
| 77 | [rtk-audio-service](#rtk-audio-service) | **3.0.1-r0** | 3.0.0-r0 | **d444891** | 8a4a7f3 |  [8a4a7f3...d444891](https://github.com/rdk-e/RtkAudioService-soc-realtek/compare/8a4a7f3a36c00fe491ed61bcf37c4721350f2abb...d4448911c52b758d524f88b6e4ad88e69107a5f2) |
| 78 | hdmiservice | **4.0.0-r1** | 4.0.0-r0 |  | 9fad0da | |
| 79 | rtkpcrclksink | | 2.0.0-r0 |  | c8272d9 | |
| 80 | linux-libc-headers | | 4.9-r6 |  | NA | |
| 81 | packagegroup-kernel-modules | | 4.9.119.01-r6 |  | NA | |
| 82 | linux-hank | | 4.9.119.01-r6 |  | e608d5f | |
| 83 | mediarite-vendor | | 10.0.34.0a2-r0 |  | NA | |
| 84 | gst-plugins-mediarite | | 1.0-r0 |  | NA | |
| 85 | [rtkaudiosink](#rtkaudiosink) | **3.0.2-r0** | 3.0.1-r0 | **eaee836** | 423d02f |  [423d02f...eaee836](https://github.com/rdk-e/rtkaudiosink-soc-realtek/compare/423d02f49610151760fa1b4cdcf033f9424db8cb...eaee83681d35c7dc0cf4331450a4f7c317451459) |
| 86 | [mfi-ree](#mfi-ree) | | 2.0.0-r0 | **4941717** | 1f5a100 |  [1f5a100...4941717](https://github.com/rdk-e/mfi-ree-cpc/compare/1f5a100a7c4f26489b54b0fdebc197ba3db047f9...4941717612087ba6f64121bbb3072675867456ad) |
| 87 | sysint-oem | | 3.0.0-r0 |  | 50d274a | |
| 88 | [sysint-soc](#sysint-soc) | **3.0.1-r0** | 3.0.0-r0 | **7d06f20** | f8dded4 |  [f8dded4...7d06f20](https://github.com/rdk-e/sysint-soc-rtk/compare/f8dded4af097061aade727bd591a273af8b1a58a...7d06f20db4a70f8d2a24f095541495157ee45842) |
| 89 | apparmor-vendor | | 1.0.0-r0 |  | 41e3674 | |
| 90 | directfb | | 1.7.7-r0 |  | NA | |
| 91 | product-firmware-pb | | 1.0.2-r0 |  | 3079cbe | |
| 92 | testagentlib | **3.0.2-r0** | NA |  |  | |
| - |  - testagentlib_testagentlib | |  | **b8eb1f8** | NA |  [](https://github.com/rdk-e/sysint-soc-rtk) |
| - |  - testagentlib_xione_factory | |  | **6281804** | NA |  [](https://github.com/rdk-e/sysint-soc-rtk) |
| 93 | testagent-loader | | 2.3.0-r0 |  | NA | |


## Consolidated change list from vendor layer repositories

## Changes in meta repositories

## [meta-rdk-soc-realtek](https://github.com/rdk-e/meta-rdk-soc-realtek/blob/main/CHANGELOG.md)

- RDKEVD-257: Sync code 8.0_p1v. ( [#102](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/102))
## [meta-oem-stream](https://github.com/rdk-e/meta-oem-stream/blob/main/CHANGELOG.md)

- RDKEVD-257: Sync code 8.0_p1v. [879e6c2](https://github.com/rdk-e/meta-oem-stream/commit/879e6c25b42440406b445667559fe983745bb2f3)
## [meta-oem-realtek-stream](https://github.com/rdk-e/meta-oem-realtek-stream/blob/main/CHANGELOG.md)

- RDKEVD-257 : Update the r35 sync code [f6f8b19](https://github.com/rdk-e/meta-oem-realtek-stream/commit/f6f8b19171bfdea010254fd95c2c0b997138030d)
- RDKEVD-257: Sync code 8.0_p1v. ( [#264](https://github.com/rdk-e/meta-oem-realtek-stream/pull/264))
## [meta-rdk-vendor-realtek-common](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/blob/main/CHANGELOG.md)

- RDKEVD-257 : Update the r35 sync code [d84addb](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/d84addb7865f1c957de7ef4d2c6c18883846914a)
- RDKEVD-301: Sync mfrlib code 8.0_p1v. [e9cff84](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/e9cff84c688bc0e2098bcab634eac70304a97549)
- RDKEVD-257: Sync code 8.0_p1v. [43c8f59](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/43c8f590849b2887d273a8eea233aa00266e4a3b)
## [meta-oss-vendor-realtek](https://github.com/rdk-e/meta-oss-vendor-realtek/blob/main/CHANGELOG.md)

- RDKEVD-257: Sync code 8.0_p1v. ( [#46](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/46))


## Changes in component repositories

## ['hank-mod-mali'](https://github.com/rdk-e/kernel-modules-mali-soc-realtek/blob/main/CHANGELOG.md)

- XIONE-15348 : Upgrade Mali library to R44(km) [4e440d1](https://github.com/rdk-e/kernel-modules-mali-soc-realtek/commit/4e440d1c8c58c0e088360cafe316263eef4b6445)
- Add GitHub Actions workflow file [6845407](https://github.com/rdk-e/kernel-modules-mali-soc-realtek/commit/6845407500e4622d91488505071fbae4971e877d)
## ['rtk-audio-service'](https://github.com/rdk-e/RtkAudioService-soc-realtek/blob/main/CHANGELOG.md)

- XIONE-15866 : Report correct buffering info for slave PCM [e741573](https://github.com/rdk-e/RtkAudioService-soc-realtek/commit/e74157359f06be00bbcbdf4c9fe855a02d4dd3f0)
## ['rtkaudiosink'](https://github.com/rdk-e/rtkaudiosink-soc-realtek/blob/main/CHANGELOG.md)

- ES1-2100 : To fix the position falls back. [1d6c810](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/1d6c810dade8ff6c20bbcce77ff83fb59afa58db)
- ES1-2027 Fix media paused volume don't apply after resume. [96dad74](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/96dad748712b6ae910686895206707f83abe8034)
## ['mfi-ree'](https://github.com/rdk-e/mfi-ree-cpc/blob/main/CHANGELOG.md)

- RDK-53832,RDK-53833 : MFI integration on RTK with sideload. [3dd612e](https://github.com/rdk-e/mfi-ree-cpc/commit/3dd612ef53a57244a4ddca695b98dc08888926d9)
- Add GitHub Actions workflow file [7ba8286](https://github.com/rdk-e/mfi-ree-cpc/commit/7ba8286a62e00153f9a9d9bce1b954a6ff3885eb)
## ['sysint-soc'](https://github.com/rdk-e/sysint-soc-rtk/blob/main/CHANGELOG.md)

