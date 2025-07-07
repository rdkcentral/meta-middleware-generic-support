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
|Date|07 Jul 2025|
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

The aim of this release to sync the RDKE with the latest RDKV release tag RDKV-8.2s15 [RDKEVD-1730](https://ccp.sys.comcast.net/browse/RDKEVD-1730). This release will provide a versioned "meta-vendor-xione-realtek-release" that will be used by the middleware as well as image assembler.
### The scope of this release includes:

- DUT getting stuck at Sky logo screen during Automation Run [XIONE-17406](https://ccp.sys.comcast.net/browse/XIONE-17406)
- After FSR multiple issues are observed [XIONE-17393](https://ccp.sys.comcast.net/browse/XIONE-17393)
- Unable to pair RCU in BT mode [XIONE-17388](https://ccp.sys.comcast.net/browse/XIONE-17388)
- Update XIONE-REALTEK hostDataDefault [RDKEVD-1814](https://ccp.sys.comcast.net/browse/RDKEVD-1814)
- Install vendorConfig.json for STBs for AS to be dynamically configured in both RDK-E [RDKEVD-1594](https://ccp.sys.comcast.net/browse/RDKEVD-1594)
- Update vendor-layer for gst-svp-ext API to latest version in RDK E [RDKEVD-1564](https://ccp.sys.comcast.net/browse/RDKEVD-1564)
- Perform wifi Driver initializing before the Network Service [RDKEVD-815](https://ccp.sys.comcast.net/browse/RDKEVD-815)
- Wifi crash during boot after an FSR [RDKEVD-752](https://ccp.sys.comcast.net/browse/RDKEVD-752)
- kworker/u8 taints observed during reboot [RDKEVD-674](https://ccp.sys.comcast.net/browse/RDKEVD-674)
- wifi.service takes more time to start/initialize for RDKE than RDKV. [RDKEVD-562](https://ccp.sys.comcast.net/browse/RDKEVD-562)

## Release layer and components

### Vendor Release Components

| Vendor Release Components | New Version (8.0.3) | Version in Previous Release (7.0.1) | Changelist |
|------------|---------|------------------------------------|------------|
| Kernel & DTB | | 4.9.119.01-r8  | |
| packagegroup-vendor-layer | 8.0.3-r0 | 7.0.1-r0 | [7.0.1....8.0.3](https://github.com/rdk-e/meta-oem-realtek-stream/compare/7.0.1...8.0.3) |
| packagegroup-common-vendor-layer | 1.0.8-r0 | 1.0.5-r0 |[1.0.5....1.0.8](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/compare/1.0.7...1.0.8)  |
### Stack layer

| Release meta Layer | Tag |
|------|------|
| [meta-vendor-xione-realtek-release](https://github.com/rdk-e/meta-vendor-xione-realtek-release) | [8.0.3](https://github.com/rdk-e/meta-vendor-xione-realtek-release/tree/8.0.3) |

#### Artifactory Location for IPKs

| Product | Location |
|------------|---------|
| XiOne-UK | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-uk-release/8.0.3/xione-uk/ipks/debug |
| XiOne-Foxtel | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-foxtel-release/8.0.3/xione-foxtel/ipks/debug |
| XiOne-DE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-de-release/8.0.3/xione-de/ipks/debug |
| XiOne-Alpaca-De | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-alpaca-de-release/8.0.3/xione-alpaca-de/ipks/debug |
| XOE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xfinity-stream-box-release/8.0.3/xfinity-stream-box/ipks/debug |
| WNC Xfinity | https://partners.artifactory.comcast.com/ui/repos/tree/General/wnc-xfinity-stream-box-release/8.0.3/wnc-xfinity-stream-box/ipks/debug |
| RTK-Flex2 | https://partners.artifactory.comcast.com/ui/repos/tree/General/xumo-stream-box-release/8.0.3/xumo-stream-box/ipks/debug |
### Meta Repos

#### Meta repos maintained by layers layer

| Meta Repo | New Version (8.0.3) | Version in Previous Release (7.0.1) | ChangeList |
|------------|---------|------------------------------------|--------------|
| [meta-rdk-auxiliary](#meta-rdk-auxiliary) |  **1.3.0** | 1.2.0 | [1.2.0...1.3.0](https://github.com/rdkcentral/meta-rdk-auxiliary/compare/1.2.0...1.3.0) |
| [meta-oss-reference-release](#meta-oss-reference-release) |  **4.7.0** | 4.6.0 | [4.6.0...4.7.0](https://github.com/rdkcentral/meta-oss-reference-release/compare/4.6.0...4.7.0) |
| [meta-rdk-oss-reference](#meta-rdk-oss-reference) |  **4.7.0** | 1.2.0 | [1.2.0...4.7.0](https://github.com/rdkcentral/meta-rdk-oss-reference/compare/1.2.0...4.7.0) |
| meta-rdk-tools |  | 2.3.1 | |
| meta-vts |  | 1.2.0 | |
| [meta-rdk-soc-realtek](#meta-rdk-soc-realtek) |  **4.0.9** | 4.0.7 | [4.0.7...4.0.9](https://github.com/rdk-e/meta-rdk-soc-realtek/compare/4.0.7...4.0.9) |
| [meta-oem-stream](#meta-oem-stream) |  **4.0.6** | 4.0.3 | [4.0.3...4.0.6](https://github.com/rdk-e/meta-oem-stream/compare/4.0.3...4.0.6) |
| [meta-oem-realtek-stream](#meta-oem-realtek-stream) |  **8.0.3** | 7.0.1 | [7.0.1...8.0.3](https://github.com/rdk-e/meta-oem-realtek-stream/compare/7.0.1...8.0.3) |
| [meta-rdk-vendor-realtek-common](#meta-rdk-vendor-realtek-common) |  **1.0.8** | 1.0.5 | [1.0.5...1.0.8](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/compare/1.0.5...1.0.8) |
| [meta-oss-vendor-realtek](#meta-oss-vendor-realtek) |  **4.0.10** | 4.0.7 | [4.0.7...4.0.10](https://github.com/rdk-e/meta-oss-vendor-realtek/compare/4.0.7...4.0.10) |
| [meta-mediarite-vendor](#meta-mediarite-vendor) |  **21.1.1** | 10.0.34.0a2-r2 | [10.0.34.0a2-r2...21.1.1](https://github.com/rdk-e/meta-mediarite-vendor/compare/10.0.34.0a2-r2...21.1.1) |

#### Meta repos common for RDK-E

| Meta Repo | New Version (8.0.3) | Version in Previous Release (7.0.1) | ChangeList |
|------------|---------|------------------------------------|--------------|
| **buildscripts** ||||
| build-scripts |  **1.0.1** | 4.1.1 | [4.1.1...1.0.1](https://github.com/rdkcentral/build-scripts/compare/4.1.1...1.0.1) |
| | | | |
| **buildsupport** ||||
| meta-image-support |  **4.2.4** | 4.2.2 | [4.2.2...4.2.4](https://github.com/rdk-e/meta-image-support/compare/4.2.2...4.2.4) |
| meta-stack-layering-support |  **2.1.3** | 1.2.0 | [1.2.0...2.1.3](https://github.com/rdkcentral/meta-stack-layering-support/compare/1.2.0...2.1.3) |
| | | | |
| **oe** ||||
| meta-openembedded |  | rdk-4.0.0 | |
| poky |  **rdk-4.3.1** | rdk-4.1.0 | [rdk-4.1.0...rdk-4.3.1](https://github.com/rdkcentral/poky/compare/rdk-4.1.0...rdk-4.3.1) |
| meta-python2 |  | rdk-4.0.0 | |
| | | | |
| **extention** ||||
| meta-rdk-oss-ext |  **1.3.0** | 1.2.0 | [1.2.0...1.3.0](https://github.com/rdk-e/meta-rdk-oss-ext/compare/1.2.0...1.3.0) |
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
| meta-rdk-halif-headers |  **3.0.0** | 1.0.3 | [1.0.3...3.0.0](https://github.com/rdkcentral/meta-rdk-halif-headers/compare/1.0.3...3.0.0) |
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
| 5 | devicesettings-hal-headers | **6.0.0** | 4.1.2 |
| 6 | tvsettings-hal-headers | **2.3.0** | 2.1.0 |
|   |   |  |  |
|   | RDK HAL Headers (RDKE github) |  |  |
|   |   |  |  |
| 7 | iarmmgrs-hal-headers | **1.0.12** | 1.0.1 |
| 8 | closedcaption-hal-headers | | 1.0.0 |
| 9 | iarmbus-headers | | 1.0.1 |
| 10 | rdk-gstreamer-utils-headers | **2.0.0** | 1.0.0 |

### Limitations
It should be noted that some services may not run as they have dependencies with other layers. Additionally, the exclusion of inter-layer bbappends/patches might result in the failure to start some services. These limitations should be taken into consideration during the verification process. These Limitations will be addressed in Future Releases.
### Middleware Integration

##### XiOne-XOE
- Created the  middleware image `"SCXI11AIC_MIDDLEWARE_DEV_refs_tags_2.16.0_20250703194304.bin`" for XOE from the `" https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/view/1-RDKE-Pipeline-Jobs/job/RTK-XIONE-XFINITY-STREAM-BOX-Middleware-Build/256`"


##### XiOne-Xumo
- Created the  middleware image  `"SCXI11AIC_MIDDLEWARE_DEV_refs_tags_2.16.0_20250703200756.bin`" from `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/view/1-RDKE-Pipeline-Jobs/job/RTK-XIONE-XUMO-STREAM-BOX-Middleware-Build/52/s3/`"
 

##### XiOne-WNC-Xfinity
- Created the  middleware image `"WNXI11AEI_MIDDLEWARE_DEV_refs_tags_2.16.0_20250703201647.bin`" from `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-WNC-XFINITY-Middleware-Build/32/s3/`"

- Testing done by using the tag `"refs/tags/2.16.0"` included of latest vendor ipk feed info https://github.com/rdk-e/meta-vendor-xione-realtek-release/blob/release/8.0.3/conf/machine/include/vendor.inc 
#### Image assembler side

- We are unable to generate the Image Assembler for WNC-Xfinity and Xumo stream box
  Please check the error build
   https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/view/4-Assembler-Jobs/job/RTK-XIONE-WNC-XFINITY-Image-Assembler-Build/25/
   https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-XUMO-STREAM-BOX-Image-Assembler-Build/6/
#### Middleware side
- None

#### Known issue
- Known issue list [here](https://ccp.sys.comcast.net/browse/XIONE-17440?jql=labels%20%3D%20Vendor_8.0.3)
## Build instructions

- Steps to check out and build the vendor layer project [https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project](https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project)
- Steps to check out and build the image assembler project [https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler](https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler)


### Boot Command

#### Copy image to device /mnt/usb or /opt partitions or connect and mount USB having the image binn- Execute FlashApp command
- Move to directory containing the image
- FlashApp \<dirname\> \<imagename\>
- eg. FlashApp /mnt/usb/SKXI11ADS_VENDOR_DEV_refs_tags_8.0.3_20250703153033.bin
#### USB Flash Method using xboot prompt
- Copy the image `"SKXI11ADS_VENDOR_DEV_refs_tags_8.0.3_20250703153033.bin"` to the usb and connect to the STB
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

- Created the `"vendor test image"` `"SKXI11ADS_VENDOR_DEV_refs_tags_8.0.3_20250703153033.bin for XiOne-UK and for all other variants as well"` using the vendor layer jenkins job `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Vendor-Release-Build/145/"`
- Successfully booted the `"vendor test image"` and obtained the shell prompt.
- Verified vendor layer services up and running
- Verified IP acquisition via Ethernet
- Played clear AV with gst-play-1.0.
- Verified image flashing using FlashApp


Testing details in [RDKEVD-1730](https://ccp.sys.comcast.net/browse/RDKEVD-1730)

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
| July 07 2025 |  SKXI11ADS_VENDOR_DEV_refs_tags_8.0.3_20250703153033 | 1547372 | 454340 | 22894 | 477234 | 2169442 |
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
| July 07 2025 |  SKXI11ADSSOFT_VENDOR_DEV_refs_tags_8.0.3_20250703153049 | 1547372 | 456100 | 22948 | 479048 | 2167628 |
| May 23 2025 |  SKXI11ADSSOFT_VENDOR_DEV_refs_tags_7.0.1_20250521111501 | 1547376 | 441859 | 28425 | 470284 |2176388 |
| May 16 2025 |  SKXI11ADSSOFT_7.0.0_VENDOR_DEV | 1547376 | 441861 | 28752 | 470613 | 2176059 |
| Mar 26 2025 |  SKXI11ADSSOFT_VENDOR_DEV_refs_tags_6.0.2_20250324172329 | 1547376 | 438063 | 28223 | 466286 | 2180386 |
| Jan 28 2025 |  SKXI11ADSSOFT_VENDOR_DEV_refs_tags_5.0.2_20250124172925 | 1547368 | 443566 | 28438 | 472004 | 2174676 |
| Dec 30 2024 |  SKXI11ADSSOFT_VENDOR_DEV_refs_tags_5.0.0_20241224173052 | 1547368 | 450228 | 32825 | 483053 | 2163627 |
##### XiOne-DE
| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| July 07 2025 |  SKXI11AIS_VENDOR_DEV_refs_tags_8.0.3_20250703153514 | 1547344 | 472815 | 22831 | 495646 | 2151058 |
| May 23 2025 |  SKXI11AIS_VENDOR_DEV_refs_tags_7.0.1_20250521111817 | 1547348 | 463827 | 28698 | 492525 | 2154175 |
| May 16 2025 |  SKXI11AIS_7.0.0_VENDOR_DEV | 1547348 | 463950 | 29451 | 493401 | 2153299 |
| Mar 26 2025 |  SKXI11AIS_VENDOR_DEV_refs_tags_6.0.2_20250324181951 | 1547348 | 460736 | 28870 | 489606 | 2157094 |
##### XiOne-Alpaca-DE
| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| July 07 2025 |  SKXI11AEISODE_VENDOR_DEV_refs_tags_8.0.3_20250703153622 | 1547372 | 456489 | 22418 | 478907 | 2167769 |
| May 23 2025 |  SKXI11AEISODE_VENDOR_DEV_refs_tags_7.0.1_20250521111552 | 1547376 | 443789 | 28103 | 471892 | 2174780 |
| May 16 2025 |  SKXI11AEISODE_VENDOR_DEV_refs_tags_7.0.0_20250511204108 | 1547376 | 440746 | 28691 | 469437 | 2177235 |
| Mar 26 2025 |  SKXI11AEISODE_VENDOR_DEV_refs_tags_6.0.2_20250324172723 | 1547376 | 445013 | 28365 | 473378 | 2173294 |
##### Xfinity-stream-box
| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| July 07 2025 |  SCXI11AIC_VENDOR_DEV_refs_tags_8.0.3_20250703153149 | 1547348 | 471276 | 22551 | 493827 | 2152873 |
| May 23 2025 |  SCXI11AIC_VENDOR_DEV_refs_tags_7.0.1_20250521111902 | 1547356 | 461028 | 28952 | 489980 | 2156712 |
| May 16 2025 |  SCXI11AIC_VENDOR_DEV_refs_tags_7.0.0_20250511210103 | 1547356 | 457862 | 28380 | 486242 | 2160450 |
| Mar 26 2025 |  SCXI11AIC_VENDOR_DEV_refs_tags_6.0.2_20250324172822 | 1547356 | 456510 | 29065 | 485575 | 2161117 |
##### Xumo-stream-box
| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| May 23 2025 |  SCXI11AIC_VENDOR_DEV_refs_tags_7.0.1_20250521112318 | 1547356 | 457230 | 28700 | 485930 | 2160762 |
| May 16 2025 |  SCXI11AIC_VENDOR_DEV_refs_tags_7.0.0_20250511211029 | 1547356 | 456878 | 29452 | 486330 | 2160362 |
| Mar 26 2025 |  SCXI11AIC_VENDOR_DEV_refs_tags_6.0.2_20250324190109     | 1547356 | 456595 | 28437 | 485032 | 2161660 |
##### WNC Xfinity
| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| July 07 2025 |  WNXI11AEI_VENDOR_DEV_refs_tags_8.0.3_20250703153256 | 1547348 | 473436 | 23006 | 496442 | 2150258 |
| May 23 2025 |  WNXI11AEI_VENDOR_DEV_refs_tags_7.0.1_20250521171806 | 1547356 | 473728 | 29253 | 502981 | 2143711 |
| May 16 2025 |  WNXI11AEI_VENDOR_DEV_refs_tags_7.0.0_20250512160923 | 1547356 | 472994 | 22047 | 495041 | 2151651 |
### Fullstack image testing

##### XiOne-UK
- Created Image Assembler build `"SKXI11ADS_DEV_develop_20250703163813.bin`" from `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Image-Assembler-Build/2304/s3/`"

##### XiOne-Foxtel

- Created Image Assembler build `"SKXI11ADSSOFT_DEV_develop_20250703164051.bin`" from `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/view/4-Assembler-Jobs/job/RTK-XIONE-Foxtel-Image-Assembler-Build/194/s3/`"

##### XiOne-Alpaca-DE
- Created Image Assembler build `"SKXI11AEISODE_DEV_develop_20250703163944.bin`" from `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/view/4-Assembler-Jobs/job/RTK-XIONE-ALPACA-DE-Image-Assembler-Build/49/s3/`"

##### XiOne-DE
- Created Image Assembler build `"SKXI11AIS_DEV_develop_20250703163903.bin`" from `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/view/4-Assembler-Jobs/job/RTK-XIONE-DE-Image-Assembler-Build/176/s3/`"
- Testing done by using the tag `"refs/tags/2.16.0"` included of latest vendor ipk feed info https://github.com/rdk-e/meta-vendor-xione-realtek-release/blob/release/8.0.3/conf/machine/include/vendor.inc 

- Tested the below scenarios as part of [RDKEVD-1730](https://ccp.sys.comcast.net/browse/RDKEVD-1730)

  - Successfully booted \"SKXI11ADS_DEV_develop_20250703163813\" and obtained the shell prompt and UI.
  - Verified UI navigation
  - Verified AV with Disney+ App
  - Verified AV with Xumo Play
  - Verified AV with Netflix
  - Verified AV with Amazon Prime
  - Verified AV with YouTube
  - Verified remote control pairing
  - Verified Log files are present in /opt/logs
  
- Note

  - Issues observed in  release 8.0.3 https://ccp.sys.comcast.net/issues/?jql=labels%20%3D%20Vendor_8.0.3
  - Attached the test report here https://ccp.sys.comcast.net/secure/attachment/11549623/Re_%20%5BRelease%5D%20XiOne%20RTK%208.0.3%20vendor%20layer%20release%20%28Sync%20with%20RDKV-8.2s15%20Release%29.msg
## Components details in 'packagegroup-common-vendor-layer'
| # | Vendor layer Component | New PV-PR (8.0.3) | PV-PR in Previous Release (7.0.1)| New SRCREV | SRCREV in Previous Release (7.0.1)| Diff |
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
| 13 | qca6390-mod-wifi | **1.0.3-r1** | 1.0.0-r1 |  | NA |  |
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
| 29 | [media-utils-soc-realtek](#media-utils-soc-realtek) | **1.0.5-2.1.1-r1** | 1.0.5-1.0.0-r1 | **30f3fdd** | 5e71382 |  [5e71382...30f3fdd](https://github.com/rdk-e/media_utils-soc-realtek/compare/5e713820e7b55d176cd135eea0f3f2b1ec0756d7...30f3fddd6279407d3d11e4f55451642c912ce32f) |
| 30 | [closedcaption-hal-realtek](#closedcaption-hal-realtek) | **1.0.0-3.1.0-r0** | 1.0.0-3.0.0-r0 | **ee52d85** | 2f365d0 |  [2f365d0...ee52d85](https://github.com/rdk-e/closedcaption-soc-realtek/compare/2f365d0a27783d3fd435cea53fe7eb007fcf7602...ee52d85adaa5ddfdef8bc9f413d5c7b4992474a9) |
| 31 | hdmicec-hal-realtek | | 1.3.10-3.0.1-r0 |  | 950a89e |  |
| 32 | rdk-gstreamer-utils-platform | **2.0.0-2.0.0** | 1.0.0-2.0.0 |  | 6ba04b9 |  |
| 33 | devicesettings-hal-realtek | **6.0.0-4.1.3-r0** | 4.1.2-4.1.0-R37-r0 |  |  |  |
| - |  - devicesettings-hal-realtek_devicesettingssocrealtek | |  | **3f059a2** | ad17470 |  [](https://github.com/rdk-e/closedcaption-soc-realtek) |
| - |  - devicesettings-hal-realtek_devicesettingsskyxione | |  | **4032202** | 6929995 |  [](https://github.com/rdk-e/closedcaption-soc-realtek) |
| 34 | deepsleepmgr-hal-realtek | | 1.0.4-1.0.2-r0 |  | adaf974 |  |
| 35 | pwrmgr-hal-realtek | | 1.0.3-1.0.0-r0 |  | c91e047 |  |
| 36 | otp-program | | 2.2-r1 |  | NA |  |
| 37 | gstreamer1.0 | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 38 | gstreamer1.0-meta-base | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 39 | gstreamer1.0-omx | **1.10.4-r5** | 1.10.4-r4 |  | NA |  |
| 40 | gstreamer1.0-libav | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 41 | gstreamer1.0-plugins-good | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 42 | gstreamer1.0-plugins-good-meta | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 43 | gstreamer1.0-plugins-bad | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 44 | gstreamer1.0-plugins-bad-meta | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 45 | gstreamer1.0-rtsp-server | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 46 | gstreamer1.0-plugins-base | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 47 | gstreamer1.0-plugins-base-meta | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 48 | gstreamer1.0-plugins-base-playback | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 49 | gstreamer1.0-plugins-good-wavparse | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 50 | gstreamer1.0-plugins-good-audiofx | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 51 | gstreamer1.0-plugins-good-isomp4 | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 52 | gstreamer1.0-plugins-good-audioparsers | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 53 | gstreamer1.0-plugins-good-soup | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 54 | gstreamer1.0-plugins-base-gio | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 55 | gstreamer1.0-plugins-base-videoconvert | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 56 | gstreamer1.0-plugins-base-videoscale | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 57 | gstreamer1.0-plugins-base-volume | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 58 | gstreamer1.0-plugins-base-typefindfunctions | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 59 | gstreamer1.0-plugins-good-autodetect | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 60 | gstreamer1.0-plugins-good-avi | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 61 | gstreamer1.0-plugins-good-deinterlace | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 62 | gstreamer1.0-plugins-good-interleave | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 63 | gstreamer1.0-plugins-bad-dash | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 64 | gstreamer1.0-plugins-bad-mpegtsdemux | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 65 | gstreamer1.0-plugins-bad-smoothstreaming | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 66 | gstreamer1.0-plugins-bad-videoparsersbad | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 67 | gstreamer1.0-plugins-bad-opusparse | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 68 | gstreamer1.0-plugins-bad-dashdemux | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 69 | gstreamer1.0-plugins-good-matroska | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 70 | gstreamer1.0-plugins-base-app | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 71 | gstreamer1.0-plugins-base-audioconvert | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 72 | gstreamer1.0-plugins-base-audioresample | **1.18.5-r5** | 1.18.5-r4 |  | NA |  |
| 73 | westeros-simpleshell | | 1.01.58-r0 |  | 3472e86 |  |
| 74 | westeros-simplebuffer | | 1.01.58-r0 |  | 3472e86 |  |
| 75 | westeros-soc | | 1.01.58-r0 |  | 3472e86 |  |
| 76 | westeros-sink | | 1.01.58-r0 |  |  |  |
| - |  - westeros-sink_westeros | |  |  | 3472e86 |  |
| - |  - westeros-sink_realtek | |  |  | e32f912 |  |
| 77 | westeros | | 1.01.58-r0 |  | 3472e86 |  |
| 78 | essos | | 1.01.58-r0 |  | 3472e86 |  |
| 79 | make-mod-scripts | | 1.0-r0 |  | NA |  |
| 80 | sky-fpbutton-driver | | 3.0.0-r0 |  | acd582d |  |
| 81 | splashscreen-viewer | | 2.0.0-r0 |  | 41e70a2 |  |
| 82 | rtk-tee | | 1.0.0-r0 |  | NA |  |
| 83 | secapi-rtk | | 2.1.0-r2 |  | 95b6bd4 |  |
| 84 | [secapi3-rtk](#secapi3-rtk) | **3.3.1-r0** | 3.3.0-r0 | **f7ed818** | 570df40 |  [570df40...f7ed818](https://github.com/rdk-e/secapi3-soc-realtek-cpc/compare/570df4041c863710c747ec9640d5dec1bbc09e35...f7ed81834c894d68b24c691cb6cc157c33147dfb) |
| 85 | secapi2-adapter | | 1.0.0-r0 |  | NA |  |
| 86 | secapi-common-hw | | 2.3.0-r0 |  | 3a51b88 |  |
| 87 | secapi-netflix | | 1.0.0-r0 |  |  |  |
| - |  - secapi-netflix_com_inc_rtk | |  |  | 0fa3af3 |  |
| - |  - secapi-netflix_socrealtek | |  |  | d3c7c87 |  |
| 88 | gst-svp-ext | **1.2.0-r0** | 1.1.0-r0 |  | NA |  |
| 89 | systemaudioplatform | | 1.0.0-r0 |  | 776348d |  |
| 90 | miracast-soc | | 1.0.0-r0 |  | 30cb689 |  |
| 91 | secapi-crypto-rtk | | 2.3.1-r0 |  | 5241d45 |  |
| 92 | secapi-common-crypto | | 2.3.0-r0 |  | 3a51b88 |  |
| 93 | flashapp | | 7.1-r0 |  | NA |  |
| 94 | sky-led-driver | | 2.0.0-r0 |  | f97a795 |  |
| 95 | hank-mod-mali | | 3.0.0-r0 |  | a574cc2 |  |
| 96 | rtkv1sink | | 2.0.0-r1 |  | 67bdf5b |  |
| 97 | platform-lib | | 2.6.0-r4 |  | NA |  |
| 98 | [rtk-audio-service](#rtk-audio-service) | **3.1.1-r0** | 3.1.0-r0 | **70f16d5** | 859de56 |  [859de56...70f16d5](https://github.com/rdk-e/RtkAudioService-soc-realtek/compare/859de560c6e05e1b9c8cdf8bf7353974de7b0c5b...70f16d5aaa0427dc7ac38b1d73da3e42a7795801) |
| 99 | [hdmiservice](#hdmiservice) | **4.1.2-r0** | 4.1.0-r0 | **7cad8ab** | 8a992bd |  [8a992bd...7cad8ab](https://github.com/rdk-e/hdmiservice-realtek/compare/8a992bd35d1cdf85dae163c54969c81628006e14...7cad8ab3281ae794e902116f50941bd82f4d380c) |
| 100 | rtkpcrclksink | | 2.0.0-r0 |  | c8272d9 |  |
| 101 | blewakeupenabler | **1.4.1-r0** | 1.4.0-r0 | **6f8176d** | 36408d5 |  [](https://github.com/rdk-e/hdmiservice-realtek) |
| 102 | linux-libc-headers | **4.9-r9** | 4.9-r8 |  | NA |  |
| 103 | packagegroup-kernel-modules | **4.9.119.01-r9** | 4.9.119.01-r8 |  | NA |  |
| 104 | [linux-hank](#linux-hank) | **4.9.119.01-r9** | 4.9.119.01-r8 | **f8fe28d** | 66a4a9f |  [66a4a9f...f8fe28d](https://github.com/rdk-e/linux_kernel-soc-realtek/compare/66a4a9f40752ad09e8402e5ed68ef89ad9f64891...f8fe28d2e0b1182a221f2bf119499f4fd1ae03b0) |
| 105 | mediarite-vendor | | 10.0.34.0a2-r0 |  | NA |  |
| 106 | broadcast-hal-api | **1.1-r0** | NA |  | NA |  |
| 107 | broadcast-hal-config | **1.0-r0** | NA |  | NA |  |
| 108 | gst-plugins-mediarite | | 1.0-r0 |  | NA |  |
| 109 | [rtkaudiosink](#rtkaudiosink) | **3.1.3-r0** | 3.1.0-r0 | **3e9ee18** | 2feae17 |  [2feae17...3e9ee18](https://github.com/rdk-e/rtkaudiosink-soc-realtek/compare/2feae17880a6d032f4b7f82910e25688c5cc948b...3e9ee1864988da0bae9bccf1611502f1b24e91e8) |
| 110 | mfi-ree | | 2.0.0-r0 |  | 4941717 |  |
| 111 | [sysint-oem](#sysint-oem) | **3.0.3-r1** | 3.0.0-r0 | **356c2ab** | 50d274a |  [50d274a...356c2ab](https://github.com/rdk-e/sysint-xione-rtk/compare/50d274ab26926f5e7f1ece6ba4144ca75d7c19e9...356c2abae64ec1463422a27525bdbab02fdb2558) |
| 112 | apparmor-vendor | | 2.3.2-r0 |  | 4de375b |  |
| 113 | directfb | | 1.7.7-r0 |  | NA |  |
| 114 | [product-firmware-pb](#product-firmware-pb) | **1.0.7-r0** | 1.0.5-r0 | **7e775dc** | ac17418 |  [ac17418...7e775dc](https://github.com:rdk-e/firmware-prebuilt-xione-soc-realtek.git/compare/ac174188d8e155240e20a2fe39f286cb3f4cc3df...7e775dcb7dc1327bc164e4387be4e89446a10278) |
| 115 | testagentlib | **3.0.2-r1** | 3.0.2-r0 |  |  |  |
| - |  - testagentlib_testagentlib | |  |  | b8eb1f8 |  |
| - |  - testagentlib_xione_factory | |  |  | 6281804 |  |
| 116 | libbinder | | 1.0.0-r1 |  | 0f7a23b |  |
| 117 | aidl-generator-native | | 1.0.0-r1 |  | 0f7a23b |  |
| 118 | flash-aidl | | 1-r0 |  | ddcceef |  |
| 119 | image-hal-service | | 1.0.0-r0 |  | 7eb82c9 |  |
| 120 | platform-imagehal-lib | | 1.0.0-r0 |  | NA |  |


## Components Removed

| # |  Component Name | Reason |
|----|--------------|------|
| 1 | iarmmgrs-hal-realtek |  |



## Consolidated change list from vendor layer repositories

## Changes in meta repositories

## [meta-rdk-auxiliary](https://github.com/rdkcentral/meta-rdk-auxiliary/blob/main/CHANGELOG.md)

- Update volatile-bind-gen.md [a71ecd0](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/a71ecd015b02ec51d2447ff564bf08981a721177)
- Update volatile-bind-gen.md [59c6a3f](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/59c6a3f6bb4717526bb720fe54562382d4306601)
- Update volatile-bind-gen.md [a0eb438](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/a0eb438bd8312daeb5f6719a1058556c945c63e6)
- Update volatile-bind-gen.md [ba85b07](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/ba85b0785aa0bd99d9b009d42c2aef83da9e5412)
- Update volatile-bind-gen.md [71bd968](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/71bd968b9018cc6f0447ab2c6a89fd483c45e7c7)
- Update volatile-bind-gen.bbclass [8cffe3e](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/8cffe3eb07599096bcf494151398007dbbf87242)
- Update volatile-bind-gen.md [b3e3446](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/b3e3446c49249a52e1398c903f33c5569cbe2924)
- Update volatile-bind-gen.md [9634f01](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/9634f01089552c6272d3b855900606c7e1560106)
- Update volatile-bind-gen.bbclass [2791453](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/279145316a53015b8a52a925c07127220110e0e8)
- Update volatile-bind-gen.bbclass [811bde9](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/811bde9d902d0bbb216b5be96a3ce5b0d4e87d4f)
- Create bind-gen-Framework.md [809a983](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/809a983fd9ac28c271b66ed339879f63dfcbaf6c)
- Update volatile-bind-gen.bbclass [27875a3](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/27875a3e0537e0e31ca523a7c5fe1022405e6bb3)
- Update NOTICE [a3782d3](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/a3782d321c00e41c78ffe3a7e1ee40cf869f6549)
- RDK-56570 : Standardize Volatile Binds Management ( [#22](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/22))

## [meta-oss-reference-release](https://github.com/rdkcentral/meta-oss-reference-release/blob/main/CHANGELOG.md)

- RDKE-828: OSS release 4.7.0 [5955235](https://github.com/rdkcentral/meta-oss-reference-release/commit/59552357ff992f744599044093b7e4df7936a7aa)
- RDKE-840: Modify poky version and readme file ( [#33](https://github.com/rdkcentral/meta-oss-reference-release/pull/33))
- RDKE-840: Modify release version and readme file ( [#32](https://github.com/rdkcentral/meta-oss-reference-release/pull/32))
- RDKOSS-305 : Update date in README.md ( [#28](https://github.com/rdkcentral/meta-oss-reference-release/pull/28))
- RDKOSS-305: Modify release version and readme file ( [#25](https://github.com/rdkcentral/meta-oss-reference-release/pull/25))

## [meta-rdk-oss-reference](https://github.com/rdkcentral/meta-rdk-oss-reference/blob/main/CHANGELOG.md)

- RDKE-828:  OSS release 4.7.0 ( [#113](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/113))
- RDKOSS-36: Updated revision for cleaned-up recipes ( [#112](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/112))
- RDKE-705, RDK-55422: Libsoup 3.6.5 upgrade ( [#71](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/71))
- RDKOSS-331: Add native crc32 utility for checksum in vendor U-Boot ( [#109](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/109))
- RDKEVD-1264: Add api to control client firstframe ( [#96](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/96))
- Update systemd_230.bbappend [698aa6f](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/698aa6fa6fd5376cb2e371844b66c44e578f3e87)
- RDKOSS-306:Bring in required grpc apis ( [#106](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/106))
- Delete recipes-support/cryptsetup/cryptsetup_1.7.2.bbappend [a4a70a9](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/a4a70a9e20a9c2e0a65ff9a11640a105280e218d)
- Delete recipes-devtools/jq/jq_1.6.bbappend [5311163](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/5311163f086fcd73899b8718dee5f5ef7b635f6a)
- RDKE-840 : Update release version to 4.6.4 ( [#102](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/102))
- RDKEMW-4694: NetworkManager service is in failed state ( [#101](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/101))
- RDK-57139:  Enabling segmented global profile in RDKE ( [#77](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/77))
- RDK-57365: introduce nss-bin package ( [#65](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/65))
- Update systemd_230.bbappend [5642d9d](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/5642d9d269260f3cc9e39be106065c6c1beea721)
- Update systemd_230.bbappend [d31e50d](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/d31e50d6904cee9b7809763612a6554d3e8f31a4)
- Update systemd_230.bbappend [136dbad](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/136dbad0e32759e2fa48f6ab89013884b807d087)
- RDKOSS-274: Remove unused patch files from meta-rdk-oss-reference Reason for change: As part of oss cleanup removing unused patches Test procedure: Build and ensure there is no difference in rootfs comparision Risk: Low [f64d42f](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/f64d42feb91bc3e8c4ae2d83e3f97b995402f9c3)
- RDKOSS-274: Remove unused patch files from meta-rdk-oss-reference Reason for change: As part of oss cleanup removing unused patches Test procedure: Build and ensure there is no difference in rootfs comparision Risk: Low [be3522a](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/be3522a84311aa07484e5f76791f21f4578e2e2a)
- RDKOSS-304 : Change PV to 4.6.3 for hotfix release Change PV to 4.6.3 in meta-rdk-oss-reference for hotfix release [72ed7ba](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/72ed7baa8a464cefd72e5f00df0b127bf6ef5c85)
- Update package_revisions_oss.inc [2596183](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/25961830969b4de7d04772e757965f5db1d8ac5f)
- RDKOSS-284 : explict-sync protocol support ( [#82](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/82))
- Update NM-wpa-service.patch [8f98734](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/8f98734b0bbe738cc1c1e441565611eeb8598743)
- Update NM-wpa-service.patch [0102577](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/01025770969b7c89b41caacdc75fcb9eccbdd0c5)
- RDK-56470 Federated Source Code For breakpad_wrapper ( [#75](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/75))
- RDK-54894,RDK-54893: RT Thread Priority Updates ( [#70](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/70))
- RDKOSS-36,RDKOSS-29:Remove unused OSS packages ( [#74](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/74))
- RDK-56684: Update Westeros to 1.01.58 (latest) ( [#54](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/54))

## [meta-rdk-soc-realtek](https://github.com/rdk-e/meta-rdk-soc-realtek/blob/main/CHANGELOG.md)

- RDKEVD-1730 : Use libjpeg instead of libjpeg-turbo [bcf6ead](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/bcf6ead2faff672919c1366a0bdf52a9b58e852c)
- RDKEVD-1730 : Sync with RDKV-8.2s15 tag [08ccfcd](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/08ccfcd6a963259d1fe09dbcfa9a98b8b17257d6)
- RDKEVD-1730 : Remove the iarmmgrs-hal-realtek package dependency ( [#143](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/143))
- RDKEVD-1564: Update to latest gst-svp-ext ( [#123](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/123))
- RDKEVD-1882: Add video bitrate info [f2f61e5](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/f2f61e5ac1b4afd2d0f194753b1d96cf23a357ae)
- RDKEVD-839: Include stack layering 1.2.0 [00200ac](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/00200acc5809a218795024e09497c8aff63aeaf9)
- RDKEVD-408 : Fixing Segmentation fault - RMFAudioCapture Reason for change: To fix a crash issue occurring in the                    ~AudioCapturer() destructor. [8826575](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/88265753c9c58774738b9caafb1289000db1873f)

## [meta-oem-stream](https://github.com/rdk-e/meta-oem-stream/blob/main/CHANGELOG.md)

- RDKEVD-2063: Fix SOC name for Realtek in splashscreen manage_splash.sh [b878404](https://github.com/rdk-e/meta-oem-stream/commit/b878404bc4236faf5a0f4364266b07e136b3c7b0)
- RDKEVD-1730 : Sync with the RDKV 8.2 release [128d974](https://github.com/rdk-e/meta-oem-stream/commit/128d97447ee4737a5530977a233c4280351b3d9d)
- RDKEVD-1445: secapi migration to vendor layer ( [#34](https://github.com/rdk-e/meta-oem-stream/pull/34))
- RDKEVD-1447 : Include audioserver-soc [cd6a146](https://github.com/rdk-e/meta-oem-stream/commit/cd6a146cd0fcd979d30c5ea220c21ad19e80a0a9)

## [meta-oem-realtek-stream](https://github.com/rdk-e/meta-oem-realtek-stream/blob/main/CHANGELOG.md)

- RDKEVD-1730 : Latest product tag 8.0.3 [67630b4](https://github.com/rdk-e/meta-oem-realtek-stream/commit/67630b437998b8534d30b0ac99028fa28728d737)
- RDKEVD-1730 :  Update the source repo tags [8939389](https://github.com/rdk-e/meta-oem-realtek-stream/commit/893938947defb79b267c264353aa86924e4e16af)
- RDKEVD-1730 :  Fix the testagent version during sync [b98e45c](https://github.com/rdk-e/meta-oem-realtek-stream/commit/b98e45c81ee7b863ccd06fc395a312b8de4f7b55)
- RDKEVD-1730 : Sync with  RDKV-8.2s15 tag [3af18c7](https://github.com/rdk-e/meta-oem-realtek-stream/commit/3af18c7c598d5dbebcf9122dc99d4a6548c6dd3b)
- XIONE-17414: Import revised Qualcomm Wi-fi Firmware [9a6731d](https://github.com/rdk-e/meta-oem-realtek-stream/commit/9a6731d324c88303d3ccc31cf0fc44fbb4b350f4)
- RDKEVD-1730 : Latest product tag 8.0.2 [b30a976](https://github.com/rdk-e/meta-oem-realtek-stream/commit/b30a976180a877ebebdae3ab43c925115cfe58d1)
- RDKEVD-1730 :  Fix the linux hank compilation issues [d8513d8](https://github.com/rdk-e/meta-oem-realtek-stream/commit/d8513d8b1a572e100c1c31379f2c306f52e76e92)
- RDKEVD-1730 : Latest product tag 8.0.1 [4e21579](https://github.com/rdk-e/meta-oem-realtek-stream/commit/4e21579505bfe7a46b25260da48d0d2742b6a5d0)
- RDKEVD-1730 : Latest product tag 8.0.0 [b9b4395](https://github.com/rdk-e/meta-oem-realtek-stream/commit/b9b4395ae226590a158d233693e2ff3980ccd575)
- RDKEVD-1730 : Update common package group [0270a7c](https://github.com/rdk-e/meta-oem-realtek-stream/commit/0270a7c18551c44626c0275e914cad9b1c676494)
- RDKEVD-1730 : Remove the iarmmgrs-hal-realtek package dependency [cccad71](https://github.com/rdk-e/meta-oem-realtek-stream/commit/cccad715d68d43b1b2a18d8da7f0fa7b3c92093d)
- RDK-57197: Add Sift device specific variables [d6cbca1](https://github.com/rdk-e/meta-oem-realtek-stream/commit/d6cbca1c179bfb767dc599b7abe2f3722191b906)
- RDKEVD-1709 : Including the CHIPSET_NAME. [994604b](https://github.com/rdk-e/meta-oem-realtek-stream/commit/994604bc6612f948a48292de31cd1eb882babfc7)
- RDKEVD-1680 : SOC to return the current socname REALTEK [3c005b1](https://github.com/rdk-e/meta-oem-realtek-stream/commit/3c005b19bd5974ad9973695dd6a7bdf0605b57ea)
- RDKE: Dummy Release 7.0.4 [d2638a7](https://github.com/rdk-e/meta-oem-realtek-stream/commit/d2638a75c6dc2de5bc4e1451a0f1741917b0295c)
- RDKE: Dummy Release 7.0.3 [02e51e0](https://github.com/rdk-e/meta-oem-realtek-stream/commit/02e51e0457573941a069d42de18bf8aee43faa3f)
- RDKEVD-1782: Rename Distro feature for XRE remote support [34ce41f](https://github.com/rdk-e/meta-oem-realtek-stream/commit/34ce41f216e78f06c318681e88f12c23e4784dd3)
- RDK-57996 : libcgroup update in sysint. [9a47a8b](https://github.com/rdk-e/meta-oem-realtek-stream/commit/9a47a8b416139178736f3f534d6c09e75a639aa7)
- RDKEVD-815 : Network Mgr update in wifi service. [4464980](https://github.com/rdk-e/meta-oem-realtek-stream/commit/44649807798f171adedf2608d4c2c2e67c1ceb20)
- RDKEVD-1594: Add vendorConfig.json for STB platforms [b959015](https://github.com/rdk-e/meta-oem-realtek-stream/commit/b959015b323e6613c64993d73436478b1156edcb)
- RDKEVD-1480: Vendor Layer Mediarite Release 21.1 [2427ad1](https://github.com/rdk-e/meta-oem-realtek-stream/commit/2427ad12a83527586427e3392f431d6e9377a3f8)
- RDKEVD-1564: Update GST-SVP-EXT API to latest [e0b5f42](https://github.com/rdk-e/meta-oem-realtek-stream/commit/e0b5f4230e103ac6e6e872f2d1b294fe07638958)
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
- RDKEVD-829: On network interruption, the device wakes up from deep sleep to light sleep mode [655254e](https://github.com/rdk-e/meta-oem-realtek-stream/commit/655254e4f2c3ddf2eda5786a2bb2c2f38ebdcbe6)
- RDKEVD-1107: UNII3 - Removal of the RFC changes [649a028](https://github.com/rdk-e/meta-oem-realtek-stream/commit/649a0289814f55cc656d38e42f6d8e38e61b33ad)
- RDKEVD-489: L3 dsSetFPState API failed [54a4056](https://github.com/rdk-e/meta-oem-realtek-stream/commit/54a405609306f84a7d937397c25fe124dd062408)
- RDKEVD-489: L3 dsSetFPState API failed [20af35d](https://github.com/rdk-e/meta-oem-realtek-stream/commit/20af35defbe0aa56745923970048fa6cb8171fac)

## [meta-rdk-vendor-realtek-common](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/blob/main/CHANGELOG.md)

- RDKEVD-1730 :  Fix compilation issue for  8.2 sync [42dc26b](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/42dc26bb87bd6e5b16006fe1caef7b523ac8fa2e)
- RDKEVD-839: Include stack layering 1.2.0 [ddfbf3b](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/ddfbf3bba486242b9d5155716cd028ea0bd05cd8)
- RDKEVD-1421:Dummy RDKE VL Release [2ba6e75](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/2ba6e756190f0de6f49123c1b19267d11f1e3d90)
- RDKEVD-721: Added mfrlib rebuild version 8.1.1 [7ae3217](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/7ae321723d62c95f29b9957a9d7cfd477b48724d)

## [meta-oss-vendor-realtek](https://github.com/rdk-e/meta-oss-vendor-realtek/blob/main/CHANGELOG.md)

- RDKEVD-1730:Stable2 sync. ( [#81](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/81))
- RDKEVD-1730:Stable2 sync. ( [#79](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/79))
- RDKEVD-839: Include stack layering 1.2.0 [b0b758d](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/b0b758da52d1b4d9d96ebd6588a52aebfc100d46)
- RDKEVD-1064: To fix the Hayu trailer failed to start. [9bfe32a](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/9bfe32a78d82e3f07179ff1c85842f7e8bf3821f)
- RDKEVD-1267:Changes for AV Hijack issue. ( [#57](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/57))

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

## ['media-utils-soc-realtek'](https://github.com/rdk-e/media_utils-soc-realtek/blob/main/CHANGELOG.md)

- RDKEVD-408 : Fixing all the Segmentation faults - RMF Audio Capture Reason for change: Fixed handle, Param, State check Test Procedure: run rmfAudioCapture HAL L1 Test [9788082](https://github.com/rdk-e/media_utils-soc-realtek/commit/9788082079b1f25013707593341e8148c44565c9)
- Add CODEOWNERS file [6bfb801](https://github.com/rdk-e/media_utils-soc-realtek/commit/6bfb801fcf640353f5b51ea5be01bc2b675e4cc5)
- RDKEVD-482,XIONE-16955 : modify RMF_AudioCapture_GetDefaultSettings API Reason for change: return default fifoSize Test Procedure: run rmfAudioCapture HAL L3 Test [99a6f6e](https://github.com/rdk-e/media_utils-soc-realtek/commit/99a6f6eee977f1bff77e687e68b46531969e586d)
- Add GitHub Actions workflow file [a64a4d9](https://github.com/rdk-e/media_utils-soc-realtek/commit/a64a4d965ccc9475a2be4e725efbb4ab76dc4f38)
## ['closedcaption-hal-realtek'](https://github.com/rdk-e/closedcaption-soc-realtek/blob/main/CHANGELOG.md)

- RDKEVD-428 : Closed caption Decode sequence error in VTS [c50b3f7](https://github.com/rdk-e/closedcaption-soc-realtek/commit/c50b3f77e1ea09abbc4eff92fdcaca2f540b487c)
- RDKEVD-426,RDKEVD-427:Closed caption VTS L1 fixes [ded6bb0](https://github.com/rdk-e/closedcaption-soc-realtek/commit/ded6bb0bb2579d6a7c051c1d106766a43b97f7d2)
- Add CODEOWNERS file [85d268f](https://github.com/rdk-e/closedcaption-soc-realtek/commit/85d268f06832b132d335776b23e91ae75f68b992)
## ['secapi3-rtk'](https://github.com/rdk-e/secapi3-soc-realtek-cpc/blob/main/CHANGELOG.md)

- REALTEK-852 : XiOne & ES1 Nightly jobs failing due to compilation errors [147c8cc](https://github.com/rdk-e/secapi3-soc-realtek-cpc/commit/147c8cccbd04316afd21dc019ed21e7e5586dd45)
- Add CODEOWNERS file [e85a771](https://github.com/rdk-e/secapi3-soc-realtek-cpc/commit/e85a7711ea19bf36b84c4cc017e06118445769c8)
## ['rtk-audio-service'](https://github.com/rdk-e/RtkAudioService-soc-realtek/blob/main/CHANGELOG.md)

- RDKEVD-1608: Check instance pointer before access it. [58c8503](https://github.com/rdk-e/RtkAudioService-soc-realtek/commit/58c8503c562bc17f1c251504d4693be8696a13b0)
- WNCXIONE-494 : Check instance pointer before access it. [0dcf944](https://github.com/rdk-e/RtkAudioService-soc-realtek/commit/0dcf94474c848443e4f066e84681189a33497275)
- XIONE-16162 : Fix multiple PCM mix cases [1ff3f64](https://github.com/rdk-e/RtkAudioService-soc-realtek/commit/1ff3f6402b973a12b7d25cf96eec8023b935c41d)
- ES1-2401 : Fix libevent dispatch cant exit. [0d917e2](https://github.com/rdk-e/RtkAudioService-soc-realtek/commit/0d917e24a8eabbf2b54b4d6fe3e538beb91e5cca)
## ['hdmiservice'](https://github.com/rdk-e/hdmiservice-realtek/blob/main/CHANGELOG.md)

- RDKEVD-1668: Use dolby hw to process dolby vision video when output hdr10 [251a9c8](https://github.com/rdk-e/hdmiservice-realtek/commit/251a9c861510714d8bba3c1643baf2813f998291)
- Correct AVI infoframe content type mapping [3f022c7](https://github.com/rdk-e/hdmiservice-realtek/commit/3f022c7a6866b52cceccefe3d1b3a977211b76c9)
- Add HdmiService Coverity fixes [378a38d](https://github.com/rdk-e/hdmiservice-realtek/commit/378a38d2e72f73e3656872d5853412f7f5066a58)
- RDKEVD-799: Add Set / Get AVI content Type and Scan Information [55bacc8](https://github.com/rdk-e/hdmiservice-realtek/commit/55bacc875c01931f1ee4db821e0ec48304339f17)
- RDKEVD-1279: Initial HDMI_WRAP_VIDEO_CONFIG for HDMI_WRAP_GET_TV_SYSTEM_SETTING [8b76bd6](https://github.com/rdk-e/hdmiservice-realtek/commit/8b76bd67b017e419fd3309ae0901fb6f78cb3a93)
- XIONE-16790: Re-nego HDCP after AV Mute [51c68ae](https://github.com/rdk-e/hdmiservice-realtek/commit/51c68ae348809107461934b2277a381378a0f6d5)
## ['linux-hank'](https://github.com/rdk-e/linux_kernel-soc-realtek/blob/main/CHANGELOG.md)

- ES1-2625 : Add video bitrate info. [8d7e5b3](https://github.com/rdk-e/linux_kernel-soc-realtek/commit/8d7e5b338957bd64742724bf33a3843b448666d5)
- XIONE-16824 : Add video bitrate info [9c95f11](https://github.com/rdk-e/linux_kernel-soc-realtek/commit/9c95f11d94db366e74a2c80abdd2fe18d6db016f)
- RDKEVD-1882: Add video bitrate info [5c959c3](https://github.com/rdk-e/linux_kernel-soc-realtek/commit/5c959c37f9fee99dcf95747cf819e42957df8614)
- ES1-2499 : Porting metrics driver to ES1. [f6aa639](https://github.com/rdk-e/linux_kernel-soc-realtek/commit/f6aa639e1d6f8a03b9ed0a461a0174408610a0b9)
- XIONE-12428 : Fix kernel 5.10 driver build error.(Squash 2) [d0954fa](https://github.com/rdk-e/linux_kernel-soc-realtek/commit/d0954fa0423dbfb1189b430844c86c2aa8a14f11)
## ['rtkaudiosink'](https://github.com/rdk-e/rtkaudiosink-soc-realtek/blob/main/CHANGELOG.md)

- REALTEK-856 : Skip EOS when audiosink is not prepared. [b289ab1](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/b289ab117f247cd6928de9ece66863b15ba67cd3)
- XIONE-17179 : implement audio underrun event [9d397ee](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/9d397ee407fe7c1aeb9f92137526fe392e523b21)
- XIONE-16162 : Reduce write retry and CPU usage. [8e761dd](https://github.com/rdk-e/rtkaudiosink-soc-realtek/commit/8e761ddaba7046f4686b9e92a7a5f29d858b3b4e)
## ['sysint-oem'](https://github.com/rdk-e/sysint-xione-rtk/blob/main/CHANGELOG.md)

- RDKEMW-4988 iptables_sky_xione.service without RemainAfterExit and found in dead [e24550b](https://github.com/rdk-e/sysint-xione-rtk/commit/e24550b4b88f440c7961edaa41f28e1852dff25e)
- RDKEMW-4579 : Cleanup not-found services - swupdate.service [abc6f9f](https://github.com/rdk-e/sysint-xione-rtk/commit/abc6f9fddc08100001f0a99f4752d3ef627c33ca)
- RDKEVD-1107: UNII3 - Removal of the RFC changes [5858d72](https://github.com/rdk-e/sysint-xione-rtk/commit/5858d727fc1f3f0f04893a0f65f7d9f90b9dd735)
- Add CODEOWNERS file [9ec74d2](https://github.com/rdk-e/sysint-xione-rtk/commit/9ec74d2d300d2acfeb4e94779e959f36c7272381)
- XIONE-15802: the realtime process setting for audio dec/enc [f6c91ca](https://github.com/rdk-e/sysint-xione-rtk/commit/f6c91ca577b27a42f12e2a26ed0939f9eca898e1)
- SERXIONE-5468, RDK-50830: support Canada on US XiOne [981e23d](https://github.com/rdk-e/sysint-xione-rtk/commit/981e23d41bbfcb830833046f7a48d83022ed6d9a)
## ['product-firmware-pb'](https://github.com:rdk-e/firmware-prebuilt-xione-soc-realtek.git/blob/main/CHANGELOG.md)
