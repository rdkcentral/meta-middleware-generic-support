# Vendor Layer Release Notes

XiOne REALTEK STB RDKE Vendor Layer Release Notes

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
|Date|13 Jun 2025|
|Author| pawan.narayanarao@sky.uk |

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
The aim of this release to provide the following fix:
  - [RDKEVD-815](https://ccp.sys.comcast.net/browse/RDKEVD-815) Perform wifi Driver initializing before the Network Service
  - [RDK-57996](https://ccp.sys.comcast.net/browse/RDK-57996) Provide the OSS delivery with "cgexec" package
  - [RDKEVD-1480](https://ccp.sys.comcast.net/browse/RDKEVD-1480) - Vendor Layer Mediarite Release 21.1
  - [XIONE-17140](https://ccp.sys.comcast.net/browse/XIONE-17140) Log upload utility is not present 
  - [RDKEVD-1594](https://ccp.sys.comcast.net/browse/RDKEVD-1594) Install vendorConfig.json for STBs for AS to be dynamically configured in both RDK-E
  - [RDKEVD-489](https://ccp.sys.comcast.net/browse/RDKEVD-489) HAL dsFPD - L3 dsSetFPState API failed to set the indicator state of front panel LED in Xione
  - [RDKEVD-1107](https://ccp.sys.comcast.net/browse/RDKEVD-1107) UNII3 - Removal of the RFC changes for enabling UNII3 for puck
  - [RDKEVD-799](https://ccp.sys.comcast.net/browse/RDKEVD-799) [DS-HAL] : dsDisplay - Set/Get AVI Info frame APIs
  - [RDKEVD-1317]( https://ccp.sys.comcast.net/browse/RDKEVD-1317) [XIONE-UK][VTS][L1] fix dsERR_NOT_INITIALIZED assertion errors
  - [RDKEVD-863](https://ccp.sys.comcast.net/browse/RDKEVD-863) [RDKE][Xione-UK]- dsmgr service takes more time to start/initialize for     RDKE than RDKV
on top of vendor release 7.0.1. this release will provide a versioned "meta-vendor-xione-realtek-release" that will be used by the middleware as well as image assembler.

## Release layer and components

### Vendor Release Components

| Vendor Release Components | New Version | Version in Previous Release (7.0.1) |
|------------|---------|------------------------------------|
| packagegroup-vendor-layer | 7.0.4-r0 | 7.0.1-r0 | [7.0.1...7.0.4](https://github.com/rdk-e/meta-oem-realtek-stream/compare/7.0.1...7.0.4) |


### Stack layer

| Release meta Layer | Tag |
|------|------|
| [meta-vendor-xione-realtek-release](https://github.com/rdk-e/meta-vendor-xione-realtek-release) | [7.0.4](https://github.com/rdk-e/meta-vendor-xione-realtek-release/tree/7.0.4) |

#### Artifactory Location for IPKs -
| Product | Location |
|------------|---------|
| XiOne-UK | https://partners.artifactory.comcast.com/artifactory/xione-uk-release/7.0.4/xione-uk/ipks/debug/ |

### Meta Repos

#### Meta repos maintained by layers layer

| Meta Repo | New Version | Version in Previous Release (7.0.1) | ChangeList |
|------------|---------|------------------------------------|--------------|
| meta-rdk-auxiliary |  | 1.2.0 | |
| meta-oss-reference-release |  | 4.6.0 | |
| meta-rdk-oss-reference |  | 1.2.0 | |
| meta-rdk-tools |  | 2.3.1 | |
| meta-vts |  | 1.2.0 | |
| meta-rdk-soc-realtek |  | 4.0.7 | |
| meta-oem-stream |  | 4.0.3 | |
| [meta-oem-realtek-stream](#meta-oem-realtek-stream) |  **7.0.4** | 7.0.1 | [7.0.1...7.0.4](https://github.com/rdk-e/meta-oem-realtek-stream/compare/7.0.1...7.0.4) |
| [meta-rdk-vendor-realtek-common](#meta-rdk-vendor-realtek-common) |  **1.0.6** | 1.0.5 | [1.0.5...1.0.6](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/compare/1.0.5...1.0.6) |
| meta-oss-vendor-realtek |  | 4.0.7 | |
| [meta-mediarite-vendor](#meta-mediarite-vendor) |  **21.1.1** | 10.0.34.0a2-r2 | [10.0.34.0a2-r2...21.1.1](https://github.com/rdk-e/meta-mediarite-vendor/compare/10.0.34.0a2-r2...21.1.1) |

#### Meta repos common for RDK-E

| Meta Repo | New Version | Version in Previous Release (7.0.1) | ChangeList |
|------------|---------|------------------------------------|--------------|
| **buildscripts** ||||
| build-scripts |  | 4.1.1 | |
| | | | |
| **buildsupport** ||||
| meta-image-support |  | 4.2.2 | |
| meta-stack-layering-support |  | 1.2.0 | |
| | | | |
| **oe** ||||
| meta-openembedded |  | rdk-4.0.0 | |
| poky |  | rdk-4.1.0 | |
| meta-python2 |  | rdk-4.0.0 | |
| | | | |
| **extention** ||||
| meta-rdk-oss-ext |  | 1.2.0 | |
| | | | |
| **configs** ||||
| rdke-region-uk-config |  | 2.1.6 | |
| rdke-region-au-config |  | 1.0.0 | |
| rdke-region-de-config |  | 1.0.2 | |
| rdke-region-us-config |  | 1.0.10 | |
| rdke-common-config |  | 4.3.3 | |
| rdke-stb-config |  | 1.0.3 | |
| | | | |
| **rdk** ||||
| meta-rdk-halif-headers |  | 1.0.3 | |
| meta-rdk-cpc-halif-headers |  | 1.0.0 | |
| | | | |
| **products** ||||
| meta-product-xione |  | 3.3.5 | |
| | | | |
| **binder** ||||
| meta-binder |  | 1.0.0 | |
| | | | |

### Interface versions

| # | HAL Interface Header (rdkcentral github) | New Version | Version from Previous Release (7.0.1)|
|---|------------------------------------------|-------------|----------------------|
| 1 | media-utils-headers | | 1.0.5 |
| 2 | hdmicecheader | | 1.3.10 |
| 3 | deepsleep-manager-headers | | 1.0.4 |
| 4 | power-manager-headers | | 1.0.3 |
| 5 | devicesettings-hal-headers | | 4.1.2 |
| 6 | tvsettings-hal-headers | | 2.1.0 |
|   |   |  |  |
|   | RDK HAL Headers (RDKE github) |  |  |
|   |   |  |  |
| 7 | iarmmgrs-hal-headers | | 1.0.1 |
| 8 | closedcaption-hal-headers | | 1.0.0 |
| 9 | iarmbus-headers | | 1.0.1 |
| 10 | rdk-gstreamer-utils-headers | | 1.0.0 |

### Limitations

It should be noted that some services may not run as they have dependencies with other layers. Additionally, the exclusion of inter-layer bbappends/patches might result in the failure to start some services. These limitations should be taken into consideration during the verification process. These Limitations will be addressed in Future Releases.

### Middleware Integration

##### XiOne-UK
- MW build Jenkins job failed `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Middleware-Build/19614/parameters/"`

- Tag details are here `"XiOne-UK(refs/tags/2.4.13)"`.

#### Image assembler side
- Created the  middleware image `"SKXI11ADS_DEV_develop_20250612170745.bin for UK"` from the `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Image-Assembler-Build/2167/ for UK"`

## Build instructions

- Steps to check out and build the vendor layer project [https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project](https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project)
- Steps to check out and build the image assembler project [https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler](https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler)

### Boot Command

#### Copy image to device /mnt/usb or /opt partitions or connect and mount USB having the image binn- Execute FlashApp command

- Move to directory containing the image
- FlashApp \<dirname\> \<imagename\>
- eg. FlashApp /mnt/usb/SKXI11ADS_DEV_develop_20250612170745.bin

#### USB Flash Method using xboot prompt

- Copy the image `"SKXI11ADS_DEV_develop_20250612170745.bin"` to the usb and connect to the STB
- Switch on the STB
- Press z button multiple time to get the bootloader prompt.
- From bootloader prompt, need to do below method
- Choose option c (flashing image)
- Choose select option h/i (depends on from which bank the image is booting)
- Enter the image name which we need to copy.
- After image flashed successfully. Choose the option "exit"
- Choose the option "exit" (or) Enter "i" (automatically reboot the box)

### Network connectivity

- Ethernet Connectivity is supported now
- If IP is not acquired automatically please run udhcpc after connecting Ethernet

## Testing

- Created the `"vendor test image"` `"SKXI11ADS_DEV_develop_20250612170745.bin  for XiOne-UK "` using the vendor layer jenkins job `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Vendor-Release-Build/103/"`
- Successfully booted the `"vendor test image"` and obtained the shell prompt.
- Verified vendor layer services up and running
- Verified IP acquisition via Ethernet
- Played clear AV with gst-play-1.0.
- Verified image flashing using FlashApp

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
| May 23 2025 |  SKXI11ADS_VENDOR_DEV_refs_tags_7.0.1_20250521111326 | 1547376 | 454150	| 28794	| 482944 | 2163728 |
| May 16 2025 |  SKXI11ADS_VENDOR_DEV_refs_tags_7.0.0_20250511200945 | 1547376 | 444564 | 30257 | 474821 | 2171851 |
| May 13 2025 |  SKXI11ADS_5.1.6_VENDOR_DEV                          | 1547368 | 454511 | 30454 | 484965 | 2161715 |
| Apr 30 2025 |  SKXI11ADS_VENDOR_DEV_refs_tags_5.1.5_20250430103616 | 1547368 | 454265 | 29428 | 483693 | 2162987 |
| Apr 09 2025 |  SKXI11ADS_VENDOR_DEV_refs_tags_5.1.2_20250408160721 | 1547368 | 441296 | 29433 | 470729 | 2175951 |
| Mar 26 2025 |  SKXI11ADS_VENDOR_DEV_refs_tags_6.0.2_20250324171809 | 1547376 | 444252 | 29245 | 473497 | 2173175 |
| Mar 17 2025 |  SKXI11ADS_VENDOR_DEV_refs_tags_5.1.1_20250316220627 | 1547368 | 450302 | 30231 | 480533 | 2166147 |
| Feb 14 2025 |  SKXI11ADS_VENDOR_DEV_refs_tags_5.1.0_20250213181547 | 1547368 | 454816 | 28838 | 483654 | 2163026 |
| Jan 07 2025 |  SKXI11ADS_VENDOR_DEV_refs_tags_5.0.1_20250106184824 | 1547368 | 447174 | 29121 | 476295 | 2170385 |
| Dec 30 2024 |  SKXI11ADS_VENDOR_DEV_refs_tags_5.0.0_20241224172552 | 1547368 | 445508 | 29135 | 474643 | 2172037 |
| Dec 03 2024 |  SKXI11ADS_VENDOR_DEV_refs_tags_4.0.1_20241203115633 | 1547368 | 447008 | 26733 | 473741 | 2172939 |

##### XiOne-Foxtel

| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| May 23 2025 |	 SKXI11ADSSOFT_VENDOR_DEV_refs_tags_7.0.1_20250521111501 | 1547376 | 441859 | 28425 | 470284 |2176388 |
| May 16 2025 |  SKXI11ADSSOFT_7.0.0_VENDOR_DEV | 1547376 | 441861 | 28752 | 470613 | 2176059 |
| Mar 26 2025 |  SKXI11ADSSOFT_VENDOR_DEV_refs_tags_6.0.2_20250324172329 | 1547376 | 438063 | 28223 | 466286 | 2180386 |
| Jan 28 2025 |  SKXI11ADSSOFT_VENDOR_DEV_refs_tags_5.0.2_20250124172925 | 1547368 | 443566 | 28438 | 472004 | 2174676 |
| Dec 30 2024 |  SKXI11ADSSOFT_VENDOR_DEV_refs_tags_5.0.0_20241224173052 | 1547368 | 450228 | 32825 | 483053 | 2163627 |

##### XiOne-DE

| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| May 23 2025 |  SKXI11AIS_VENDOR_DEV_refs_tags_7.0.1_20250521111817 | 1547348 | 463827 | 28698 | 492525 | 2154175 |
| May 16 2025 |  SKXI11AIS_7.0.0_VENDOR_DEV | 1547348 | 463950 | 29451 | 493401 | 2153299 |
| Mar 26 2025 |  SKXI11AIS_VENDOR_DEV_refs_tags_6.0.2_20250324181951 | 1547348 | 460736 | 28870 | 489606 | 2157094 |


##### XiOne-Alpaca-DE

| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| May 23 2025 |  SKXI11AEISODE_VENDOR_DEV_refs_tags_7.0.1_20250521111552 | 1547376 | 443789 | 28103 | 471892 | 2174780 |
| May 16 2025 |  SKXI11AEISODE_VENDOR_DEV_refs_tags_7.0.0_20250511204108 | 1547376 | 440746 | 28691 | 469437 | 2177235 |
| Mar 26 2025 |  SKXI11AEISODE_VENDOR_DEV_refs_tags_6.0.2_20250324172723 | 1547376 | 445013 | 28365 | 473378 | 2173294 |


##### Xfinity-stream-box

| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| May 23 2025 |  SCXI11AIC_VENDOR_DEV_refs_tags_7.0.1_20250521111902 | 1547356 | 461028 | 28952 | 489980 | 2156712 |
| May 16 2025 |  SCXI11AIC_VENDOR_DEV_refs_tags_7.0.0_20250511210103 | 1547356 | 457862 | 28380 | 486242 | 2160450 |
| Mar 26 2025 |  SCXI11AIC_VENDOR_DEV_refs_tags_6.0.2_20250324172822 | 1547356 | 456510 | 29065 | 485575 | 2161117 |


##### Xumo-stream-box

| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| May 23 2025 |	 SCXI11AIC_VENDOR_DEV_refs_tags_7.0.1_20250521112318 | 1547356 | 457230	| 28700	| 485930 | 2160762 |
| May 16 2025 |  SCXI11AIC_VENDOR_DEV_refs_tags_7.0.0_20250511211029 | 1547356 | 456878 | 29452 | 486330 | 2160362 |
| Mar 26 2025 |  SCXI11AIC_VENDOR_DEV_refs_tags_6.0.2_20250324190109	 | 1547356 | 456595 | 28437 | 485032 | 2161660 |

##### WNC Xfinity

| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| May 23 2025 |  WNXI11AEI_VENDOR_DEV_refs_tags_7.0.1_20250521171806 | 1547356 | 473728	| 29253	| 502981 | 2143711 |
| May 16 2025 |  WNXI11AEI_VENDOR_DEV_refs_tags_7.0.0_20250512160923 | 1547356 | 472994 | 22047 | 495041 | 2151651 |


### Fullstack image testing


## Components details in 'packagegroup-vendor-layer'

 | # | Vendor layer Component | New PV-PR | PV-PR in Previous Release (7.0.1)| New SRCREV | SRCREV in Previous Release (7.0.1)| Diff |
|---|------------------------------------------|-------------|----------------------|-----------|------------|-----|
| 1 | libdrm | | 2.4.110-r0 |  | NA |  |
| 2 | cairo | | 1.16.0-r1 |  | NA |  |
| 3 | libepoxy | | 1.5.9-r1 |  | NA |  |
| 4 | python3-pygobject | | 3.34.0-r0 |  | NA |  |
| 5 | pango | | 1.44.7-r0 |  | NA |  |
| 6 | librsvg | | 2.40.21-r0 |  | NA |  |
| 7 | python3-pycairo | | 1.19.0-r0 |  | NA |  |
| 8 | xsign | | 4.0.1-r2 |  | NA |  |
| 9 | mfrlib-hal-xione | | 8.1.0-r0 |  | NA |  |
| 10 | wipe-disk-partitions | | 1.0.0-r0 |  | NA |  |
| 11 | secauthn | | 1.0.0-r0 |  | NA |  |
| 12 | testagent-loader | | 2.3.0-r0 |  | NA |  |
| 13 | qca6390-mod-wifi | **1.0.2-r1** | 1.0.0-r1 |  | NA |  |
| 14 | qca-hciattach | | 1.0.0-r1 |  | NA |  |
| 15 | emmc-fw-update | | 1.0.0-r0 |  | NA |  |
| 16 | mount-disk-partition | | 1.0.0-r0 |  | NA |  |
| 17 | image-verifier-lib | | 6.2.0-r1 |  | NA |  |
| 18 | fmtsasidlibs | | 2.4-r1 |  | NA |  |
| 19 | led-boot-pattern | | 1.0.0-r0 |  | NA |  |
| 20 | rtkmali | | 2.8.0-r0 |  | NA |  |
| 21 | rtk-platform-conf | | 2.6.0-r1 |  | NA |  |
| 22 | emmc-read-util | | 4.0.0-r0 |  | 6281804 |  |
| 23 | sky-dropbear | | 1.0.0-r1 |  | NA |  |
| 24 | sysint-soc | | 3.0.2-r0 |  | f8dded4af097061aade727bd591a273af8b1a58a & 9f68324f0cc2306e7fb5d6f19aa54d5a5e298f36 |  |
| 25 | sky-led-app | | 1.0.0-r0 |  | NA |  |
| 26 | audiocapturemgr-vendor | | 1.0.0-r0 |  | a063707 |  |
| 27 | displayinfo-soc | | 1.0.0-r0 |  | e7b2c24 |  |
| 28 | ffmpeg | | ERROR-r1 |  | NA |  |
| 29 | media-utils-soc-realtek | | 1.0.5-1.0.0-r1 |  | 5e71382 |  |
| 30 | closedcaption-hal-realtek | | 1.0.0-3.0.0-r0 |  | 2f365d0 |  |
| 31 | hdmicec-hal-realtek | | 1.3.10-3.0.1-r0 |  | 950a89e |  |
| 32 | iarmmgrs-hal-realtek | | 1.0.1-2.0.0-r1 |  | a15d303 |  |
| 33 | rdk-gstreamer-utils-platform | | 1.0.0-2.0.0 |  | 6ba04b9 |  |
| 34 | devicesettings-hal-realtek | **4.1.2-4.1.0-r0** | 4.1.2-4.1.0-R37-r0 |  |  |  |
| - |  - devicesettings-hal-realtek_devicesettingssocrealtek | |  | **6e9ed62** | ad17470 |  [](https://github.com/rdk-e/meta-mediarite-vendor) |
| - |  - devicesettings-hal-realtek_devicesettingsskyxione | |  |  | 6929995 |  |
| 35 | deepsleepmgr-hal-realtek | | 1.0.4-1.0.2-r0 |  | adaf974 |  |
| 36 | pwrmgr-hal-realtek | | 1.0.3-1.0.0-r0 |  | c91e047 |  |
| 37 | otp-program | | 2.2-r1 |  | NA |  |
| 38 | gstreamer1.0 | | 1.18.5-r4 |  | NA |  |
| 39 | gstreamer1.0-meta-base | | 1.18.5-r4 |  | NA |  |
| 40 | gstreamer1.0-omx | | 1.10.4-r4 |  | NA |  |
| 41 | gstreamer1.0-libav | | 1.18.5-r4 |  | NA |  |
| 42 | gstreamer1.0-plugins-good | | 1.18.5-r4 |  | NA |  |
| 43 | gstreamer1.0-plugins-good-meta | | 1.18.5-r4 |  | NA |  |
| 44 | gstreamer1.0-plugins-bad | | 1.18.5-r4 |  | NA |  |
| 45 | gstreamer1.0-plugins-bad-meta | | 1.18.5-r4 |  | NA |  |
| 46 | gstreamer1.0-rtsp-server | | 1.18.5-r4 |  | NA |  |
| 47 | gstreamer1.0-plugins-base | | 1.18.5-r4 |  | NA |  |
| 48 | gstreamer1.0-plugins-base-meta | | 1.18.5-r4 |  | NA |  |
| 49 | gstreamer1.0-plugins-base-playback | | 1.18.5-r4 |  | NA |  |
| 50 | gstreamer1.0-plugins-good-wavparse | | 1.18.5-r4 |  | NA |  |
| 51 | gstreamer1.0-plugins-good-audiofx | | 1.18.5-r4 |  | NA |  |
| 52 | gstreamer1.0-plugins-good-isomp4 | | 1.18.5-r4 |  | NA |  |
| 53 | gstreamer1.0-plugins-good-audioparsers | | 1.18.5-r4 |  | NA |  |
| 54 | gstreamer1.0-plugins-good-soup | | 1.18.5-r4 |  | NA |  |
| 55 | gstreamer1.0-plugins-base-gio | | 1.18.5-r4 |  | NA |  |
| 56 | gstreamer1.0-plugins-base-videoconvert | | 1.18.5-r4 |  | NA |  |
| 57 | gstreamer1.0-plugins-base-videoscale | | 1.18.5-r4 |  | NA |  |
| 58 | gstreamer1.0-plugins-base-volume | | 1.18.5-r4 |  | NA |  |
| 59 | gstreamer1.0-plugins-base-typefindfunctions | | 1.18.5-r4 |  | NA |  |
| 60 | gstreamer1.0-plugins-good-autodetect | | 1.18.5-r4 |  | NA |  |
| 61 | gstreamer1.0-plugins-good-avi | | 1.18.5-r4 |  | NA |  |
| 62 | gstreamer1.0-plugins-good-deinterlace | | 1.18.5-r4 |  | NA |  |
| 63 | gstreamer1.0-plugins-good-interleave | | 1.18.5-r4 |  | NA |  |
| 64 | gstreamer1.0-plugins-bad-dash | | 1.18.5-r4 |  | NA |  |
| 65 | gstreamer1.0-plugins-bad-mpegtsdemux | | 1.18.5-r4 |  | NA |  |
| 66 | gstreamer1.0-plugins-bad-smoothstreaming | | 1.18.5-r4 |  | NA |  |
| 67 | gstreamer1.0-plugins-bad-videoparsersbad | | 1.18.5-r4 |  | NA |  |
| 68 | gstreamer1.0-plugins-bad-opusparse | | 1.18.5-r4 |  | NA |  |
| 69 | gstreamer1.0-plugins-bad-dashdemux | | 1.18.5-r4 |  | NA |  |
| 70 | gstreamer1.0-plugins-good-matroska | | 1.18.5-r4 |  | NA |  |
| 71 | gstreamer1.0-plugins-base-app | | 1.18.5-r4 |  | NA |  |
| 72 | gstreamer1.0-plugins-base-audioconvert | | 1.18.5-r4 |  | NA |  |
| 73 | gstreamer1.0-plugins-base-audioresample | | 1.18.5-r4 |  | NA |  |
| 74 | westeros-simpleshell | | 1.01.58-r0 |  | 3472e86 |  |
| 75 | westeros-simplebuffer | | 1.01.58-r0 |  | 3472e86 |  |
| 76 | westeros-soc | | 1.01.58-r0 |  | 3472e86 |  |
| 77 | westeros-sink | | 1.01.58-r0 |  |  |  |
| - |  - westeros-sink_westeros | |  |  | 3472e86 |  |
| - |  - westeros-sink_realtek | |  |  | e32f912 |  |
| 78 | westeros | | 1.01.58-r0 |  | 3472e86 |  |
| 79 | essos | | 1.01.58-r0 |  | 3472e86 |  |
| 80 | make-mod-scripts | | 1.0-r0 |  | NA |  |
| 81 | sky-fpbutton-driver | | 3.0.0-r0 |  | acd582d |  |
| 82 | splashscreen-viewer | | 2.0.0-r0 |  | 41e70a2 |  |
| 83 | rtk-tee | | 1.0.0-r0 |  | NA |  |
| 84 | secapi-rtk | | 2.1.0-r2 |  | 95b6bd4 |  |
| 85 | secapi3-rtk | | 3.3.0-r0 |  | 570df40 |  |
| 86 | secapi2-adapter | | 1.0.0-r0 |  | NA |  |
| 87 | secapi-common-hw | | 2.3.0-r0 |  | 3a51b88 |  |
| 88 | secapi-netflix | | 1.0.0-r0 |  |  |  |
| - |  - secapi-netflix_com_inc_rtk | |  |  | 0fa3af3 |  |
| - |  - secapi-netflix_socrealtek | |  |  | d3c7c87 |  |
| 89 | gst-svp-ext | | 1.1.0-r0 |  | NA |  |
| 90 | systemaudioplatform | | 1.0.0-r0 |  | 776348d |  |
| 91 | miracast-soc | | 1.0.0-r0 |  | 30cb689 |  |
| 92 | secapi-crypto-rtk | | 2.3.1-r0 |  | 5241d45 |  |
| 93 | secapi-common-crypto | | 2.3.0-r0 |  | 3a51b88 |  |
| 94 | flashapp | | 7.1-r0 |  | NA |  |
| 95 | sky-led-driver | | 2.0.0-r0 |  | f97a795 |  |
| 96 | hank-mod-mali | | 3.0.0-r0 |  | a574cc2 |  |
| 97 | rtkv1sink | | 2.0.0-r1 |  | 67bdf5b |  |
| 98 | platform-lib | | 2.6.0-r4 |  | NA |  |
| 99 | rtk-audio-service | | 3.1.0-r0 |  | 859de56 |  |
| 100 | [hdmiservice](#hdmiservice) | **4.1.1-r0** | 4.1.0-r0 | **12b2f4e** | 8a992bd |  [8a992bd...12b2f4e](https://github.com/rdk-e/hdmiservice-realtek/compare/8a992bd35d1cdf85dae163c54969c81628006e14...12b2f4e94a51001ba439f16ad40c8176e211f482) |
| 101 | rtkpcrclksink | | 2.0.0-r0 |  | c8272d9 |  |
| 102 | blewakeupenabler | | 1.4.0-r0 |  | 36408d5 |  |
| 103 | linux-libc-headers | | 4.9-r8 |  | NA |  |
| 104 | packagegroup-kernel-modules | | 4.9.119.01-r8 |  | NA |  |
| 105 | linux-hank | | 4.9.119.01-r8 |  | 66a4a9f |  |
| 106 | mediarite-vendor | | 10.0.34.0a2-r0 |  | NA |  |
| 107 | broadcast-hal-api | **1.1-r0** | NA |  | NA |  |
| 108 | broadcast-hal-config | **1.0-r0** | NA |  | NA |  |
| 109 | gst-plugins-mediarite | | 1.0-r0 |  | NA |  |
| 110 | rtkaudiosink | | 3.1.0-r0 |  | 2feae17 |  |
| 111 | mfi-ree | | 2.0.0-r0 |  | 4941717 |  |
| 112 | [sysint-oem](#sysint-oem) | **3.0.2-r1** | 3.0.0-r0 | **ab2d5cd** | 50d274a |  [50d274a...ab2d5cd](https://github.com/rdk-e/sysint-xione-rtk/compare/50d274ab26926f5e7f1ece6ba4144ca75d7c19e9...ab2d5cdd996bb5b6489529d94b6b427f8f8315ad) |
| 113 | apparmor-vendor | | 2.3.2-r0 |  | 4de375b |  |
| 114 | directfb | | 1.7.7-r0 |  | NA |  |
| 115 | [product-firmware-pb](#product-firmware-pb) | **1.0.6-r0** | 1.0.5-r0 | **752d392** | ac17418 |  [ac17418...752d392](https://github.com:rdk-e/firmware-prebuilt-xione-soc-realtek.git/compare/ac174188d8e155240e20a2fe39f286cb3f4cc3df...752d39225a969f188272ab115ab159c7b79e6ae3) |
| 116 | testagentlib | | 3.0.2-r0 |  |  |  |
| - |  - testagentlib_testagentlib | |  |  | b8eb1f8 |  |
| - |  - testagentlib_xione_factory | |  |  | 6281804 |  |
| 117 | libbinder | | 1.0.0-r1 |  | 0f7a23b |  |
| 118 | aidl-generator-native | | 1.0.0-r1 |  | 0f7a23b |  |
| 119 | flash-aidl | | 1-r0 |  | ddcceef |  |
| 120 | image-hal-service | | 1.0.0-r0 |  | 7eb82c9 |  |
| 121 | platform-imagehal-lib | | 1.0.0-r0 |  | NA |  |




## Consolidated change list from vendor layer repositories

## Changes in meta repositories

## [meta-oem-realtek-stream](https://github.com/rdk-e/meta-oem-realtek-stream/blob/main/CHANGELOG.md)

- RDKE: Dummy Release 7.0.4 [d2638a7](https://github.com/rdk-e/meta-oem-realtek-stream/commit/d2638a75c6dc2de5bc4e1451a0f1741917b0295c)
- RDKE: Dummy Release 7.0.3 [02e51e0](https://github.com/rdk-e/meta-oem-realtek-stream/commit/02e51e0457573941a069d42de18bf8aee43faa3f)
- RDKEVD-1782: Rename Distro feature for XRE remote support [34ce41f](https://github.com/rdk-e/meta-oem-realtek-stream/commit/34ce41f216e78f06c318681e88f12c23e4784dd3)
- RDK-57996 : libcgroup update in sysint. [9a47a8b](https://github.com/rdk-e/meta-oem-realtek-stream/commit/9a47a8b416139178736f3f534d6c09e75a639aa7)
- RDKEVD-815 : Network Mgr update in wifi service. [4464980](https://github.com/rdk-e/meta-oem-realtek-stream/commit/44649807798f171adedf2608d4c2c2e67c1ceb20)
- RDKEVD-1594: Add vendorConfig.json for STB platforms [b959015](https://github.com/rdk-e/meta-oem-realtek-stream/commit/b959015b323e6613c64993d73436478b1156edcb)
- RDKEVD-1480: Vendor Layer Mediarite Release 21.1 [2427ad1](https://github.com/rdk-e/meta-oem-realtek-stream/commit/2427ad12a83527586427e3392f431d6e9377a3f8)
- RDKEVD-1421:Dummy RDKE VL Release [47c259d](https://github.com/rdk-e/meta-oem-realtek-stream/commit/47c259d4bf188ec6f4aeb3291d758cb73831f6bc)
- RDKEVD-489: [DON'T MERGE] L3 dsSetFPState API failed [09eb923](https://github.com/rdk-e/meta-oem-realtek-stream/commit/09eb923f340eda239897ec16c1b9ea8a2ced0ac0)
- XIONE-17140: Port log upload script Reason for change: port log upload script to RDK-E vendor layer. Test Prodcedure: Build and Verify. [5337ced](https://github.com/rdk-e/meta-oem-realtek-stream/commit/5337ced18549a5ecaff99066ce1af17ba6b421d6)
- RDKEVD-1107:UNII3 - Removal of the RFC changes [66981e9](https://github.com/rdk-e/meta-oem-realtek-stream/commit/66981e94afdc385e6220272b9bb8439190114a80)
- RDKEVD-1107: UNII3 - Removal of the RFC changes [5c624bf](https://github.com/rdk-e/meta-oem-realtek-stream/commit/5c624bf5495da6fe1d87df7c2216ac5f32e0e7fc)
- RDKEVD-1438:Hotfix Release 7.0.1 [d8faf2a](https://github.com/rdk-e/meta-oem-realtek-stream/commit/d8faf2a17ec5f882aaf806e5c29c1cba0c507a43)
- RDKEVD-1434:Add delay when report HDCP status [fa9b2bb](https://github.com/rdk-e/meta-oem-realtek-stream/commit/fa9b2bb644b2e81a524411a73f70ea2a3de4ea6e)
- RDKEVD-863: Update SquahFS Kernel Config [d152b1d](https://github.com/rdk-e/meta-oem-realtek-stream/commit/d152b1d94cfdd3802d3b32152c1bc0fdf8086d4a)
- RDKEVD-799: Add AVI Info frame APIs & Driver Release 11.0.0 [e353efa](https://github.com/rdk-e/meta-oem-realtek-stream/commit/e353efa0a9c0bbe281fe5bfba00fe398cb68a3c1)
- RDKEVD-1317: Update vendor_pkg_versions.inc ( [#359](https://github.com/rdk-e/meta-oem-realtek-stream/pull/359))
- Update vendor_pkg_versions.inc [4e76f03](https://github.com/rdk-e/meta-oem-realtek-stream/commit/4e76f0395a3710345ccb5736764f21eafa7e81e5)
- Update vendor_pkg_versions_halif_impl.inc [16555cc](https://github.com/rdk-e/meta-oem-realtek-stream/commit/16555ccd4b2d1e27fbba5ce9cac2d709609619e4)
- Update vendor_pkg_versions.inc [e2ea943](https://github.com/rdk-e/meta-oem-realtek-stream/commit/e2ea943877858bea9e35f1ebbaaa3e1df559f0ad)
- RDKEVD-799: dsDisplay - Set/Get AVI Info frame APIs [1d90237](https://github.com/rdk-e/meta-oem-realtek-stream/commit/1d90237bae5f41f305b7cf59142c2b439685f38b)
- RDKEVD-1107: UNII3 - Removal of the RFC changes [649a028](https://github.com/rdk-e/meta-oem-realtek-stream/commit/649a0289814f55cc656d38e42f6d8e38e61b33ad)
- RDKEVD-489: L3 dsSetFPState API failed [54a4056](https://github.com/rdk-e/meta-oem-realtek-stream/commit/54a405609306f84a7d937397c25fe124dd062408)
- RDKEVD-489: L3 dsSetFPState API failed [20af35d](https://github.com/rdk-e/meta-oem-realtek-stream/commit/20af35defbe0aa56745923970048fa6cb8171fac)

## [meta-rdk-vendor-realtek-common](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/blob/main/CHANGELOG.md)

- RDKEVD-1421:Dummy RDKE VL Release [2ba6e75](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/2ba6e756190f0de6f49123c1b19267d11f1e3d90)

## [meta-mediarite-vendor](https://github.com/rdk-e/meta-mediarite-vendor/blob/main/CHANGELOG.md)

- Adding git@ to SRC_URI [a328802](https://github.com/rdk-e/meta-mediarite-vendor/commit/a3288026b0e2c268cd457b109ea33923cc8c16f1)
- MRITE-25: Set hash to 1.0 tag [fc95360](https://github.com/rdk-e/meta-mediarite-vendor/commit/fc953608fcb6ace0075b5d0fa798752100eb86ba)
- MRITE-24: Set config hash to 1.0 tag [0f1bc01](https://github.com/rdk-e/meta-mediarite-vendor/commit/0f1bc019af1bb47ab9fe57eddcdf07c61db6650d)
- MRITE-25: Add recipe for broadcast-hal-libs [8a71799](https://github.com/rdk-e/meta-mediarite-vendor/commit/8a71799b507359820d29b22ff477c88918cf3ac2)
- Update CODEOWNERS [443554f](https://github.com/rdk-e/meta-mediarite-vendor/commit/443554f2cb19ee40e7f065a53eb327c2e7e002b5)
- MRITE-24: Adding broadcast hal configuration yocto recipe ( [#19](https://github.com/rdk-e/meta-mediarite-vendor/pull/19))
- MRITE-17 MRITE-29: Update Broadcast HAL MTK [bec0de6](https://github.com/rdk-e/meta-mediarite-vendor/commit/bec0de6d8569f408ed131fe66dbab9cdf75bce85)
- MRITE-30: Release new BroadcastHAL API version to get better logging [9dc6d2b](https://github.com/rdk-e/meta-mediarite-vendor/commit/9dc6d2bcf11f0480ea272595cc75cc5e6a398391)
- MTK-702: Mediarite Playback Crash [6393e7f](https://github.com/rdk-e/meta-mediarite-vendor/commit/6393e7f95177462f0a1f0c41667724ddc4b4178d)
- RDKEVD-506: Deliver MTK Specific Broadcast HAL Implementation [c0e02ec](https://github.com/rdk-e/meta-mediarite-vendor/commit/c0e02ec667b4d04b262ea2a2c6eabe307d33e452)
- RDKEVD-504: Deliver Broadcast HAL Definition into Vendor Layer [2a1a217](https://github.com/rdk-e/meta-mediarite-vendor/commit/2a1a2175ea37df517b58966f2b69b7557d396d78)
- RDKEVD-504: Deliver Broadcast HAL Definitions into Vendor Layer [68f992d](https://github.com/rdk-e/meta-mediarite-vendor/commit/68f992d0bbce51e0208d7e828400bef0263fe3c0)
- RDKEVD-141 : update mediarite artifacts for apache 4k mtc same as apache 4k [08e8038](https://github.com/rdk-e/meta-mediarite-vendor/commit/08e8038f013b9821e618db3d0e0d2199298b76cb)
- RDKTV-34223 : kirkstone migration changes [7b84b90](https://github.com/rdk-e/meta-mediarite-vendor/commit/7b84b900fb2a06972642533bdfd4f602b87f3864)



## Changes in component repositories

## ['hdmiservice'](https://github.com/rdk-e/hdmiservice-realtek/blob/main/CHANGELOG.md)

- Add HdmiService Coverity fixes [378a38d](https://github.com/rdk-e/hdmiservice-realtek/commit/378a38d2e72f73e3656872d5853412f7f5066a58)
- RDKEVD-799: Add Set / Get AVI content Type and Scan Information [55bacc8](https://github.com/rdk-e/hdmiservice-realtek/commit/55bacc875c01931f1ee4db821e0ec48304339f17)
- RDKEVD-1279: Initial HDMI_WRAP_VIDEO_CONFIG for HDMI_WRAP_GET_TV_SYSTEM_SETTING [8b76bd6](https://github.com/rdk-e/hdmiservice-realtek/commit/8b76bd67b017e419fd3309ae0901fb6f78cb3a93)
## ['sysint-oem'](https://github.com/rdk-e/sysint-xione-rtk/blob/main/CHANGELOG.md)

- RDKEVD-1107: UNII3 - Removal of the RFC changes [5858d72](https://github.com/rdk-e/sysint-xione-rtk/commit/5858d727fc1f3f0f04893a0f65f7d9f90b9dd735)
- Add CODEOWNERS file [9ec74d2](https://github.com/rdk-e/sysint-xione-rtk/commit/9ec74d2d300d2acfeb4e94779e959f36c7272381)
- XIONE-15802: the realtime process setting for audio dec/enc [f6c91ca](https://github.com/rdk-e/sysint-xione-rtk/commit/f6c91ca577b27a42f12e2a26ed0939f9eca898e1)
- SERXIONE-5468, RDK-50830: support Canada on US XiOne [981e23d](https://github.com/rdk-e/sysint-xione-rtk/commit/981e23d41bbfcb830833046f7a48d83022ed6d9a)
## ['product-firmware-pb'](https://github.com:rdk-e/firmware-prebuilt-xione-soc-realtek.git/blob/main/CHANGELOG.md)

