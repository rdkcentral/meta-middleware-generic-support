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
|Date|16 May 2025|
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

The aim of this release to provide the R37 sync vendor layer. This release will provide a versioned "meta-vendor-xione-realtek-release" that will be used by the middleware as well as image assembler.

### The scope of this release includes:

- [R37] Code Sync from 8.1_p1v RDK-V. [RDKEVD-936](https://ccp.sys.comcast.net/browse/RDKEVD-936)
- Provide WNC-XOE vendor delivery. [RDKEVD-1232](https://ccp.sys.comcast.net/browse/RDKEVD-1232)
- wifi mac from flash. [RDKEVD-562](https://ccp.sys.comcast.net/browse/RDKEVD-562)
- stack layer gst svp ext error. [RDKEVD-106](https://ccp.sys.comcast.net/browse/RDKEVD-106)
- gpu usage cgroup is zero. [RDKEMW-3089](https://ccp.sys.comcast.net/browse/RDKEMW-3089)
- Add permission for av metrics driver. [RDKEVD-772](https://ccp.sys.comcast.net/browse/RDKEVD-772)
- Bt wakeup issue with XR100. [RDKEVD-866](https://ccp.sys.comcast.net/browse/RDKEVD-866)
- Revert zero-warning policy changes. [RDKEVD-970](https://ccp.sys.comcast.net/browse/RDKEVD-970)
- v2.0.0 release for rdk-gstreamer-utils-rtk. [RDK-55089](https://ccp.sys.comcast.net/browse/RDK-55089)
- key re map for xr15 and xr16. [RDKEVD-825](https://ccp.sys.comcast.net/browse/RDKEVD-825)
- Updating Westeros to latest 1.01.58. [RDK-56684](https://ccp.sys.comcast.net/browse/RDK-56684)
- bt log flood issue. [RDKEVD-724](https://ccp.sys.comcast.net/browse/RDKEVD-724)


## Release layer and components

### Vendor Release Components

| Vendor Release Components | New Version (7.0.0) | Version in Previous Release (6.0.2) |
|------------|---------|------------------------------------|
| Kernel & DTB | | 4.9.119.01-r6  | |
| packagegroup-vendor-layer | 7.0.0-r0 | 6.0.2-r0 | [6.0.2...7.0.0](https://github.com/rdk-e/meta-oem-realtek-stream/compare/6.0.2...7.0.0) |
| packagegroup-common-vendor-layer | 1.0.5-r0 | 1.0.2-r0 |  |

### Stack layer

| Layer | Tag |
|------|------|
| [meta-vendor-release](https://github.com/rdk-e/meta-vendor-xione-realtek-release) | [7.0.0](https://github.com/rdk-e/meta-vendor-xione-realtek-release/tree/7.0.0) |

#### Artifactory Location for IPKs

| Product | Location |
|------------|---------|
| XiOne-UK | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-uk-release/7.0.0/xione-uk/ipks/debug |
| XiOne-Foxtel | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-foxtel-release/7.0.0/xione-foxtel/ipks/debug |
| XiOne-DE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-de-release/7.0.0/xione-de/ipks/debug |
| XiOne-Alpaca-De | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-alpaca-de-release/7.0.0/xione-alpaca-de/ipks/debug |
| XOE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xfinity-stream-box-release/7.0.0/xfinity-stream-box/ipks/debug |
| WNC Xfinity | https://partners.artifactory.comcast.com/ui/repos/tree/General/wnc-xfinity-stream-box-release/7.0.0/wnc-xfinity-stream-box/ipks/debug |
| RTK-Flex2 | https://partners.artifactory.comcast.com/ui/repos/tree/General/xumo-stream-box-release/7.0.0/xumo-stream-box/ipks/debug |


### Meta Repos

#### Meta repos maintained by layers layer

| Meta Repo | New Version | Version in Previous Release (6.0.2) | ChangeList |
|------------|---------|------------------------------------|--------------|
| [meta-rdk-auxiliary](#meta-rdk-auxiliary) |  **1.2.0** | 4.1.5 | [4.1.5...1.2.0](https://github.com/rdkcentral/meta-rdk-auxiliary/compare/4.1.5...1.2.0) |
| [meta-oss-reference-release](#meta-oss-reference-release) |  **4.6.0** | 4.4.1 | [4.4.1...4.6.0](https://github.com/rdkcentral/meta-oss-reference-release/compare/4.4.1...4.6.0) |
| [meta-rdk-oss-reference](#meta-rdk-oss-reference) |  **1.2.0** | 4.4.1 | [4.4.1...1.2.0](https://github.com/rdkcentral/meta-rdk-oss-reference/compare/4.4.1...1.2.0) |
| meta-rdk-tools |  | 2.3.1 | |
| meta-vts |  | 1.2.0 | |
| [meta-rdk-soc-realtek](#meta-rdk-soc-realtek) |  **4.0.7** | 4.0.6 | [4.0.6...4.0.7](https://github.com/rdk-e/meta-rdk-soc-realtek/compare/4.0.6...4.0.7) |
| meta-oem-stream |  | 4.0.3 | |
| [meta-oem-realtek-stream](#meta-oem-realtek-stream) |  **7.0.0** | 6.0.2 | [6.0.2...7.0.0](https://github.com/rdk-e/meta-oem-realtek-stream/compare/6.0.2...7.0.0) |
| [meta-rdk-vendor-realtek-common](#meta-rdk-vendor-realtek-common) |  **1.0.5** | 1.0.3 | [1.0.3...1.0.5](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/compare/1.0.3...1.0.5) |
| [meta-oss-vendor-realtek](#meta-oss-vendor-realtek) |  **4.0.7** | 4.0.5 | [4.0.5...4.0.7](https://github.com/rdk-e/meta-oss-vendor-realtek/compare/4.0.5...4.0.7) |
| meta-mediarite-vendor |  | 10.0.34.0a2-r2 | |

#### Meta repos common for RDK-E

| Meta Repo | New Version | Version in Previous Release (6.0.2) | ChangeList |
|------------|---------|------------------------------------|--------------|
| **buildscripts** ||||
| build-scripts |  | 4.1.1 | |
| | | | |
| **buildsupport** ||||
| meta-image-support |  | 4.2.2 | |
| meta-stack-layering-support |  **1.2.0** | 1.1.2 | [1.1.2...1.2.0](https://github.com/rdkcentral/meta-stack-layering-support/compare/1.1.2...1.2.0) |
| | | | |
| **oe** ||||
| meta-openembedded |  **rdk-4.0.0** | v4.1.0 | [v4.1.0...rdk-4.0.0](https://github.com/rdkcentral/meta-openembedded/compare/v4.1.0...rdk-4.0.0) |
| poky |  **rdk-4.1.0** | v4.1.4 | [v4.1.4...rdk-4.1.0](https://github.com/rdkcentral/poky/compare/v4.1.4...rdk-4.1.0) |
| meta-python2 |  **rdk-4.0.0** | v4.0.0 | [v4.0.0...rdk-4.0.0](https://github.com/rdkcentral/meta-python2/compare/v4.0.0...rdk-4.0.0) |
| | | | |
| **extention** ||||
| meta-rdk-oss-ext |  **1.2.0** | NA | [1.2.0](https://github.com/rdk-e/meta-rdk-oss-ext/commits/1.2.0) |
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
| meta-rdk-halif-headers |  **1.0.3** | 1.0.2 | [1.0.2...1.0.3](https://github.com/rdkcentral/meta-rdk-halif-headers/compare/1.0.2...1.0.3) |
| meta-rdk-cpc-halif-headers |  | 1.0.0 | |
| | | | |
| **products** ||||
| meta-product-xione |  **3.3.5** | 3.3.3 | [3.3.3...3.3.5](https://github.com/rdk-e/meta-product-xione/compare/3.3.3...3.3.5) |
| | | | |
| **binder** ||||
| meta-binder |  | 1.0.0 | |
| | | | |

### Interface versions

| # | HAL Interface Header (rdkcentral github) | New Version (7.0.0) | Versionfrom Previous Release (6.0.2)
|---|------------------------------------------|-------------|----------------------|
| 1 | media-utils-headers | | 1.0.5 |
| 2 | hdmicecheader | | 1.3.10 |
| 3 | deepsleep-manager-headers | | 1.0.4 |
| 4 | power-manager-headers | | 1.0.3 |
| 5 | devicesettings-hal-headers | **4.1.2** | 4.1.3 |
| 6 | tvsettings-hal-headers | | 2.1.0 |
|   |   |  |  |
|   | RDK HAL Headers (RDKE github) |  |  |
|   |   |  |  |
| 7 | iarmmgrs-hal-headers | | 1.0.1 |
| 8 | closedcaption-hal-headers |  | 1.0.0  |
| 9 | iarmbus-headers | | 1.0.1 |
| 10 | rdk-gstreamer-utils-headers | | 1.0.0 |

### Limitations

It should be noted that some services may not run as they have dependencies with other layers. Additionally, the exclusion of inter-layer bbappends/patches might result in the failure to start some services. These limitations should be taken into consideration during the verification process. These Limitations will be addressed in Future Releases.

### Middleware Integration

##### XiOne-UK
- Created the  middleware image `"SKXI11ADS_MIDDLEWARE_DEV_feature_RDKEVD-936-VL-7.0.0_20250512094115.bin for UK SKXI11ADSSOFT_MIDDLEWARE_DEV_feature_RDKEVD-936-VL-7.0.0_20250512142109.bin for Foxtel"` from the `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Middleware-Build/17507/ for UK https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/view/1-RDKE-Pipeline-Jobs/job/RTK-XIONE-Foxtel-Middleware-Build/868/s3/ for foxtel"`

- Testing done by using the feature branch `"feature/RDKEVD-936-VL-7.0.0"` based on the tag `"refs/tags/2.11.0"` included of latest vendor ipk feed info https://github.com/rdk-e/meta-vendor-xione-realtek-release/blob/release/7.0.0/conf/machine/include/vendor.inc and the middleware manifest from 2.11.0 tag.

- Tag details here `"XiOne-UK(refs/tags/2.11.0)"`. We created the feature branch from this tag (https://github.com/rdk-e/rdke-middleware-manifest/tree/feature/RDKEVD-936-VL-7.0.0)

#### Image assembler side

- We are unable to generate the Image Assembler with 2.11.0+RDNRDP7 supported middleware manifest. So we couldn't verify the full stack build from image assembler side.
- Please check the error build rhttps://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Image-Assembler-Build/1883/console)

#### Middleware side

- This vendor build supports NRDP7, so please make sure required changes are present in the middleware side.

## Build instructions

- Steps to check out and build the vendor layer project [https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project](https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project)
- Steps to check out and build the image assembler project [https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler](https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler)


### Boot Command

#### Copy image to device /mnt/usb or /opt partitions or connect and mount USB having the image binn- Execute FlashApp command

- Move to directory containing the image
- FlashApp \<dirname\> \<imagename\>
- eg. FlashApp /mnt/usb/SKXI11ADS_VENDOR_DEV_refs_tags_7.0.0_20250511200945.bin

#### USB Flash Method using xboot prompt

- Copy the image `"SKXI11ADS_VENDOR_DEV_refs_tags_7.0.0_20250511200945.bin"` to the usb and connect to the STB
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

- Created the `"vendor test image"` `"SKXI11ADS_VENDOR_DEV_refs_tags_7.0.0_20250511200945.bin for XiOne-UK and for all other variants as well"` using the vendor layer jenkins job `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Vendor-Release-Build/76/"`
- Successfully booted the `"vendor test image"` and obtained the shell prompt.
- Verified vendor layer services up and running
- Verified IP acquisition via Ethernet
- Played clear AV with gst-play-1.0.
- Verified image flashing using FlashApp

Testing details in [RDKEVD-1299](https://ccp.sys.comcast.net/browse/RDKEVD-1299)

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
| May 16 2025 |  SKXI11ADSSOFT_7.0.0_VENDOR_DEV | 1547376 | 441861 | 28752 | 470613 | 2176059 |
| Mar 26 2025 |  SKXI11ADSSOFT_VENDOR_DEV_refs_tags_6.0.2_20250324172329 | 1547376 | 438063 | 28223 | 466286 | 2180386 |
| Jan 28 2025 |  SKXI11ADSSOFT_VENDOR_DEV_refs_tags_5.0.2_20250124172925 | 1547368 | 443566 | 28438 | 472004 | 2174676 |
| Dec 30 2024 |  SKXI11ADSSOFT_VENDOR_DEV_refs_tags_5.0.0_20241224173052 | 1547368 | 450228 | 32825 | 483053 | 2163627 |

##### XiOne-DE

| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| May 16 2025 |  SKXI11AIS_7.0.0_VENDOR_DEV | 1547348 | 463950 | 29451 | 493401 | 2153299 |
| Mar 26 2025 |  SKXI11AIS_VENDOR_DEV_refs_tags_6.0.2_20250324181951 | 1547348 | 460736 | 28870 | 489606 | 2157094 |


##### XiOne-Alpaca-DE

| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| May 16 2025 |  SKXI11AEISODE_VENDOR_DEV_refs_tags_7.0.0_20250511204108 | 1547376 | 440746 | 28691 | 469437 | 2177235 |
| Mar 26 2025 |  SKXI11AEISODE_VENDOR_DEV_refs_tags_6.0.2_20250324172723 | 1547376 | 445013 | 28365 | 473378 | 2173294 |


##### Xfinity-stream-box

| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| May 16 2025 |  SCXI11AIC_VENDOR_DEV_refs_tags_7.0.0_20250511210103 | 1547356 | 457862 | 28380 | 486242 | 2160450 |
| Mar 26 2025 |  SCXI11AIC_VENDOR_DEV_refs_tags_6.0.2_20250324172822 | 1547356 | 456510 | 29065 | 485575 | 2161117 |


##### Xumo-stream-box

| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| May 16 2025 |  SCXI11AIC_VENDOR_DEV_refs_tags_7.0.0_20250511211029 | 1547356 | 456878 | 29452 | 486330 | 2160362 |
| Mar 26 2025 |  SCXI11AIC_VENDOR_DEV_refs_tags_6.0.2_20250324190109	 | 1547356 | 456595 | 28437 | 485032 | 2161660 |

##### WNC Xfinity

| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| May 16 2025 |  WNXI11AEI_VENDOR_DEV_refs_tags_7.0.0_20250512160923 | 1547356 | 472994 | 22047 | 495041 | 2151651 |


### Fullstack image testing

- We are unable to generate the Image Assembler with 2.11.0+RDNRDP7 supported middleware manifest. So we couldn't verify the full stack build from image assembler side.
- Please check the error build rhttps://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Image-Assembler-Build/1883/console)

## Components details in 'packagegroup-common-vendor-layer'

| # | Vendor layer Component | New PV-PR (7.0.0) | PV-PR in Previous Release (6.0.2)| New SRCREV | SRCREV in Previous Release (6.0.2)| Diff |
|---|------------------------------------------|-------------|----------------------|-----------|------------|-----|
| 1 | libdrm | | 2.4.110-r0 |  | NA | |
| 2 | cairo | | 1.16.0-r1 |  | NA | |
| 3 | libepoxy | | 1.5.9-r1 |  | NA | |
| 4 | python3-pygobject | | 3.34.0-r0 |  | NA | |
| 5 | pango | | 1.44.7-r0 |  | NA | |
| 6 | librsvg | | 2.40.21-r0 |  | NA | |
| 7 | python3-pycairo | | 1.19.0-r0 |  | NA | |
| 8 | xsign | | 4.0.1-r2 |  | NA | |
| 9 | mfrlib-hal-xione | | 8.1.0-r0 |  | NA | |
| 10 | wipe-disk-partitions | | 1.0.0-r0 |  | NA | |
| 11 | secauthn | | 1.0.0-r0 |  | NA | |
| 12 | testagent-loader | | 2.3.0-r1 |  | NA | |
| 13 | qca6390-mod-wifi | | 1.0.0-r0 |  | NA | |
| 14 | qca-hciattach | | 1.0.0-r1 |  | NA | |
| 15 | emmc-fw-update | | 1.0.0-r0 |  | NA | |
| 16 | mount-disk-partition | | 1.0.0-r0 |  | NA | |
| 17 | image-verifier-lib | | 6.2.0-r1 |  | NA | |
| 18 | fmtsasidlibs | | 2.4-r1 |  | NA | |
| 19 | led-boot-pattern | | 1.0.0-r1 |  | NA | |
| 20 | rtkmali | | 2.8.0-r0 |  | NA | |
| 21 | rtk-platform-conf | | 2.6.0-r1 |  | NA | |
| 22 | emmc-read-util | | 4.0.0-r0 |  | 6281804 | |
| 23 | sky-dropbear | | 1.0.0-r1 |  | NA | |
| 24 | sysint-soc | | 3.0.0-r0 |  | f8dded4 | |
| 25 | sky-led-app | | 1.0.0-r0 |  | NA | |
| 26 | audiocapturemgr-vendor | | 1.0.0-r0 |  | a063707 | |
| 27 | displayinfo-soc | | 1.0.0-r0 |  | e7b2c24 | |
| 28 | ffmpeg | | 4.2.2-r1 |  | NA | |


## Components Removed

| # |  Component Name | Reason |
|----|--------------|------|
| 1 | blewakeupenabler |  |


## Components details in 'packagegroup-vendor-layer'

| # | Vendor layer Component | New PV-PR (7.0.0) | PV-PR in Previous Release (6.0.2)| New SRCREV | SRCREV in Previous Release (6.0.2)| Diff |
|---|------------------------------------------|-------------|----------------------|-----------|------------|-----|
| 1 | media-utils-soc-realtek | | 1.0.5-1.0.0-r1 |  | 5e71382 | |
| 2 | closedcaption-hal-realtek | | ${PV:pn-closedcaption-hal-headers}-3.0.0-r0 |  | 2f365d0 | |
| 3 | hdmicec-hal-realtek | | 1.3.10-3.0.1-r0 |  | 950a89e | |
| 4 | iarmmgrs-hal-realtek | | 1.0.1-2.0.0-r1 |  | a15d303 | |
| 5 | [rdk-gstreamer-utils-platform](#rdk-gstreamer-utils-platform) | **1.0.0-2.0.0** | 1.0.0-1.0.0-r0 | **6ba04b9** | 739cdb7 |  [739cdb7...6ba04b9](https://github.com/rdk-e/rdk-gstreamer-utils-realtek/compare/739cdb76168a8071ee96eb255a584afbb110f719...6ba04b9cfa06bbd061e166f1aab4ecf330b5f018) |
| 6 | devicesettings-hal-realtek | **4.1.2-4.1.0-r0** | 4.1.3-4.0.4-r0 |  |  | |
| - |  - devicesettings-hal-realtek_devicesettingssocrealtek | |  | **6e9ed62** | 5ba3b40 |  [](https://github.com/rdk-e/rdk-gstreamer-utils-realtek) |
| - |  - devicesettings-hal-realtek_devicesettingsskyxione | |  |  | 6929995 | |
| 7 | deepsleepmgr-hal-realtek | **1.0.4-1.0.2-r0** | 1.0.4-1.0.0-r0 | **adaf974** | cbe53a0 |  [](https://github.com/rdk-e/rdk-gstreamer-utils-realtek) |
| 8 | pwrmgr-hal-realtek | | 1.0.3-1.0.0-r0 |  | c91e047 | |
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
| 46 | westeros-simpleshell | **1.01.58-r0** | 1.01.57-r0 | **3472e86** | 3cd00f7 |  [](https://github.com/rdk-e/rdk-gstreamer-utils-realtek) |
| 47 | westeros-simplebuffer | **1.01.58-r0** | 1.01.57-r0 | **3472e86** | 3cd00f7 |  [](https://github.com/rdk-e/rdk-gstreamer-utils-realtek) |
| 48 | westeros-soc | **1.01.58-r0** | 1.01.57-r0 | **3472e86** | 3cd00f7 |  [](https://github.com/rdk-e/rdk-gstreamer-utils-realtek) |
| 49 | westeros-sink | **1.01.58-r0** | 1.01.57-r0 |  |  | |
| - |  - westeros-sink_westeros | |  | **3472e86** | 3cd00f7 |  [](https://github.com/rdk-e/rdk-gstreamer-utils-realtek) |
| - |  - westeros-sink_realtek | |  | **e32f912** | 80d02bd |  [](https://github.com/rdk-e/rdk-gstreamer-utils-realtek) |
| 50 | westeros | **1.01.58-r0** | 1.01.57-r0 | **3472e86** | 3cd00f7 |  [](https://github.com/rdk-e/rdk-gstreamer-utils-realtek) |
| 51 | essos | **1.01.58-r0** | 1.01.57-r0 | **3472e86** | 3cd00f7 |  [](https://github.com/rdk-e/rdk-gstreamer-utils-realtek) |
| 52 | python3-pygobject | | 3.34.0-r0 |  | NA | |
| 53 | make-mod-scripts | | 1.0-r0 |  | NA | |
| 54 | python3-pycairo | | 1.19.0-r0 |  | NA | |
| 55 | sky-fpbutton-driver | | 3.0.0-r0 |  | acd582d | |
| 56 | splashscreen-viewer | | 2.0.0-r0 |  | 41e70a2 | |
| 57 | rtk-tee | | 1.0.0-r0 |  | NA | |
| 58 | secauthn | | 1.0.0-r0 |  | NA | |
| 59 | secapi-rtk | | 2.1.0-r2 |  | 95b6bd4 | |
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
| 72 | hank-mod-mali | | 3.0.0-r0 |  | a574cc2 | |
| 73 | rtkv1sink | | 2.0.0-r1 |  | 67bdf5b | |
| 74 | led-boot-pattern | | 1.0.0-r0 |  | NA | |
| 75 | rtkmali | | 2.8.0-r0 |  | NA | |
| 76 | platform-lib | | 2.6.0-r4 |  | NA | |
| 77 | [rtk-audio-service](#rtk-audio-service) | **3.1.0-r0** | 3.0.1-r0 | **859de56** | d444891 |  [d444891...859de56](https://github.com/rdk-e/RtkAudioService-soc-realtek/compare/d4448911c52b758d524f88b6e4ad88e69107a5f2...859de560c6e05e1b9c8cdf8bf7353974de7b0c5b) |
| 78 | [hdmiservice](#hdmiservice) | **4.1.0-r0** | 4.0.2-r0 | **8a992bd** | 022ee20 |  [022ee20...8a992bd](https://github.com/rdk-e/hdmiservice-realtek/compare/022ee202f887de70a4c8167f6c6ce17ed73b5ea4...8a992bd35d1cdf85dae163c54969c81628006e14) |
| 79 | rtkpcrclksink | | 2.0.0-r0 |  | c8272d9 | |
| 80 | blewakeupenabler | **1.4.0-r0** | NA | **36408d5** | NA |  [](https://github.com/rdk-e/hdmiservice-realtek) |
| 81 | linux-libc-headers | **4.9-r8** | 4.9-r6 |  | NA | |
| 82 | packagegroup-kernel-modules | **4.9.119.01-r8** | 4.9.119.01-r6 |  | NA | |
| 83 | [linux-hank](#linux-hank) | **4.9.119.01-r8** | 4.9.119.01-r6 | **66a4a9f** | 92f6fc3 |  [92f6fc3...66a4a9f](https://github.com/rdk-e/linux_kernel-soc-realtek/compare/92f6fc37bec6fd0a220cc27e6494aea8dec6b06d...66a4a9f40752ad09e8402e5ed68ef89ad9f64891) |
| 84 | mediarite-vendor | | 10.0.34.0a2-r0 |  | NA | |
| 85 | gst-plugins-mediarite | | 1.0-r0 |  | NA | |
| 86 | [rtkaudiosink](#rtkaudiosink) | **3.1.0-r0** | 3.0.2-r0 | **2feae17** | eaee836 |  [eaee836...2feae17](https://github.com/rdk-e/rtkaudiosink-soc-realtek/compare/eaee83681d35c7dc0cf4331450a4f7c317451459...2feae17880a6d032f4b7f82910e25688c5cc948b) |
| 87 | mfi-ree | | 2.0.0-r0 |  | 4941717 | |
| 88 | sysint-oem | | 3.0.0-r0 |  | 50d274a | |
| 89 | [sysint-soc](#sysint-soc) | **3.0.2-r0** | 3.0.1-r0 | **9f68324** | 7d06f20 |  [7d06f20...9f68324](https://github.com/rdk-e/sysint-soc-rtk/compare/7d06f20db4a70f8d2a24f095541495157ee45842...9f68324f0cc2306e7fb5d6f19aa54d5a5e298f36) |
| 90 | apparmor-vendor | | 2.3.2-r0 |  | 4de375b | |
| 91 | directfb | | 1.7.7-r0 |  | NA | |
| 92 | [product-firmware-pb](#product-firmware-pb) | **1.0.5-r0** | 1.0.3-r0 | **ac17418** | a5b256f |  [a5b256f...ac17418](https://github.com:rdk-e/firmware-prebuilt-xione-soc-realtek.git/compare/a5b256f59eb7dab17ee1e2de870b348ce150fb8e...ac174188d8e155240e20a2fe39f286cb3f4cc3df) |
| 93 | testagentlib | | 3.0.2-r0 |  |  | |
| - |  - testagentlib_testagentlib | |  |  | b8eb1f8 | |
| - |  - testagentlib_xione_factory | |  |  | 6281804 | |
| 94 | testagent-loader | | 2.3.0-r0 |  | NA | |
| 95 | libbinder | | 1.0.0-r1 |  | 0f7a23b | |
| 96 | aidl-generator-native | | 1.0.0-r1 |  | 0f7a23b | |
| 97 | flash-aidl | | 1-r0 |  | ddcceef | |
| 98 | image-hal-service | | 1.0.0-r0 |  | 7eb82c9 | |
| 99 | platform-imagehal-lib | | 1.0.0-r0 |  | NA | |




## Vendor Layer Component Integration Details

TODO optional Provide any wiki page or links containing detials of vendor layer components



## Consolidated change list from vendor layer repositories

## Changes in meta repositories

## [meta-rdk-auxiliary](https://github.com/rdkcentral/meta-rdk-auxiliary/blob/main/CHANGELOG.md)

## [meta-oss-reference-release](https://github.com/rdkcentral/meta-oss-reference-release/blob/main/CHANGELOG.md)

## [meta-rdk-oss-reference](https://github.com/rdkcentral/meta-rdk-oss-reference/blob/main/CHANGELOG.md)

## [meta-rdk-soc-realtek](https://github.com/rdk-e/meta-rdk-soc-realtek/blob/main/CHANGELOG.md)

- RDKEVD-936: [R37] Code Sync from 8.1_p1v RDK-V ( [#126](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/126))
- RDKEVD-106: Stack-Layer-secapi-netflix-error [845b0ea](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/845b0ea21867606ea57fd4852a1917d66f3e5d59)
- RDKEVD-477 : Revert Implement Zero-Warning Policy and Code Cleanup [3d779f0](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/3d779f0298008d0b9bc37c2519679e54ad3aa5bc)
- Add CODEOWNERS file [1eb7824](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/1eb78247460070c4970198fb668082df272e3f9f)
- RDKEVD-106: Enable IPK mode support [75cdaf6](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/75cdaf67169f9c94d82e04e56f67ce37040d87f9)
- RDKEVD-772: 1.Add av metrics node permission. 2.Update platform-lib. ( [#115](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/115))
- RDKEVD-484: To fix admix_mode will not be applied if its 0. [347bca3](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/347bca345bfad58b10cfeca55f4bd9f0893f5117)
- XIONE-16581: Add MS12 setting. ( [#122](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/122))
## [meta-oem-realtek-stream](https://github.com/rdk-e/meta-oem-realtek-stream/blob/main/CHANGELOG.md)

- RDKEVD-1299 : Release 7.0.0. [59d0669](https://github.com/rdk-e/meta-oem-realtek-stream/commit/59d06693f1cf66db03d967305b04c865a91c8bab)
- RDKEVD-1232: WNC-XOE inclusion [d242c7b](https://github.com/rdk-e/meta-oem-realtek-stream/commit/d242c7ba58d9e958fd7191f3cf3faafe3dc78d00)
- RDKEVD-936: [R37] Code Sync from 8.1_p1v RDK-V [4acd289](https://github.com/rdk-e/meta-oem-realtek-stream/commit/4acd28931d9f65cada244c1e994b880d4ae6e7e8)
- RDKEVD-772 : Fix kernel 5.10 driver build error [eb807e5](https://github.com/rdk-e/meta-oem-realtek-stream/commit/eb807e5d9bcd97e7f19c46e5e31ec1102d9be38a)
- RDKEVD-106: stack layer gst-svp-ext error [991df77](https://github.com/rdk-e/meta-oem-realtek-stream/commit/991df77d415556d0171567e1c06d6e465cce67c0)
- Add CODEOWNERS file [fa219e0](https://github.com/rdk-e/meta-oem-realtek-stream/commit/fa219e0b952cee0bd946f12beb6300c1ed96512d)
- RDKEVD-562: wifi mac from flash. [4be87bc](https://github.com/rdk-e/meta-oem-realtek-stream/commit/4be87bc1873c0ceba9d1178d0cde51f39daefbc2)
- RDKEVD-866 : Bt wakeup not working in DS using XR100 [f13a84e](https://github.com/rdk-e/meta-oem-realtek-stream/commit/f13a84ec6ad28b4c0654ad532636bb49b6efbb4e)
- RDKEVD-936: [R37] Code Sync from 8.1_p1v RDK-V [31257b1](https://github.com/rdk-e/meta-oem-realtek-stream/commit/31257b1e047496efe73dc53d696a1ae0cadaaeb4)
- RDKEMW-3089 : gpu usage cgroup is zero [0d1c2d8](https://github.com/rdk-e/meta-oem-realtek-stream/commit/0d1c2d89c5a7132cd0a6382d8941e8ec4ce9d80f)
- RDKEVD-970: Revert "RDKEVD-477 : Implement Zero-Warning Policy and Code Cleanup" [973df6a](https://github.com/rdk-e/meta-oem-realtek-stream/commit/973df6a8e6f40987bd583d1b676651bc10471ac1)
- RDK-55089: Release 2.0.0 [655130c](https://github.com/rdk-e/meta-oem-realtek-stream/commit/655130c10d77639fa52e66ceaa95b17462e1f35f)
- RDKEVD-772: Add av_metrics kernel module to package group [f6d3b35](https://github.com/rdk-e/meta-oem-realtek-stream/commit/f6d3b35674cfa67564f05104c53b354e45b2e8cd)
- RDKEVD-898:Hotfix build failure [5933516](https://github.com/rdk-e/meta-oem-realtek-stream/commit/5933516e1b920a20ac0ba4769cae6d3a7576d837)
- RDKEVD-825: IR Key re-mapping for XR15,XR16 [88edc2c](https://github.com/rdk-e/meta-oem-realtek-stream/commit/88edc2c0f85d4308491970a41f2bfe93a895acd8)
- RDKEVD-772 : Add permission for av metrics driver. [eff4179](https://github.com/rdk-e/meta-oem-realtek-stream/commit/eff4179466fff740d2d0ab31caa7af47ca781880)
- RDKEVD-724: bt log flood issue [10bd4c9](https://github.com/rdk-e/meta-oem-realtek-stream/commit/10bd4c917701de7c9ad57ac7d0ac5436b18649a2)
- RDKEVD-724:bt-log-flood-issue. [ae48650](https://github.com/rdk-e/meta-oem-realtek-stream/commit/ae486502f46a8c5d41a5e330b6a32ee3a82a9983)
- RDK-56684: Update Westeros to 1.01.58 (latest) [3f905ba](https://github.com/rdk-e/meta-oem-realtek-stream/commit/3f905ba90e627ec378aa06c2fcf7a8bfba02c402)
- RDK-56684: Update Westeros to 1.01.58 (latest) [514dd58](https://github.com/rdk-e/meta-oem-realtek-stream/commit/514dd5831679b123666cb0ed804d0e3376c31f0e)
- Update layer.conf [bf1badf](https://github.com/rdk-e/meta-oem-realtek-stream/commit/bf1badf5568f77b4b7a0fd8c3169d414d242fcfe)
- Update vendor-test-image.bb [0e13b93](https://github.com/rdk-e/meta-oem-realtek-stream/commit/0e13b93f53fb16c398cbd7e825228c219a976572)
## [meta-rdk-vendor-realtek-common](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/blob/main/CHANGELOG.md)

- RDKEVD-936: [R37] Code Sync from 8.1_p1v RDK-V [cb2d9ee](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/cb2d9ee946fc94badc8f81f4df2d97fe13b8d502)
- Add CODEOWNERS file [b07c3c8](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/b07c3c86155672434bf2e257ea58e859c16bf4cc)
- Update CODEOWNERS [26286a2](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/26286a28f15829dd6cb8716dcef6390542202775)
- RDKEVD-866: BT wakeup not working in DS using XR100 [5bf8967](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/5bf8967943478b7475282e7f72b0b518bf9995b8)
- RDKEVD-562: wifi mac from flash. [fa22578](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/fa22578703ed04cc1e23f0deb2755811a84c8a83)
## [meta-oss-vendor-realtek](https://github.com/rdk-e/meta-oss-vendor-realtek/blob/main/CHANGELOG.md)

- RDKEVD-1152: Fix the ITV ad black screen. [a1805bc](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/a1805bc3f7066bfb566ea3bfce7590d469eeb82f)
- Add CODEOWNERS file [7e157f3](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/7e157f3edb828deff58e4c1bed8fb40663de071c)
- RDKEVD-772: 1.Add av metrics node permission. 2.Update platform-lib. ( [#51](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/51))


## Changes in component repositories

## ['rdk-gstreamer-utils-platform'](https://github.com/rdk-e/rdk-gstreamer-utils-realtek/blob/main/CHANGELOG.md)

- RDK-55089: Sync layer with stable2 [9faa9f9](https://github.com/rdk-e/rdk-gstreamer-utils-realtek/commit/9faa9f9125c8b79db19326398b9088c54dd3c5dd)
- RDK-55089: Update rdk-gstreamer-realtek to support NRDP7 [33bf085](https://github.com/rdk-e/rdk-gstreamer-utils-realtek/commit/33bf085e07638503f5e3296f1a776fa247f45da5)
- RDK-55089: Update rdk-gstreamer-realtek to support NRDP7 [760eb8c](https://github.com/rdk-e/rdk-gstreamer-utils-realtek/commit/760eb8cbfe2cac1a9b3ff06cdb47d0eff9ef7f45)
- Add GitHub Actions workflow file [a03aeef](https://github.com/rdk-e/rdk-gstreamer-utils-realtek/commit/a03aeef1c5978ab3c765307218f1b7b7c25616dd)
## ['rtk-audio-service'](https://github.com/rdk-e/RtkAudioService-soc-realtek/blob/main/CHANGELOG.md)

- Add CODEOWNERS file [2ed9c12](https://github.com/rdk-e/RtkAudioService-soc-realtek/commit/2ed9c1265490dff3e323683514dd50534b82378a)
- ES1-2054 : Optimize PCM flow (squash 2) [450d8a8](https://github.com/rdk-e/RtkAudioService-soc-realtek/commit/450d8a80800b2946a72906dba7672fed8f5ac2ca)
- XIONE-15503 : Support hiredis pubsub event. [60a554c](https://github.com/rdk-e/RtkAudioService-soc-realtek/commit/60a554cc912b9756398db226fbac0f0a9a26f0da)
## ['hdmiservice'](https://github.com/rdk-e/hdmiservice-realtek/blob/main/CHANGELOG.md)

- Add CODEOWNERS file [9133660](https://github.com/rdk-e/hdmiservice-realtek/commit/9133660ffe6934f0e910976abe710ac339caaede)
- REALTEK-842: Enable HDR for non-UHD resolutions [067b495](https://github.com/rdk-e/hdmiservice-realtek/commit/067b495112397948137954a061a1f75ef7950939)
- XIONE-16731: Don't print EOTF if DV mode [1dd5848](https://github.com/rdk-e/hdmiservice-realtek/commit/1dd5848ee80bb207f95cd3119df139a2457688be)
## ['linux-hank'](https://github.com/rdk-e/linux_kernel-soc-realtek/blob/main/CHANGELOG.md)

- Add CODEOWNERS file [25e0eddc](https://github.com/rdk-e/linux_kernel-soc-realtek/commit/25e0eddc0f93cc95592547bbba4543e8ea93164e)
- RDKEVD-772 : Fix kernel 5.10 driver build error.(Squash 2) [515d7e5f](https://github.com/rdk-e/linux_kernel-soc-realtek/commit/515d7e5fdbee059eea531a52059da9f2eaf45eaa)
## ['rtkaudiosink'](https://github.com/rdk-e/rtkaudiosink-soc-realtek/blob/main/CHANGELOG.md)

- Add CODEOWNERS file [9433f0c](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/9433f0c85cc3bc57fd7279114f112c3e89ebf5d4)
- ES1-2054 : Enable low latency PCM flow [61a2352](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/61a235212a1548011f93e8c5b9bf7b44f32c06f2)
## ['sysint-soc'](https://github.com/rdk-e/sysint-soc-rtk/blob/main/CHANGELOG.md)

## ['product-firmware-pb'](https://github.com:rdk-e/firmware-prebuilt-xione-soc-realtek.git/blob/main/CHANGELOG.md)

