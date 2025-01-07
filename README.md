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
|Date|07 Jan 2025|
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
  - [Middleware Integration](#middleware-integration)
  - [Build instructions](#build-instructions)
    - [Boot Command](#boot-command)
  - [Testing](#testing)
  - [Components details in 'packagegroup-vendor-layer'](#components-details-in-packagegroup-vendor-layer)
  - [Vendor Layer Component Integration Details](#vendor-layer-component-integration-details)
  - [Consolidated change list from vendor layer repositories](#consolidated-change-list-from-vendor-layer-repositories)
    - [Changes in meta repositories](#changes-in-meta-repositories)
    - [Changes in component repositories](#changes-in-component-repositories)

## Release Description

The aim of this release is to include issues reported in the xione uk realtek puck trail build. This release will provide a versioned "meta-vendor-xione-realtek-release" that will be used by the middleware as well as image assembler.

The scope of this release includes:

- Netflix crash when switching between apps [RDKEMW-610](https://ccp.sys.comcast.net/browse/RDKEMW-610)
- A/V out of sync and continuous break during video > 3hrs of NFX playback [RDKEMW-763](https://ccp.sys.comcast.net/browse/RDKEMW-763)
- Observed "process crashed = DRMSYSTEM" [RDKEMW-770](https://ccp.sys.comcast.net/browse/RDKEMW-770)
- Include miracast reatek soc changes inside VL [RDKEMW-308](https://ccp.sys.comcast.net/browse/RDKEMW-308)

## Release layer and components

### Vendor Release Components

| Vendor Release Components | New Version (5.0.1) | Version in Previous Release (5.0.0) | ChangeList |
|------------|---------|------------------------------------|--------------|
| Kernel & DTB |   | 4.9.119.01-r6 | |
| packagegroup-vendor-layer | 5.0.1-r0 | 5.0.0-r0 | [5.0.1...5.0.0](https://github.com/rdk-e/meta-oem-realtek-stream/compare/5.0.0...5.0.1) |

### Stack layer

| Layer | Tag |
|------|------|
| [meta-vendor-xione-realtek-release](https://github.com/rdk-e/meta-vendor-xione-realtek-release)  | [5.0.1](https://github.com/rdk-e/meta-vendor-xione-realtek-release/tree/5.0.1) |

#### Artifactory Location for IPKs
| Product | Location |
|---------|----------|
| XiOne-UK | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-uk-release/5.0.1/xione-uk/ipks/debug |


### Meta Repos

#### Meta repos maintained by layers layer

| Meta Repo | New Version (5.0.1) | Version in Previous Release (5.0.0) | ChangeList |
|------------|---------|------------------------------------|--------------|
| meta-rdk-auxiliary |  | 4.1.2 | |
| meta-oss-reference-release |  | 4.3.0 | |
| meta-rdk-oss-reference |  | 4.3.0 | |
| meta-rdk-tools |  | 2.2.0 | |
| meta-vts |  | 1.2.0 | |
| meta-rdk-soc-realtek |  | 4.0.0 | |
| meta-oem-stream |  | 4.0.0 | |
| [meta-oem-realtek-stream](#meta-oem-realtek-stream) |  **5.0.1** | 5.0.0 | [5.0.0...5.0.1](https://github.com/rdk-e/meta-oem-realtek-stream/compare/5.0.0...5.0.1) |
| meta-oss-vendor-realtek |  | 4.0.1 | |
| meta-mediarite-vendor |  | 10.0.34.0a2-r2 | |

#### Meta repos common for RDK-E

| Meta Repo | New Version (5.0.1) | Version in Previous Release (5.0.0) | ChangeList |
|------------|---------|------------------------------------|--------------|
| **buildscripts** ||||
| build-scripts |  | 4.1.0 | |
| | | | |
| **buildsupport** ||||
| meta-image-support |  | 4.1.1 | |
| | | | |
| **stacklayering** ||||
| meta-stack-layering-support |  | 3.2.0 | |
| | | | |
| **oe** ||||
| meta-openembedded |  | v4.1.0 | |
| poky |  | v4.1.2 | |
| meta-python2 |  | v4.0.0 | |
| | | | |
| **configs** ||||
| rdke-region-uk-config |  | 2.1.5 | |
| rdke-common-config |  | 4.1.0 | |
| rdke-stb-config |  | 1.0.2 | |
| | | | |
| **rdk** ||||
| meta-rdk-halif-headers |  | 3.2.2 | |
| | | | |
| **products** ||||
| meta-product-xione |  | 3.2.0 | |
| | | | |

### Interface versions

| # | HAL Interface Header (rdkcentral github) | New Version (5.0.1) | Version in Previous Release (5.0.0)
|---|------------------------------------------|-------------|----------------------|
| 1 | media-utils-headers | | 1.0.4 |
| 2 | hdmicecheader | | 1.3.7 |
| 3 | deepsleep-manager-headers | | 1.0.3 |
| 4 | power-manager-headers | | 1.0.2 |
| 5 | devicesettings-hal-headers | | 2.0.0 |
| 6 | tvsettings-hal-headers | | 1.4.0 |
|   |   |  |  |
|   | RDK HAL Headers (RDKE github) |  |  |
|   |   |  |  |
| 7 | iarmmgrs-hal-headers | | 2.1.5 |
| 8 | closedcaption-hal-headers | | 1.0.0 |
| 9 | iarmbus-headers | | 1.0.0 |
| 10 | rdk-gstreamer-utils-headers | | 1.3.0 |

### Limitations

It should be noted that some services may not run as they have dependencies with other layers. Additionally, the exclusion of inter-layer bbappends/patches might result in the failure to start some services. These limitations should be taken into consideration during the verification process. These Limitations will be addressed in Future Releases.

### Middleware Integration

##### XiOne-UK
- Created the  middleware image `"SKXI11ADS_MIDDLEWARE_DEV_feature_RDKEVD-65-ReleaseAct-5.0.1_20250106220127.bin"` from the `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Middleware-Build/9367/"`

- Testing done by using feature branch`"feature/RDKEVD-65-ReleaseAct-5.0.1 for Xione-UK"` included latest vendor ipk feed info https://github.com/rdk-e/meta-vendor-xione-realtek-release/blob/release/5.0.1/conf/machine/include/vendor.inc and the middleware manifest branched from develop branch on 06Jan25.
- Feature branch detail here `"XiOne-UK (https://github.com/rdk-e/rdke-middleware-manifest/blob/feature/RDKEVD-65-ReleaseAct-5.0.1/realtek-xione.xml)"`

## Build instructions

- Steps to check out and build the vendor layer project [https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project](https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project)
- Steps to check out and build the image assembler project [https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler](https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler)

### Boot Command

#### Copy image to device /mnt/usb or /opt partitions or connect and mount USB having the image binn- Execute FlashApp command
- Move to directory containing the image
- FlashApp \<dirname\> \<imagename\>
- eg. FlashApp /mnt/usb/SKXI11ADS_VENDOR_DEV_refs_tags_5.0.1_20250106184824.bin

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

## Testing

Created the `"vendor test image"` `"SKXI11ADS_VENDOR_DEV_refs_tags_5.0.1_20250106184824.bin"` using the vendor layer project.
Successfully booted the "vendor test image" and obtained the shell prompt.
For this release testing was done by using the tag refs/tags/5.0.1

### Vendor image testing

- Created the `"vendor test image"` `"SKXI11ADS_VENDOR_DEV_refs_tags_5.0.1_20250106184824.bin for XiOne-UK "` using the vendor layer jenkins job `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Vendor-Release-Build/43/"`
  - Successfully booted the `"vendor test image"` and obtained the shell prompt.
  - Verified vendor layer services up and running
  - Verified IP acquisition via Ethernet
  - Played clear AV with gst-play-1.0.
  - Verified image flashing using FlashApp

Testing details captured here [RDKEVD-65](https://ccp.sys.comcast.net/browse/RDKEVD-65)

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
- Tested the below scenarios as part of [RDKEVD-65](https://ccp.sys.comcast.net/browse/RDKEVD-65)

  - Successfully booted \"SKXI11ADS_DEV_feature_RDKEVD-65-ReleaseAct-5.0.1_20250106220555.bin\" and obtained the shell prompt and UI.
  - Verified UI navigation
  - Verified AV with Disney+ App
  - Verified AV with Xumo Play
  - Verified AV with Netflix
  - Verified AV with Amazon Prime
  - Verified AV with YouTube
  - Verified remote control pairing
  - Verified Log files are present in /opt/logs


## Components details in 'packagegroup-vendor-layer'


| # | Vendor layer Component | New PV-PR | PV-PR in Previous Release (5.0.0)| New SRCREV | SRCREV in Previous Release (5.0.0)| Diff |
|---|------------------------------------------|-------------|----------------------|-----------|------------|-----|
| 1 | media-utils-soc-realtek | | 1.0.4-1.0.0-r1 |  | 5e71382 | |
| 2 | closedcaption-hal-realtek | | 1.0.0-3.0.0-r0 |  | 2f365d0 | |
| 3 | hdmicec-hal-realtek | | 1.3.7-3.0.0-r0 |  | 15cb845 | |
| 4 | iarmmgrs-hal-realtek | | 2.1.5-2.0.0-r1 |  | a15d303 | |
| 5 | rdk-gstreamer-utils-platform | | 1.3.0-1.0.0-r0 |  | 739cdb7 | |
| 6 | devicesettings-hal-realtek | | 2.0.0-3.0.0-r1 |  |  | |
| - |  - devicesettings-hal-realtek_devicesettingssocrealtek | |  |  | 5fff287 | |
| - |  - devicesettings-hal-realtek_devicesettingsskyxione | |  |  | 6929995 | |
| 7 | deepsleepmgr-hal-realtek | | 1.0.3-1.0.0-r0 |  | cbe53a0 | |
| 8 | pwrmgr-hal-realtek | | 1.0.2-1.0.0-r0 |  | c91e047 | |
| 9 | rtk-platform-conf | | 2.6.0-r0 |  | NA | |
| 10 | testagentlib | | 3.0.1-r0 |  |  | |
| - |  - testagentlib_testagentlib | |  |  | 9414e69 | |
| - |  - testagentlib_xione_factory | |  |  | 6281804 | |
| 11 | emmc-read-util | | 4.0.0-r0 |  | 6281804 | |
| 12 | otp-program | | 2.2-r1 |  | NA | |
| 13 | gstreamer1.0 | | 1.18.5-r4 |  | NA | |
| 14 | gstreamer1.0-meta-base | | 1.18.5-r4 |  | NA | |
| 15 | gstreamer1.0-omx | | 1.10.4-r4 |  | NA | |
| 16 | gstreamer1.0-libav | | 1.18.5-r4 |  | NA | |
| 17 | gstreamer1.0-plugins-good | | 1.18.5-r4 |  | NA | |
| 18 | gstreamer1.0-plugins-good-meta | | 1.18.5-r4 |  | NA | |
| 19 | gstreamer1.0-plugins-bad | | 1.18.5-r4 |  | NA | |
| 20 | gstreamer1.0-plugins-bad-meta | | 1.18.5-r4 |  | NA | |
| 21 | gstreamer1.0-rtsp-server | | 1.18.5-r4 |  | NA | |
| 22 | gstreamer1.0-plugins-base | | 1.18.5-r4 |  | NA | |
| 23 | gstreamer1.0-plugins-base-meta | | 1.18.5-r4 |  | NA | |
| 24 | gstreamer1.0-plugins-base-playback | | 1.18.5-r4 |  | NA | |
| 25 | gstreamer1.0-plugins-good-wavparse | | 1.18.5-r4 |  | NA | |
| 26 | gstreamer1.0-plugins-good-audiofx | | 1.18.5-r4 |  | NA | |
| 27 | gstreamer1.0-plugins-good-isomp4 | | 1.18.5-r4 |  | NA | |
| 28 | gstreamer1.0-plugins-good-audioparsers | | 1.18.5-r4 |  | NA | |
| 29 | gstreamer1.0-plugins-good-soup | | 1.18.5-r4 |  | NA | |
| 30 | gstreamer1.0-plugins-base-gio | | 1.18.5-r4 |  | NA | |
| 31 | gstreamer1.0-plugins-base-videoconvert | | 1.18.5-r4 |  | NA | |
| 32 | gstreamer1.0-plugins-base-videoscale | | 1.18.5-r4 |  | NA | |
| 33 | gstreamer1.0-plugins-base-volume | | 1.18.5-r4 |  | NA | |
| 34 | gstreamer1.0-plugins-base-typefindfunctions | | 1.18.5-r4 |  | NA | |
| 35 | gstreamer1.0-plugins-good-autodetect | | 1.18.5-r4 |  | NA | |
| 36 | gstreamer1.0-plugins-good-avi | | 1.18.5-r4 |  | NA | |
| 37 | gstreamer1.0-plugins-good-deinterlace | | 1.18.5-r4 |  | NA | |
| 38 | gstreamer1.0-plugins-good-interleave | | 1.18.5-r4 |  | NA | |
| 39 | gstreamer1.0-plugins-bad-dash | | 1.18.5-r4 |  | NA | |
| 40 | gstreamer1.0-plugins-bad-mpegtsdemux | | 1.18.5-r4 |  | NA | |
| 41 | gstreamer1.0-plugins-bad-smoothstreaming | | 1.18.5-r4 |  | NA | |
| 42 | gstreamer1.0-plugins-bad-videoparsersbad | | 1.18.5-r4 |  | NA | |
| 43 | gstreamer1.0-plugins-bad-opusparse | | 1.18.5-r4 |  | NA | |
| 44 | gstreamer1.0-plugins-bad-dashdemux | | 1.18.5-r4 |  | NA | |
| 45 | gstreamer1.0-plugins-good-matroska | | 1.18.5-r4 |  | NA | |
| 46 | gstreamer1.0-plugins-base-app | | 1.18.5-r4 |  | NA | |
| 47 | gstreamer1.0-plugins-base-audioconvert | | 1.18.5-r4 |  | NA | |
| 48 | gstreamer1.0-plugins-base-audioresample | | 1.18.5-r4 |  | NA | |
| 49 | libdrm | | 2.4.110-r0 |  | NA | |
| 50 | westeros-simpleshell | | 1.01.57-r0 |  | 3cd00f7 | |
| 51 | westeros-simplebuffer | | 1.01.57-r0 |  | 3cd00f7 | |
| 52 | westeros-soc | | 1.01.57-r0 |  | 3cd00f7 | |
| 53 | westeros-sink | | 1.01.57-r0 |  |  | |
| - |  - westeros-sink_westeros | |  |  | 3cd00f7 | |
| - |  - westeros-sink_realtek | |  |  | ec10aa0 | |
| 54 | westeros | | 1.01.57-r0 |  | 3cd00f7 | |
| 55 | essos | | 1.01.57-r0 |  | 3cd00f7 | |
| 56 | cairo | | 1.16.0-r1 |  | NA | |
| 57 | libepoxy | | 1.5.9-r1 |  | NA | |
| 58 | python3-pygobject | | 3.34.0-r0 |  | NA | |
| 59 | pango | | 1.44.7-r0 |  | NA | |
| 60 | make-mod-scripts | | 1.0-r0 |  | NA | |
| 61 | librsvg | | 2.40.21-r0 |  | NA | |
| 62 | python3-pycairo | | 1.19.0-r0 |  | NA | |
| 63 | sky-fpbutton-driver | | 3.0.0-r0 |  | acd582d | |
| 64 | xsign | | 4.0.1-r1 |  | NA | |
| 65 | mfrlib-hal-xione | | 7.0.4-r0 |  | NA | |
| 66 | wipe-disk-partitions | | 1.0.0-r0 |  | NA | |
| 67 | splashscreen-viewer | | 2.0.0-r0 |  | 41e70a2 | |
| 68 | rtk-tee | | 1.0.0-r0 |  | NA | |
| 69 | secauthn | | 1.0.0-r0 |  | NA | |
| 70 | secapi-rtk | | 2.1.0-r1 |  | 95b6bd4 | |
| 71 | secapi3-rtk | | 3.3.0-r0 |  | 570df40 | |
| 72 | secapi2-adapter | | 1.0.0-r0 |  | NA | |
| 73 | secapi-common-hw | | 2.3.0-r0 |  | 3a51b88 | |
| 74 | secapi-netflix | | 1.0.0-r0 |  |  | |
| - |  - secapi-netflix_com_inc_rtk | |  |  | 0fa3af3 | |
| - |  - secapi-netflix_socrealtek | |  |  | d3c7c87 | |
| 75 | gst-svp-ext | **1.1.0-r0** | 1.0.0-r0 |  | NA | |
| 76 | systemaudioplatform | | 1.0.0-r0 |  | 776348d | |
| 77 | miracast-soc | **1.0.0-r0** | NA | **30cb689** | NA | |
| 78 | dvrmgr-hal-realtek | | 1.0.0-r0 |  | NA | |
| 79 | secapi-crypto-rtk | | 2.3.1-r0 |  | 5241d45 | |
| 80 | secapi-common-crypto | | 2.3.0-r0 |  | 3a51b88 | |
| 81 | testagent-loader | | 2.3.0-r0 |  | NA | |
| 82 | qca6390-mod-wifi | | 1.0.0-r1 |  | NA | |
| 83 | qca-hciattach | | 1.0.0-r1 |  | NA | |
| 84 | emmc-fw-update | | 1.0.0-r0 |  | NA | |
| 85 | mount-disk-partition | | 1.0.0-r0 |  | NA | |
| 86 | image-verifier-lib | | 6.2.0-r0 |  | NA | |
| 87 | flashapp | | 7.1-r0 |  | NA | |
| 88 | sky-led-driver | | 2.0.0-r0 |  | f97a795 | |
| 89 | sky-led-app | | 1.0.0-r0 |  | NA | |
| 90 | fmtsasidlibs | | 2.4-r1 |  | NA | |
| 91 | hank-mod-mali | | 1.0.0-r1 |  | 3ad45d0 | |
| 92 | rtkv1sink | | 2.0.0-r1 |  | 67bdf5b | |
| 93 | led-boot-pattern | | 1.0.0-r0 |  | NA | |
| 94 | rtkmali | | 2.8.0-r0 |  | NA | |
| 95 | platform-lib | | 2.6.0-r2 |  | NA | |
| 96 | rtk-audio-service | | 3.0.0-r0 |  | 8a4a7f3 | |
| 97 | hdmiservice | | 3.0.0-r0 |  | b69af01 | |
| 98 | rtkpcrclksink | | 2.0.0-r0 |  | c8272d9 | |
| 99 | blewakeupenabler | | 1.3.0-r0 |  | 7c0eb9c | |
| 100 | linux-libc-headers | | 4.9-r6 |  | NA | |
| 101 | packagegroup-kernel-modules | | 4.9.119.01-r6 |  | NA | |
| 102 | linux-hank | | 4.9.119.01-r6 |  | e608d5f | |
| 103 | mediarite-vendor | | 10.0.34.0a2-r0 |  | NA | |
| 104 | gst-plugins-mediarite | | 1.0-r0 |  | NA | |
| 105 | rtkaudiosink | | 3.0.1-r0 |  | 423d02f | |
| 106 | sky-dropbear | | 1.0.0-r1 |  | NA | |
| 107 | mfi-ree | | 2.0.0-r0 |  | 1f5a100 | |
| 108 | sysint-oem | | 3.0.0-r0 |  | 50d274a | |
| 109 | sysint-soc | | 3.0.0-r0 |  | f8dded4 | |
| 110 | apparmor-vendor | | 1.0.0-r0 |  | 41e3674 | |
| 111 | directfb | | 1.7.7-r0 |  | NA | |
| 112 | audiocapturemgr-vendor | | 1.0.0-r0 |  | a063707 | |
| 113 | product-firmware-pb | | 1.0.1-r0 |  | 2ce2f75 | |


## Consolidated change list from vendor layer repositories

## Changes in meta repositories

## [meta-oem-realtek-stream](https://github.com/rdk-e/meta-oem-realtek-stream/blob/main/CHANGELOG.md)

- RDKEVD-65:Vendor layer release 5.0.1. ( [#245](https://github.com/rdk-e/meta-oem-realtek-stream/pull/245))
- RDKEMW-610, RDKEMW-763, RDKEMW-770: Update gst-svp-ext component to include realtek fixes ( [#237](https://github.com/rdk-e/meta-oem-realtek-stream/pull/237))
- RDKEMW-308: MiracastPlayer related RealTek SoC changes ( [#242](https://github.com/rdk-e/meta-oem-realtek-stream/pull/242))

