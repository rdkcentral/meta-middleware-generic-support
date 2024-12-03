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
|Date|03 Dec 2024|
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

The aim of this release to integrate the latest oss release 4.2.0. This release will provide a versioned "meta-vendor-xione-realtek-release" that will be used by the middleware, image assembler.

The scope of this release includes:

- OSS Release 4.2.0 [RDK-54611](https://ccp.sys.comcast.net/browse/RDK-54611)
- Stable2 sync from V to E [RDK-53301](https://ccp.sys.comcast.net/browse/RDK-53301)
- Enable BL DRV flag [RDK-54975](https://ccp.sys.comcast.net/browse/RDK-54975)
- Stable2 sync on wifi firmware [RDK-54805](https://ccp.sys.comcast.net/browse/RDK-54805)
- Stable2 sync code for audio firmware [XIONE-16273](https://ccp.sys.comcast.net/browse/XIONE-16273)
- Gitlab to github movement [RDK-48018](https://ccp.sys.comcast.net/browse/RDK-48018)
- Adding ENV variables required for Real-tek SOC [RDK-54545](https://ccp.sys.comcast.net/browse/RDK-54545)
- Include wifi component in VL [RDK-54172](https://ccp.sys.comcast.net/browse/RDK-54172)
- Vendor Version in Flashapp-kirkstone [XIONE-15555](https://ccp.sys.comcast.net/browse/XIONE-15555)
- Include gstreamer patch [RDK-54792](https://ccp.sys.comcast.net/browse/RDK-54792)
- Fix loudness/drc mode is not set as expected [XIONE-15788](https://ccp.sys.comcast.net/browse/XIONE-15788)
- DV tag not display in nfx asset [RDKEMW-34](https://ccp.sys.comcast.net/browse/RDKEMW-34)

## Release layer and components

### Vendor Release Components

| Vendor Release Components | New Version | Version in Previous Release (3.0.1) | ChangeList |
|------------|---------|------------------------------------|--------------|
| Kernel & DTB | 4.9.119.01-r6  | 4.9.119.01-r5 | |
| packagegroup-vendor-layer | 4.0.1-r0 | 3.0.1-r0 | [4.0.1...3.0.1](https://github.com/rdk-e/meta-oem-realtek-stream/compare/3.0.1...4.0.1) |

### Stack layer

| Layer | Tag |
|------|------|
| [meta-vendor-xione-realtek-release](https://github.com/rdk-e/meta-vendor-xione-realtek-release) | [4.0.1](https://github.com/rdk-e/meta-vendor-xione-realtek-release/tree/4.0.1) |

#### Artifactory Location for IPKs - https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-uk-release/4.0.1/xione-uk/ipks/debug

### Meta Repos

#### Meta repos maintained by layers layer

| Meta Repo | New Version | Version in Previous Release (3.0.1) | ChangeList |
|------------|---------|------------------------------------|--------------|
| [meta-rdk-auxiliary](#meta-rdk-auxiliary) |  **4.1.1** | 4.0.0 | [4.0.0...4.1.1](https://github.com/rdk-e/meta-rdk-auxiliary/compare/4.0.0...4.1.1) |
| [meta-oss-reference-release](#meta-oss-reference-release) |  **4.2.0** | 4.1.0 | [4.1.0...4.2.0](https://github.com/rdk-e/meta-oss-reference-release/compare/4.1.0...4.2.0) |
| [meta-rdk-oss-reference](#meta-rdk-oss-reference) |  **4.2.0** | 4.1.0 | [4.1.0...4.2.0](https://github.com/rdk-e/meta-rdk-oss-reference/compare/4.1.0...4.2.0) |
| meta-rdk-tools |  | 2.2.0 | |
| meta-vts |  | 1.2.0 | |
| [meta-rdk-soc-realtek](#meta-rdk-soc-realtek) |  **4.0.0** | 3.0.0 | [3.0.0...4.0.0](https://github.com/rdk-e/meta-rdk-soc-realtek/compare/3.0.0...4.0.0) |
| [meta-oem-stream](#meta-oem-stream) |  **4.0.0** | 3.0.0 | [3.0.0...4.0.0](https://github.com/rdk-e/meta-oem-stream/compare/3.0.0...4.0.0) |
| [meta-oem-realtek-stream](#meta-oem-realtek-stream) |  **4.0.1** | 3.0.1 | [3.0.1...4.0.1](https://github.com/rdk-e/meta-oem-realtek-stream/compare/3.0.1...4.0.1) |
| [meta-oss-vendor-realtek](#meta-oss-vendor-realtek) |  **4.0.0** | 3.0.0 | [3.0.0...4.0.0](https://github.com/rdk-e/meta-oss-vendor-realtek/compare/3.0.0...4.0.0) |
| meta-mediarite-vendor |  | 10.0.34.0a2-r2 | |

#### Meta repos common for RDK-E

| Meta Repo | New Version | Version in Previous Release (3.0.1) | ChangeList |
|------------|---------|------------------------------------|--------------|
| **buildscripts** ||||
| build-scripts |  **4.1.0** | 4.0.0 | [4.0.0...4.1.0](https://github.com/rdk-e/build-scripts/compare/4.0.0...4.1.0) |
| | | | |
| **buildsupport** ||||
| meta-image-support |  **4.1.1** | 4.0.0 | [4.0.0...4.1.1](https://github.com/rdk-e/meta-image-support/compare/4.0.0...4.1.1) |
| | | | |
| **stacklayering** ||||
| meta-stack-layering-support |  **3.0.2** | 3.0.0 | [3.0.0...3.0.2](https://github.com/rdk-e/meta-stack-layering-support/compare/3.0.0...3.0.2) |
| | | | |
| **oe** ||||
| meta-openembedded |  | v4.1.0 | |
| poky |  **v4.1.1** | v4.1.0 | [v4.1.0...v4.1.1](https://github.com/rdk-e/poky/compare/v4.1.0...v4.1.1) |
| meta-python2 |  | v4.0.0 | |
| | | | |
| **configs** ||||
| rdke-region-uk-config |  | 2.1.5 | |
| rdke-common-config |  | 4.1.0 | |
| rdke-stb-config |  | 1.0.2 | |
| | | | |
| **rdk** ||||
| meta-rdk-halif-headers |  **3.2.2** | 3.1.3 | [3.1.3...3.2.2](https://github.com/rdk-e/meta-rdk-halif-headers/compare/3.1.3...3.2.2) |
| | | | |
| **products** ||||
| meta-product-xione |  | 3.0.0 | |
| | | | |

### Interface versions

| # | HAL Interface Header (rdkcentral github) | New Version | Versionfrom Previous Release (3.0.1)
|---|------------------------------------------|-------------|----------------------|
| 1 | media-utils-headers | | 1.0.4 |
| 2 | hdmicecheader | | 1.3.7 |
| 3 | deepsleep-manager-headers | | 1.0.3 |
| 4 | power-manager-headers | | 1.0.2 |
| 5 | devicesettings-hal-headers | | 2.0.0 |
| 6 | tvsettings-hal-headers | **1.4.0** | 1.2.0 |
|   |   |  |  |
|   | RDK HAL Headers (RDKE github) |  |  |
|   |   |  |  |
| 7 | iarmmgrs-hal-headers | **2.1.5** | 2.1.0 |
| 8 | closedcaption-hal-headers | | 1.0.0 |
| 9 | iarmbus-headers | | 1.0.0 |
| 10 | rdk-gstreamer-utils-headers | | 1.3.0 |

### Limitations

It should be noted that some services may not run as they have dependencies with other layers. Additionally, the exclusion of inter-layer bbappends/patches might result in the failure to start some services. These limitations should be taken into consideration during the verification process. These Limitations will be addressed in Future Releases.

### Middleware Integration

- Created the  middleware image SKXI11ADS_MIDDLEWARE_DEV_feature_RDK-54922-Release_Act4.0.0_20241203131500.bin from the  https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Middleware-Build/7839 
- Testing done by using feature branch feature/RDK-54922-Release_Act4.0.0 included of laetst vendor ipk feed info https://github.com/rdk-e/meta-vendor-xione-realtek-release/blob/release/4.0.1/conf/machine/include/vendor.inc and the middleware manifest branched from develop branch on 29Nov24.
- Feature branch details here  https://github.com/rdk-e/rdke-middleware-manifest/blob/feature/RDK-54922-Release_Act4.0.0/realtek-xione.xml

## Build instructions

- Steps to check out and build the vendor layer project [https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project](https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project)
- Steps to check out and build the image assembler project [https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler](https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler)

### Boot Command

#### Copy image to device /mnt/usb or /opt partitions or connect and mount USB having the image binn- Execute FlashApp command
- Move to directory containing the image
- FlashApp \<dirname\> \<imagename\>
- eg. FlashApp /mnt/usb/SKXI11ADS_VENDOR_DEV_refs_tags_4.0.1_20241203115633.bin 

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

Created the "vendor test image" "SKXI11ADS_VENDOR_DEV_refs_tags_4.0.1_20241203115633.bin" using the vendor layer project.
Successfully booted the "vendor test image" and obtained the shell prompt.
For this release testing was done by using feature branch  feature/RDK-54922-Release_Act4.0.0 for rdke-middleware-manifest/realtek-xione.xml

### Vendor image testing

- Created the `"vendor test image"` `"SKXI11ADS_VENDOR_DEV_refs_tags_4.0.1_20241203115633.bin"` using the vendor layer jenkins job https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Vendor-Release-Build/40/
  - Successfully booted the `"vendor test image"` and obtained the shell prompt.
  - Verified vendor layer services up and running
  - Verified IP acquisition via Ethernet
  - Played clear AV with gst-play-1.0.
  - Verified image flashing using FlashApp

Testing details in [RDK-54922](https://ccp.sys.comcast.net/browse/RDK-54922)

#### High Level Vendor Memory usage data

- Test results for use case of UHD60FPS playback on Xione Uk puck  with 4GB DDR Size . The device has a dual decode capability with UHD+FHD support. Very minimal services are running in the vendor test image while  running the test.

|      **Field**       |   **Description**    |
|------------------|-------------------|
|Vendor Static Reserved   |    Amount of fixed static memory which is used by vendor layer for any UseCase       |
|Vendor Baseline Memory  | Amount memory used at Boot up minus vendor CMA used |
|Vendor Dynamic usage on uhd_play      | Dynamically allocated memory during the execution of Usecase |
|Vendor Dynamic Total      | Dynamically allocated Total Memory system wide |
|Available Memory       | Available Memory in the system |

| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| Dec 03 2024 |  SKXI11ADS_VENDOR_DEV_refs_tags_4.0.1_20241203115633 | 1547368 | 447008 | 26733 | 473741 | 2172939 |

### Fullstack image testing

- Created Image Assembler build  SKXI11ADS_DEV_feature_RDK-54922-Release_Act4.0.0_20241203154247.bin https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Image-Assembler-Build/834/ based on Middleware version 2.0.2 and the latest develop MW manifest branched to feature/RDK-54922-Release_Act4.0.0.

- Included the application release 4.7.0 using [rdke-assembler-manifest](https://github.com/rdk-e/rdke-assembler-manifest) feature branch feature/RDK-54922-Release_Act4.0.0

- Tested below scenarios as part of [RDK-54922](https://ccp.sys.comcast.net/browse/RDK-54922)

  - Successfully booted \"SKXI11ADS_DEV_feature_RDK-54922-Release_Act4.0.0_20241203154247.bin\" and obtained the shell prompt and UI.
  - Verified UI navigation
  - Verified AV with Disney+ App
  - Verified AV with Xumo Play
  - Verified AV with Netflix
  - Verified AV with YouTube
  - Verified remote control pairing
  - Verified Log files are present in /opt/logs  


## Components details in 'packagegroup-vendor-layer'


| # | Vendor layer Component | New PV-PR | PV-PR in Previous Release (3.0.1)| New SRCREV | SRCREV in Previous Release (3.0.1)| Diff |
|---|------------------------------------------|-------------|----------------------|-----------|------------|-----|
| 1 | media-utils-soc-realtek | **1.0.4-1.0.0-r1** | 1.0.4-1.0.0-r0 |  | 5e71382 | |
| 2 | [closedcaption-hal-realtek](#closedcaption-hal-realtek) | **1.0.0-3.0.0-r0** | 1.0.0-2.0.0-r0 | **2f365d0** | e2ae730 |  [e2ae730...2f365d0](https://github.com/rdk-e/closedcaption-soc-realtek/compare/e2ae73072f3b64d7a4ec78383e4fe16c1b5f9e59...2f365d0a27783d3fd435cea53fe7eb007fcf7602) |
| 3 | [hdmicec-hal-realtek](#hdmicec-hal-realtek) | **1.3.7-3.0.0-r0** | 1.3.7-1.0.0-r0 | **15cb845** | 3a54a46 |  [3a54a46...15cb845](https://github.com/rdk-e/hdmicec-soc-realtek/compare/3a54a46a2d09d0f838153eabca833c99d2640b0b...15cb8454ec796a487d9b901697f78833cad93b57) |
| 4 | iarmmgrs-hal-realtek | **2.1.5-2.0.0-r1** | 2.1.0-2.0.0-r0 |  | a15d303 | |
| 5 | rdk-gstreamer-utils-platform | **1.3.0-1.0.0-r0** | 1.3.0-r0 |  | 739cdb7 | |
| 6 | devicesettings-hal-realtek | **2.0.0-3.0.0-r0** | 2.0.0-1.0.0-r1 |  |  | |
| - |  - devicesettings-hal-realtek_devicesettingssocrealtek | |  | **5fff287** | 1e3edb0 |  [](https://github.com/rdk-e/hdmicec-soc-realtek) |
| - |  - devicesettings-hal-realtek_devicesettingsskyxione | |  |  | 6929995 | |
| 7 | deepsleepmgr-hal-realtek | | 1.0.3-1.0.0-r0 |  | cbe53a0 | |
| 8 | pwrmgr-hal-realtek | | 1.0.2-1.0.0-r0 |  | c91e047 | |
| 9 | rtk-platform-conf | | 2.6.0-r0 |  | NA | |
| 10 | testagentlib | **3.0.1-r0** | 2.9.0-r0 | **** | NA |  [](https://github.com/rdk-e/hdmicec-soc-realtek) |
| - |  - testagentlib_testagentlib | |  | **9414e69** | NA |  [](https://github.com/rdk-e/hdmicec-soc-realtek) |
| - |  - testagentlib_xione_factory | |  | **6281804** | NA |  [](https://github.com/rdk-e/hdmicec-soc-realtek) |
| 11 | emmc-read-util | **4.0.0-r0** | 3.3.4-r0 | **6281804** | NA |  [](https://github.com/rdk-e/hdmicec-soc-realtek) |
| 12 | otp-program | | 2.2-r1 |  | NA | |
| 13 | gstreamer1.0 | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 14 | gstreamer1.0-meta-base | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 15 | gstreamer1.0-omx | **1.10.4-r4** | 1.10.4-r3 |  | NA | |
| 16 | gstreamer1.0-libav | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 17 | gstreamer1.0-plugins-good | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 18 | gstreamer1.0-plugins-good-meta | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 19 | gstreamer1.0-plugins-bad | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 20 | gstreamer1.0-plugins-bad-meta | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 21 | gstreamer1.0-rtsp-server | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 22 | gstreamer1.0-plugins-base | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 23 | gstreamer1.0-plugins-base-meta | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 24 | gstreamer1.0-plugins-base-playback | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 25 | gstreamer1.0-plugins-good-wavparse | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 26 | gstreamer1.0-plugins-good-audiofx | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 27 | gstreamer1.0-plugins-good-isomp4 | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 28 | gstreamer1.0-plugins-good-audioparsers | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 29 | gstreamer1.0-plugins-good-soup | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 30 | gstreamer1.0-plugins-base-gio | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 31 | gstreamer1.0-plugins-base-videoconvert | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 32 | gstreamer1.0-plugins-base-videoscale | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 33 | gstreamer1.0-plugins-base-volume | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 34 | gstreamer1.0-plugins-base-typefindfunctions | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 35 | gstreamer1.0-plugins-good-autodetect | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 36 | gstreamer1.0-plugins-good-avi | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 37 | gstreamer1.0-plugins-good-deinterlace | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 38 | gstreamer1.0-plugins-good-interleave | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 39 | gstreamer1.0-plugins-bad-dash | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 40 | gstreamer1.0-plugins-bad-mpegtsdemux | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 41 | gstreamer1.0-plugins-bad-smoothstreaming | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 42 | gstreamer1.0-plugins-bad-videoparsersbad | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 43 | gstreamer1.0-plugins-bad-opusparse | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 44 | gstreamer1.0-plugins-bad-dashdemux | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 45 | gstreamer1.0-plugins-good-matroska | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 46 | gstreamer1.0-plugins-base-app | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 47 | gstreamer1.0-plugins-base-audioconvert | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 48 | gstreamer1.0-plugins-base-audioresample | **1.18.5-r4** | 1.18.5-r3 |  | NA | |
| 49 | libdrm | | 2.4.110-r0 |  | NA | |
| 50 | westeros-simpleshell | | 1.3.0-r0 |  | NA | |
| 51 | westeros-simplebuffer | | 1.3.0-r0 |  | NA | |
| 52 | westeros-soc | **1.3.0-r2** | 1.3.0-r1 |  | NA | |
| 53 | [westeros-sink](#westeros-sink) | **3.0.0-r0** | 2.0.0-r0 | **ec10aa0** | 5724b0f |  [5724b0f...ec10aa0](https://github.com/rdk-e/westeros-sink-soc-realtek/compare/5724b0f7c96b432e18f11f7c71a70a750ec34da2...ec10aa0da135b12dce6eaa26982059975ea8e5f6) |
| 54 | westeros | | 2.0.0-r0 |  | 3d9ccd8 | |
| 55 | essos | | 1.0.0-r0 |  | NA | |
| 56 | cairo | **1.16.0-r1** | 1.16.0-r0 |  | NA | |
| 57 | libepoxy | | 1.5.9-r1 |  | NA | |
| 58 | python3-pygobject | | 3.34.0-r0 |  | NA | |
| 59 | pango | | 1.44.7-r0 |  | NA | |
| 60 | make-mod-scripts | | 1.0-r0 |  | NA | |
| 61 | librsvg | | 2.40.21-r0 |  | NA | |
| 62 | python3-pycairo | | 1.19.0-r0 |  | NA | |
| 63 | sky-fpbutton-driver | **3.0.0-r0** | 2.8-r0 | **acd582d** | NA |  [](https://github.com/rdk-e/westeros-sink-soc-realtek) |
| 64 | xsign | | 4.0.1-r1 |  | NA | |
| 65 | mfrlib-hal-xione | | 7.0.4-r0 |  | NA | |
| 66 | wipe-disk-partitions | | 1.0.0-r0 |  | NA | |
| 67 | splashscreen-viewer | | 2.0.0-r0 |  | 41e70a2 | |
| 68 | rtk-tee | | 1.0.0-r0 |  | NA | |
| 69 | secauthn | | 1.0.0-r0 |  | NA | |
| 70 | secapi-rtk | | 2.1.0-r1 |  | 95b6bd4 | |
| 71 | [secapi3-rtk](#secapi3-rtk) | **3.3.0-r0** | 3.0.0-r0 | **570df40** | aa3c293 |  [aa3c293...570df40](https://github.com/rdk-e/secapi3-soc-realtek-cpc/compare/aa3c293699853f5a4f54909124af9bb3f7ebf26b...570df4041c863710c747ec9640d5dec1bbc09e35) |
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
| 81 | qca6390-mod-wifi | **1.0.0-r1** | 1.0.0-r0 |  | NA | |
| 82 | qca-hciattach | | 1.0.0-r1 |  | NA | |
| 83 | emmc-fw-update | | 1.0.0-r0 |  | NA | |
| 84 | mount-disk-partition | | 1.0.0-r0 |  | NA | |
| 85 | image-verifier-lib | | 6.2.0-r0 |  | NA | |
| 86 | flashapp | | 7.1-r0 |  | NA | |
| 87 | sky-led-driver | **2.0.0-r0** | 1.0.0-r0 | **f97a795** | NA |  [](https://github.com/rdk-e/secapi3-soc-realtek-cpc) |
| 88 | sky-led-app | **1.0.0-r0** | NA |  | NA | |
| 89 | fmtsasidlibs | | 2.4-r1 |  | NA | |
| 90 | hank-mod-mali | | 1.0.0-r1 |  | 3ad45d0 | |
| 91 | rtkv1sink | **2.0.0-r1** | 2.0.0-r0 |  | 67bdf5b | |
| 92 | led-boot-pattern | | 1.0.0-r0 |  | NA | |
| 93 | rtkmali | | 2.8.0-r0 |  | NA | |
| 94 | platform-lib | | 2.6.0-r2 |  | NA | |
| 95 | [rtk-audio-service](#rtk-audio-service) | **3.0.0-r0** | 2.0.0-r0 | **8a4a7f3** | e52aef88fc80d0e3b6166000e8553a7b7dc7fa7a & 6bb3a0f37357296c4f0697c1c4ecd9d69f45eb02 |  [e52aef88fc80d0e3b6166000e8553a7b7dc7fa7a & 6bb3a0f37357296c4f0697c1c4ecd9d69f45eb02...8a4a7f3](https://github.com/rdk-e/RtkAudioService-soc-realtek/compare/e52aef88fc80d0e3b6166000e8553a7b7dc7fa7a & 6bb3a0f37357296c4f0697c1c4ecd9d69f45eb02...8a4a7f3a36c00fe491ed61bcf37c4721350f2abb) |
| 96 | [hdmiservice](#hdmiservice) | **3.0.0-r0** | 2.1.0-r0 | **b69af01** | 66c8242 |  [66c8242...b69af01](https://github.com/rdk-e/hdmiservice-realtek/compare/66c82425431726a7bb4a47295f57bcf60f5e3c3c...b69af0168ee7a9fca69a9e9b2d38aef3701f5059) |
| 97 | rtkpcrclksink | | 2.0.0-r0 |  | c8272d9 | |
| 98 | blewakeupenabler | | 1.3.0-r0 |  | 7c0eb9c | |
| 99 | linux-libc-headers | **4.9-r6** | 4.9-r5 |  | NA | |
| 100 | packagegroup-kernel-modules | **4.9.119.01-r6** | 4.9.119.01-r5 |  | NA | |
| 101 | linux-hank | **4.9.119.01-r6** | 4.9.119.01-r5 |  | e608d5f | |
| 102 | mediarite-vendor | | 10.0.34.0a2-r0 |  | NA | |
| 103 | gst-plugins-mediarite | | 1.0-r0 |  | NA | |
| 104 | [rtkaudiosink](#rtkaudiosink) | **3.0.1-r0** | 2.0.0-r0 | **423d02f** | 9000f66 |  [9000f66...423d02f](https://github.com/rdk-e/rtkaudiosink-soc-realtek/compare/9000f666fec77f86e620f3abbc516ffbe84c8511...423d02f49610151760fa1b4cdcf033f9424db8cb) |
| 105 | sky-dropbear | | 1.0.0-r1 |  | NA | |
| 106 | mfi-ree | | 2.0.0-r0 |  | 1f5a100 | |
| 107 | [sysint-oem](#sysint-oem) | **3.0.0-r0** | 1.0.0-r2 | **50d274a** | ec0f597 |  [ec0f597...50d274a](https://github.com/rdk-e/sysint-xione-rtk/compare/ec0f597de266827521e9aa4d673c52e7f85118c0...50d274ab26926f5e7f1ece6ba4144ca75d7c19e9) |
| 108 | [sysint-soc](#sysint-soc) | **3.0.0-r0** | 1.0.0-r0 | **f8dded4** | c3ae6f4 |  [c3ae6f4...f8dded4](https://github.com/rdk-e/sysint-soc-rtk/compare/c3ae6f44e6254045b50bc1ae3a9250e450496824...f8dded4af097061aade727bd591a273af8b1a58a) |
| 109 | apparmor-vendor | | 1.0.0-r0 |  | 41e3674 | |
| 110 | directfb | | 1.7.7-r0 |  | NA | |
| 111 | audiocapturemgr-vendor | | 1.0.0-r0 |  | a063707 | |
| 112 | product-firmware-pb | **1.0.0-r0** | NA | **c1a2298** | NA |  [](https://github.com/rdk-e/sysint-soc-rtk) |


## Consolidated change list from vendor layer repositories

## Changes in meta repositories

## [meta-rdk-auxiliary](https://github.com/rdk-e/meta-rdk-auxiliary/blob/main/CHANGELOG.md)

- RDKINCDT-21300,DELIA-66229,RDKB-44748-License manifest pdf error for Kirkstone builds [4f93e77](https://github.com/rdk-e/meta-rdk-auxiliary/commit/4f93e7734ec0034f28498daa75f7235be3f2239d)
- Update CODEOWNERS [3be3c67](https://github.com/rdk-e/meta-rdk-auxiliary/commit/3be3c671255987882f0354cfb9662ef7e5ef017c)
- Update image-classes.inc [bcd6d61](https://github.com/rdk-e/meta-rdk-auxiliary/commit/bcd6d610d3746feb223e2fcc4963bc02de44648c)
- RDKE-206 Port missing changes from Gerrit to Github [8578d9d](https://github.com/rdk-e/meta-rdk-auxiliary/commit/8578d9d41b595a6c6df7365203084b733a794817)
## [meta-oss-reference-release](https://github.com/rdk-e/meta-oss-reference-release/blob/main/CHANGELOG.md)

- RDKE-345: OSS release 4.2.0 update [c3b2cd5](https://github.com/rdk-e/meta-oss-reference-release/commit/c3b2cd5f91636660dd75440776d8fd8fe5bfe5f5)
- RDK-54212: update configs for hotfix release 4.1.1 [fc89e3e](https://github.com/rdk-e/meta-oss-reference-release/commit/fc89e3e107ed756106e832982d8d8e24070c1030)
## [meta-rdk-oss-reference](https://github.com/rdk-e/meta-rdk-oss-reference/blob/main/CHANGELOG.md)

- RDKE-345: Updated package version for rel 4.2.0 ( [#410](https://github.com/rdk-e/meta-rdk-oss-reference/pull/410))
- RDKE-345: Update oss-config.inc ( [#407](https://github.com/rdk-e/meta-rdk-oss-reference/pull/407))
- RDKE-428: Fix logrotate build failure ( [#409](https://github.com/rdk-e/meta-rdk-oss-reference/pull/409))
- RDKE-428: Default bluez version to 5.48 ( [#405](https://github.com/rdk-e/meta-rdk-oss-reference/pull/405))
- RDKE-358: NetworkManager migration issues with WiFi ( [#400](https://github.com/rdk-e/meta-rdk-oss-reference/pull/400))
- RDKE-412-Update override syntax ( [#403](https://github.com/rdk-e/meta-rdk-oss-reference/pull/403))
- RDK-54214: Fix syntax error ( [#402](https://github.com/rdk-e/meta-rdk-oss-reference/pull/402))
- RDK-54214: Fix libdash dev package ( [#395](https://github.com/rdk-e/meta-rdk-oss-reference/pull/395))
- RDKE-409: Fix syntax issues in recipe ( [#393](https://github.com/rdk-e/meta-rdk-oss-reference/pull/393))
- RDKE-398 : Setting drm in rprovides to support IPK consumption ( [#388](https://github.com/rdk-e/meta-rdk-oss-reference/pull/388))
- RDK-53901: RDKE - Removal of USB Mount Script ( [#367](https://github.com/rdk-e/meta-rdk-oss-reference/pull/367))
- RDKE-237: Prepare breakpad-wrapper for Opensourcing ( [#382](https://github.com/rdk-e/meta-rdk-oss-reference/pull/382))
- RDK-54212: Update oss release version to 4.1.1 [6cf9111](https://github.com/rdk-e/meta-rdk-oss-reference/commit/6cf91117b0e98a26eb258e4fab4a052f0a44c259)
- Update packagegroup-oss-layer.bb [a728b25](https://github.com/rdk-e/meta-rdk-oss-reference/commit/a728b25328781ece970f4ff3451e7b7b2fc1edbd)
- Update packagegroup-oss-layer.bb [4434f51](https://github.com/rdk-e/meta-rdk-oss-reference/commit/4434f51495cce13a1b4461ad429e79f8a365be9c)
- RDK-53435:  To set preferred provider for ca-certificates ( [#337](https://github.com/rdk-e/meta-rdk-oss-reference/pull/337))
- RDK-52308 : Bluez version update to Bluez v5.77 ( [#374](https://github.com/rdk-e/meta-rdk-oss-reference/pull/374))
- RDKE-346: Fix glib-networking missing patches ( [#368](https://github.com/rdk-e/meta-rdk-oss-reference/pull/368))
- RDKE-310: Include lvm2 for AppsService 34.1.0 [8ef9f10](https://github.com/rdk-e/meta-rdk-oss-reference/commit/8ef9f108dd4418272e3dd86e6aad550f25f077d7)
- RDK-53953: cleanup unused distro features references [f9f80ef](https://github.com/rdk-e/meta-rdk-oss-reference/commit/f9f80ef83ec3d65226febb6996ae3ec27dad5da7)
- RDKE-206 Port missing changes from Gerrit to Github [ac9d819](https://github.com/rdk-e/meta-rdk-oss-reference/commit/ac9d8190a1ba9640c2bcce96a3a0f8dcb85aca05)
- RDKE-206 Port missing changes from Gerrit to Github [f93c40d](https://github.com/rdk-e/meta-rdk-oss-reference/commit/f93c40d1c4bd87a1321727064a715f0a61430dda)
- RDKE-206 Port missing changes from Gerrit to Github [d3cd20a](https://github.com/rdk-e/meta-rdk-oss-reference/commit/d3cd20abb63ed10ae6cf9da7f56f18ddb834a488)
- RDKE-206 Port missing changes from Gerrit to Github [1702b70](https://github.com/rdk-e/meta-rdk-oss-reference/commit/1702b70577176aa1f6744b2e087879e2dc95c397)
- RDKE-206 Port missing changes from Gerrit to Github [1252b99](https://github.com/rdk-e/meta-rdk-oss-reference/commit/1252b9984146784a1e991c79734efedf4e1cf6fc)
- RDKE-206 Port missing changes from Gerrit to Github [51d3b44](https://github.com/rdk-e/meta-rdk-oss-reference/commit/51d3b446562e461796fdeead63a5c1e5bc8e17c1)
- RDKE-206 Port missing changes from Gerrit to Github [879e85a](https://github.com/rdk-e/meta-rdk-oss-reference/commit/879e85ab36062048be8d5bccbd11b65fd4a587dc)
- RDKE-206 Port missing changes from Gerrit to Github [606f822](https://github.com/rdk-e/meta-rdk-oss-reference/commit/606f8220db93d4e936b48289dd45897f144d8123)
- RDKE-206 Port missing changes from Gerrit to Github [786fb90](https://github.com/rdk-e/meta-rdk-oss-reference/commit/786fb900fd9a5f9e652c639575d79a477c541c8b)
- RDKE-206 Port missing changes from Gerrit to Github [dbd9a3e](https://github.com/rdk-e/meta-rdk-oss-reference/commit/dbd9a3e89e9059449927f68ba242559b33468b39)
- RDK-53953: Removed the outdated and unused version of the recipe [abef8e2](https://github.com/rdk-e/meta-rdk-oss-reference/commit/abef8e26501651435efb93d9e980cd3db98c190d)
- RDK-53953: Cleanup preferred version configuration ( [#356](https://github.com/rdk-e/meta-rdk-oss-reference/pull/356))
- Update packagegroup-oss-layer.bb [cbf959a](https://github.com/rdk-e/meta-rdk-oss-reference/commit/cbf959a194cc217b1963768df0c8dbe0eb76e1e6)
- Update packagegroup-oss-layer.bb [702a78c](https://github.com/rdk-e/meta-rdk-oss-reference/commit/702a78ce775d9aae77c9ddae0f0c2a9cbb930287)
## [meta-rdk-soc-realtek](https://github.com/rdk-e/meta-rdk-soc-realtek/blob/main/CHANGELOG.md)

- RDKEMW-34:DV tag not display in nfx asset ( [#94](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/94))
- XIONE-15788:To fix loudness/drc mode is not set as expected ( [#93](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/93))
- RDK-53301 : Stable2 sync code ( [#88](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/88))
## [meta-oem-stream](https://github.com/rdk-e/meta-oem-stream/blob/main/CHANGELOG.md)

- RDK-53301 : Stable2 sync code [28a3459](https://github.com/rdk-e/meta-oem-stream/commit/28a345940de473ac7d956dbe36aa1efb596d3ca3)
## [meta-oem-realtek-stream](https://github.com/rdk-e/meta-oem-realtek-stream/blob/main/CHANGELOG.md)

- RDK-54975: Need to BT Config. ( [#231](https://github.com/rdk-e/meta-oem-realtek-stream/pull/231))
- RDK-54922: Vendor layer release 4.0.0. ( [#229](https://github.com/rdk-e/meta-oem-realtek-stream/pull/229))
- RDK-54805:Stable2 sync on wifi firmware. ( [#228](https://github.com/rdk-e/meta-oem-realtek-stream/pull/228))
- XIONE-16273 : Stable2 sync code ( [#225](https://github.com/rdk-e/meta-oem-realtek-stream/pull/225))
- RDK-48018: Gitlab to github movement ( [#224](https://github.com/rdk-e/meta-oem-realtek-stream/pull/224))
- RDK-54545: Adding ENV variables required for Real-tek SOC [eb35343](https://github.com/rdk-e/meta-oem-realtek-stream/commit/eb3534382a7ee02427fe50fb68c455ac06098a03)
- RDK-53301 : Stable2 sync code ( [#203](https://github.com/rdk-e/meta-oem-realtek-stream/pull/203))
- RDK-54172:Include wifi component in VL ( [#220](https://github.com/rdk-e/meta-oem-realtek-stream/pull/220))
- XIONE-15555 : Mirroring log in Flashapp-kirkstone [482bcc7](https://github.com/rdk-e/meta-oem-realtek-stream/commit/482bcc7f60216cc3e92536d5bce18f4ebff60fa0)
- XIONE-15555 : Vendor Version in Flashapp-kirkstone [be46558](https://github.com/rdk-e/meta-oem-realtek-stream/commit/be46558b0416ba20c09da91a589f2cc025edcf43)
## [meta-oss-vendor-realtek](https://github.com/rdk-e/meta-oss-vendor-realtek/blob/main/CHANGELOG.md)

- RDK-54792:Include gstreamer patch. ( [#41](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/41))
- XIONE-15788:To fix loudness/drc mode is not set as expected ( [#40](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/40))
- RDK-53301 : Stable2 sync code ( [#35](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/35))


## Changes in component repositories

## ['closedcaption-hal-realtek'](https://github.com/rdk-e/closedcaption-soc-realtek/blob/main/CHANGELOG.md)

- RDK-53301 : Stable2 sync code [6bc0173](https://github.com/rdk-e/closedcaption-soc-realtek/commit/6bc0173a6dc89cd32074d9af59a25eaaa2b31b2e)
- ES1-1159: fixed crash issue with ClosedCaptions::stop [963f89d](https://github.com/rdk-e/closedcaption-soc-realtek/commit/963f89d41c3ba18870298085928be34a61fd58de)
## ['hdmicec-hal-realtek'](https://github.com/rdk-e/hdmicec-soc-realtek/blob/main/CHANGELOG.md)

- XIONE-15405:No Logical Address polling happening after hotplug/device wakeup [cb7fd0a](https://github.com/rdk-e/hdmicec-soc-realtek/commit/cb7fd0a0af4756ad7fa691694649c6d6b1371c20)
- Add GitHub Actions workflow file [a6f6d5f](https://github.com/rdk-e/hdmicec-soc-realtek/commit/a6f6d5f7507cd612ee1ef3337ecf02b1ed715e51)
## ['westeros-sink'](https://github.com/rdk-e/westeros-sink-soc-realtek/blob/main/CHANGELOG.md)

- XIONE-14672 1.Hide inited video plane at init stage 2.Reduce log [2c4052c](https://github.com/rdk-e/westeros-sink-soc-realtek/commit/2c4052c13e64234fbf659c6155c0eacc1e2c810b)
- Add GitHub Actions workflow file [5c86c26](https://github.com/rdk-e/westeros-sink-soc-realtek/commit/5c86c2614edea4c39528ce10c5d3ad5d5fe648b9)
- REALTEK-800 : To pass the PQ tests [dff9fba](https://github.com/rdk-e/westeros-sink-soc-realtek/commit/dff9fba128688151fdcd9621a6010603ceb0bd01)
- REALTEK-793 : report correct video position during seek. [e34b7a0](https://github.com/rdk-e/westeros-sink-soc-realtek/commit/e34b7a063fabbb9437abd5b05b5d504b3c552770)
- XIONE-13809 : Emit the pts-error signal to handle PTS rollover [08e3cb8](https://github.com/rdk-e/westeros-sink-soc-realtek/commit/08e3cb8851368ea481f9a97fe4429e5e334a088e)
## ['secapi3-rtk'](https://github.com/rdk-e/secapi3-soc-realtek-cpc/blob/main/CHANGELOG.md)

- Add GitHub Actions workflow file [7de9d25](https://github.com/rdk-e/secapi3-soc-realtek-cpc/commit/7de9d25fbe024875b376f67fc831efcdb4677b62)
- Add GitHub Actions workflow file [b984392](https://github.com/rdk-e/secapi3-soc-realtek-cpc/commit/b9843928bc89e770eac36652abea744bff003389)
- REALTEK-759 : Update SecApi 3.3.0 [57d8883](https://github.com/rdk-e/secapi3-soc-realtek-cpc/commit/57d88836723d8c79dd107cd6c139288e4ad7938c)
- Remove GitHub Actions workflow file [957eb0e](https://github.com/rdk-e/secapi3-soc-realtek-cpc/commit/957eb0eb96479f7707cc0b51fa90f10f119782d9)
- Add GitHub Actions workflow file [31a4c3a](https://github.com/rdk-e/secapi3-soc-realtek-cpc/commit/31a4c3a60211b2f4566ada2277b2f16776cf0cb6)

## ['hdmiservice'](https://github.com/rdk-e/hdmiservice-realtek/blob/main/CHANGELOG.md)

- ES1-1704: HDCP Authentication is delayed due to HdmiService Taint [804e91d](https://github.com/rdk-e/hdmiservice-realtek/commit/804e91d65fbde9ece0841397b1b2f969c6747e36)
- XIONE-15405:No Logical Address polling happening after hotplug/device wakeup [46e31e7](https://github.com/rdk-e/hdmiservice-realtek/commit/46e31e72fa81c5dba7654042d211ac9850ab02cf)
## ['rtkaudiosink'](https://github.com/rdk-e/rtkaudiosink-soc-realtek/blob/main/CHANGELOG.md)

- XIONE-15486, XIONE-15866: squash commit to stable2 [0d0db2e](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/0d0db2eb06f223396036268f5b38100bfd62e411)
- XIONE-15915,XIONE-15884 : Adjust sink render interval calculation.(Squash 3) [62e55fd](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/62e55fd96472ed906d10672012a351e4c4814ca2)
- ES1-1408: To fix the thread stack leak. [61a5310](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/61a531016724ebd4a0484008d34152ea363c97eb)
- Add GitHub Actions workflow file [117db21](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/117db214a133432d15809f05320e19e094c24ae8)

## ['sysint-soc'](https://github.com/rdk-e/sysint-soc-rtk/blob/main/CHANGELOG.md)

- ES1-1578: Fix heap-usage-stats.sh for new rtk_heap [7735bea](https://github.com/rdk-e/sysint-soc-rtk/commit/7735bea0118ca1051a200e5a186f20e6cd5f6f1b)
- XIONE-14382: Enabled autoconfig for network interfaces. [b0d25c2](https://github.com/rdk-e/sysint-soc-rtk/commit/b0d25c296aa82ef023245a8f2bae292b2bc51235)
