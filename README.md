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
|Date|28 Jan 2025|
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

The aim of this release is to include common and product specific ipk separation at vendor layer, latest oss 4.4.0. This release will provide a versioned "meta-vendor-xione-realtek-release" that will be used by the middleware as well as image assembler.

The scope of this release includes:

- Common Prod specific IPK [RDKEVD-146](https://ccp.sys.comcast.net/browse/RDKEVD-146)
- No Signal detected on HDMI 2 [XIONE-16390](https://ccp.sys.comcast.net/browse/XIONE-16390)
- Video pause not working with AAMP TSB enabled [RDKEVD-150](https://ccp.sys.comcast.net/browse/RDKEVD-150)
- Foxtel svn value change[RDKEVD-92](https://ccp.sys.comcast.net/browse/RDKEVD-92)
- Include latest westeros code [RDKEVD-69](https://ccp.sys.comcast.net/browse/RDKEVD-69)

## Release layer and components

### Vendor Release Components

| Vendor Release Components | New Version(5.0.2) | Version in Previous Release (5.0.1) | Changelist |
|------------|---------|------------------------------------|---------|
| Kernel & DTB | | 4.9.119.01-r6  | | 
| packagegroup-vendor-layer | 5.0.2-r0 | 5.0.1-r0 | https://github.com/rdk-e/meta-oem-realtek-stream/compare/5.0.1...5.0.2 |
| packagegroup-common-vendor-layer | 1.0.0-r0 | | **NA** |

### Stack layer

| Layer | Tag |
|------|------|
| [meta-vendor-release](https://github.com/rdk-e/meta-vendor-xione-realtek-release) | [5.0.2](https://github.com/rdk-e/meta-vendor-xione-realtek-release/tree/5.0.2) |

#### Artifactory Location for IPKs

| Product | Location | 
|------------|---------|
| XiOne-Foxtel | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-foxtel-release/5.0.2/xione-uk/ipks/debug |

#### Artifactory Location for Common ipks

| Product | Location | 
|------------|---------|
| XiOne-rtk-common | https://partners.artifactory.comcast.com/ui/repos/tree/General/rtk-xione-common-release/1.0.0/xione-rtk-common/ipks/debug |

#### Meta repos maintained by layers

| Meta Repo | New Version (5.0.2) | Version in Previous Release (5.0.1) | ChangeList |
|------------|---------|------------------------------------|--------------|
| [meta-rdk-auxiliary](#meta-rdk-auxiliary) |  **4.1.5** | 4.1.2 | [4.1.2...4.1.5](https://github.com/rdk-e/meta-rdk-auxiliary/compare/4.1.2...4.1.5) |
| [meta-oss-reference-release](#meta-oss-reference-release) |  **4.4.0** | 4.3.0 | [4.3.0...4.4.0](https://github.com/rdk-e/meta-oss-reference-release/compare/4.3.0...4.4.0) |
| [meta-rdk-oss-reference](#meta-rdk-oss-reference) |  **4.4.0** | 4.3.0 | [4.3.0...4.4.0](https://github.com/rdk-e/meta-rdk-oss-reference/compare/4.3.0...4.4.0) |
| meta-rdk-tools |  | 2.2.0 | |
| meta-vts |  | 1.2.0 | |
| [meta-rdk-soc-realtek](#meta-rdk-soc-realtek) |  **4.0.1** | 4.0.0 | [4.0.0...4.0.1](https://github.com/rdk-e/meta-rdk-soc-realtek/compare/4.0.0...4.0.1) |
| [meta-oem-stream](#meta-oem-stream) |  **4.0.1** | 4.0.0 | [4.0.0...4.0.1](https://github.com/rdk-e/meta-oem-stream/compare/4.0.0...4.0.1) |
| [meta-oem-realtek-stream](#meta-oem-realtek-stream) |  **5.0.2** | 5.0.1 | [5.0.1...5.0.2](https://github.com/rdk-e/meta-oem-realtek-stream/compare/5.0.1...5.0.2) |
| [meta-rdk-vendor-realtek-common](#meta-rdk-vendor-realtek-common) |  **1.0.1** | NA | [1.0.1](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commits/1.0.1) |
| [meta-oss-vendor-realtek](#meta-oss-vendor-realtek) |  **4.0.2** | 4.0.1 | [4.0.1...4.0.2](https://github.com/rdk-e/meta-oss-vendor-realtek/compare/4.0.1...4.0.2) |
| meta-mediarite-vendor |  | 10.0.34.0a2-r2 | |

#### Meta repos common for RDK-E

| Meta Repo | New Version (5.0.2)| Version in Previous Release (5.0.1) | ChangeList |
|------------|---------|------------------------------------|--------------|
| **buildscripts** ||||
| build-scripts |  | 4.1.0 | |
| | | | |
| **buildsupport** ||||
| meta-image-support |  | 4.1.1 | |
| meta-stack-layering-support |  **1.0.0** | 3.2.0 | [3.2.0...1.0.0](https://github.com/rdkcentral/meta-stack-layering-support/compare/3.2.0...1.0.0) |
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
| meta-product-xione |  **3.3.0** | 3.2.0 | [3.2.0...3.3.0](https://github.com/rdk-e/meta-product-xione/compare/3.2.0...3.3.0) |
| | | | |

### Interface versions

| # | HAL Interface Header (rdkcentral github) | New Version (5.0.2) | Versionfrom Previous Release (5.0.1)
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

##### XiOne-Foxtel
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

## Testing

- Created the `"vendor test image"` `"SKXI11ADSSOFT_VENDOR_DEV_refs_tags_5.0.2_20250124172925.bin for XiOne-Foxtel"` using the vendor layer jenkins job `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Vendor-Release-Build/50/"`
  - Successfully booted the `"vendor test image"` and obtained the shell prompt.
  - Verified vendor layer services up and running
  - Verified IP acquisition via Ethernet
  - Played clear AV with gst-play-1.0.
  - Verified image flashing using FlashApp

Testing details in [RDKEVD-185](https://ccp.sys.comcast.net/browse/RDKEVD-185)

#### High Level Vendor Memory usage data

- Test results for use case of UHD60FPS playback on Xione Uk puck  with 4GB DDR Size . The device has a dual decode capability with UHD+FHD support. Very minimal services are running in the vendor test image while  running the test.

|      **Field**       |   **Description**    |
|------------------|-------------------|
|Vendor Static Reserved   |    Amount of fixed static memory which is used by vendor layer for any UseCase       |
|Vendor Baseline Memory  | Amount memory used at Boot up minus vendor CMA used |
|Vendor Dynamic usage on uhd_play      | Dynamically allocated memory during the execution of Usecase |
|Vendor Dynamic Total      | Dynamically allocated Total Memory system wide |
|Available Memory       | Available Memory in the system |


##### XiOne-Foxtel

| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| Jan 28 2025 |  SKXI11ADSSOFT_VENDOR_DEV_refs_tags_5.0.2_20250124172925 | 1547368 | 443566 | 28438 | 472004 | 2174676 |
| Dec 30 2024 |  SKXI11ADSSOFT_VENDOR_DEV_refs_tags_5.0.0_20241224173052 | 1547368 | 450228 | 32825 | 483053 | 2163627 |

### Fullstack image testing

##### XiOne-Foxtel
- Not able to create the image assembler build due to error faced in the jenkins build https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Image-Assembler-Build/1005/ . So we verified the build verification through middleware build as below

- Tested below scenarios as part of [RDKEVD-185](https://ccp.sys.comcast.net/browse/RDKEVD-185)

  - Successfully booted \"SKXI11ADSSOFT_MIDDLEWARE_DEV_feature_RDKEVD-185-ReleaseAct-5.0.2-Foxtel_20250127151030.bin\" and obtained the shell prompt and UI.
  - Verified UI navigation
  - Verified Linear channel AV playback
  - Verified AV with YouTube
  - Verified Log files are present in /opt/logs

- Failure case

  - Netflix App launch failure[RDK-55364](https://ccp.sys.comcast.net/browse/RDK-55364)
  - Wifi connection failure on reboot [RDK-55365](https://ccp.sys.comcast.net/browse/RDK-55365)
  - Amazon playback failure [RDK-55366](https://ccp.sys.comcast.net/browse/RDK-55366)

##### Please ensure to include below updates while MW integration and these changes are temprorary and make the changes are properly

- https://github.com/rdk-e/meta-mediarite/pull/50
- https://github.com/rdk-e/meta-middleware-cspc-support/pull/278
- https://github.com/rdk-e/meta-middleware-development/pull/2103
- https://github.com/rdk-e/meta-rdk-sky/pull/229

## Components details in 'packagegroup-common-vendor-layer'

| # | Vendor layer Component | New PV-PR (5.0.2) | PV-PR in Previous Release (5.0.1)| New SRCREV (5.0.2) | SRCREV in Previous Release (5.0.1)| Diff |
|---|------------------------------------------|-------------|----------------------|-----------|------------|-----|
| 1 | libdrm | **2.4.110-r0** | NA |  | NA | |
| 2 | cairo | **1.16.0-r1** | NA |  | NA | |
| 3 | libepoxy | **1.5.9-r1** | NA |  |  | NA |  | NA | |
| 4 | pango | **1.44.7-r0** | NA |  | NA | |
| 5 | librsvg | **2.40.21-r0** | NA |  | NA | |
| 6 | python3-pycairo | **1.19.0-r0** | NA |  | NA | |
| 7 | xsign | **4.0.1-r1** | NA |  | NA | |
| 8 | mfrlib-hal-xione | **7.0.4-r0** | NA |  | NA | |
| 9 | wipe-disk-partitions | **1.0.0-r0** | NA |  | NA | |
| 10 | testagent-loader | **2.3.0-r0** | NA |  | NA | |
| 11 | qca-hciattach | **1.0.0-r1** | NA |  | NA | |
| 12 | emmc-fw-update | **1.0.0-r0** | NA |  | NA | |
| 13 | mount-disk-partition | **1.0.0-r0** | NA |  | NA | |
| 14 | image-verifier-lib | **6.2.0-r0** | NA |  | NA | |
| 15 | fmtsasidlibs | **2.4-r1** | NA |  | NA | |
| 16 | led-boot-pattern | **1.0.0-r0** | NA |  | NA | |
| 18 | rtkmali | **2.8.0-r0** | NA |  | NA | |
| 19 | blewakeupenabler | **1.3.0-r0** | NA | **7c0eb9c** | NA |  |
| 20 | rtk-platform-conf | **2.6.0-r0** | NA |  | NA | |
| 21 | testagentlib | **3.0.1-r0** | NA |  |  | |
| - |  - testagentlib_testagentlib | |  | **9414e69** | NA |  |
| - |  - testagentlib_xione_factory | |  | **6281804** | NA |  |
| 22 | emmc-read-util | **4.0.0-r0** | NA | **6281804** | NA | |
| 23 | sky-dropbear | **1.0.0-r1** | NA |  | NA | |
| 24 | sysint-oem | **3.0.0-r0** | NA | **50d274a** | NA |  [50d274a](https://github.com/rdk-e/sysint-xione-rtk/commits/50d274ab26926f5e7f1ece6ba4144ca75d7c19e9) |
| 25 | sysint-soc | **3.0.0-r0** | NA | **f8dded4** | NA |  [f8dded4](https://github.com/rdk-e/sysint-soc-rtk/commits/f8dded4af097061aade727bd591a273af8b1a58a) |
| 26 | sky-led-app | **1.0.0-r0** | NA |  | NA | |
| 27 | audiocapturemgr-vendor | **1.0.0-r0** | NA | **a063707** | NA |  [a063707](https://github.com/rdk-e/audiocapturemgr-soc-realtek/commits/a063707e44eb91a3bd66b499b18f45cd5c41014d) |
| 28 | ffmpeg | **4.2.2** | NA |  | NA | |

## Components details in 'packagegroup-vendor-layer'

| # | Vendor layer Component | New PV-PR (5.0.2) | PV-PR in Previous Release (5.0.1)| New SRCREV (5.0.2) | SRCREV in Previous Release (5.0.1)| Diff |
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
| - |  - westeros-sink_realtek | |  | **80d02bd** | ec10aa0 |  |
| 50 | westeros | | 1.01.57-r0 |  | 3cd00f7 | |
| 51 | essos | | 1.01.57-r0 |  | 3cd00f7 | |
| 52 | python3-pygobject | | 3.34.0-r0 |  | NA | |
| 53 | make-mod-scripts | | 1.0-r0 |  | NA | |
| 54 | sky-fpbutton-driver | | 3.0.0-r0 |  | acd582d | |
| 55 | splashscreen-viewer | | 2.0.0-r0 |  | 41e70a2 | |
| 56 | rtk-tee | | 1.0.0-r0 |  | NA | |
| 57 | secauthn | | 1.0.0-r0 |  | NA | |
| 58 | secapi-rtk | | 2.1.0-r1 |  | 95b6bd4 | |
| 59 | secapi3-rtk | | 3.3.0-r0 |  | 570df40 | |
| 60 | secapi2-adapter | | 1.0.0-r0 |  | NA | |
| 61 | secapi-common-hw | | 2.3.0-r0 |  | 3a51b88 | |
| 62 | secapi-netflix | | 1.0.0-r0 |  |  | |
| - |  - secapi-netflix_com_inc_rtk | |  |  | 0fa3af3 | |
| - |  - secapi-netflix_socrealtek | |  |  | d3c7c87 | |
| 63 | gst-svp-ext | | 1.1.0-r0 |  | NA | |
| 64 | systemaudioplatform | | 1.0.0-r0 |  | 776348d | |
| 65 | miracast-soc | | 1.0.0-r0 |  | 30cb689 | |
| 66 | secapi-crypto-rtk | | 2.3.1-r0 |  | 5241d45 | |
| 67 | secapi-common-crypto | | 2.3.0-r0 |  | 3a51b88 | |
| 68 | qca6390-mod-wifi | | 1.0.0-r1 |  | NA | |
| 69 | flashapp | | 7.1-r0 |  | NA | |
| 70 | sky-led-driver | | 2.0.0-r0 |  | f97a795 | |
| 71 | hank-mod-mali | | 1.0.0-r1 |  | 3ad45d0 | |
| 72 | rtkv1sink | | 2.0.0-r1 |  | 67bdf5b | |
| 73 | platform-lib | | 2.6.0-r2 |  | NA | |
| 74 | rtk-audio-service | | 3.0.0-r0 |  | 8a4a7f3 | |
| 75 | hdmiservice | **4.0.0-r0** | 3.0.0-r0 | **9fad0da** | b69af01 |  [b69af01...9fad0da](https://github.com/rdk-e/hdmiservice-realtek/compare/b69af0168ee7a9fca69a9e9b2d38aef3701f5059...9fad0da0dcf97e70a76aec346b715c89aebd0e9a) |
| 76 | rtkpcrclksink | | 2.0.0-r0 |  | c8272d9 | |
| 77 | linux-libc-headers | | 4.9-r6 |  | NA | |
| 78 | packagegroup-kernel-modules | | 4.9.119.01-r6 |  | NA | |
| 79 | linux-hank | | 4.9.119.01-r6 |  | e608d5f | |
| 80 | mediarite-vendor | | 10.0.34.0a2-r0 |  | NA | |
| 81 | gst-plugins-mediarite | | 1.0-r0 |  | NA | |
| 82 | rtkaudiosink | | 3.0.1-r0 |  | 423d02f | |
| 83 | mfi-ree | | 2.0.0-r0 |  | 1f5a100 | |
| 84 | apparmor-vendor | | 1.0.0-r0 |  | 41e3674 | |
| 85 | directfb | | 1.7.7-r0 |  | NA | |
| 86 | product-firmware-pb | **1.0.2-r0** | 1.0.1-r0 | **3079cbe** | 2ce2f75 |  [2ce2f75...3079cbe](https://github.com:rdk-e/firmware-prebuilt-xione-soc-realtek.git/compare/2ce2f75329b84bd13d73bb939a42a701ef40e62f...3079cbeacda677f041462825be5cf9ee85bb0771) |

## Consolidated change list from vendor layer repositories

## Changes in meta repositories

## [meta-rdk-auxiliary](https://github.com/rdk-e/meta-rdk-auxiliary/blob/main/CHANGELOG.md)

- RDKE-619: Vendor build failing in update_conf post rootfs task ( [#59](https://github.com/rdk-e/meta-rdk-auxiliary/pull/59))
- Update CODEOWNERS [0537554](https://github.com/rdk-e/meta-rdk-auxiliary/commit/053755462d6b79f03d7a3108c85efa09ae3acf35)
- DELIA-66142: Improvements to logrotate [6379d65](https://github.com/rdk-e/meta-rdk-auxiliary/commit/6379d65754e6bd50a3c3f88f4e8de175049d0bfe)
- RDKE-396: Addressed open sourcing review comments ( [#51](https://github.com/rdk-e/meta-rdk-auxiliary/pull/51))
- RDKE-396 Remove security related keywords cog and libledger from this layer. It will be placed in an appropriate layer which will not be open-sourced. ( [#50](https://github.com/rdk-e/meta-rdk-auxiliary/pull/50))
- Update generate-build-datastore.bbclass ( [#48](https://github.com/rdk-e/meta-rdk-auxiliary/pull/48))
- RDKE-396: [OSCR SCAN] RDKE - meta-rdk-auxiliary ( [#46](https://github.com/rdk-e/meta-rdk-auxiliary/pull/46))
- RDKE-527 : Fixed  mixmode issue in stacklayer version generation ( [#41](https://github.com/rdk-e/meta-rdk-auxiliary/pull/41))
- Update create_fw_version_file.bbclass ( [#42](https://github.com/rdk-e/meta-rdk-auxiliary/pull/42))
## [meta-oss-reference-release](https://github.com/rdk-e/meta-oss-reference-release/blob/main/CHANGELOG.md)

- RDKE-586: OSS release 4.4.0 [b3bd945](https://github.com/rdk-e/meta-oss-reference-release/commit/b3bd945b509e6ea02baab42364d40383e2ed40e0)
## [meta-rdk-oss-reference](https://github.com/rdk-e/meta-rdk-oss-reference/blob/main/CHANGELOG.md)

- RDKE-586: Update OSS version for 4.4.0 ( [#521](https://github.com/rdk-e/meta-rdk-oss-reference/pull/521))
- RDK-54009: Increment stunnel PR ( [#520](https://github.com/rdk-e/meta-rdk-oss-reference/pull/520))
- DELIA-66142: Improvements to logrotate ( [#518](https://github.com/rdk-e/meta-rdk-oss-reference/pull/518))
- DELIA-66142: Improvements to logrotate ( [#498](https://github.com/rdk-e/meta-rdk-oss-reference/pull/498))
- RDKEMW-894: Include linux-libc-headers 5.4 for arm64 ( [#514](https://github.com/rdk-e/meta-rdk-oss-reference/pull/514))
- RDKEMW-344-Bring the requested mdns version from stable2 ( [#510](https://github.com/rdk-e/meta-rdk-oss-reference/pull/510))
- RDKEMW-698 - [UK][RDKE/RDKV] Name field in hciconfig -a hci0 ( [#512](https://github.com/rdk-e/meta-rdk-oss-reference/pull/512))
- RDKE-258 : [OSCR Scan] RDK-E meta-rdk-oss-reference - Update LICENSE [dfe8afd](https://github.com/rdk-e/meta-rdk-oss-reference/commit/dfe8afd6e2dbcd1aa5aab54389be1d57a56652cc)
- RDKE-258 : [OSCR Scan] RDK-E meta-rdk-oss-reference - Update NOTICE [b32158c](https://github.com/rdk-e/meta-rdk-oss-reference/commit/b32158c7e87fa574b0d1a3db654bd1cbdb264bee)
- RDKE-258 : [OSCR Scan] RDK-E meta-rdk-oss-reference - Update CONTRIBUTING.md [01cefb4](https://github.com/rdk-e/meta-rdk-oss-reference/commit/01cefb45a49f97031e734d9400db3c7070a0ec28)
- RDKE-258 : [OSCR Scan] RDK-E meta-rdk-oss-reference - Update CODEOWNERS [d09884e](https://github.com/rdk-e/meta-rdk-oss-reference/commit/d09884e5c80a74e3b56f4bda9bf894cacca98984)
- RDKE-258 Update license_flags_whitelist.inc ( [#494](https://github.com/rdk-e/meta-rdk-oss-reference/pull/494))
- RDKE-258 : [OSCR Scan] RDK-E meta-rdk-oss-reference ( [#488](https://github.com/rdk-e/meta-rdk-oss-reference/pull/488))
- RDKE-258: RDK-E meta-rdk-oss-reference - Codebig removal from RDM ( [#484](https://github.com/rdk-e/meta-rdk-oss-reference/pull/484))
- RDKE-258: Update patch headers ( [#483](https://github.com/rdk-e/meta-rdk-oss-reference/pull/483))
- RDKE-258: Addressed open sourcing review comments ( [#481](https://github.com/rdk-e/meta-rdk-oss-reference/pull/481))
- RDKE-258: Update patch headers ( [#480](https://github.com/rdk-e/meta-rdk-oss-reference/pull/480))
- RDKE-258: Addressed open sourcing review comments ( [#479](https://github.com/rdk-e/meta-rdk-oss-reference/pull/479))
- RDK-55071 : Porting missing CVE patches to RDK-E ( [#419](https://github.com/rdk-e/meta-rdk-oss-reference/pull/419))
- RDKE-258-Remove xcal.tv URL reference ( [#476](https://github.com/rdk-e/meta-rdk-oss-reference/pull/476))
- RDKE-258 Remove xcal.tv URL reference ( [#473](https://github.com/rdk-e/meta-rdk-oss-reference/pull/473))
- RDK-54009-Move stunnelCertUtil.sh to CPC layer ( [#437](https://github.com/rdk-e/meta-rdk-oss-reference/pull/437))
- RDKE-258,RDKE-410-Build fdk-aac,x264,ffmpeg from MW ( [#471](https://github.com/rdk-e/meta-rdk-oss-reference/pull/471))
- RDKE-258: Update patch headers ( [#470](https://github.com/rdk-e/meta-rdk-oss-reference/pull/470))
- RDKE-548: Mulitlib variant for default fonts ( [#453](https://github.com/rdk-e/meta-rdk-oss-reference/pull/453))
- RDKE-258: Update patch headers - Update libtinyxml2_9_change.patch ( [#463](https://github.com/rdk-e/meta-rdk-oss-reference/pull/463))
- RDKE-258 : [OSCR Scan] RDK-E meta-rdk-oss-reference ( [#458](https://github.com/rdk-e/meta-rdk-oss-reference/pull/458))
- RDKE-258 : [OSCR Scan] RDK-E meta-rdk-oss-reference ( [#457](https://github.com/rdk-e/meta-rdk-oss-reference/pull/457))
- RDKE-258 : [OSCR Scan] RDK-E meta-rdk-oss-reference ( [#456](https://github.com/rdk-e/meta-rdk-oss-reference/pull/456))
## [meta-rdk-soc-realtek](https://github.com/rdk-e/meta-rdk-soc-realtek/blob/main/CHANGELOG.md)

- RDKEVD-45 : Removing the mfi-ree ta ( [#99](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/99))
- RDK-55142: Plaform-lib udev rule clean-up ( [#98](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/98))
## [meta-oem-stream](https://github.com/rdk-e/meta-oem-stream/blob/main/CHANGELOG.md)

- RDKEVD-146:Common Prod specific IPK. [5c363bb](https://github.com/rdk-e/meta-oem-stream/commit/5c363bb4f78bdc120af115b7f3c5d1dcd419090e)
## [meta-oem-realtek-stream](https://github.com/rdk-e/meta-oem-realtek-stream/blob/main/CHANGELOG.md)

- RDKEVD-185:Release Act 5.0.2. ( [#261](https://github.com/rdk-e/meta-oem-realtek-stream/pull/261))
- RDKEVD-146:Common Prod specific IPK. ( [#254](https://github.com/rdk-e/meta-oem-realtek-stream/pull/254))
- XIONE-16390: Stable2 sync. ( [#259](https://github.com/rdk-e/meta-oem-realtek-stream/pull/259))
- RDKEVD-150: Stable2 sync code. ( [#258](https://github.com/rdk-e/meta-oem-realtek-stream/pull/258))
- RDKEVD-92 : Foxtel svn value change ( [#257](https://github.com/rdk-e/meta-oem-realtek-stream/pull/257))
- RDK-55578: Adhering the naming convention of rialto SOC specific json ( [#255](https://github.com/rdk-e/meta-oem-realtek-stream/pull/255))
- RDKEVD-69: Stable2 sync code. ( [#247](https://github.com/rdk-e/meta-oem-realtek-stream/pull/247))
- Update dobby.xi1.json ( [#249](https://github.com/rdk-e/meta-oem-realtek-stream/pull/249))
- Update skyxione.inc ( [#240](https://github.com/rdk-e/meta-oem-realtek-stream/pull/240))
## [meta-rdk-vendor-realtek-common](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/blob/main/CHANGELOG.md)

- RDKEVD-185:Release Act 5.0.2. [09f96a8](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/09f96a819712bb74c7ee0ca8cfc020205a9e0a4b)
- RDKEVD-146:Common Prod specific IPK. [9787800](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/9787800590ea02dee0bb5ab56253557e818a7c0b)
- RDKEVD-146:Common Prod specific IPK. [38dac0c](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/38dac0cd4a1b868205f029a60e657037d43ad46f)
- Add CODEOWNERS file [470ab46](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/470ab465204686dbc5a0d22ea860c5d5a8697321)
- Initial commit [13028e4](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/13028e4bf5f7ae7ad44d835426a9544215b4bd1f)
## [meta-oss-vendor-realtek](https://github.com/rdk-e/meta-oss-vendor-realtek/blob/main/CHANGELOG.md)



## Changes in component repositories

## ['hdmiservice'](https://github.com/rdk-e/hdmiservice-realtek/blob/main/CHANGELOG.md)

- XIONE-16390: Check if yuv422 is supported when select DV lowlatency mode [7c95390](https://github.com/rdk-e/hdmiservice-realtek/commit/7c95390eb7f2b06cad8feed8e10dbe1cb797ea1a)
- Revert "XIONE-14926: Set 1080p driver resolution during bootup" [17b3b75](https://github.com/rdk-e/hdmiservice-realtek/commit/17b3b757de9d8673792a0700b1d5c08f4aef7eb9)
- XIONE-15612 ES1-1944: Add more info to HDMI_WRAP_INFO and HDMI_WRAP_HDCPINFO [3933a52](https://github.com/rdk-e/hdmiservice-realtek/commit/3933a52c40eb133fa91b126d9c75a64ddf64c440)
