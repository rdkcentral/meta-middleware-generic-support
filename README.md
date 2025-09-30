# Vendor Layer Release Notes

XiOne UK Stream Puck RDKE Vendor Layer Release Notes

---

|Summary|Content|
|---|----|
|Classification|Confidential|
|Date|30 Sep 2025|
|Author| pawan.narayanarao@sky.uk |

---

### Build Information
|  |  |
|---------------|---------------|
| Manifest location | <https://github.com/rdk-e/vendor-manifest-xione-stream> |
| Manifest Tag | 9.3.0 |
| Manifest Name | [xione-realtek-streambox.xml](https://github.com/rdk-e/vendor-manifest-xione-stream/blob/9.3.0/xione-realtek-streambox.xml) |
| Machine Name | xione-uk |
| Platforms supported | Realtek 1319 |
| Yocto Version | kirkstone |

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

This is a scheduled bi-weekly release from the vendor  [RDKEVD-3381](https://ccp.sys.comcast.net/browse/RDKEVD-3381). This release will provide a versioned "meta-vendor-xione-realtek-release" that will be used by the middleware as well as image assembler. 
## Release layer and components

### Vendor Release Components

| Vendor Release Components | New Version | Version in Previous Release (9.2.0) |
|------------|---------|------------------------------------|
| Kernel & DTB | | 4.9.119.01-r9  | |
| packagegroup-vendor-layer | 9.3.0-r0 | 9.2.0-r0 | [9.2.0....9.3.0](https://github.com/rdk-e/meta-oem-realtek-stream/compare/9.2.0...9.3.0) |
| packagegroup-common-vendor-layer | 9.3.0-r0 | 9.2.0-r0 |[9.2.0....9.3.0](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/compare/9.2.0...9.3.0)  |

### Stack layer

| Release meta Layer | Tag |
|------|------|
| [meta-vendor-xione-realtek-release](https://github.com/rdk-e/meta-vendor-xione-realtek-release) | [9.3.0](https://github.com/rdk-e/meta-vendor-xione-realtek-release/tree/9.3.0) |

#### Artifactory Location for IPKs

| Product | Location |
|------------|---------|
| XiOne-UK | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-uk-rel/9.3.0/xione-uk/ipks/debug |
| XiOne-Foxtel | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-foxtel-rel/9.3.0/xione-foxtel/ipks/debug |
| XiOne-DE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-de-rel/9.3.0/xione-de/ipks/debug |
| XiOne-Alpaca-De | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-alpaca-de-rel/9.3.0/xione-alpaca-de/ipks/debug |
| XOE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xfinity-stream-box-rel/9.3.0/xfinity-stream-box/ipks/debug |
| WNC Xfinity | https://partners.artifactory.comcast.com/ui/repos/tree/General/wnc-xfinity-stream-box-rel/9.3.0/wnc-xfinity-stream-box/ipks/debug |
| RTK-Flex2 | https://partners.artifactory.comcast.com/ui/repos/tree/General/xumo-stream-box-rel/9.3.0/xumo-stream-box/ipks/debug |
### Meta Repos

#### Meta repos maintained by layers layer

| Meta Repo | New Version | Version in Previous Release (9.2.0) | ChangeList |
|------------|---------|------------------------------------|--------------|
| [meta-rdk-auxiliary](#meta-rdk-auxiliary) |  **1.3.1** | 1.3.0 | [1.3.0...1.3.1](https://github.com/rdkcentral/meta-rdk-auxiliary/compare/1.3.0...1.3.1) |
| [meta-rdk-oss-reference](#meta-rdk-oss-reference) |  **4.7.6** | 4.7.1 | [4.7.1...4.7.6](https://github.com/rdkcentral/meta-rdk-oss-reference/compare/4.7.1...4.7.6) |
| meta-rdk-tools |  | 2.3.1 | |
| meta-vts |  | 1.2.0 | |
| [meta-rdk-soc-realtek](#meta-rdk-soc-realtek) |  **4.1.3** | 4.1.2 | [4.1.2...4.1.3](https://github.com/rdk-e/meta-rdk-soc-realtek/compare/4.1.2...4.1.3) |
| meta-oem-stream |  | 4.1.1 | |
| [meta-oem-realtek-stream](#meta-oem-realtek-stream) |  **9.3.0** | 9.2.0 | [9.2.0...9.3.0](https://github.com/rdk-e/meta-oem-realtek-stream/compare/9.2.0...9.3.0) |
| [meta-rdk-vendor-realtek-common](#meta-rdk-vendor-realtek-common) |  **9.3.0** | 9.2.0 | [9.2.0...9.3.0](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/compare/9.2.0...9.3.0) |
| [meta-oss-vendor-realtek](#meta-oss-vendor-realtek) |  **4.1.3** | 4.1.2 | [4.1.2...4.1.3](https://github.com/rdk-e/meta-oss-vendor-realtek/compare/4.1.2...4.1.3) |
| [meta-mediarite-vendor](#meta-mediarite-vendor) |  **21.6.1** | 21.4 | [21.4...21.6.1](https://github.com/rdk-e/meta-mediarite-vendor/compare/21.4...21.6.1) |

#### Meta repos common for RDK-E

| Meta Repo | New Version | Version in Previous Release (9.2.0) | ChangeList |
|------------|---------|------------------------------------|--------------|
| **buildscripts** ||||
| build-scripts |  | 1.0.1 | |
| | | | |
| **buildsupport** ||||
| meta-image-support |  | 4.2.4 | |
| meta-stack-layering-support |  | 3.0.0 | |
| | | | |
| **oe** ||||
| meta-openembedded |  | rdk-4.0.0 | |
| poky |  | rdk-4.4.0 | |
| meta-python2 |  | rdk-4.0.0 | |
| | | | |
| **extention** ||||
| meta-rdk-oss-ext |  **1.3.1** | 1.3.0 | [1.3.0...1.3.1](https://github.com/rdk-e/meta-rdk-oss-ext/compare/1.3.0...1.3.1) |
| | | | |
| **configs** ||||
| rdke-region-uk-config |  | 2.3.1 | |
| rdke-region-au-config |  | 1.2.1 | |
| rdke-region-de-config |  | 1.0.6 | |
| rdke-region-us-config |  | 1.5.2 | |
| rdke-common-config |  **1.0.8** | 4.3.3 | [4.3.3...1.0.8](https://github.com/rdkcentral/rdke-common-config/compare/4.3.3...1.0.8) |
| rdke-stb-config |  **1.0.0** | 1.0.3 | [1.0.3...1.0.0](https://github.com/rdkcentral/rdke-stb-config/compare/1.0.3...1.0.0) |
| | | | |
| **rdk** ||||
| meta-rdk-halif-headers |  | 3.0.2 | |
| meta-rdk-cpc-halif-headers |  | 1.0.0 | |
| meta-rdk-vendor-cpc-common |  | 1.4.0 | |
| | | | |
| **products** ||||
| meta-product-xione |  **3.3.9** | 3.3.8 | [3.3.8...3.3.9](https://github.com/rdk-e/meta-product-xione/compare/3.3.8...3.3.9) |
| | | | |
| **binder** ||||
| meta-binder |  | 1.0.0 | |
| | | | |
| **release** ||||
| meta-vendor-xione-realtek-release |  **9.3.0** | 9.2.0 | [9.2.0...9.3.0](https://github.com/rdk-e/meta-vendor-xione-realtek-release/compare/9.2.0...9.3.0) |
| | | | |

### Interface versions

| # | HAL Interface Header (rdkcentral github) | New Version | Version from Previous Release (9.2.0)|
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
| 10 | rdk-gstreamer-utils-headers | | 2.0.2 |

### Limitations
It should be noted that some services may not run as they have dependencies with other layers. Additionally, the exclusion of inter-layer bbappends/patches might result in the failure to start some services. These limitations should be taken into consideration during the verification process. These Limitations will be addressed in Future Releases.

## Build instructions

- Steps to check out and build the vendor layer project [https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project](https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project)
- Steps to check out and build the image assembler project [https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler](https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler)


### Boot Command

#### Copy image to device /mnt/usb or /opt partitions or connect and mount USB having the image binn- Execute FlashApp command
- Move to directory containing the image
- FlashApp \<dirname\> \<imagename\>
- eg. FlashApp /mnt/usb/SKXI11ADS_9.3.0_VENDOR_DEV.bin
#### USB Flash Method using xboot prompt
- Copy the image `"SKXI11ADS_9.3.0_VENDOR_DEV.bin"` to the usb and connect to the STB
- Switch on the STB
- Press z button multiple time to get the bootloader prompt.
- From bootloader prompt, need to do below method
- Choose option c (flashing image)
- Choose select option h/i (depends on from which bank the image is booting)
- Enter the image name which we need to copy.
- After image flashed successfully. Choose the option "exit"
- Choose the option "exit" (or) Enter "i" (automatically reboot the box

### Network connectivity

- Ethernet Connectivity is supported now
- If IP is not acquired automatically please run udhcpc after connecting Ethernet

## Testing

- Created the `"vendor test image"` `" SKXI11ADS_9.3.0_VENDOR_DEV.bin"` for XiOne-UK and for all other variants as well using the vendor layer jenkins job `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Vendor-Release-Build/207/"`
- Successfully booted the `"vendor test image"` and obtained the shell prompt.
- Verified vendor layer services up and running
- Verified IP acquisition via Ethernet
- Played clear AV with gst-play-1.0.
- Verified image flashing using FlashApp

Testing details in [RDKEVD-3381](https://ccp.sys.comcast.net/browse/RDKEVD-3381)
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
| Sep 25 2025 | SKXI11ADS_VENDOR_DEV_release_9.3.0_20250925085725_uk   | 1547372 | 469483 | 25705 | 495188 | 2151488 |
| Sep 15 2025 |  SKXI11ADS_VENDOR_DEV_release_9.2.0_20250910112421   | 1547372 | 457697 | 22878 | 480575 | 2166101 |
| Sep 01 2025 |  SKXI11ADS_VENDOR_DEV_release_9.1.0_20250827165528   | 1547372 | 456049 | 22406 | 478455 | 2168221 |
| Aug 13 2025 |  SKXI11ADS_VENDOR_DEV_release_9.0.0_20250813055248   | 1547372 | 447036 | 22322 | 469358 | 2177318 |
| Jul 17 2025 |  SKXI11ADS_8.1.2_VENDOR_DEV                          | 1547372 | 445825 | 22668 | 4684932| 2178183 |
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
| Sep 25 2025 |  SKXI11ADSSOFT_VENDOR_DEV_release_9.3.0_20250925085756_foxtel   | 1547372 | 452077 | 25596 | 477673 | 2169003 |
| Sep 15 2025 |  SKXI11ADSSOFT_VENDOR_DEV_release_9.2.0_20250910112513   | 1547372 | 443328 | 22512 | 465840 | 2180836 |
| Sep 01 2025 |  SKXI11ADSSOFT_VENDOR_DEV_release_9.1.0_20250827165544   | 1547372 | 446854 | 22747 | 469601 | 2177075 |
| Aug 13 2025 |  SKXI11ADSSOFT_VENDOR_DEV_release_9.0.0_20250813055442   |1547372  | 446902 | 22639 | 469541 | 2177135 |
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
| Sep 25 2025 |  SKXI11AIS_VENDOR_DEV_release_9.3.0_20250925085929_de   | 1547344 | 475472 | 25104 | 500576 | 2146128 |
| Sep 15 2025 |  SKXI11AIS_VENDOR_DEV_release_9.2.0_20250910112626   | 1547344 | 463145 | 21946 | 485091 | 2161613 |
| Sep 01 2025 |  SKXI11AIS_VENDOR_DEV_release_9.1.0_20250827170034   | 1547344 | 463315 | 22605 | 485920 | 2160784 |
| Aug 13 2025 |  SKXI11AIS_VENDOR_DEV_release_9.0.0_20250813055550   | 1547344 | 471490 | 22621 | 494111 | 2152593 |
| Jul 17 2025 |  SKXI11AIS_8.1.2_VENDOR_DEV                          | 1547344 | 463329 | 22820 | 486149 | 2160555 |
| July 07 2025|  SKXI11AIS_VENDOR_DEV_refs_tags_8.0.3_20250703153514 | 1547344 | 472815 | 22831 | 495646 | 2151058 |
| May 23 2025 |  SKXI11AIS_VENDOR_DEV_refs_tags_7.0.1_20250521111817 | 1547348 | 463827 | 28698 | 492525 | 2154175 |
| May 16 2025 |  SKXI11AIS_7.0.0_VENDOR_DEV | 1547348 | 463950 | 29451 | 493401 | 2153299 |
| Mar 26 2025 |  SKXI11AIS_VENDOR_DEV_refs_tags_6.0.2_20250324181951 | 1547348 | 460736 | 28870 | 489606 | 2157094 |
##### XiOne-Alpaca-DE
| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| Sep 25 2025 | SKXI11AEISODE_VENDOR_DEV_release_9.3.0_20250925085848_alpaca-de    | 1547372 | 459002 | 26077 | 485079 | 2161597 |
| Sep 15 2025 | SKXI11AEISODE_VENDOR_DEV_release_9.2.0_20250910112547    | 1547372 | 454200 | 22419 | 476619 | 2170057 |
| Sep 01 2025 | SKXI11AEISODE_VENDOR_DEV_release_9.1.0_20250827165625    |1547372  | 446170 | 22520 | 468690 | 2177986 |
| Aug 13 2025 | SKXI11AEISODE_VENDOR_DEV_release_9.0.0_20250813055454    | 1547372 | 446892 | 22480 | 469372 | 2177304 |
| Jul 17 2025 |   SKXI11AEISODE_8.1.2_VENDOR_DEV                         | 1547372 | 447820 | 22314 | 470134 | 2176542 |
| Jul 07 2025 |  SKXI11AEISODE_VENDOR_DEV_refs_tags_8.0.3_20250703153622 | 1547372 | 456489 | 22418 | 478907 | 2167769 |
| May 23 2025 |  SKXI11AEISODE_VENDOR_DEV_refs_tags_7.0.1_20250521111552 | 1547376 | 443789 | 28103 | 471892 | 2174780 |
| May 16 2025 |  SKXI11AEISODE_VENDOR_DEV_refs_tags_7.0.0_20250511204108 | 1547376 | 440746 | 28691 | 469437 | 2177235 |
| Mar 26 2025 |  SKXI11AEISODE_VENDOR_DEV_refs_tags_6.0.2_20250324172723 | 1547376 | 445013 | 28365 | 473378 | 2173294 |
##### Xfinity-stream-box
| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| Sep 25 2025 | SCXI11AIC_VENDOR_DEV_release_9.3.0_20250925090034_XOE| 1547352 | 467217 | 25782 | 492999 | 2153697 |
| Sep 15 2025 | SCXI11AIC_VENDOR_DEV_release_9.2.0_20250910151453_XOE| 1547348 | 473640 | 22317 | 495957 | 2150743 |
| Sep 01 2025 | SCXI11AIC_VENDOR_DEV_release_9.1.0_20250827170034    | 1547348 | 463488 | 22487 | 485975 | 2160725 |
| Aug 13 2025 | SCXI11AIC_VENDOR_DEV_release_9.0.0_20250813055548    | 1547348 | 471324 | 22355 | 493679 | 2153021 |
| Jul 17 2025 | SCXI11AIC_8.1.2_VENDOR_DEV                           | 1436756 | 464011 | 22287 | 486298 | 2270994 |
| Jul 07 2025 |  SCXI11AIC_VENDOR_DEV_refs_tags_8.0.3_20250703153149 | 1547348 | 471276 | 22551 | 493827 | 2152873 |
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
| Sep 25 2025 | WNXI11AEI_VENDOR_DEV_release_9.3.0_20250925090349_XOE | 1547352 | 469462 | 45376 | 514838 | 2131858 |
| Sep 15 2025 | WNXI11AEI_VENDOR_DEV_release_9.2.0_20250910153239_XOE | 1547348 | 473383 | 22273 | 495656 | 2151044 |
| Sep 01 2025 | WNXI11AEI_VENDOR_DEV_release_9.1.0_20250827170034     | 1547348 | 462996 | 22050 | 485046 | 2161654 |
| Aug 13 2025 | WNXI11AEI_VENDOR_DEV_release_9.0.0_20250814165809     | 1547348 | 474320 | 22482 | 496802 | 2149898 |                                 |
| Jul 14 2025 |  WNXI11AEI_8.1.2_VENDOR_DEV                           | 1547348 | 463448 | 22637 | 486085 | 2160615 |
| Jul 07 2025 |  WNXI11AEI_VENDOR_DEV_refs_tags_8.0.3_20250703153256  | 1547348 | 473436 | 23006 | 496442 | 2150258 |
| May 23 2025 |  WNXI11AEI_VENDOR_DEV_refs_tags_7.0.1_20250521171806  | 1547356 | 473728 | 29253 | 502981 | 2143711 |
| May 16 2025 |  WNXI11AEI_VENDOR_DEV_refs_tags_7.0.0_20250512160923  | 1547356 | 472994 | 22047 | 495041 | 2151651 |
##### XiOne-UK
Created Image Assembler build "SKXI11ADS_DEV_9.3.0_20250930060033.bin" from "https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Image-Assembler-Build/3478/s3/"
##### XiOne-Foxtel
Created Image Assembler build "SKXI11ADSSOFT_DEV_9.3.0_20250930072124.bin" from " https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/view/4-Assembler-Jobs/job/RTK-XIONE-Foxtel-Image-Assem…"
##### XiOne-Alpaca-DE
Created Image Assembler build "SKXI11AEISODE_DEV_9.3.0_20250930060034.bin" from "https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/view/4-Assembler-Jobs/job/RTK-XIONE-ALPACA-DE-Image-As…"
##### XiOne-DE
Created Image Assembler build "SKXI11AIS_DEV_9.3.0_20250930060037.bin" from "https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/view/4-Assembler-Jobs/job/RTK-XIONE-DE-Image-Assembler…"
##### XiOne-XOE
Created Image Assembler build "SCXI11AIC_DEV_9.3.0_20250930060041.bin" from "https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-XFINITY-STREAM-BOX-Image-Assembler-Build…"
##### XiOne-WNC-Xfinity
Created Image Assembler build "WNXI11AEI_DEV_9.3.0_20250930060047.bin" from "https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-WNC-XFINITY-Image-Assembler-Build/99/s3/"

Testing is done by using the middleware test ipk (https://partners.artifactory.comcast.com/ui/native/middleware-dbg/8.3.4.0_B2) build with 9.3.0 VL integrated, and with the image assembler manifest branch "9.3.0" - referenced from rel-8494 tag and including latest vendor ipk feed info https://github.com/rdk-e/meta-vendor-xione-realtek-release/blob/release/9.3.0/conf/machine/include/vendor.inc"

- Tested the below scenarios as part of [RDKEVD-3381](https://ccp.sys.comcast.net/browse/RDKEVD-3381)
  - Successfully booted \"\" and obtained the shell prompt and UI.
  - Verified UI navigation
  - Verified AV with Disney+ App
  - Verified AV with Xumo Play
  - Verified AV with Netflix
  - Verified AV with Amazon Prime
  - Verified AV with YouTube
  - Verified remote control pairing
  - Verified Log files are present in /opt/logs
- Note
  - Issues observed in  release 9.3.0 https://ccp.sys.comcast.net/browse/XIONE-17850?jql=labels%20%3D%20Vendor_9.3.0
  - Attached the test report here https://ccp.sys.comcast.net/secure/attachment/12632469/RE_%20%5BRDKE%20Release%5D%20XiOne%20RTK%209.3.0%20%20Vendor%20Layer%20Release.msg

## Components details in 'packagegroup-vendor-layer'

| # | Vendor layer Component | New PV-PR | PV-PR in Previous Release (9.2.0)| New SRCREV | SRCREV in Previous Release (9.2.0)| Diff |
|---|------------------------------------------|-------------|----------------------|-----------|------------|-----|
| 1 | libdrm | | 2.4.110-r0 |  | NA |  |
| 2 | cairo | | 1.16.0-r1 |  | NA |  |
| 3 | libepoxy | | 1.5.9-r1 |  | NA |  |
| 4 | python3-pygobject | | 3.34.0-r0 |  | NA |  |
| 5 | pango | | 1.44.7-r0 |  | NA |  |
| 6 | librsvg | | 2.40.21-r0 |  | NA |  |
| 7 | python3-pycairo | | 1.19.0-r0 |  | NA |  |
| 8 | vulkan-tools | | ERROR-r0 |  | NA |  |
| 9 | vulkan-loader | | ERROR-r0 |  | NA |  |
| 10 | vulkan-headers | | ERROR-r0 |  | NA |  |
| 11 | xsign | | 4.0.1-r2 |  | NA |  |
| 12 | mfrlib-hal-xione | | 8.1.2-r0 |  | NA |  |
| 13 | wipe-disk-partitions | | 1.0.0-r2 |  | NA |  |
| 14 | secauthn | | 1.0.0-r0 |  | NA |  |
| 15 | qca-hciattach | | 1.0.0-r1 |  | NA |  |
| 16 | emmc-fw-update | | 1.0.0-r0 |  | NA |  |
| 17 | mount-disk-partition | | 1.0.1-r0 |  | NA |  |
| 18 | image-verifier-lib | | 6.2.0-r1 |  | NA |  |
| 19 | fmtsasidlibs | | 2.4-r1 |  | NA |  |
| 20 | led-boot-pattern | | 1.0.0-r1 |  | NA |  |
| 21 | rtkmali | | 2.20.0-r0 |  | NA |  |
| 22 | rtk-platform-conf | | 2.6.0-r1 |  | NA |  |
| 23 | emmc-read-util | | 4.0.0-r0 |  | 6281804 |  |
| 24 | sky-dropbear | | 1.0.0-r1 |  | NA |  |
| 25 | sysint-soc | | 3.0.0-r0 |  | f8dded4 |  |
| 26 | sky-led-app | | 1.0.0-r0 |  | NA |  |
| 27 | audiocapturemgr-vendor | | 1.0.0-r0 |  | a063707 |  |
| 28 | displayinfo-soc | | 1.0.0-r0 |  | e7b2c24 |  |
| 29 | ffmpeg | | ERROR-r1 |  | NA |  |
| 30 | media-utils-soc-realtek | | 1.0.5-2.1.1-r1 |  | 30f3fdd |  |
| 31 | closedcaption-hal-realtek | | 1.0.0-3.1.0-r0 |  | ee52d85 |  |
| 32 | hdmicec-hal-realtek | | 1.3.10-3.0.1-r0 |  | 950a89e |  |
| 33 | rdk-gstreamer-utils-platform | | 2.0.2-2.0.0 |  | 6ba04b9 |  |
| 34 | devicesettings-hal-realtek | **6.0.0-4.1.8-r0** | 6.0.0-4.1.5-r0 |  |  |  |
| - |  - devicesettings-hal-realtek_devicesettingssocrealtek | |  | **6ad15d6** | 091ee0c |  [](https://github.com/rdk-e/meta-vendor-xione-realtek-release) |
| - |  - devicesettings-hal-realtek_devicesettingsskyxione | |  |  | c924a02 |  |
| 35 | deepsleepmgr-hal-realtek | | 1.0.4-1.1.0-r0 |  | f700dfe |  |
| 36 | pwrmgr-hal-realtek | | 1.0.3-1.0.0-r0 |  | c91e047 |  |
| 37 | otp-program | | 2.2-r1 |  | NA |  |
| 38 | gstreamer1.0 | | 1.18.5-r5 |  | NA |  |
| 39 | gstreamer1.0-meta-base | | 1.18.5-r5 |  | NA |  |
| 40 | gstreamer1.0-omx | | 1.10.4-r5 |  | NA |  |
| 41 | gstreamer1.0-libav | | 1.18.5-r5 |  | NA |  |
| 42 | gstreamer1.0-plugins-good | | 1.18.5-r5 |  | NA |  |
| 43 | gstreamer1.0-plugins-good-meta | | 1.18.5-r5 |  | NA |  |
| 44 | gstreamer1.0-plugins-bad | | 1.18.5-r5 |  | NA |  |
| 45 | gstreamer1.0-plugins-bad-meta | | 1.18.5-r5 |  | NA |  |
| 46 | gstreamer1.0-rtsp-server | | 1.18.5-r5 |  | NA |  |
| 47 | gstreamer1.0-plugins-base | | 1.18.5-r5 |  | NA |  |
| 48 | gstreamer1.0-plugins-base-meta | | 1.18.5-r5 |  | NA |  |
| 49 | gstreamer1.0-plugins-base-playback | | 1.18.5-r5 |  | NA |  |
| 50 | gstreamer1.0-plugins-good-wavparse | | 1.18.5-r5 |  | NA |  |
| 51 | gstreamer1.0-plugins-good-audiofx | | 1.18.5-r5 |  | NA |  |
| 52 | gstreamer1.0-plugins-good-isomp4 | | 1.18.5-r5 |  | NA |  |
| 53 | gstreamer1.0-plugins-good-audioparsers | | 1.18.5-r5 |  | NA |  |
| 54 | gstreamer1.0-plugins-good-soup | | 1.18.5-r5 |  | NA |  |
| 55 | gstreamer1.0-plugins-base-gio | | 1.18.5-r5 |  | NA |  |
| 56 | gstreamer1.0-plugins-base-videoconvert | | 1.18.5-r5 |  | NA |  |
| 57 | gstreamer1.0-plugins-base-videoscale | | 1.18.5-r5 |  | NA |  |
| 58 | gstreamer1.0-plugins-base-volume | | 1.18.5-r5 |  | NA |  |
| 59 | gstreamer1.0-plugins-base-typefindfunctions | | 1.18.5-r5 |  | NA |  |
| 60 | gstreamer1.0-plugins-good-autodetect | | 1.18.5-r5 |  | NA |  |
| 61 | gstreamer1.0-plugins-good-avi | | 1.18.5-r5 |  | NA |  |
| 62 | gstreamer1.0-plugins-good-deinterlace | | 1.18.5-r5 |  | NA |  |
| 63 | gstreamer1.0-plugins-good-interleave | | 1.18.5-r5 |  | NA |  |
| 64 | gstreamer1.0-plugins-bad-dash | | 1.18.5-r5 |  | NA |  |
| 65 | gstreamer1.0-plugins-bad-mpegtsdemux | | 1.18.5-r5 |  | NA |  |
| 66 | gstreamer1.0-plugins-bad-smoothstreaming | | 1.18.5-r5 |  | NA |  |
| 67 | gstreamer1.0-plugins-bad-videoparsersbad | | 1.18.5-r5 |  | NA |  |
| 68 | gstreamer1.0-plugins-bad-opusparse | | 1.18.5-r5 |  | NA |  |
| 69 | gstreamer1.0-plugins-bad-dashdemux | | 1.18.5-r5 |  | NA |  |
| 70 | gstreamer1.0-plugins-good-matroska | | 1.18.5-r5 |  | NA |  |
| 71 | gstreamer1.0-plugins-base-app | | 1.18.5-r5 |  | NA |  |
| 72 | gstreamer1.0-plugins-base-audioconvert | | 1.18.5-r5 |  | NA |  |
| 73 | gstreamer1.0-plugins-base-audioresample | | 1.18.5-r5 |  | NA |  |
| 74 | westeros-simpleshell | | 1.01.59-r0 |  | 9fa8be1 |  |
| 75 | westeros-simplebuffer | | 1.01.59-r0 |  | 9fa8be1 |  |
| 76 | westeros-soc | | 1.01.59-r0 |  | 9fa8be1 |  |
| 77 | westeros-sink | | 1.01.59-r0 |  |  |  |
| - |  - westeros-sink_westeros | |  |  | 9fa8be1 |  |
| - |  - westeros-sink_realtek | |  |  | e32f912 |  |
| 78 | westeros | | 1.01.59-r0 |  | 9fa8be1 |  |
| 79 | essos | | 1.01.59-r0 |  | 9fa8be1 |  |
| 80 | make-mod-scripts | | 1.0-r0 |  | NA |  |
| 81 | sky-fpbutton-driver | | 3.0.0-r0 |  | acd582d |  |
| 82 | splashscreen-viewer | | 2.0.0-r0 |  | 41e70a2 |  |
| 83 | rtk-tee | | 1.0.0-r0 |  | NA |  |
| 84 | secapi-rtk | | 2.1.0-r2 |  | 95b6bd4 |  |
| 85 | secapi3-rtk | | 3.3.1-r0 |  | f7ed818 |  |
| 86 | secapi2-adapter | | 1.0.0-r0 |  | NA |  |
| 87 | secapi-common-hw | | 2.3.0-r0 |  | 3a51b88 |  |
| 88 | secapi-netflix | | 1.0.0-r0 |  |  |  |
| - |  - secapi-netflix_com_inc_rtk | |  |  | 0fa3af3 |  |
| - |  - secapi-netflix_socrealtek | |  |  | d3c7c87 |  |
| 89 | gst-svp-ext | | 1.2.0-r0 |  | NA |  |
| 90 | systemaudioplatform | | 1.0.0-r0 |  | 776348d |  |
| 91 | miracast-soc | | 1.0.0-r0 |  | 30cb689 |  |
| 92 | secapi-crypto-rtk | | 2.3.1-r0 |  | 5241d45 |  |
| 93 | secapi-common-crypto | | 2.3.0-r0 |  | 3a51b88 |  |
| 94 | qca6390-mod-wifi | | 1.0.3-r1 |  | NA |  |
| 95 | flashapp | | 7.1-r0 |  | NA |  |
| 96 | sky-led-driver | | 2.0.0-r0 |  | f97a795 |  |
| 97 | hank-mod-mali | | 3.0.1-r0 |  | 41c19be |  |
| 98 | rtkv1sink | | 2.0.0-r1 |  | 67bdf5b |  |
| 99 | platform-lib | | 2.6.0-r4 |  | NA |  |
| 100 | rtk-audio-service | | 3.2.0-r0 |  | e62564d |  |
| 101 | hdmiservice | | 4.2.1-r0 |  | bbb4186 |  |
| 102 | rtkpcrclksink | | 2.0.0-r0 |  | c8272d9 |  |
| 103 | blewakeupenabler | | 1.4.1-r0 |  | 6f8176d |  |
| 104 | ctrlm-irdb-plugin | | 1.1.1-r0 |  | 1.1.1 |  |
| 105 | ctrlm-irdb-uei | | 2.2.0-r1 |  | NA |  |
| 106 | ctrlm-irdb-ruwido | | 2.3.0-r1 |  | NA |  |
| 107 | ctrlm-rf4ce-hal | | 1.0.0-r0 |  | NA |  |
| 108 | ctrlm-hal-rf4ce-prebuilt | | 1.0.0-r0 |  | NA |  |
| 109 | qorvo-mod-rf4ce | | 2.11-r0 |  | NA |  |
| 110 | linux-libc-headers | | 4.9-r9 |  | NA |  |
| 111 | packagegroup-kernel-modules | | 4.9.119.01-r9 |  | NA |  |
| 112 | linux-hank | | 4.9.119.01-r9 |  | 3500cd1 |  |
| 113 | rtkaudiosink | | 3.1.4-r0 |  | b5ddc36 |  |
| 114 | mfi-ree | | 2.0.0-r0 |  | 4941717 |  |
| 115 | sysint-oem | | 3.0.4-r1 |  | 000bd91 |  |
| 116 | apparmor-vendor | | 3.0.3-r0 |  | 6e525d1 |  |
| 117 | directfb | | 1.7.7-r0 |  | NA |  |
| 118 | product-firmware-pb | | 1.0.9-r0 |  | 426b3ea |  |
| 119 | testagentlib | | 3.0.2-r1 |  |  |  |
| - |  - testagentlib_testagentlib | |  |  | b8eb1f8 |  |
| - |  - testagentlib_xione_factory | |  |  | 6281804 |  |
| 120 | testagent-loader | | 2.3.0-r0 |  | NA |  |
| 121 | libbinder | | 1.0.0-r1 |  | 0f7a23b |  |
| 122 | aidl-generator-native | | 1.0.0-r1 |  | 0f7a23b |  |
| 123 | flash-aidl | | 1-r0 |  | ddcceef |  |
| 124 | image-hal-service | | 1.0.0-r0 |  | 7eb82c9 |  |
| 125 | platform-imagehal-lib | | 1.0.0-r0 |  | NA |  |
| 126 | asappsserviced-vendor-conf | | 1.1.0-r0 |  | 1.1.0 |  |

## Vendor Layer Component Integration Details

## Consolidated change list from vendor layer repositories

## Changes in meta repositories

## [meta-rdk-auxiliary](https://github.com/rdkcentral/meta-rdk-auxiliary/blob/main/CHANGELOG.md)

- Merge branch 'hotfix/1.3.1' into support/1.3.0 [fa505be](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/fa505be38e7d9eb46a510dc44aa1b8b62542b1d7)
- RDKE-905: Hotfix Release 1.3.1 [d4c7dbd](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/d4c7dbd77fd1f6a9ddeb842500d9f7f54752d6e0)
- RDKOSS-468: Add fix for WRONG_KEY retry logic and dnsmasq started by NetworkManager ( [#59](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/59))
- Merge branch 'hotfix/1.3.1-community' into support/1.3.0 [1c476f2](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/1c476f24285923809c48745763f780ad27bc3fff)
- Update CHANGELOG.md [8aa4a7d](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/8aa4a7d2052e9dbc6463a0e194c444b3982cffd0)
- RDK-58119 License manifest pdf creation in local RDK-E build [4641a2c](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/4641a2c4e457ccde2e368c4762a3081c6858236f)
- Update to support core-image-minimal license manifest generation [0b9bb50](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/0b9bb5063739cb5c94bcf0ffa9db3ef993684a5b)
- RDK-58119 Update license_create_manifest_pdf.bbclass to support local file system [f6ccd93](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/f6ccd93ea3532d13fbc76d5147d45f99e5b19996)

## [meta-rdk-oss-reference](https://github.com/rdkcentral/meta-rdk-oss-reference/blob/main/CHANGELOG.md)

- Merge branch 'hotfix/4.7.6' into support/4.7.0 [5c8ec4a](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/5c8ec4a37bb283460253383ec402a96e7b35474a)
- RDKE-932: Update changelog for Rel 4.7.6 [381893f](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/381893f6415821a4b4a28cf171a3771653078bf7)
- RDKE-932: Update OSS release to 4.7.6 [d2b8329](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/d2b83290ab82c7ca4154d6d01bb4ce3db51093a0)
- RDK-57964 - Improve NTP Analytics in RDK ( [#211](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/211))
- Merge branch 'hotfix/4.7.5' into support/4.7.0 [b37b16f](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/b37b16fd79144c9e07f1ecc4e00ad858e2c7d4d6)
- RDKE-925-RDKE-905: Updated change log for Rel 4.7.5 [a43f0d9](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/a43f0d908b638a6093fef65381e13a7ea639fa87)
- RDKE-925:Update OSS release version to 4.7.5 [a5e4ab2](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/a5e4ab2b57278d9e909baef7978b8249ad8ea45b)
- RDKOSS-468: Add RDEPENDS for service package ( [#205](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/205))
- Merge branch 'hotfix/4.7.4' into support/4.7.0 [cb455fc](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/cb455fc70881d57cfd971c95c77ba5fca7c01e35)
- RDKE-905: Updated change log for Rel 4.7.4 [c318cd9](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/c318cd9c68b33a079d72b915fa9e3a45bf345684)
- RDKE-905: Update OSS release version to 4.7.4 [8bd6df3](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/8bd6df3a26bf321930fe8ffa61bd9afb328959ac)
- RDKOSS-468: Add fix for WRONG_KEY retry logic and dnsmasq started by NetworkManager ( [#201](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/201))
- Merge branch 'hotfix/4.7.3' into support/4.7.0 [700c592](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/700c59238cdce13f578263b417c229af5f33f4a7)
- RDKE-896: Update change log for rel 4.7.3 [f045d86](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/f045d86a08a7f29078a3ac3a9d4012b5326deb38)
- RDKE-896: Update oss release version [cf350fa](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/cf350fae779596e4df1fee428339204b78065e07)
- RDKOSS-451: Change logrotate to systemd timer logic ( [#182](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/182))
- Merge branch 'hotfix/4.7.2' into support/4.7.0 [f3bd92c](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/f3bd92cae0a0fb5a4c9340d6dd39f0c78801309f)
- RDKE-881: Update change log for rel 4.7.2 [c70f44f](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/c70f44fcc81a11b956297e38bdebfb74b323ce93)
- RDKE-881: OSS hotfix release 4.7.2 [04aba69](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/04aba69ac4f1de567e67a1179e8f309b8f09cb69)
- RDKOSS-409: Restore the required binaries and scripts ( [#159](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/159))
- RDKEMW-6391: Remove NetworkManager-wait-online.service ( [#156](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/156))

## [meta-rdk-soc-realtek](https://github.com/rdk-e/meta-rdk-soc-realtek/blob/main/CHANGELOG.md)

- RDKEVD-3381 [RDK-E][RTK] Realtek Release 9.3.0 Merge branch 'release/4.1.3' [72ff42b](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/72ff42b8116cb379b0a0861c6bbf69ca58c5b31b)
- Merge branch 'main' into release/4.1.3 [392c0ef](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/392c0efeb39be7d256023d60e2582d3e1499f2f8)
- RDKEVD-3381 [RDK-E][RTK] Realtek Release 9.3.0 [a373e59](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/a373e596735219e7a67316abd76663516043a6f7)
- RDKEVD-1661: Thread balancing and optimisation ( [#154](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/154))

## [meta-oem-realtek-stream](https://github.com/rdk-e/meta-oem-realtek-stream/blob/main/CHANGELOG.md)

- RDKEVD-3381 [RDK-E][RTK] Realtek Release 9.3.0 Merge branch 'release/9.3.0' [7109153](https://github.com/rdk-e/meta-oem-realtek-stream/commit/7109153ef03b3d265c2d73d96a16cfd331222439)
- RDKEVD-3381 [RDK-E][RTK] Realtek Release 9.3.0 [efc95a5](https://github.com/rdk-e/meta-oem-realtek-stream/commit/efc95a5261b354024a3451ace727a4649f9ee3db)
- Merge pull request  [#488](https://github.com/rdk-e/meta-oem-realtek-stream/pull/488) from rdk-e/RDKEVD-3184-MR-VL-Release-21.6
- Merge pull request  [#468](https://github.com/rdk-e/meta-oem-realtek-stream/pull/468) from rdk-e/feature/RDKEVD-2919-fix-L1-dsSupportedTvResolutions-test-failure
- RDKEVD-2919: Update devicesettings-soc-realtek to 4.1.8 [18ab2c4](https://github.com/rdk-e/meta-oem-realtek-stream/commit/18ab2c4b47d8b71ae98f140d97228a910144064c)
- Merge pull request  [#471](https://github.com/rdk-e/meta-oem-realtek-stream/pull/471) from rdk-e/feature/RDKEVD-3009-ta-loader
- RDKEVD-3184: Enable broadcast-hal-linuxdvb for all platforms [a56c947](https://github.com/rdk-e/meta-oem-realtek-stream/commit/a56c9472e282068a48c5b068af7d1995eb662cda)
- Merge pull request  [#451](https://github.com/rdk-e/meta-oem-realtek-stream/pull/451) from rdk-e/feature/RDKEVD-2666-dsVideoPort-pre-condition-and-parameter-checking
- RDKEVD-2666: Update devicesettings-hal-realtek package version [d5d3d30](https://github.com/rdk-e/meta-oem-realtek-stream/commit/d5d3d30537f3bad3b10c932573d9ef45e20d0418)
- Merge pull request  [#486](https://github.com/rdk-e/meta-oem-realtek-stream/pull/486) from rdk-e/feature/RDKEVD-3053-hpd
- RDKEVD-3053: HDCP status should be checked after TV/sink standby [9eb3dea](https://github.com/rdk-e/meta-oem-realtek-stream/commit/9eb3dea72164d8dab2ac079d986e374e8cc1419e)
- Update start_testagent_loader.sh [29352e1](https://github.com/rdk-e/meta-oem-realtek-stream/commit/29352e10c7ae39a872939eb3d9b0fd3f91094bab)
- Merge pull request  [#477](https://github.com/rdk-e/meta-oem-realtek-stream/pull/477) from rdk-e/feature/RDKEVD-2416
- Merge tag '9.2.0_dummy' into develop [0d32f64](https://github.com/rdk-e/meta-oem-realtek-stream/commit/0d32f64a1f6ce37ec385833889ae2c0261feb41d)
- Merge branch 'release/9.2.0_dummy' [de6973d](https://github.com/rdk-e/meta-oem-realtek-stream/commit/de6973d4724f2cabd2d153a0f33f93006c5a62f6)
- RDKEVD-3177 : Dummy tag 9.2.0_dummy [cc6bbb8](https://github.com/rdk-e/meta-oem-realtek-stream/commit/cc6bbb8c1688d5cac9887f580f8179ed4b58d874)
- Merge pull request  [#483](https://github.com/rdk-e/meta-oem-realtek-stream/pull/483) from rdk-e/feature/RDKEVD-3177-9.2.0
- RDKEVD-3177 : Update product  tag 9.2.0 [f94ea0d](https://github.com/rdk-e/meta-oem-realtek-stream/commit/f94ea0d9d3ac6801c316718d3278f1b5a4d9df1d)
- RDKEVD-3177 : Update product tag 9.2.0 [2d80370](https://github.com/rdk-e/meta-oem-realtek-stream/commit/2d8037062190167c3a415e5f3f1831dc03a6b94c)
- Merge pull request  [#482](https://github.com/rdk-e/meta-oem-realtek-stream/pull/482) from rdk-e/revert-481-support/9.2.0_Release_Baseline
- Revert "RDKEVD-3177 : RDKE Vendor Release - 9.2.0 Support/9.2.0 release baseline" [61ccd77](https://github.com/rdk-e/meta-oem-realtek-stream/commit/61ccd778e85f8ce50978b35b71bd659a9c43212a)
- Merge pull request  [#481](https://github.com/rdk-e/meta-oem-realtek-stream/pull/481) from rdk-e/support/9.2.0_Release_Baseline
- RDKEVD-3177 : RDKE Vendor Release - 9.2.0. [e5c2755](https://github.com/rdk-e/meta-oem-realtek-stream/commit/e5c2755228c2ca38e7cbf6105bb5854d4a736097)
- Merge branch 'hotfix/9.2.0' into support/9.2.0_Release_Baseline [b85c8ea](https://github.com/rdk-e/meta-oem-realtek-stream/commit/b85c8ea486ce8a80af5a101c3906f926e411d601)
- Merge pull request  [#454](https://github.com/rdk-e/meta-oem-realtek-stream/pull/454) from rdk-e/feature/RDKEVD-1661-XiOne_rtk_Thread_balancing_and_optimisation
- RDKEVD-2416: HAL dsFPD - L3 dsGetFPState fail [9561090](https://github.com/rdk-e/meta-oem-realtek-stream/commit/9561090bd1e38e7a16d9ac3303d1db447e0c1d42)
- Update start_testagent_loader.sh [983f024](https://github.com/rdk-e/meta-oem-realtek-stream/commit/983f0245b9402e7ce7bac604d7ff9c9f0c19a114)
- RDKEVD-3009 : Changes in ta-loader startup. [90234e2](https://github.com/rdk-e/meta-oem-realtek-stream/commit/90234e2f769b9af930667cdcdb6f85d98a050232)
- RDKEVD-1661: Thread balancing and optimisation [b1221df](https://github.com/rdk-e/meta-oem-realtek-stream/commit/b1221df51a42f61cd9181db2de1029dab397e02e)

## [meta-rdk-vendor-realtek-common](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/blob/main/CHANGELOG.md)

- RDKEVD-3381 [RDK-E][RTK] Realtek Release 9.3.0 Merge branch 'release/9.3.0' [fbac2a4](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/fbac2a48294a44efc11fb2c20f04d73e1dcdd565)
- RDKEVD-3381 [RDK-E][RTK] Realtek Release 9.3.0 [96e23db](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/96e23db7ceb6c9463402c08a2ec7c4c0d833a007)
- Merge pull request  [#56](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/pull/56) from rdk-e/RDKEVD-2986
- Merge tag '9.2.0' into develop [a42bd34](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/a42bd34113973e207fb8c26334cdc0d464251835)
- RDKEVD-2986 : btmgr.service not comes up due to hci0 interface not available. [ed7b1c9](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/ed7b1c9aee131c4f5f86fa5a113f9021e63d9d29)

## [meta-oss-vendor-realtek](https://github.com/rdk-e/meta-oss-vendor-realtek/blob/main/CHANGELOG.md)

- RDKEVD-3381 [RDK-E][RTK] Realtek Release 9.3.0 Merge branch 'release/4.1.3' [1fe174e](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/1fe174e5d84a88e974a963d776ec4903aed2a18f)
- RDKEVD-3381 [RDK-E][RTK] Realtek Release 9.3.0 [65524ca](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/65524ca96594fb2d6d074f4273720f0ae41bc898)
- RDKEVD-1661: Thread balancing and optimisation ( [#89](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/89))
- Merge tag '4.1.2' into develop [14d63e0](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/14d63e0d0ffa646f462d224d67c1ffd1aab14d64)

## [meta-mediarite-vendor](https://github.com/rdk-e/meta-mediarite-vendor/blob/main/CHANGELOG.md)

- Merge pull request  [#54](https://github.com/rdk-e/meta-mediarite-vendor/pull/54) from rdk-e/release/21.6.1
- Add CHANGELOG.md for 21.6.1 [09edbb1](https://github.com/rdk-e/meta-mediarite-vendor/commit/09edbb13f85eb50cb1c2131faeeaae6492499b37)
- Merge pull request  [#52](https://github.com/rdk-e/meta-mediarite-vendor/pull/52) from rdk-e/MRITE-147-fix-compile-flags-for-siliconlabs-in-broadcast-hal-linuxdvb
- MRITE-147: Fix missing compile flags for siliconlabs in linuxdvb [389f646](https://github.com/rdk-e/meta-mediarite-vendor/commit/389f6462de357d7ccacdceb496ead1e99778d93a)
- Merge pull request  [#50](https://github.com/rdk-e/meta-mediarite-vendor/pull/50) from rdk-e/release/21.6
- Merge pull request  [#51](https://github.com/rdk-e/meta-mediarite-vendor/pull/51) from rdk-e/release/21.6
- RDKEVD-3184: Add CHANGELOG.md for 21.6 [78d0129](https://github.com/rdk-e/meta-mediarite-vendor/commit/78d0129fe10a66ad8a309ac7c8661e8a1a4c670b)
- Merge pull request  [#48](https://github.com/rdk-e/meta-mediarite-vendor/pull/48) from rdk-e/update-versions-for-21.6
- silabs-fe: Add version check [fc83dc0](https://github.com/rdk-e/meta-mediarite-vendor/commit/fc83dc09a3190cd7ff7f157945c966a55da339f5)
- Update versions for 21.6 [0839105](https://github.com/rdk-e/meta-mediarite-vendor/commit/0839105cf3f6a98bb078a7a2b34e65bf57e2329c)
- Merge pull request  [#49](https://github.com/rdk-e/meta-mediarite-vendor/pull/49) from rdk-e/feature/fix_linuxdvb_dependency
- MRITE-143: Fix broadcast-hal-linuxdvb build dependency [315000b](https://github.com/rdk-e/meta-mediarite-vendor/commit/315000b61ef126895f866c09c62288be61502033)
- Merge pull request  [#44](https://github.com/rdk-e/meta-mediarite-vendor/pull/44) from rdk-e/MRITE-102-silabs-yocto-recipes
- MRITE-102: Added siliconlabs tuner and recipe to vendor layer [40e3e94](https://github.com/rdk-e/meta-mediarite-vendor/commit/40e3e94732326a7a5be37555f8a9e53308b253d5)
- Delete .github/workflows/auto_pr_creation_target_vendor_repos_caller.yml [5583729](https://github.com/rdk-e/meta-mediarite-vendor/commit/5583729ed688bb9635375757da1eec805346684a)
- Merge pull request  [#47](https://github.com/rdk-e/meta-mediarite-vendor/pull/47) from rdk-e/release/21.5
- Merge pull request  [#46](https://github.com/rdk-e/meta-mediarite-vendor/pull/46) from rdk-e/release/21.5
- RDKEVD-2761: Add CHANGELOG.md for 21.5 [2196def](https://github.com/rdk-e/meta-mediarite-vendor/commit/2196def4a0b60af35a1880ad6416ada02f53ea6f)
- Merge pull request  [#45](https://github.com/rdk-e/meta-mediarite-vendor/pull/45) from rdk-e/RDKEVD-2761-MR-VL-Release-21.5
- Update versions for 21.5 [34003ce](https://github.com/rdk-e/meta-mediarite-vendor/commit/34003cefaf236a0f40aaac69feef2907e5d65727)
- Add GitHub Actions workflow file [808adc5](https://github.com/rdk-e/meta-mediarite-vendor/commit/808adc54a79d68cc60cbe9c464149c578533bcb0)
- Remove GitHub Actions workflow file [45c0377](https://github.com/rdk-e/meta-mediarite-vendor/commit/45c0377818e44634078dab6cf910af048d5b0565)
- Add GitHub Actions workflow file [747cc47](https://github.com/rdk-e/meta-mediarite-vendor/commit/747cc475e2db85cfd0148e416455d4f13e447bbf)
- Merge pull request  [#43](https://github.com/rdk-e/meta-mediarite-vendor/pull/43) from rdk-e/release/21.4

## Changes in component repositories

