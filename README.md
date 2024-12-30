# Vendor Layer Release Notes

XiOne Foxtel REALTEK STB RDKE Vendor Layer Release Notes

---

|Platforms supported|
|-------|
|XiOne-Foxtel UHD 1319|

|Yocto version|
|-------|
|kirkstone|

|Summary|Content|
|---|----|
|Classification|Confidential|
|Date|30 Dec 2024|
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

The aim of this release to integrate the xione foxtel product related changes, latest oss release 4.3.0. This release will provide a versioned "meta-vendor-xione-realtek-release" that will be used by the middleware. Also this release contains the xione uk ipk release feed. 

The scope of this release includes:

- OSS Release 4.3.0 [RDKE-529](https://ccp.sys.comcast.net/browse/RDKE-529)
- XiOne Foxtel build environment [RDK-54039](https://ccp.sys.comcast.net/browse/RDK-54039)
- Westeros latest sync [RDK-55131](https://ccp.sys.comcast.net/browse/RDK-55131)
- Removed the default LED brightness config from EntOS [RDK-55106](https://ccp.sys.comcast.net/browse/RDK-55106)
- Include logrotate config inside vendor layer [RDK-55077](https://ccp.sys.comcast.net/browse/RDK-55077)


## Release layer and components

### Vendor Release Components

| Vendor Release Components | New Version(5.0.0) | Version in Previous Release (4.0.1) |
|------------|---------|------------------------------------|
| Kernel & DTB |   | 4.9.119.01-r6 | |
| packagegroup-vendor-layer | 5.0.0-r0 | 4.0.1-r0 | [5.0.0...4.0.1](https://github.com/rdk-e/meta-oem-realtek-stream/compare/4.0.1...5.0.0) |

### Stack layer

| Layer | Tag |
|------|------|
| [meta-vendor-xione-realtek-release](https://github.com/rdk-e/meta-vendor-xione-realtek-release)  | [5.0.0](https://github.com/rdk-e/meta-vendor-xione-realtek-release/tree/5.0.0) |

#### Artifactory Location for IPKs 
| Product | Location |
|---------|----------|
| XiOne-Foxtel | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-foxtel-release/5.0.0/xione-foxtel/ipks/debug |
| XiOne-UK | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-uk-release/5.0.0/xione-uk/ipks/debug |

### Meta Repos

#### Meta repos maintained by layers layer

| Meta Repo | New Version | Version in Previous Release (4.0.1) | ChangeList |
|------------|---------|------------------------------------|--------------|
| meta-rdk-auxiliary |  **4.1.2** | 4.1.1 | [4.1.1...4.1.2](https://github.com/rdk-e/meta-rdk-auxiliary/compare/4.1.1...4.1.2) |
| meta-oss-reference-release |  **4.3.0** | 4.2.0 | [4.2.0...4.3.0](https://github.com/rdk-e/meta-oss-reference-release/compare/4.2.0...4.3.0) |
| meta-rdk-oss-reference |  **4.3.0** | 4.2.0 | [4.2.0...4.3.0](https://github.com/rdk-e/meta-rdk-oss-reference/compare/4.2.0...4.3.0) |
| meta-rdk-tools |  | 2.2.0 | |
| meta-vts |  | 1.2.0 | |
| meta-rdk-soc-realtek |  | 4.0.0 | |
| meta-oem-stream |  | 4.0.0 | |
| meta-oem-realtek-stream |  **5.0.0** | 4.0.1 | [4.0.1...5.0.0](https://github.com/rdk-e/meta-oem-realtek-stream/compare/4.0.1...5.0.0) |
| meta-oss-vendor-realtek |  **4.0.1** | 4.0.0 | [4.0.0...4.0.1](https://github.com/rdk-e/meta-oss-vendor-realtek/compare/4.0.0...4.0.1) |
| meta-mediarite-vendor |  | 10.0.34.0a2-r2 | |

#### Meta repos common for RDK-E

| Meta Repo | New Version | Version in Previous Release (4.0.1) | ChangeList |
|------------|---------|------------------------------------|--------------|
| **buildscripts** ||||
| build-scripts |  | 4.1.0 | |
| | | | |
| **buildsupport** ||||
| meta-image-support |  | 4.1.1 | |
| | | | |
| **stacklayering** ||||
| meta-stack-layering-support |  **3.2.0** | 3.0.2 | [3.0.2...3.2.0](https://github.com/rdk-e/meta-stack-layering-support/compare/3.0.2...3.2.0) |
| | | | |
| **oe** ||||
| meta-openembedded |  | v4.1.0 | |
| poky |  **v4.1.2** | v4.1.1 | [v4.1.1...v4.1.2](https://github.com/rdk-e/poky/compare/v4.1.1...v4.1.2) |
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
| meta-product-xione |  **3.2.0** | 3.0.0 | [3.0.0...3.2.0](https://github.com/rdk-e/meta-product-xione/compare/3.0.0...3.2.0) |
| | | | |

### Interface versions

| # | HAL Interface Header (rdkcentral github) | New Version | Versionfrom Previous Release (4.0.1)
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
- Created the  middleware image SKXI11ADSSOFT_MIDDLEWARE_DEV_feature_RDK-54039-Foxtel-manifest_20241224194610.bin from the https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Middleware-Build/9115/

##### XiOne-UK
- Created the  middleware image SKXI11ADS_MIDDLEWARE_DEV_feature_RDKEVD-34-ReleaseAct_20241224195057.bin from the https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Middleware-Build/9117/

- Testing done by using feature branch`"feature_RDK-54039-Foxtel-manifest for XiOne-Foxtel,feature/RDKEVD-34-ReleaseAct for Xione-UK"` included of latest vendor ipk feed info https://github.com/rdk-e/meta-vendor-xione-realtek-release/blob/release/5.0.0/conf/machine/include/vendor.inc and the middleware manifest branched from develop branch on 24Dec24.
- Feature branch details here `"XiOne-Foxtel(https://github.com/rdk-e/rdke-middleware-manifest/blob/feature/RDK-54039-Foxtel-manifest/realtek-xione.xml), XiOne-UK (https://github.com/rdk-e/rdke-middleware-manifest/blob/feature/RDKEVD-34-ReleaseAct/realtek-xione.xml)"`

## Build instructions

- Steps to check out and build the vendor layer project [https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project](https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project)
- Steps to check out and build the image assembler project [https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler](https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler)

### Boot Command

#### Copy image to device /mnt/usb or /opt partitions or connect and mount USB having the image binn- Execute FlashApp command
- Move to directory containing the image
- FlashApp \<dirname\> \<imagename\>
- eg. FlashApp /mnt/usb/SKXI11ADS_VENDOR_DEV_refs_tags_5.0.0_20241224172552.bin

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

Created the `"vendor test image"` `"SKXI11ADS_VENDOR_DEV_refs_tags_5.0.0_20241224172552.bin for XiOne-UK SKXI11ADS_VENDOR_DEV_refs_tags_5.0.0_20241224172552.bin"` for XiOne-Foxtel" using the vendor layer project.
Successfully booted the "vendor test image" and obtained the shell prompt.
For this release testing was done by using from the tag refs/tags/5.0.0

### Vendor image testing

- Created the `"vendor test image"` `"SKXI11ADS_VENDOR_DEV_refs_tags_5.0.0_20241224172552.bin for XiOne-UK SKXI11ADSSOFT_VENDOR_DEV_refs_tags_5.0.0_20241224173052.bin for XiOne-Foxtel"` using the vendor layer jenkins job `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Vendor-Release-Build/41/ https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Vendor-Release-Build/42/"`
  - Successfully booted the `"vendor test image"` and obtained the shell prompt.
  - Verified vendor layer services up and running
  - Verified IP acquisition via Ethernet
  - Played clear AV with gst-play-1.0.
  - Verified image flashing using FlashApp

Testing details in [RDKEVD-34](https://ccp.sys.comcast.net/browse/RDKEVD-34)

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
| Dec 30 2024 |  SKXI11ADS_VENDOR_DEV_refs_tags_5.0.0_20241224172552 | 1547368 | 445508 | 29135 | 474643 | 2172037 |
| Dec 03 2024 |  SKXI11ADS_VENDOR_DEV_refs_tags_4.0.1_20241203115633 | 1547368 | 447008 | 26733 | 473741 | 2172939 |

##### XiOne-Foxtel

| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| Dec 30 2024 |  SKXI11ADSSOFT_VENDOR_DEV_refs_tags_5.0.0_20241224173052 | 1547368 | 450228 | 32825 | 483053 | 2163627 |

### Fullstack image testing

##### XiOne-Foxtel
- Not able to create the image assembler build due to error faced in the jenkins build https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Image-Assembler-Build/1005/ . So we verified the build verification through middleware build as below

- Tested below scenarios as part of [RDKEVD-34](https://ccp.sys.comcast.net/browse/RDKEVD-34)

  - Successfully booted \"SKXI11ADSSOFT_MIDDLEWARE_DEV_feature_RDK-54039-Foxtel-manifest_20241224194610.bin\" and obtained the shell prompt and UI.
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


##### XiOne-UK
- Created Image Assembler build SKXI11ADS_DEV_feature_RDKEVD-34-ReleaseAct_20241226180048.bin https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Image-Assembler-Build/1017/ based on Middleware version 2.1.4 and the latest develop MW manifest branched to feature/RDKEVD-34-ReleaseAct.

- Included the application release 4.12.0 using [rdke-assembler-manifest](https://github.com/rdk-e/rdke-assembler-manifest) feature branch feature/RDKEVD-34-ReleaseAct

- Tested below scenarios as part of [RDKEVD-34](https://ccp.sys.comcast.net/browse/RDKEVD-34)

  - Successfully booted \"SKXI11ADS_DEV_feature_RDKEVD-34-ReleaseAct_20241226180048.bin\" and obtained the shell prompt and UI.
  - Verified UI navigation
  - Verified AV with Disney+ App
  - Verified AV with Xumo Play
  - Verified AV with Netflix
  - Verified AV with YouTube
  - Verified remote control pairing
  - Verified Log files are present in /opt/logs

## Components details in 'packagegroup-vendor-layer'

| # | Vendor layer Component | New PV-PR | PV-PR in Previous Release (4.0.1)| New SRCREV | SRCREV in Previous Release (4.0.1)| Diff |
|---|------------------------------------------|-------------|----------------------|-----------|------------|-----|
| 1 | media-utils-soc-realtek | | 1.0.4-1.0.0-r1 |  | 5e71382 | |
| 2 | closedcaption-hal-realtek | | 1.0.0-3.0.0-r0 |  | 2f365d0 | |
| 3 | hdmicec-hal-realtek | | 1.3.7-3.0.0-r0 |  | 15cb845 | |
| 4 | iarmmgrs-hal-realtek | | 2.1.5-2.0.0-r1 |  | a15d303 | |
| 5 | rdk-gstreamer-utils-platform | | 1.3.0-1.0.0-r0 |  | 739cdb7 | |
| 6 | devicesettings-hal-realtek | **2.0.0-3.0.0-r1** | 2.0.0-3.0.0-r0 |  |  | |
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
| 50 | westeros-simpleshell | **1.01.57-r0** | 1.3.0-r0 | **3cd00f7** | NA |  [](https://github.com/rdk-e/meta-product-xione) |
| 51 | westeros-simplebuffer | **1.01.57-r0** | 1.3.0-r0 | **3cd00f7** | NA |  [](https://github.com/rdk-e/meta-product-xione) |
| 52 | westeros-soc | **1.01.57-r0** | 1.3.0-r2 | **3cd00f7** | NA |  [](https://github.com/rdk-e/meta-product-xione) |
| 53 | [westeros-sink | **1.01.57-r0** | 3.0.0-r0 | **** | ec10aa0 |  [ec10aa0...](https://github.com/rdk-e/westeros-sink-soc-realtek/compare/ec10aa0da135b12dce6eaa26982059975ea8e5f6...) |
| - |  - westeros-sink_westeros | |  | **3cd00f7** | NA |  [](https://github.com/rdk-e/westeros-sink-soc-realtek) |
| - |  - westeros-sink_realtek | |  | **ec10aa0** | NA |  [](https://github.com/rdk-e/westeros-sink-soc-realtek) |
| 54 | westeros | **1.01.57-r0** | 2.0.0-r0 | **3cd00f7** | 3d9ccd8 |  [](https://github.com/rdk-e/westeros-sink-soc-realtek) |
| 55 | essos | **1.01.57-r0** | 1.0.0-r0 | **3cd00f7** | NA |  [](https://github.com/rdk-e/westeros-sink-soc-realtek) |
| 56 | cairo | | 1.16.0-r1 |  | NA | |https://ccp.sys.comcast.net/issues/?jql=labels%20%3D%20rdke-foxtel-specific
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
| 75 | gst-svp-ext | | 1.0.0-r0 |  | NA | |
| 76 | systemaudioplatform | | 1.0.0-r0 |  | 776348d | |
| 77 | dvrmgr-hal-realtek | | 1.0.0-r0 |  | NA | |
| 78 | secapi-crypto-rtk | | 2.3.1-r0 |  | 5241d45 | |
| 79 | secapi-common-crypto | | 2.3.0-r0 |  | 3a51b88 | |
| 80 | testagent-loader | | 2.3.0-r0 |  | NA | |
| 81 | qca6390-mod-wifi | | 1.0.0-r1 |  | NA | |
| 82 | qca-hciattach | | 1.0.0-r1 |  | NA | |
| 83 | emmc-fw-update | | 1.0.0-r0 |  | NA | |
| 84 | mount-disk-partition | | 1.0.0-r0 |  | NA | |
| 85 | image-verifier-lib | | 6.2.0-r0 |  | NA | |
| 86 | flashapp | | 7.1-r0 |  | NA | |
| 87 | sky-led-driver | | 2.0.0-r0 |  | f97a795 | |
| 88 | sky-led-app | | 1.0.0-r0 |  | NA | |
| 89 | fmtsasidlibs | | 2.4-r1 |  | NA | |
| 90 | hank-mod-mali | | 1.0.0-r1 |  | 3ad45d0 | |
| 91 | rtkv1sink | | 2.0.0-r1 |  | 67bdf5b | |
| 92 | led-boot-pattern | | 1.0.0-r0 |  | NA | |
| 93 | rtkmali | | 2.8.0-r0 |  | NA | |
| 94 | platform-lib | | 2.6.0-r2 |  | NA | |
| 95 | rtk-audio-service | | 3.0.0-r0 |  | 8a4a7f3 | |
| 96 | hdmiservice | | 3.0.0-r0 |  | b69af01 | |
| 97 | rtkpcrclksink | | 2.0.0-r0 |  | c8272d9 | |
| 98 | blewakeupenabler | | 1.3.0-r0 |  | 7c0eb9c | |
| 99 | linux-libc-headers | | 4.9-r6 |  | NA | |
| 100 | packagegroup-kernel-modules | | 4.9.119.01-r6 |  | NA | |
| 101 | linux-hank | | 4.9.119.01-r6 |  | e608d5f | |
| 102 | mediarite-vendor | | 10.0.34.0a2-r0 |  | NA | |
| 103 | gst-plugins-mediarite | | 1.0-r0 |  | NA | |
| 104 | rtkaudiosink | | 3.0.1-r0 |  | 423d02f | |
| 105 | sky-dropbear | | 1.0.0-r1 |  | NA | |
| 106 | mfi-ree | | 2.0.0-r0 |  | 1f5a100 | |
| 107 | sysint-oem | | 3.0.0-r0 |  | 50d274a | |
| 108 | sysint-soc | | 3.0.0-r0 |  | f8dded4 | |
| 109 | apparmor-vendor | | 1.0.0-r0 |  | 41e3674 | |
| 110 | directfb | | 1.7.7-r0 |  | NA | |
| 111 | audiocapturemgr-vendor | | 1.0.0-r0 |  | a063707 | |
| 112 | product-firmware-pb | **1.0.1-r0** | 1.0.0-r0 | **2ce2f75** | c1a2298 |  [c1a2298...2ce2f75](https://github.com:rdk-e/firmware-prebuilt-xione-soc-realtek.git/compare/c1a2298c61eaf9b8f72c4f97566749c98d766d29...2ce2f75329b84bd13d73bb939a42a701ef40e62f) |


## Consolidated change list from vendor layer repositories

## Changes in meta repositories

## [meta-rdk-auxiliary](https://github.com/rdk-e/meta-rdk-auxiliary/blob/main/CHANGELOG.md)

- Update create_fw_version_file.bbclass ( [#39](https://github.com/rdk-e/meta-rdk-auxiliary/pull/39))
- RDKTV-34223 : kirkstone migration changes ( [#40](https://github.com/rdk-e/meta-rdk-auxiliary/pull/40))
- RDK-54397: Fix indentation for fw_class in develop ( [#37](https://github.com/rdk-e/meta-rdk-auxiliary/pull/37))
- RDK-54397: Add FW_CLASS as part of version.txt file ( [#34](https://github.com/rdk-e/meta-rdk-auxiliary/pull/34))
- Update user-classes.inc [10ba525](https://github.com/rdk-e/meta-rdk-auxiliary/commit/10ba525d509c43079226f134a1cdda26849fda49)
- Create generate-build-datastore.bbclass [1bb9bbe](https://github.com/rdk-e/meta-rdk-auxiliary/commit/1bb9bbe89904e7d33d8a9bdc67277682e655d36c)
- RDKE-206 Port missing changes from Gerrit to Github [eb82c7f](https://github.com/rdk-e/meta-rdk-auxiliary/commit/eb82c7f0a9708a56fa53661b862a75217c6a4f47)
- Reason for change: Cleared CHANGELOG.md and added Licensing files for open sourcing Test Procedure: Build and verify Risks: Low Priority: P2 [ace96e0](https://github.com/rdk-e/meta-rdk-auxiliary/commit/ace96e03587369a0f31cc47328e16144d764b1c6)
-  RDKE-206 Port missing changes from Gerrit to Github [4b68fbc](https://github.com/rdk-e/meta-rdk-auxiliary/commit/4b68fbc72aef47951cc49d4c9f0a1a093d0f8a71)
- RDKE-206 Port missing changes from Gerrit to Github [4c8f625](https://github.com/rdk-e/meta-rdk-auxiliary/commit/4c8f625eb790b446faaab9baa4e52eeef7ec59c9)
## [meta-oss-reference-release](https://github.com/rdk-e/meta-oss-reference-release/blob/main/CHANGELOG.md)

- RDKE-529: OSS release 4.3.0 [08ce472](https://github.com/rdk-e/meta-oss-reference-release/commit/08ce472e4962c2f77e8da5a4f22972a9efe09d43)
## [meta-rdk-oss-reference](https://github.com/rdk-e/meta-rdk-oss-reference/blob/main/CHANGELOG.md)

- RDKE-529: Updated for oss release 3.4.0 ( [#447](https://github.com/rdk-e/meta-rdk-oss-reference/pull/447))
- RDKE-206 Port missing changes from Gerrit to Github ( [#445](https://github.com/rdk-e/meta-rdk-oss-reference/pull/445))
- RDKE-477: Font provider for community ( [#429](https://github.com/rdk-e/meta-rdk-oss-reference/pull/429))
- RDKEMW-261: Woff2 fonts are not rendered ( [#438](https://github.com/rdk-e/meta-rdk-oss-reference/pull/438))
- Update volatile-binds.bb [689c32d](https://github.com/rdk-e/meta-rdk-oss-reference/commit/689c32dff1420f159536ba4f408968088721ede4)
- Update Readme.md [4fcb2ae](https://github.com/rdk-e/meta-rdk-oss-reference/commit/4fcb2ae14a62d155d49f5d4886f98f72e5642156)
- Update Readme.md [7490951](https://github.com/rdk-e/meta-rdk-oss-reference/commit/74909512a74ecc22b465ecc587f1ca1fdb67f055)
- RDKE-233: Port heaptrack changes from glibc 2.31 to glibc 2.35 ( [#389](https://github.com/rdk-e/meta-rdk-oss-reference/pull/389))
- Update ltp_%.bbappend [eb691b2](https://github.com/rdk-e/meta-rdk-oss-reference/commit/eb691b2aa99bbb5fcea09272ad0846ae2ba1fd77)
- Delete recipes-core/volatile-binds/files/COPYING.MIT [e534da7](https://github.com/rdk-e/meta-rdk-oss-reference/commit/e534da7b55580e4af44f1806bf314eb780f266ea)
- Update volatile-binds.bb [432c229](https://github.com/rdk-e/meta-rdk-oss-reference/commit/432c229f4fb7debd0352494eb4a69051605e148f)
- RDKE-499: Exclude oss-release ( [#432](https://github.com/rdk-e/meta-rdk-oss-reference/pull/432))
- RDKTV-34223 : kirkstone migration changes ( [#426](https://github.com/rdk-e/meta-rdk-oss-reference/pull/426))
- RDKE-206 Port missing changes from Gerrit to Github ( [#385](https://github.com/rdk-e/meta-rdk-oss-reference/pull/385))
- RDKE-475: Include libaio for lvm2 support ( [#423](https://github.com/rdk-e/meta-rdk-oss-reference/pull/423))
- RDK-53880 : feature/RDK-53880-lto-gstreamer First LTO change ( [#398](https://github.com/rdk-e/meta-rdk-oss-reference/pull/398))
## [meta-oem-realtek-stream](https://github.com/rdk-e/meta-oem-realtek-stream/blob/main/CHANGELOG.md)

- RDK-54039:XiOne Foxtel build environment ( [#221](https://github.com/rdk-e/meta-oem-realtek-stream/pull/221))
- RDK-55131: Latest westeros update ( [#241](https://github.com/rdk-e/meta-oem-realtek-stream/pull/241))
- RDK-55106:Removed the default LED brightness config from EntOS ( [#239](https://github.com/rdk-e/meta-oem-realtek-stream/pull/239))
- RDK-55077: Include logrotate config inside vendor layer ( [#238](https://github.com/rdk-e/meta-oem-realtek-stream/pull/238))
## [meta-oss-vendor-realtek](https://github.com/rdk-e/meta-oss-vendor-realtek/blob/main/CHANGELOG.md)

- RDK-55131: Latest westeros update ( [#43](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/43))


## Changes in component repositories

## ['westeros-sink'](https://github.com/rdk-e/westeros-sink-soc-realtek/blob/main/CHANGELOG.md)

## ['product-firmware-pb'](https://github.com:rdk-e/firmware-prebuilt-xione-soc-realtek.git/blob/main/CHANGELOG.md)

