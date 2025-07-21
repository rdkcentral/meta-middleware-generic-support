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
|Date|21 Jul 2025|
|Author| rosmi.sebastian@sky.uk |

---

## Table of Contents

- [Vendor Layer Release Notes](#vendor-layer-release-notes)
  - [Build Information](#build-information)
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

This is a scheduled bi-weekly release from the vendor  [RDKEVD-2298](https://ccp.sys.comcast.net/browse/RDKEVD-2298). This release will provide a versioned "meta-vendor-xione-realtek-release" that will be used by the middleware as well as image assembler.
### The scope of this release includes:

- After a factory reset or whilst doing an activation when connecting to network the Stream device switches off [RDKEVD-2246](https://ccp.sys.comcast.net/browse/RDKEVD-2246)
- Playback error is displayed for any asset playback in apple tv.[RDKEVD-2179](https://ccp.sys.comcast.net/browse/RDKEVD-2179)
- The YouTube video freezes after switching apps [RDKEVD-2172](https://ccp.sys.comcast.net/browse/RDKEVD-2172)
- AV sync Gstreamer patch apply error stable2 [RDKEVD-1950](https://ccp.sys.comcast.net/browse/RDKEVD-1950)
- dsDisplay - Set/Get AVI Info frame APIs [XIONE-16706](https://ccp.sys.comcast.net/browse/XIONE-16706)
- Reformat partitions service failure [RDKEVD-2082](https://ccp.sys.comcast.net/browse/RDKEVD-2082)
- wipe-disk-partitions.service service failure is seen [XIONE-17494](https://ccp.sys.comcast.net/browse/XIONE-17494)
## Release layer and components

### Vendor Release Components

| Vendor Release Components | New Version (8.1.2) | Version in Previous Release (8.0.3) | Changelist |
|------------|---------|------------------------------------|------------|
| Kernel & DTB | | 4.9.119.01-r8  | |
| packagegroup-vendor-layer | 8.1.2-r0 | 8.0.3-r0 | [8.0.3....8.1.2](https://github.com/rdk-e/meta-oem-realtek-stream/compare/8.0.3...8.1.2) |
| packagegroup-common-vendor-layer | 1..1-r0 | 1.0.8-r0 |[1.0.8....1.1.1](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/compare/1.0.8...1.1.1)  |
### Stack layer

| Release meta Layer | Tag |
|------|------|
| [meta-vendor-xione-realtek-release](https://github.com/rdk-e/meta-vendor-xione-realtek-release) | [8.1.2](https://github.com/rdk-e/meta-vendor-xione-realtek-release/tree/8.1.2) |

#### Artifactory Location for IPKs

| Product | Location |
|------------|---------|
| XiOne-UK | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-uk-release/8.1.2/xione-uk/ipks/debug |
| XiOne-Foxtel | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-foxtel-release/8.1.2/xione-foxtel/ipks/debug |
| XiOne-DE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-de-release/8.1.2/xione-de/ipks/debug |
| XiOne-Alpaca-De | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-alpaca-de-release/8.1.2/xione-alpaca-de/ipks/debug |
| XOE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xfinity-stream-box-release/8.1.2/xfinity-stream-box/ipks/debug |
| WNC Xfinity | https://partners.artifactory.comcast.com/ui/repos/tree/General/wnc-xfinity-stream-box-release/8.1.2/wnc-xfinity-stream-box/ipks/debug |
| RTK-Flex2 | https://partners.artifactory.comcast.com/ui/repos/tree/General/xumo-stream-box-release/8.1.2/xumo-stream-box/ipks/debug |
### Meta Repos

#### Meta repos maintained by layers layer

| Meta Repo | New Version | Version in Previous Release (8.0.3) | ChangeList |
|------------|---------|------------------------------------|--------------|
| meta-rdk-auxiliary |  | 1.3.0 | |
| [meta-oss-reference-release](#meta-oss-reference-release) |  **4.7.1** | 4.7.0 | [4.7.0...4.7.1](https://github.com/rdkcentral/meta-oss-reference-release/compare/4.7.0...4.7.1) |
| [meta-rdk-oss-reference](#meta-rdk-oss-reference) |  **4.7.1** | 4.7.0 | [4.7.0...4.7.1](https://github.com/rdkcentral/meta-rdk-oss-reference/compare/4.7.0...4.7.1) |
| meta-rdk-tools |  | 2.3.1 | |
| meta-vts |  | 1.2.0 | |
| [meta-rdk-soc-realtek](#meta-rdk-soc-realtek) |  **4.1.0** | 4.0.9 | [4.0.9...4.1.0](https://github.com/rdk-e/meta-rdk-soc-realtek/compare/4.0.9...4.1.0) |
| [meta-oem-stream](#meta-oem-stream) |  **4.0.8** | 4.0.6 | [4.0.6...4.0.8](https://github.com/rdk-e/meta-oem-stream/compare/4.0.6...4.0.8) |
| [meta-oem-realtek-stream](#meta-oem-realtek-stream) |  **8.1.2** | 8.0.3 | [8.0.3...8.1.2](https://github.com/rdk-e/meta-oem-realtek-stream/compare/8.0.3...8.1.2) |
| [meta-rdk-vendor-realtek-common](#meta-rdk-vendor-realtek-common) |  **1.1.1** | 1.0.8 | [1.0.8...1.1.1](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/compare/1.0.8...1.1.1) |
| [meta-oss-vendor-realtek](#meta-oss-vendor-realtek) |  **4.1.0** | 4.0.10 | [4.0.10...4.1.0](https://github.com/rdk-e/meta-oss-vendor-realtek/compare/4.0.10...4.1.0) |
| [meta-mediarite-vendor](#meta-mediarite-vendor) |  **21.4** | 21.1.1 | [21.1.1...21.4](https://github.com/rdk-e/meta-mediarite-vendor/compare/21.1.1...21.4) |

#### Meta repos common for RDK-E

| Meta Repo | New Version | Version in Previous Release (8.0.3) | ChangeList |
|------------|---------|------------------------------------|--------------|
| **buildscripts** ||||
| build-scripts |  | 1.0.1 | |
| | | | |
| **buildsupport** ||||
| meta-image-support |  | 4.2.4 | |
| meta-stack-layering-support |  | 2.1.3 | |
| | | | |
| **oe** ||||
| meta-openembedded |  | rdk-4.0.0 | |
| poky |  **rdk-4.4.0** | rdk-4.3.1 | [rdk-4.3.1...rdk-4.4.0](https://github.com/rdkcentral/poky/compare/rdk-4.3.1...rdk-4.4.0) |
| meta-python2 |  | rdk-4.0.0 | |
| | | | |
| **extention** ||||
| meta-rdk-oss-ext |  | 1.3.0 | |
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
| meta-rdk-halif-headers |  | 3.0.0 | |
| meta-rdk-cpc-halif-headers |  | 1.0.0 | |
| | | | |
| **products** ||||
| meta-product-xione |  | 3.3.5 | |
| | | | |
| **binder** ||||
| meta-binder |  | 1.0.0 | |
| | | | |

### Interface versions

| # | HAL Interface Header (rdkcentral github) | New Version | Version from Previous Release (8.0.3)|
|---|------------------------------------------|-------------|----------------------|
| 1 | media-utils-headers | | 1.0.5 |
| 2 | hdmicecheader | | 1.3.10 |
| 3 | deepsleep-manager-headers | | 1.0.4 |
| 4 | power-manager-headers | | 1.0.3 |
| 5 | devicesettings-hal-headers | | 6.0.0 |
| 6 | tvsettings-hal-headers | | 2.3.0 |
|   |   |  |  |
|   | RDK HAL Headers (RDKE github) |  |  |
|   |   |  |  |
| 7 | iarmmgrs-hal-headers | | 1.0.12 |
| 8 | closedcaption-hal-headers | | 1.0.0 |
| 9 | iarmbus-headers | | 1.0.1 |
| 10 | rdk-gstreamer-utils-headers | | 2.0.0 |

### Limitations
It should be noted that some services may not run as they have dependencies with other layers. Additionally, the exclusion of inter-layer bbappends/patches might result in the failure to start some services. These limitations should be taken into consideration during the verification process. These Limitations will be addressed in Future Releases.
### Middleware Integration

##### XiOne-XOE
- Created the  middleware image `"SCXI11AIC_MIDDLEWARE_DEV_feature_RDKEVD-2298_20250718032605.bin`" for XOE from the `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/view/1-RDKE-Pipeline-Jobs/job/RTK-XIONE-XFINITY-STREAM-BOX-Middleware-Build/292/ `"


##### XiOne-Xumo
- Created the  middleware image  `"SCXI11AIC_MIDDLEWARE_DEV_feature_RDKEVD-2298_20250718033107.bin`" from `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/view/1-RDKE-Pipeline-Jobs/job/RTK-XIONE-XUMO-STREAM-BOX-Middleware-Build/65/`"


##### XiOne-WNC-Xfinity
- Created the  middleware image `"WNXI11AEI_MIDDLEWARE_DEV_feature_RDKEVD-2298_20250718033106.bin`" from `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-WNC-XFINITY-Middleware-Build/82/`"

- Testing done by using the feature branch `"feature/RDKEVD-2298"` based on the tag `"refs/tags/2.16.1"` included of latest vendor ipk feed info https://github.com/rdk-e/meta-vendor-xione-realtek-release/blob/release/8.1.2/conf/machine/include/vendor.inc and the middleware manifest from 2.16.1 tag.
#### Image assembler side
- We are unable to generate the Image Assembler for WNC-Xfinity, XOE  and Xumo stream box

#### Middleware side
- None

#### Known issue
- Known issue list [here](https://ccp.sys.comcast.net/browse/XIONE-17523?jql=labels%20%3D%20Vendor_8.1.2)
## Build instructions

- Steps to check out and build the vendor layer project [https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project](https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project)
- Steps to check out and build the image assembler project [https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler](https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler)


### Boot Command

#### Copy image to device /mnt/usb or /opt partitions or connect and mount USB having the image binn- Execute FlashApp command
- Move to directory containing the image
- FlashApp \<dirname\> \<imagename\>
- eg. FlashApp /mnt/usb/SKXI11ADS_8.1.2_VENDOR_DEV.bin
#### USB Flash Method using xboot prompt
- Copy the image `"SKXI11ADS_8.1.2_VENDOR_DEV.bin"` to the usb and connect to the STB
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

- Created the `"vendor test image"` `"SKXI11ADS_8.1.2_VENDOR_DEV.bin "` for XiOne-UK and for all other variants as well using the vendor layer jenkins job `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Vendor-Release-Build/167/s3/"`
- Successfully booted the `"vendor test image"` and obtained the shell prompt.
- Verified vendor layer services up and running
- Verified IP acquisition via Ethernet
- Played clear AV with gst-play-1.0.
- Verified image flashing using FlashApp

Testing details in [RDKEVD-2298](https://ccp.sys.comcast.net/browse/RDKEVD-2298)
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
|Jul 17 2025  |  SKXI11ADS_8.1.2_VENDOR_DEV                          | 1547372 | 445825 | 22668 | 4684932| 2178183  |
| July 07 2025|  SKXI11ADS_VENDOR_DEV_refs_tags_8.0.3_20250703153033 | 1547372 | 454340 | 22894 | 477234 | 2169442 |
| May 23 2025 |  SKXI11ADS_VENDOR_DEV_refs_tags_7.0.1_20250521111326 | 1547376 | 454150 | 28794 | 482944 | 2163728 |
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
|Jul 17 2025  |  SKXI11ADSSOFT_8.1.2_VENDOR_DEV                          | 1547372 | 445523 | 22278 | 467801 |2178875  |
| July 07 2025|  SKXI11ADSSOFT_VENDOR_DEV_refs_tags_8.0.3_20250703153049 | 1547372 | 456100 | 22948 | 479048 | 2167628 |
| May 23 2025 |  SKXI11ADSSOFT_VENDOR_DEV_refs_tags_7.0.1_20250521111501 | 1547376 | 441859 | 28425 | 470284 |2176388 |
| May 16 2025 |  SKXI11ADSSOFT_7.0.0_VENDOR_DEV | 1547376 | 441861 | 28752 | 470613 | 2176059 |
| Mar 26 2025 |  SKXI11ADSSOFT_VENDOR_DEV_refs_tags_6.0.2_20250324172329 | 1547376 | 438063 | 28223 | 466286 | 2180386 |
| Jan 28 2025 |  SKXI11ADSSOFT_VENDOR_DEV_refs_tags_5.0.2_20250124172925 | 1547368 | 443566 | 28438 | 472004 | 2174676 |
| Dec 30 2024 |  SKXI11ADSSOFT_VENDOR_DEV_refs_tags_5.0.0_20241224173052 | 1547368 | 450228 | 32825 | 483053 | 2163627 |
##### XiOne-DE
| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| Jul 17 2025 |  SKXI11AIS_8.1.2_VENDOR_DEV                          | 1547344 | 463329 | 22820 | 486149 | 2160555 |
| July 07 2025|  SKXI11AIS_VENDOR_DEV_refs_tags_8.0.3_20250703153514 | 1547344 | 472815 | 22831 | 495646 | 2151058 |
| May 23 2025 |  SKXI11AIS_VENDOR_DEV_refs_tags_7.0.1_20250521111817 | 1547348 | 463827 | 28698 | 492525 | 2154175 |
| May 16 2025 |  SKXI11AIS_7.0.0_VENDOR_DEV | 1547348 | 463950 | 29451 | 493401 | 2153299 |
| Mar 26 2025 |  SKXI11AIS_VENDOR_DEV_refs_tags_6.0.2_20250324181951 | 1547348 | 460736 | 28870 | 489606 | 2157094 |
##### XiOne-Alpaca-DE
| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| Jul 17 2025 |   SKXI11AEISODE_8.1.2_VENDOR_DEV                          | 1547372 | 447820 | 22314 | 470134 |2176542 |
| July 07 2025 |  SKXI11AEISODE_VENDOR_DEV_refs_tags_8.0.3_20250703153622 | 1547372 | 456489 | 22418 | 478907 | 2167769 |
| May 23 2025 |  SKXI11AEISODE_VENDOR_DEV_refs_tags_7.0.1_20250521111552 | 1547376 | 443789 | 28103 | 471892 | 2174780 |
| May 16 2025 |  SKXI11AEISODE_VENDOR_DEV_refs_tags_7.0.0_20250511204108 | 1547376 | 440746 | 28691 | 469437 | 2177235 |
| Mar 26 2025 |  SKXI11AEISODE_VENDOR_DEV_refs_tags_6.0.2_20250324172723 | 1547376 | 445013 | 28365 | 473378 | 2173294 |
##### Xfinity-stream-box
| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| Jul 17 2025  | SCXI11AIC_8.1.2_VENDOR_DEV                           | 1436756 | 464011 | 22287 | 486298 | 2270994 |
| July 07 2025 |  SCXI11AIC_VENDOR_DEV_refs_tags_8.0.3_20250703153149 | 1547348 | 471276 | 22551 | 493827 | 2152873 |
| May 23 2025 |  SCXI11AIC_VENDOR_DEV_refs_tags_7.0.1_20250521111902 | 1547356 | 461028 | 28952 | 489980 | 2156712 |
| May 16 2025 |  SCXI11AIC_VENDOR_DEV_refs_tags_7.0.0_20250511210103 | 1547356 | 457862 | 28380 | 486242 | 2160450 |
| Mar 26 2025 |  SCXI11AIC_VENDOR_DEV_refs_tags_6.0.2_20250324172822 | 1547356 | 456510 | 29065 | 485575 | 2161117 |
##### Xumo-stream-box
| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| Jul 14 2025 | SCXI11AIC_8.1.2_VENDOR_DEV | 1547348 | 471939 | 22354 | 494293 | 2152407 |
| May 23 2025 |  SCXI11AIC_VENDOR_DEV_refs_tags_7.0.1_20250521112318 | 1547356 | 457230 | 28700 | 485930 | 2160762 |
| May 16 2025 |  SCXI11AIC_VENDOR_DEV_refs_tags_7.0.0_20250511211029 | 1547356 | 456878 | 29452 | 486330 | 2160362 |
| Mar 26 2025 |  SCXI11AIC_VENDOR_DEV_refs_tags_6.0.2_20250324190109     | 1547356 | 456595 | 28437 | 485032 | 2161660 |
##### WNC Xfinity
| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| Jul 14 2025 |  WNXI11AEI_8.1.2_VENDOR_DEV | 1547348 | 463448 | 22637 |  486085 | 2160615 |
| July 07 2025 |  WNXI11AEI_VENDOR_DEV_refs_tags_8.0.3_20250703153256 | 1547348 | 473436 | 23006 | 496442 | 2150258 |
| May 23 2025 |  WNXI11AEI_VENDOR_DEV_refs_tags_7.0.1_20250521171806 | 1547356 | 473728 | 29253 | 502981 | 2143711 |
| May 16 2025 |  WNXI11AEI_VENDOR_DEV_refs_tags_7.0.0_20250512160923 | 1547356 | 472994 | 22047 | 495041 | 2151651 |
### Fullstack image testing
##### XiOne-UK
- Created Image Assembler build `"SKXI11ADS_DEV_feature_RDKEVD-2298_20250718032105.bin`" from `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Image-Assembler-Build/2415/s3/`"
##### XiOne-Foxtel
- Created Image Assembler build `"SKXI11ADSSOFT_DEV_feature_RDKEVD-2298_20250718032106.bin`" from `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/view/4-Assembler-Jobs/job/RTK-XIONE-Foxtel-Image-Assembler-Build/230/s3/`"
##### XiOne-Alpaca-DE
- Created Image Assembler build `"SKXI11AEISODE_DEV_feature_RDKEVD-2298_20250718032552.bin`" from `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/view/4-Assembler-Jobs/job/RTK-XIONE-ALPACA-DE-Image-Assembler-Build/63/s3/`"
##### XiOne-DE
- Created Image Assembler build `"SKXI11AIS_DEV_feature_RDKEVD-2298_20250718032554.bin`" from `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/view/4-Assembler-Jobs/job/RTK-XIONE-DE-Image-Assembler-Build/212/s3/`"

- Testing done by using the tag `"refs/tags/2.16.1"` and with the image assembler manifest branch  feature/RDKEVD-2298 - referenced from develop with oss version  updated  to 4.7.1  and including latest vendor ipk feed info https://github.com/rdk-e/meta-vendor-xione-realtek-release/blob/release/8.1.2/conf/machine/include/vendor.inc
- Tested the below scenarios as part of [RDKEVD-2298](https://ccp.sys.comcast.net/browse/RDKEVD-2298)
  - Successfully booted \"SKXI11ADS_DEV_feature_RDKEVD-2298_20250718032105\" and obtained the shell prompt and UI.
  - Verified UI navigation
  - Verified AV with Disney+ App
  - Verified AV with Xumo Play
  - Verified AV with Netflix
  - Verified AV with Amazon Prime
  - Verified AV with YouTube
  - Verified remote control pairing
  - Verified Log files are present in /opt/logs

- Note
  - Issues observed in  release 8.1.2 https://ccp.sys.comcast.net/browse/XIONE-17523?jql=labels%20%3D%20Vendor_8.1.2
  - Attached the test report here https://ccp.sys.comcast.net/secure/attachment/11694603/RE%20Release%20XiOne%20RTK%208.1.2%20hotfix%20vendor%20layer%20release%20.msg
## Components details in 'packagegroup-common-vendor-layer'
| # | Vendor layer Component | New PV-PR (8.1.2) | PV-PR in Previous Release (8.0.3)| New SRCREV | SRCREV in Previous Release (8.0.3)| Diff |
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
| 10 | wipe-disk-partitions | **1.0.0-r2** | 1.0.0-r0 |  | NA |  |
| 11 | secauthn | | 1.0.0-r0 |  | NA |  |
| 12 | testagent-loader | | 2.3.0-r0 |  | NA |  |
| 13 | qca6390-mod-wifi | | 1.0.3-r1 |  | NA |  |
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
| 29 | media-utils-soc-realtek | | 1.0.5-2.1.1-r1 |  | 30f3fdd |  |
| 30 | closedcaption-hal-realtek | | 1.0.0-3.1.0-r0 |  | ee52d85 |  |
| 31 | hdmicec-hal-realtek | | 1.3.10-3.0.1-r0 |  | 950a89e |  |
| 32 | rdk-gstreamer-utils-platform | | 2.0.0-2.0.0 |  | 6ba04b9 |  |
| 33 | devicesettings-hal-realtek | | 6.0.0-4.1.3-r0 |  |  |  |
| - |  - devicesettings-hal-realtek_devicesettingssocrealtek | |  |  | 3f059a2 |  |
| - |  - devicesettings-hal-realtek_devicesettingsskyxione | |  | **c924a02** | 4032202 |  [](https://github.com/rdkcentral/poky) |
| 34 | deepsleepmgr-hal-realtek | **1.0.4-1.1.0-r0** | 1.0.4-1.0.2-r0 | **f700dfe** | adaf974 |  [](https://github.com/rdkcentral/poky) |
| 35 | pwrmgr-hal-realtek | | 1.0.3-1.0.0-r0 |  | c91e047 |  |
| 36 | otp-program | | 2.2-r1 |  | NA |  |
| 37 | gstreamer1.0 | | 1.18.5-r5 |  | NA |  |
| 38 | gstreamer1.0-meta-base | | 1.18.5-r5 |  | NA |  |
| 39 | gstreamer1.0-omx | | 1.10.4-r5 |  | NA |  |
| 40 | gstreamer1.0-libav | | 1.18.5-r5 |  | NA |  |
| 41 | gstreamer1.0-plugins-good | | 1.18.5-r5 |  | NA |  |
| 42 | gstreamer1.0-plugins-good-meta | | 1.18.5-r5 |  | NA |  |
| 43 | gstreamer1.0-plugins-bad | | 1.18.5-r5 |  | NA |  |
| 44 | gstreamer1.0-plugins-bad-meta | | 1.18.5-r5 |  | NA |  |
| 45 | gstreamer1.0-rtsp-server | | 1.18.5-r5 |  | NA |  |
| 46 | gstreamer1.0-plugins-base | | 1.18.5-r5 |  | NA |  |
| 47 | gstreamer1.0-plugins-base-meta | | 1.18.5-r5 |  | NA |  |
| 48 | gstreamer1.0-plugins-base-playback | | 1.18.5-r5 |  | NA |  |
| 49 | gstreamer1.0-plugins-good-wavparse | | 1.18.5-r5 |  | NA |  |
| 50 | gstreamer1.0-plugins-good-audiofx | | 1.18.5-r5 |  | NA |  |
| 51 | gstreamer1.0-plugins-good-isomp4 | | 1.18.5-r5 |  | NA |  |
| 52 | gstreamer1.0-plugins-good-audioparsers | | 1.18.5-r5 |  | NA |  |
| 53 | gstreamer1.0-plugins-good-soup | | 1.18.5-r5 |  | NA |  |
| 54 | gstreamer1.0-plugins-base-gio | | 1.18.5-r5 |  | NA |  |
| 55 | gstreamer1.0-plugins-base-videoconvert | | 1.18.5-r5 |  | NA |  |
| 56 | gstreamer1.0-plugins-base-videoscale | | 1.18.5-r5 |  | NA |  |
| 57 | gstreamer1.0-plugins-base-volume | | 1.18.5-r5 |  | NA |  |
| 58 | gstreamer1.0-plugins-base-typefindfunctions | | 1.18.5-r5 |  | NA |  |
| 59 | gstreamer1.0-plugins-good-autodetect | | 1.18.5-r5 |  | NA |  |
| 60 | gstreamer1.0-plugins-good-avi | | 1.18.5-r5 |  | NA |  |
| 61 | gstreamer1.0-plugins-good-deinterlace | | 1.18.5-r5 |  | NA |  |
| 62 | gstreamer1.0-plugins-good-interleave | | 1.18.5-r5 |  | NA |  |
| 63 | gstreamer1.0-plugins-bad-dash | | 1.18.5-r5 |  | NA |  |
| 64 | gstreamer1.0-plugins-bad-mpegtsdemux | | 1.18.5-r5 |  | NA |  |
| 65 | gstreamer1.0-plugins-bad-smoothstreaming | | 1.18.5-r5 |  | NA |  |
| 66 | gstreamer1.0-plugins-bad-videoparsersbad | | 1.18.5-r5 |  | NA |  |
| 67 | gstreamer1.0-plugins-bad-opusparse | | 1.18.5-r5 |  | NA |  |
| 68 | gstreamer1.0-plugins-bad-dashdemux | | 1.18.5-r5 |  | NA |  |
| 69 | gstreamer1.0-plugins-good-matroska | | 1.18.5-r5 |  | NA |  |
| 70 | gstreamer1.0-plugins-base-app | | 1.18.5-r5 |  | NA |  |
| 71 | gstreamer1.0-plugins-base-audioconvert | | 1.18.5-r5 |  | NA |  |
| 72 | gstreamer1.0-plugins-base-audioresample | | 1.18.5-r5 |  | NA |  |
| 73 | westeros-simpleshell | **1.01.59-r0** | 1.01.58-r0 | **9fa8be1** | 3472e86 |  [](https://github.com/rdkcentral/poky) |
| 74 | westeros-simplebuffer | **1.01.59-r0** | 1.01.58-r0 | **9fa8be1** | 3472e86 |  [](https://github.com/rdkcentral/poky) |
| 75 | westeros-soc | **1.01.59-r0** | 1.01.58-r0 | **9fa8be1** | 3472e86 |  [](https://github.com/rdkcentral/poky) |
| 76 | westeros-sink | **1.01.59-r0** | 1.01.58-r0 |  |  |  |
| - |  - westeros-sink_westeros | |  | **9fa8be1** | 3472e86 |  [](https://github.com/rdkcentral/poky) |
| - |  - westeros-sink_realtek | |  |  | e32f912 |  |
| 77 | westeros | **1.01.59-r0** | 1.01.58-r0 | **9fa8be1** | 3472e86 |  [](https://github.com/rdkcentral/poky) |
| 78 | essos | **1.01.59-r0** | 1.01.58-r0 | **9fa8be1** | 3472e86 |  [](https://github.com/rdkcentral/poky) |
| 79 | make-mod-scripts | | 1.0-r0 |  | NA |  |
| 80 | sky-fpbutton-driver | | 3.0.0-r0 |  | acd582d |  |
| 81 | splashscreen-viewer | | 2.0.0-r0 |  | 41e70a2 |  |
| 82 | rtk-tee | | 1.0.0-r0 |  | NA |  |
| 83 | secapi-rtk | | 2.1.0-r2 |  | 95b6bd4 |  |
| 84 | secapi3-rtk | | 3.3.1-r0 |  | f7ed818 |  |
| 85 | secapi2-adapter | | 1.0.0-r0 |  | NA |  |
| 86 | secapi-common-hw | | 2.3.0-r0 |  | 3a51b88 |  |
| 87 | secapi-netflix | | 1.0.0-r0 |  |  |  |
| - |  - secapi-netflix_com_inc_rtk | |  |  | 0fa3af3 |  |
| - |  - secapi-netflix_socrealtek | |  |  | d3c7c87 |  |
| 88 | gst-svp-ext | | 1.2.0-r0 |  | NA |  |
| 89 | systemaudioplatform | | 1.0.0-r0 |  | 776348d |  |
| 90 | miracast-soc | | 1.0.0-r0 |  | 30cb689 |  |
| 91 | secapi-crypto-rtk | | 2.3.1-r0 |  | 5241d45 |  |
| 92 | secapi-common-crypto | | 2.3.0-r0 |  | 3a51b88 |  |
| 93 | flashapp | | 7.1-r0 |  | NA |  |
| 94 | sky-led-driver | | 2.0.0-r0 |  | f97a795 |  |
| 95 | hank-mod-mali | | 3.0.0-r0 |  | a574cc2 |  |
| 96 | rtkv1sink | | 2.0.0-r1 |  | 67bdf5b |  |
| 97 | platform-lib | | 2.6.0-r4 |  | NA |  |
| 98 | [rtk-audio-service](#rtk-audio-service) | **3.2.0-r0** | 3.1.1-r0 | **e62564d** | 70f16d5 |  [70f16d5...e62564d](https://github.com/rdk-e/RtkAudioService-soc-realtek/compare/70f16d5aaa0427dc7ac38b1d73da3e42a7795801...e62564de66981d71a6c4fa116f23b542ed043b11) |
| 99 | [hdmiservice](#hdmiservice) | **4.2.0-r0** | 4.1.2-r0 | **1730920** | 7cad8ab |  [7cad8ab...1730920](https://github.com/rdk-e/hdmiservice-realtek/compare/7cad8ab3281ae794e902116f50941bd82f4d380c...173092085b53740340f686aeb0d74ae71c560280) |
| 100 | rtkpcrclksink | | 2.0.0-r0 |  | c8272d9 |  |
| 101 | blewakeupenabler | | 1.4.1-r0 |  | 6f8176d |  |
| 102 | linux-libc-headers | | 4.9-r9 |  | NA |  |
| 103 | packagegroup-kernel-modules | | 4.9.119.01-r9 |  | NA |  |
| 104 | linux-hank | | 4.9.119.01-r9 |  | f8fe28d |  |
| 105 | rtkaudiosink | | 3.1.3-r0 |  | 3e9ee18 |  |
| 106 | mfi-ree | | 2.0.0-r0 |  | 4941717 |  |
| 107 | sysint-oem | | 3.0.3-r1 |  | 356c2ab |  |
| 108 | [apparmor-vendor](#apparmor-vendor) | **2.4.0-r0** | 2.3.2-r0 | **d48c9d3** | 4de375b |  [4de375b...d48c9d3](https://github.com/rdk-e/apparmor-profiles/compare/4de375b526694ee1434fe2a8ef198dbf149c2835...d48c9d3b5d71037df028bd0d2f14b32af18426e3) |
| 109 | directfb | | 1.7.7-r0 |  | NA |  |
| 110 | [product-firmware-pb](#product-firmware-pb) | **1.0.8-r0** | 1.0.7-r0 | **2a1369f** | 7e775dc |  [7e775dc...2a1369f](https://github.com:rdk-e/firmware-prebuilt-xione-soc-realtek.git/compare/7e775dcb7dc1327bc164e4387be4e89446a10278...2a1369fe65325839c2c03d56dc34d79b931a8434) |
| 111 | testagentlib | | 3.0.2-r1 |  |  |  |
| - |  - testagentlib_testagentlib | |  |  | b8eb1f8 |  |
| - |  - testagentlib_xione_factory | |  |  | 6281804 |  |
| 112 | libbinder | | 1.0.0-r1 |  | 0f7a23b |  |
| 113 | aidl-generator-native | | 1.0.0-r1 |  | 0f7a23b |  |
| 114 | flash-aidl | | 1-r0 |  | ddcceef |  |
| 115 | image-hal-service | | 1.0.0-r0 |  | 7eb82c9 |  |
| 116 | platform-imagehal-lib | | 1.0.0-r0 |  | NA |  |


## Components Removed

| # |  Component Name | Reason |
|----|--------------|------|
| 1 | mediarite-vendor |  |
| 2 | broadcast-hal-api |  |
| 3 | broadcast-hal-config |  |
| 4 | gst-plugins-mediarite |  |



## Consolidated change list from vendor layer repositories

## Changes in meta repositories

## [meta-oss-reference-release](https://github.com/rdkcentral/meta-oss-reference-release/blob/main/CHANGELOG.md)

- RDKE-872: Update oss ipk url for release 4.7.1 [8359390](https://github.com/rdkcentral/meta-oss-reference-release/commit/8359390d511be305b0874d5d75caafc53be41c6d)

## [meta-rdk-oss-reference](https://github.com/rdkcentral/meta-rdk-oss-reference/blob/main/CHANGELOG.md)

- RDKE-872: Updated Packagegroup revision to 4.7.1 [b947128](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/b947128f204e5b2e1e34c9e45c4897d415521841)
- RDKTV-37484: Add libraries required for iptables service ( [#150](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/150))
- RDKEVD-2071: wipefs and blkdiscard are required ( [#149](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/149))
- RDKTV-37484: Add libraries required for iptables service ( [#145](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/145))
- RDKEVD-2071: wipefs and blkdiscard are required ( [#142](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/142))

## [meta-rdk-soc-realtek](https://github.com/rdk-e/meta-rdk-soc-realtek/blob/main/CHANGELOG.md)

- RDK-51674: Integrate Rust implementation of DRM license APIs for secclient ( [#141](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/141))

## [meta-oem-stream](https://github.com/rdk-e/meta-oem-stream/blob/main/CHANGELOG.md)

- RDKEVD-1989 : fix for ipk push issue [26484de](https://github.com/rdk-e/meta-oem-stream/commit/26484deb2fa47dc22d8fa6e878e3495898361d2a)
- Adding ctrlm rf4ce hal [1028afa](https://github.com/rdk-e/meta-oem-stream/commit/1028afa7e96d8ca149ad82f24df6398703476ab0)

## [meta-oem-realtek-stream](https://github.com/rdk-e/meta-oem-realtek-stream/blob/main/CHANGELOG.md)

- RDKEVD-2298 : update tag 8.1.2 [d596ce9](https://github.com/rdk-e/meta-oem-realtek-stream/commit/d596ce944a635b5b127a6bb9248d8a8522bd709f)
- RDKEVD-2298 : Latest product tag 8.1.1 [1c22a96](https://github.com/rdk-e/meta-oem-realtek-stream/commit/1c22a96c410c682c0e48f3131d0a0da36f920b82)
- RDKEVD-2298 RDKE Vendor Release 8.1.0 [6a0e156](https://github.com/rdk-e/meta-oem-realtek-stream/commit/6a0e156264981ed84487dd9b80fe4d94e91cbd71)
- RDKEVD-2246 : Update TestAgent Service to be more appropriate [0c92a2f](https://github.com/rdk-e/meta-oem-realtek-stream/commit/0c92a2fc798322baa1836f8034ae6f94150889a1)
- RDKEVD-2097: Move Hdmiservice patches to the source code [1c5764d](https://github.com/rdk-e/meta-oem-realtek-stream/commit/1c5764d97126c9dccd10b5ecaa8838fb795f868a)
- RDKEVD-1594: move dynamic config for AS to product layer [4d78738](https://github.com/rdk-e/meta-oem-realtek-stream/commit/4d78738ab05c5cebcea9ea5f64b42ec82b66d7b4)
- RDKEVD-1264: update westeros version to 1.0.59 [d3e3a2d](https://github.com/rdk-e/meta-oem-realtek-stream/commit/d3e3a2d13fb998592866f54dab296132e8117bf2)
- RDKEVD-1791, XIONE-17009: Driver Release 11.0.2 [46b9ff9](https://github.com/rdk-e/meta-oem-realtek-stream/commit/46b9ff9a287a1e49666c80c40143034eb2867bd3)
- RDKEVD-981: box stuck at deepsleep [87bf8ca](https://github.com/rdk-e/meta-oem-realtek-stream/commit/87bf8cae14fe02383f0ef2989f2225761cd2517b)
- RDKEVD-2048 MRITE-38: Move PV and PR back into meta layer [291ec61](https://github.com/rdk-e/meta-oem-realtek-stream/commit/291ec61ee0212e8c0f38664ad88cab9dd6b61bde)
- RDK-56188: Unstripped symbols cleanup from rootfs [421a6dd](https://github.com/rdk-e/meta-oem-realtek-stream/commit/421a6dd70a6c0c8fe1734597d0620c925a7ddafc)
- RDKEMW-5348: Move ion device to gpu [71617d1](https://github.com/rdk-e/meta-oem-realtek-stream/commit/71617d185e0929740f1a0414e394518ed3eb4e5d)

## [meta-rdk-vendor-realtek-common](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/blob/main/CHANGELOG.md)

- RDKEVD-2298 : Latest product tag 1.1.1 [ec64ea5](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/ec64ea58c2b2cbb70bb289abed1674b1cb41a4f8)
- XIONE-17494: wipe-disk-partitions.service service failure [47b6b5e](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/47b6b5e346853739a1de5fe322a3e2ba8d9b071c)
- RDKEVD-2298 : Latest product tag 1.1.0 [3e159b9](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/3e159b9c7821666772812bf3c50bf7ea65ab5199)
- RDKEVD-2298 : Latest product tag 1.0.9 [189e4b2](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/189e4b28f9670782f7bcb2e6b94c871e7069c5ba)
- RDKEVD-2082: Reformat partitions service failure [5a340bb](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/5a340bb0cb27c7f4c499a9554bd853e2f496eaeb)

## [meta-oss-vendor-realtek](https://github.com/rdk-e/meta-oss-vendor-realtek/blob/main/CHANGELOG.md)

- RDKEVD-2179 : Fix the AppleTV start failed. ( [#83](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/83))
- XIONE-16819, RDKEVD-1950: Adjust opus delta from stable2 ( [#78](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/78))

## [meta-mediarite-vendor](https://github.com/rdk-e/meta-mediarite-vendor/blob/main/CHANGELOG.md)

- broadcast-hal-linuxdvb: Fix SCRURI [de219d8](https://github.com/rdk-e/meta-mediarite-vendor/commit/de219d88659f2cbf9cc942cee8c618aa0fa17a82)
- broadcast-hal-linuxdvb: Add version classes [ff08c11](https://github.com/rdk-e/meta-mediarite-vendor/commit/ff08c11645fdf2212f289788bad9fe6cd44697a9)
- Include new versions in preparation for 21.4 [25a87fd](https://github.com/rdk-e/meta-mediarite-vendor/commit/25a87fdcd741719b55563a0a825ddff054449724)
- MRITE-38: Move PV and PR back into meta layer [522e5b6](https://github.com/rdk-e/meta-mediarite-vendor/commit/522e5b6bbfdd7df129f7a3046b8620827b1606a1)
- Preparing recipe for broadcast-hal-linuxdvb release [b302a4a](https://github.com/rdk-e/meta-mediarite-vendor/commit/b302a4ae5a60a02fba5a9532597cde4de93e94bc)
- RDKEVD-1754: Add support for xione-bcm-flex2 [fa8d7f5](https://github.com/rdk-e/meta-mediarite-vendor/commit/fa8d7f518e2320c28ed551d868d92700c056b805)
- RDKEVD-1562: Release 21.2.1 [0bc418c](https://github.com/rdk-e/meta-mediarite-vendor/commit/0bc418cc635864121e5e41f008f3889f8a4b5b34)
- RDKEVD-1562: Release 21.2 ( [#38](https://github.com/rdk-e/meta-mediarite-vendor/pull/38))
- MRITE-15 MRITE-32 MRITE-33 MRITE-34 Upgrade broadcast-hal-mtk [74f9e82](https://github.com/rdk-e/meta-mediarite-vendor/commit/74f9e82783e61b43f27c0af8aa96dd13409b1346)
- Remove recipes and class that are no longer used [6778ea1](https://github.com/rdk-e/meta-mediarite-vendor/commit/6778ea19957a7ab122441d893f77dc310a26fcdf)
- MRITE-33: Check versions on checkout [efdc56f](https://github.com/rdk-e/meta-mediarite-vendor/commit/efdc56fdb0d951c077336d7b67ed14417f97be62)
- MRITE-33: Save package versions in rootfs [bb87725](https://github.com/rdk-e/meta-mediarite-vendor/commit/bb87725f6762bdf2eb09d4d85ef7092b5f1f7df2)



## Changes in component repositories

## ['rtk-audio-service'](https://github.com/rdk-e/RtkAudioService-soc-realtek/blob/main/CHANGELOG.md)

- RDKEVD-2172 : Fix YouTube frame drop issue. [c4c648b](https://github.com/rdk-e/RtkAudioService-soc-realtek/commit/c4c648b348042d82014f636295de1761ba1fa59b)
- RDKEVD-1854: Fix VG pid recycle flow deadlock. [798b51c](https://github.com/rdk-e/RtkAudioService-soc-realtek/commit/798b51c0840ca317b59d9370d6889c213e717cbf)
## ['hdmiservice'](https://github.com/rdk-e/hdmiservice-realtek/blob/main/CHANGELOG.md)

- RDKEVD-2097: Move Hdmiservice patches to the source code [c2649f0](https://github.com/rdk-e/hdmiservice-realtek/commit/c2649f0939539b1ebe4fe4b8b3c467886d41ffd6)
- RDKEVD-1730 : Revert commit f82868f [8279f1c](https://github.com/rdk-e/hdmiservice-realtek/commit/8279f1cbed6fa9bd8ac69a893192126dce7622ad)
- ES1-2562: Use SDR mode when 1080i [92deebe](https://github.com/rdk-e/hdmiservice-realtek/commit/92deebe8cc0e0de8946f1137d66501d6bb05dc00)
- XIONE-16706: Add Set / Get AVI content Type and Scan Information [bce9541](https://github.com/rdk-e/hdmiservice-realtek/commit/bce9541399ebb9274e4fb817a77449bd55fdb84d)
## ['apparmor-vendor'](https://github.com/rdk-e/apparmor-profiles/blob/main/CHANGELOG.md)

- RDKEMW-5313: Solving XIONE-17337 in develop [80b9107](https://github.com/rdk-e/apparmor-profiles/commit/80b9107064a53a8270a02f7061502054e67363be)
- RDKEVD-981: Box stuck in deepsleep [3105353](https://github.com/rdk-e/apparmor-profiles/commit/3105353915ca8c19161f3339c1dc7a91b635c52b)
- RDK-57125: Update apparmor_generic_defaults with US 17 processes alone in complain [4826ee1](https://github.com/rdk-e/apparmor-profiles/commit/4826ee146cfb5f3e06d88935355b25950579c16b)
- RDKEVD-408 : Add Apparmor permissions for rtk_decoder_preinit() Reason for change: To speed up the tune time, add the rtk_decoder_preinit() to let the DV ta related session can opened before the playback start. [e07638d](https://github.com/rdk-e/apparmor-profiles/commit/e07638d0ddaa22cdaca450b10d02912e80e4423c)
- RDKEMW-4734: AppArmor ALLOWED and DENIED markers [83eb0a6](https://github.com/rdk-e/apparmor-profiles/commit/83eb0a6f44b714cd3043528f271d74b62e6ff25c)
- RDK-57125: Update apparmor_generic_defaults with US 17 processes alone in enforce [6ac3038](https://github.com/rdk-e/apparmor-profiles/commit/6ac3038417b674fe3fbb558210b1b0c239c24ff9)
- RDKEMW-4395: Denied markers observed during regression Test [cee479d](https://github.com/rdk-e/apparmor-profiles/commit/cee479de9bbbb23ca6d87ea9aad2ad9dfd157099)
- RDKEMW-4395: Denied markers observed during regression Test [6872743](https://github.com/rdk-e/apparmor-profiles/commit/6872743715f2c2021eb38131e5294361b9f68da4)
- RDKEMW-4395, RDK-57497: Denied markers observed during regression Test [4d4ad2f](https://github.com/rdk-e/apparmor-profiles/commit/4d4ad2fcd6eac48a9ab653f24f037047c1d940df)
- RDKEMW-4395: Denied markers observed in SKY XIONE UK during regression Test [c115bed](https://github.com/rdk-e/apparmor-profiles/commit/c115bed56e2de4d5a1008a253fe0a8e17c54f269)
- RDKEMW-4395: Denied markers observed in SKY XIONE UK during regression Test [bc91db0](https://github.com/rdk-e/apparmor-profiles/commit/bc91db00248dcd37a8f21cf7ccf8abdad4723ea8)
- RDK-57497: Allowed and Denied logs from rdkanalytics portal [8afe2de](https://github.com/rdk-e/apparmor-profiles/commit/8afe2de4375d843ec16c72b33a77f9f79576d72d)
- RDKEMW-3410 : Default BLE controller type list [dad0ab9](https://github.com/rdk-e/apparmor-profiles/commit/dad0ab99cca4c96a58a8d447b9d93b190ed0f9e3)
- RDKEMW-3511, RDKEMW-3795: Observed "DENIED" markers to be fixed [2878dc3](https://github.com/rdk-e/apparmor-profiles/commit/2878dc339b224074a60861dc1bd659248624c208)
- Update usr.bin.asrdkplayer [ea16ae0](https://github.com/rdk-e/apparmor-profiles/commit/ea16ae01646c1b9006fd9faa96be776b085b5c04)
- Update usr.bin.ASSystemService [745385c](https://github.com/rdk-e/apparmor-profiles/commit/745385c12e46722c0efb4201c7bbbd1801976d79)
- RDKEMW-3511, RDKEMW-3482: Observed "DENIED" markers to be fixed [523c488](https://github.com/rdk-e/apparmor-profiles/commit/523c488b0b1e72f74caca900e84fcd2fa2076cc5)
- RDKEMW-3511, RDKEMW-3482: Observed "DENIED" markers to be fixed [9e76dc1](https://github.com/rdk-e/apparmor-profiles/commit/9e76dc14f75bbd8dc8c7af49b9d7a937faa5990f)
- RDKEMW-3511, RDKEMW-3482: Observed "DENIED" markers to be fixed [4ee2ada](https://github.com/rdk-e/apparmor-profiles/commit/4ee2ada87652d6fad182bf9d66801fdb1300ebbe)
- RDK-56740: Since installation of global profile not made and still this dropbearmulti using global file [171c386](https://github.com/rdk-e/apparmor-profiles/commit/171c3862ace4d1b52a9df348f1b41e6665536308)
- RDKEMW-3511, RDKEMW-3482: Observed "DENIED" markers to be fixed [65260bf](https://github.com/rdk-e/apparmor-profiles/commit/65260bffdc2e3831e1f7043f5620acde674f5b86)
- RDKEMW-3511, RDKEMW-3482: Observed "DENIED" markers to be fixed [cc3c067](https://github.com/rdk-e/apparmor-profiles/commit/cc3c067bfc1e7e8bbac889c2807077b104772fca)
- RDK-56740: Enable Apparmor in enforcement mode for GA'ed processes [10fbc81](https://github.com/rdk-e/apparmor-profiles/commit/10fbc811a905c438e823be076efdad0182df539c)
- RDK-57118 : Add persistent seek folder for T2 profile ( [#95](https://github.com/rdk-e/apparmor-profiles/pull/95))
- RDK-31923 : Added needed libs to emit Telemetry events. [64b2292](https://github.com/rdk-e/apparmor-profiles/commit/64b2292f8f722e0c196f93bd7ca5598ace52f8a8)
- RDKTV-35728: Controllers not autoconnecting after deep sleep [b66d67a](https://github.com/rdk-e/apparmor-profiles/commit/b66d67abb06bcadc9451063512725c32b748c416)
- RDK-57118 : Add persistent seek folder for T2 profile ( [#95](https://github.com/rdk-e/apparmor-profiles/pull/95))
- RDK-31923 : Added needed libs to emit Telemetry events. [c9e73e4](https://github.com/rdk-e/apparmor-profiles/commit/c9e73e4868bb262a1ab1c1cbf9a5cb047e20c2a6)
- RDKTV-35728: Controllers not autoconnecting after deep sleep [e135b5e](https://github.com/rdk-e/apparmor-profiles/commit/e135b5e6d53413dbf69d4677edf972a27b8beb31)
- Update apparmor_generic_defaults [4ab1ab4](https://github.com/rdk-e/apparmor-profiles/commit/4ab1ab4f9eb464e676ef2f5f87ff9dacb07ee84c)
- RDK-56740: Enable Apparmor in enforcement mode for GA'ed processes [687341a](https://github.com/rdk-e/apparmor-profiles/commit/687341a425e379b687813a53b243ce2f41cc4773)
- RDK-56491: Update usr.bin.nfrtool [6de6b31](https://github.com/rdk-e/apparmor-profiles/commit/6de6b3174bbea6e7e1e6b310f337d5ad2592bf97)
- RDK-56491: Update usr.bin.nfrtool [28cbf95](https://github.com/rdk-e/apparmor-profiles/commit/28cbf958656cf52da41f66a74119c06e6851b734)
-  RDK-56646: AppArmor support (in complain mode) for routerDiscovery [823057f](https://github.com/rdk-e/apparmor-profiles/commit/823057f30073b57ba9baaa4f26fad593ce69c401)
- RDK-56491: Update usr.bin.nfrtool [e2ddb8e](https://github.com/rdk-e/apparmor-profiles/commit/e2ddb8e816533f1cb356046e83e462fe41b271d2)
- DELIA-67622: AVInput failures [23bb2f1](https://github.com/rdk-e/apparmor-profiles/commit/23bb2f16233b94df7857c6c2d7cc4855aca005dc)
- XIONE-16797 RDKEVD-729 : Add libacl lib to apparmor. [2f82c10](https://github.com/rdk-e/apparmor-profiles/commit/2f82c10229cc01362dbff4de55de8550528108f5)
- DELIA-67537: Pwrmgr not lowering CPU freq when temp reaches > 100c [89c616c](https://github.com/rdk-e/apparmor-profiles/commit/89c616c3c67a2e002e407a45a86e9df093e34666)
- RDKEMW-1803 : Add backgroundrun, libnghttp2.so to tr69hostif [3b875e9](https://github.com/rdk-e/apparmor-profiles/commit/3b875e92da0d3e53da755c6fada8def79df19bad)
- RDK-56646: AppArmor to enforce access privileges for upnp tool [82a906b](https://github.com/rdk-e/apparmor-profiles/commit/82a906b6ea3d2c09601b39ec789f2a50c31971e5)
- RDK-56646: AppArmor to enforce access privileges for upnp tool [c7ee3c1](https://github.com/rdk-e/apparmor-profiles/commit/c7ee3c1ce8bef3abd900beff4a13f311142531cd)
- RDK-56646: AppArmor to enforce access privileges for upnp tool [f983837](https://github.com/rdk-e/apparmor-profiles/commit/f98383763dd6be9b90622756c3d10d5d6101ffe7)
- RDK-56646: AppArmor to enforce access privileges for upnp tool [4bf1025](https://github.com/rdk-e/apparmor-profiles/commit/4bf10258046787734f8dc3db4f578244ef25fab2)
- RDK-56646: AppArmor to enforce access privileges for upnp tool [102aefb](https://github.com/rdk-e/apparmor-profiles/commit/102aefb874ca126a6427398b38f2f97afef792a3)
- RDK-56646: AppArmor to enforce access privileges for upnp tool [c6f291a](https://github.com/rdk-e/apparmor-profiles/commit/c6f291a5ccfaf5be449730400d34ebc9753e95c3)
- RDK-56646: AppArmor to enforce access privileges for upnp tool [0ff4bae](https://github.com/rdk-e/apparmor-profiles/commit/0ff4bae8099b10a8821b0a7c2f4d6f50ba837e53)
- RDK-56646: AppArmor to enforce access privileges for upnp tool [5efdbef](https://github.com/rdk-e/apparmor-profiles/commit/5efdbefbd10c99a2ca3d49f829a16007a75429ce)
- RDK-56646: AppArmor to enforce access privileges for upnp tool [7dcfa2b](https://github.com/rdk-e/apparmor-profiles/commit/7dcfa2b10f9f2ba9605cc34f7e2ff6b566b9f0cc)
- RDK-56646: AppArmor to enforce access privileges for upnp tool [1118ebb](https://github.com/rdk-e/apparmor-profiles/commit/1118ebbfb8042efed0a7ea8158ef709c73e6a8f0)
- RDK-56646: AppArmor to enforce access privileges for upnp tool [5fab343](https://github.com/rdk-e/apparmor-profiles/commit/5fab3434c903f88b8b4527b862f313b7619938ec)
- RDK-56646: AppArmor to enforce access privileges for upnp tool [5d07fb6](https://github.com/rdk-e/apparmor-profiles/commit/5d07fb656209b260e8f325723b8a84749afdceee)
- RDK-56646: AppArmor to enforce access privileges for upnp tool [5dd68e7](https://github.com/rdk-e/apparmor-profiles/commit/5dd68e790db22ab881a7674d7e3af73dcdc8398f)
- RDK-56646: AppArmor to enforce access privileges for upnp tool [99c58c7](https://github.com/rdk-e/apparmor-profiles/commit/99c58c7cd4c5f181ec72ffab15598ad5fadb873d)
- RDK-56646: AppArmor to enforce access privileges for upnp tool [9494f92](https://github.com/rdk-e/apparmor-profiles/commit/9494f923d7d3bf2679f84fef5af93267c7587e82)
- RDK-56646: AppArmor to enforce access privileges for upnp tool [8e3134b](https://github.com/rdk-e/apparmor-profiles/commit/8e3134b92415e9bd35fbb3e1252766619467f87b)
- RDK-56646: AppArmor to enforce access privileges for upnp tool [548afba](https://github.com/rdk-e/apparmor-profiles/commit/548afba1e5f393a2555b5d532552fa4ef2a57ba7)
- RDK-56646: AppArmor to enforce access privileges for upnp tool [2e6bb81](https://github.com/rdk-e/apparmor-profiles/commit/2e6bb81f610f0994d4c19cc92b586b7945d9c752)
- RDK-56646: AppArmor to enforce access privileges for upnp tool [eb77c82](https://github.com/rdk-e/apparmor-profiles/commit/eb77c8292b8f202036f2d5eb1db8e022eb2d62bd)
## ['product-firmware-pb'](https://github.com:rdk-e/firmware-prebuilt-xione-soc-realtek.git/blob/main/CHANGELOG.md)
