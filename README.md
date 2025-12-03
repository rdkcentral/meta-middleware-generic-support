# Vendor Layer Release Notes

XiOne UK Stream Puck RDKE Vendor Layer Release Notes

---

|Summary|Content|
|---|----|
|Classification|Confidential|
|Date|03 Dec 2025|
|Author| pawan.narayanarao@sky.uk |

---

### Build Information
|  |  |
|---------------|---------------|
| Manifest location | <https://github.com/rdk-e/vendor-manifest-xione-stream> |
| Manifest Tag | 9.4.0 |
| Manifest Name | [xione-realtek-streambox.xml](https://github.com/rdk-e/vendor-manifest-xione-stream/blob/9.4.0/xione-realtek-streambox.xml) |
| Machine Name | xione-uk |
| Platforms supported | Realtek 1319 |
| Yocto Version | kirkstone |
| Release Test Ticket | [RDKEVD-4163](https://ccp.sys.comcast.net/browse/RDKEVD-4163) |

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
  - [Network Connectivity in Vendor Test Image](#network-connectivity-in-vendor-test-image)
  - [Testing](#testing)
  - [Components details in 'packagegroup-vendor-layer'](#components-details-in-packagegroup-vendor-layer)
  - [Vendor Layer Component Integration Details](#vendor-layer-component-integration-details)
  - [Consolidated change list from vendor layer repositories](#consolidated-change-list-from-vendor-layer-repositories)
    - [Changes in meta repositories](#changes-in-meta-repositories)
    - [Changes in component repositories](#changes-in-component-repositories)

## Release Description

This is a scheduled bi-weekly release from the vendor  [RDKEVD-4163](https://ccp.sys.comcast.net/browse/RDKEVD-4163). This release will provide a versioned "meta-vendor-xione-realtek-release" that will be used by the middleware as well as image assembler.

  - XiOne UK Stream Puck RDKE Vendor Layer Release to roll out below fixes,
  - [RDKEVD-4163](https://ccp.sys.comcast.net/browse/RDKEVD-4163) [RDK-E][RTK] Realtek Release 9.4.0
  - [RDKEVD-3575](https://ccp.sys.comcast.net/browse/RDKEVD-3575) [ES1] Release 12MB CMA memory from fwstack.
  - [RDKEVD-4271](https://ccp.sys.comcast.net/browse/RDKEVD-4271) Vendor : RDK-E es1-rtk-xumo bring up : Ensure all the Vendor sysint-oem configs
  - [RDKEVD-3954](https://ccp.sys.comcast.net/browse/RDKEVD-3954) [Netflix] PLAY-AV1-60FPS-HEAAC NTS test failed.
  - [RDKEVD-3867](https://ccp.sys.comcast.net/browse/RDKEVD-3867) [TV] Update Westeros to 1.01.62 in RDKE
  - [XIONE-17832](https://ccp.sys.comcast.net/browse/XIONE-17832) [Alpaca-UK] Bootloader Release v14.0.0
  - [RDK-59643](https://ccp.sys.comcast.net/browse/RDK-59643) [RDK-E][XiOne-IT]Create the build environment for XiOne IT
  - [RDKEVD-3935](https://ccp.sys.comcast.net/browse/RDKEVD-3935) [RDKE] [ES1 RTK] Dolby vision enabled customer ID check
  - [RDKEVD-3428](https://ccp.sys.comcast.net/browse/RDKEVD-3428) CLONE - dsVideoPort L1 VTS - Fix dsGetHDCPCurrentProtocol_pos assertion errors
  - [RDKEVD-3534](https://ccp.sys.comcast.net/browse/RDKEVD-3534) XiOne Realtek: Clean up kernel configs
  - [RDKEVD-3516](https://ccp.sys.comcast.net/browse/RDKEVD-3516) Update Westeros to 1.01.61 in RDKE
  - [RDKEVD-1565](https://ccp.sys.comcast.net/browse/RDKEVD-1565) CLONE - [XiOne] Extend /proc/gpu_load to include per-process breakdown
  - [RDKEVD-3291](https://ccp.sys.comcast.net/browse/RDKEVD-3291) [RDKE] HDR-SDR conversion
  - [ENTDAI-1753](https://ccp.sys.comcast.net/browse/ENTDAI-1753) [RDKE][Xione Realtek Xfinity][WNC Realtek Rogers] - 5 Background apps support
  - [DKEVD-418](https://ccp.sys.comcast.net/browse/RDKEVD-418) XiOne - Fixing all the Segmentation faults - DeepSleep Mgr
  - [RDKEVD-571](https://ccp.sys.comcast.net/browse/RDKEVD-571) XiOne - HAL VTS L1 PowerMgr - general assert failures
  - [RDKEVD-3497](https://ccp.sys.comcast.net/browse/RDKEVD-3497) Integrate PR1/PR3/PR4 and XR100 remote support to both Flex2 and XOE


- For full list for changes please refer the [Consolidated change list from vendor layer repositories](#consolidated-change-list-from-vendor-layer-repositories) section of release notes.

## Release layer and components

### Vendor Release Components

| Vendor Release Components | New Version | Version in Previous Release (9.3.0) |
|------------|---------|------------------------------------|
| Kernel & DTB | | 4.9.119.01-r9  | |
| packagegroup-vendor-layer | 9.4.0-r0 | 9.3.0-r0 | [9.3.0....9.4.0](https://github.com/rdk-e/meta-oem-realtek-stream/compare/9.3.0...9.4.0) |
| packagegroup-common-vendor-layer | 9.4.0-r0 | 9.3.0-r0 |[9.3.0....9.4.0](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/compare/9.3.0...9.4.0)  |

### Stack layer

| Release meta Layer | Tag |
|------|------|
| [meta-vendor-xione-realtek-release](https://github.com/rdk-e/meta-vendor-xione-realtek-release) | [9.4.0](https://github.com/rdk-e/meta-vendor-xione-realtek-release/tree/9.4.0) |

#### Artifactory Location for IPKs 

| Product | Location |
|------------|---------|
| XiOne-UK | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-uk-rel/9.4.0/xione-uk/ipks/debug |
| XiOne-Foxtel | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-foxtel-rel/9.4.0/xione-foxtel/ipks/debug |
| XiOne-DE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-de-rel/9.4.0/xione-de/ipks/debug |
| XiOne-Alpaca-De | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-alpaca-de-rel/9.4.0/xione-alpaca-de/ipks/debug |
| XOE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xfinity-stream-box-rel/9.4.0/xfinity-stream-box/ipks/debug |
| WNC Xfinity | https://partners.artifactory.comcast.com/ui/repos/tree/General/wnc-xfinity-stream-box-rel/9.4.0/wnc-xfinity-stream-box/ipks/debug |
| RTK-Flex2 | https://partners.artifactory.comcast.com/ui/repos/tree/General/xumo-stream-box-rel/9.4.0/xumo-stream-box/ipks/debug |
| Xione-IT | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-it-rel/9.4.0/xione-it/ipks/debug |
| RTK-Alpaca-IT | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-alpaca-it-rel/9.4.0/xione-alpaca-it/ipks/debug |

#### OSS Consumption

- We have supported New OSS consumption from 9.0.0 Vendor release onwards. Please find the VL OSS IPK path as below
- OSS Version 4.10.0.

| Product  | Location |
|------------|---------|
| XiOne-UK | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-uk-rel/9.4.0/xione-uk/rdk-arm7ve-oss-vendor/ipks/debug |
| XiOne-Foxtel | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-foxtel-rel/9.4.0/xione-foxtel/rdk-arm7ve-oss-vendor/ipks/debug |
| XiOne-DE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-de-rel/9.4.0/xione-de/rdk-arm7ve-oss-vendor/ipks/debug |
| XiOne-Alpaca-De | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-alpaca-de-rel/9.4.0/xione-alpaca-de/rdk-arm7ve-oss-vendor/ipks/debug |
| XOE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xfinity-stream-box-rel/9.4.0/xfinity-stream-box/rdk-arm7ve-oss-vendor/ipks/debug |
| WNC Xfinity | https://partners.artifactory.comcast.com/ui/repos/tree/General/wnc-xfinity-stream-box-rel/9.4.0/wnc-xfinity-stream-box/rdk-arm7ve-oss-vendor/ipks/debug |
| RTK-Flex2 | https://partners.artifactory.comcast.com/ui/repos/tree/General/xumo-stream-box-rel/9.4.0/xumo-stream-box/rdk-arm7ve-oss-vendor/ipks/debug |

### Meta Repos

#### Meta repos maintained by layers layer

| Meta Repo | New Version | Version in Previous Release (9.3.0) | ChangeList |
|------------|---------|------------------------------------|--------------|
| [meta-rdk-auxiliary](#meta-rdk-auxiliary) |  **1.7.0** | 1.3.1 | [1.3.1...1.7.0](https://github.com/rdkcentral/meta-rdk-auxiliary/compare/1.3.1...1.7.0) |
| [meta-rdk-oss-reference](#meta-rdk-oss-reference) |  **4.10.0** | 4.7.6 | [4.7.6...4.10.0](https://github.com/rdkcentral/meta-rdk-oss-reference/compare/4.7.6...4.10.0) |
| meta-rdk-tools |  | 2.3.1 | |
| meta-vts |  | 1.2.0 | |
| [meta-rdk-soc-realtek](#meta-rdk-soc-realtek) |  **4.1.6** | 4.1.3 | [4.1.3...4.1.6](https://github.com/rdk-e/meta-rdk-soc-realtek/compare/4.1.3...4.1.6) |
| [meta-oem-stream](#meta-oem-stream) |  **4.1.2** | 4.1.1 | [4.1.1...4.1.2](https://github.com/rdk-e/meta-oem-stream/compare/4.1.1...4.1.2) |
| [meta-oem-realtek-stream](#meta-oem-realtek-stream) |  **9.4.0** | 9.3.0 | [9.3.0...9.4.0](https://github.com/rdk-e/meta-oem-realtek-stream/compare/9.3.0...9.4.0) |
| [meta-rdk-vendor-realtek-common](#meta-rdk-vendor-realtek-common) |  **9.4.0** | 9.3.0 | [9.3.0...9.4.0](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/compare/9.3.0...9.4.0) |
| [meta-oss-vendor-realtek](#meta-oss-vendor-realtek) |  **4.1.5** | 4.1.3 | [4.1.3...4.1.5](https://github.com/rdk-e/meta-oss-vendor-realtek/compare/4.1.3...4.1.5) |
| [meta-mediarite-vendor](#meta-mediarite-vendor) |  **21.8** | 21.6.1 | [21.6.1...21.8](https://github.com/rdk-e/meta-mediarite-vendor/compare/21.6.1...21.8) |

#### Meta repos common for RDK-E

| Meta Repo | New Version | Version in Previous Release (9.3.0) | ChangeList |
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
| poky |  **rdk-4.5.0** | rdk-4.4.0 | [rdk-4.4.0...rdk-4.5.0](https://github.com/rdkcentral/poky/compare/rdk-4.4.0...rdk-4.5.0) |
| meta-python2 |  | rdk-4.0.0 | |
| | | | |
| **extention** ||||
| meta-rdk-oss-ext |  **1.6.0** | 1.3.1 | [1.3.1...1.6.0](https://github.com/rdk-e/meta-rdk-oss-ext/compare/1.3.1...1.6.0) |
| | | | |
| **configs** ||||
| rdke-region-uk-config |  | 2.3.1 | |
| rdke-region-au-config |  | 1.2.1 | |
| rdke-region-de-config |  | 1.0.6 | |
| rdke-region-us-config |  | 1.5.2 | |
| rdke-region-it-config |  **1.1.1** | NA | [1.1.1](https://github.com/rdk-e/rdke-region-it-config/commits/1.1.1) |
| rdke-common-config |  | 1.0.8 | |
| rdke-stb-config |  | 1.0.0 | |
| | | | |
| **rdk** ||||
| meta-rdk-halif-headers |  | 3.0.2 | |
| meta-rdk-cpc-halif-headers |  | 1.0.0 | |
| meta-rdk-vendor-cpc-common |  | 1.4.0 | |
| | | | |
| **products** ||||
| meta-product-xione |  **3.4.4** | 3.3.9 | [3.3.9...3.4.4](https://github.com/rdk-e/meta-product-xione/compare/3.3.9...3.4.4) |
| | | | |
| **binder** ||||
| meta-binder |  | 1.0.0 | |
| | | | |
| **release** ||||
| meta-vendor-xione-realtek-release |  **develop** | 9.2.0 | [9.2.0...develop](https://github.com/rdk-e/meta-vendor-xione-realtek-release/compare/9.2.0...develop) |
| | | | |

### Interface versions

| # | HAL Interface Header (rdkcentral github) | New Version | Version from Previous Release (9.3.0)|
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

### Middleware and Production image Integration

### Limitations
It should be noted that some services may not run as they have dependencies with other layers. Additionally, the exclusion of inter-layer bbappends/patches might result in the failure to start some services. These limitations should be taken into consideration during the verification process. These Limitations will be addressed in Future Releases.

## Build instructions

- Steps to check out and build the vendor layer project [https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project](https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project)
- Steps to check out and build the image assembler project [https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler](https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler)

### Boot Command

#### Copy image to device /mnt/usb or /opt partitions or connect and mount USB having the image binn- Execute FlashApp command
- Move to directory containing the image
- FlashApp \<dirname\> \<imagename\>
- eg. FlashApp /mnt/usb/SKXI11ADS_9.4.0_VENDOR_DEV.bin

#### USB Flash Method using xboot prompt
- Copy the image `"SKXI11ADS_9.4.0_VENDOR_DEV.bin"` to the usb and connect to the STB
- Switch on the STB
- Press z button multiple time to get the bootloader prompt.
- From bootloader prompt, need to do below method
- Choose option c (flashing image)
- Choose select option h/i (depends on from which bank the image is booting)
- Enter the image name which we need to copy.
- After image flashed successfully. Choose the option "exit"
- Choose the option "exit" (or) Enter "i" (automatically reboot the box

### Network connectivity in Vendor Test Image
- Ethernet Connectivity is supported now
- If IP is not acquired automatically please run udhcpc after connecting Ethernet

## Testing

- Created the `"vendor test image"` `" SKXI11ADS_9.4.0_VENDOR_DEV.bin"` for XiOne-UK and for all other variants as well using the vendor layer jenkins job `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Vendor-Release-Build/"`
- Successfully booted the `"vendor test image"` and obtained the shell prompt.
- Verified vendor layer services up and running
- Verified IP acquisition via Ethernet
- Played clear AV with gst-play-1.0.
- Verified image flashing using FlashApp

Testing details in [RDKEVD-4163](https://ccp.sys.comcast.net/browse/RDKEVD-4163)

#### High Level Vendor Memory usage data
- Test results for use case of UHD60FPS playback on Xione Uk puck  with 4GB DDR Size . The device has a dual decode capability with UHD+FHD support. Very minimal services are running in the vendor test image while  running the test.

|      **Field**       |   **Description**    |
|------------------|-------------------|
|Vendor Static Reserved   |    Amount of fixed static memory which is used by vendor layer for any UseCase       |
|Vendor Baseline Memory  | Amount memory used at Boot up minus vendor CMA used |
|Vendor Dynamic usage on uhd_play      | Dynamically allocated memory during the execution of Usecase |
|Vendor Dynamic Total      | Dynamically allocated Total Memory system wide |
|Available Memory       | Available Memory in the system |

##### XiOne-UK : PLEASE NOTE: 9.4.0 Memory usage date will be updated shortly.
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

##### XiOne-Foxtel : PLEASE NOTE: 9.4.0 Memory usage date will be updated shortly.
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

##### XiOne-DE : PLEASE NOTE: 9.4.0 Memory usage date will be updated shortly.
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

##### XiOne-Alpaca-DE : PLEASE NOTE: 9.4.0 Memory usage date will be updated shortly.
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

##### Xfinity-stream-box : PLEASE NOTE: 9.4.0 Memory usage date will be updated shortly.
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

##### Xumo-stream-box : PLEASE NOTE: 9.4.0 Memory usage date will be updated shortly.
| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| Jul 14 2025 | SCXI11AIC_8.1.2_VENDOR_DEV | 1547348 | 471939 | 22354 | 494293 | 2152407 |
| May 23 2025 |  SCXI11AIC_VENDOR_DEV_refs_tags_7.0.1_20250521112318 | 1547356 | 457230 | 28700 | 485930 | 2160762 |
| May 16 2025 |  SCXI11AIC_VENDOR_DEV_refs_tags_7.0.0_20250511211029 | 1547356 | 456878 | 29452 | 486330 | 2160362 |
| Mar 26 2025 |  SCXI11AIC_VENDOR_DEV_refs_tags_6.0.2_20250324190109     | 1547356 | 456595 | 28437 | 485032 | 2161660 |

##### WNC Xfinity : PLEASE NOTE: 9.4.0 Memory usage date will be updated shortly.
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
Created Middleware build "SKXI11ADS_MIDDLEWARE_DEV_feature_RDKEVD-4421-OSS-4.10.0_20251127162447.bin" from "https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Middleware-Build/30097/"
##### XiOne-Foxtel
Created Middleware build "SKXI11ADSSOFT_MIDDLEWARE_DEV_feature_RDKEVD-4421-OSS-4.10.0_20251127164945.bin" from "https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Foxtel-Middleware-Build/4981/"
##### XiOne-Alpaca-DE
Created Middleware build "SKXI11AEISODE_MIDDLEWARE_DEV_feature_RDKEVD-4421-OSS-4.10.0_20251127165537.bin" from "https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-ALPACA-DE-Middleware-Build/3745/"
##### XiOne-DE
Created Middleware build "SKXI11AIS_MIDDLEWARE_DEV_feature_RDKEVD-4421-OSS-4.10.0_20251127170640.bin" from "https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-DE-Middleware-Build/3736/"
##### XiOne-XOE
Created Middleware build "SCXI11AIC_MIDDLEWARE_DEV_feature_RDKEVD-4421-OSS-4.10.0_20251127170251_XOE.bin" from "https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/view/1-RDKE-Pipeline-Jobs/job/RTK-XIONE-XFINITY-STREAM-BOX-Middleware-Build/3101/"
##### XiOne-WNC-Xfinity
Created Middleware build "WNXI11AEI_MIDDLEWARE_DEV_feature_RDKEVD-4421-OSS-4.10.0_20251127165838_XOE.bin" from "https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-WNC-XFINITY-Middleware-Build/2921/"

- Tested the below scenarios as part of [RDKEVD-4163](https://ccp.sys.comcast.net/browse/RDKEVD-4163)
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
  - Issues observed in  release 9.4.0 https://ccp.sys.comcast.net/browse/XIONE-18076?jql=labels%20%3D%20Vendor_9.4.0
  - Attached the test report here https://ccp.sys.comcast.net/secure/attachment/13554336/Realtek_XiOne_RDKE_Vendor_Release_9.4.0.pdf

## Components details in 'packagegroup-vendor-layer'

 Components which are prebuilt or the ones which installs config files or scripts from meta layer have SRCREV marked as NA

| # | Vendor layer Component | New PV-PR | PV-PR in Previous Release (9.3.0)| New SRCREV | SRCREV in Previous Release (9.3.0)| Diff |
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
| 32 | [hdmicec-hal-realtek](#hdmicec-hal-realtek) | **1.3.10-3.0.2-r0** | 1.3.10-3.0.1-r0 | **6b18674** | 950a89e |  [950a89e...6b18674](https://github.com/rdk-e/hdmicec-soc-realtek/compare/950a89e59e4ea0067d35208869770ca0ee1c6c29...6b18674167c7959bbbab609039e544a635766ca4) |
| 33 | rdk-gstreamer-utils-platform | | 2.0.2-2.0.0 |  | 6ba04b9 |  |
| 34 | devicesettings-hal-realtek | **6.0.0-4.2.1-r0** | 6.0.0-4.1.8-r0 |  |  |  |
| - |  - devicesettings-hal-realtek_devicesettingssocrealtek | |  | **09abeeb** | 6ad15d6 |  [](https://github.com/rdk-e/hdmicec-soc-realtek) |
| - |  - devicesettings-hal-realtek_devicesettingsskyxione | |  |  | c924a02 |  |
| 35 | deepsleepmgr-hal-realtek | **1.0.4-1.1.3-r0** | 1.0.4-1.1.0-r0 | **8428f39** | f700dfe |  [](https://github.com/rdk-e/hdmicec-soc-realtek) |
| 36 | pwrmgr-hal-realtek | **1.0.3-1.0.1-r0** | 1.0.3-1.0.0-r0 | **a39f287** | c91e047 |  [](https://github.com/rdk-e/hdmicec-soc-realtek) |
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
| 74 | westeros-simpleshell | **1.01.62-r0** | 1.01.59-r0 | **Westeros-1.01.62** | 9fa8be1 |  [](https://github.com/rdk-e/hdmicec-soc-realtek) |
| 75 | westeros-simplebuffer | **1.01.62-r0** | 1.01.59-r0 | **Westeros-1.01.62** | 9fa8be1 |  [](https://github.com/rdk-e/hdmicec-soc-realtek) |
| 76 | westeros-soc | **1.01.62-r0** | 1.01.59-r0 | **Westeros-1.01.62** | 9fa8be1 |  [](https://github.com/rdk-e/hdmicec-soc-realtek) |
| 77 | westeros-sink | **1.01.62-r0** | 1.01.59-r0 |  |  |  |
| - |  - westeros-sink_westeros | |  | **Westeros-1.01.62** | 9fa8be1 |  [](https://github.com/rdk-e/hdmicec-soc-realtek) |
| - |  - westeros-sink_realtek | |  |  | e32f912 |  |
| 78 | westeros | **1.01.62-r0** | 1.01.59-r0 | **Westeros-1.01.62** | 9fa8be1 |  [](https://github.com/rdk-e/hdmicec-soc-realtek) |
| 79 | essos | **1.01.62-r0** | 1.01.59-r0 | **Westeros-1.01.62** | 9fa8be1 |  [](https://github.com/rdk-e/hdmicec-soc-realtek) |
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
| 94 | widevinecdmi | **1.4.2-r0** | NA | **11d6937** | NA |  [](https://github.com/rdk-e/hdmicec-soc-realtek) |
| 95 | qca6390-mod-wifi | | 1.0.3-r1 |  | NA |  |
| 96 | flashapp | | 7.1-r0 |  | NA |  |
| 97 | sky-led-driver | | 2.0.0-r0 |  | f97a795 |  |
| 98 | [hank-mod-mali](#hank-mod-mali) | **3.0.2-r0** | 3.0.1-r0 | **8a83b55** | 41c19be |  [41c19be...8a83b55](https://github.com/rdk-e/kernel-modules-mali-soc-realtek/compare/41c19be3b185f709a2ecb3c05367192f6a273f8f...8a83b55d8d7663384e7a4a346fc6664a2e63f966) |
| 99 | rtkv1sink | | 2.0.0-r1 |  | 67bdf5b |  |
| 100 | platform-lib | | 2.6.0-r4 |  | NA |  |
| 101 | rtk-audio-service | | 3.2.0-r0 |  | e62564d |  |
| 102 | [hdmiservice](#hdmiservice) | **4.2.2-r0** | 4.2.1-r0 | **51eccac** | bbb4186 |  [bbb4186...51eccac](https://github.com/rdk-e/hdmiservice-realtek/compare/bbb418639129ab166b0ffe4c436642d8b32fc87a...51eccacacd4128fa6f33a09162792bcc9c218a2c) |
| 103 | rtkpcrclksink | | 2.0.0-r0 |  | c8272d9 |  |
| 104 | blewakeupenabler | **1.5.0-r0** | 1.4.1-r0 | **2763f76** | 6f8176d |  [](https://github.com/rdk-e/hdmiservice-realtek) |
| 105 | ctrlm-irdb-plugin | | 1.1.1-r0 |  | 1.1.1 |  |
| 106 | ctrlm-irdb-uei | | 2.2.0-r1 |  | NA |  |
| 107 | ctrlm-irdb-ruwido | | 2.3.0-r1 |  | NA |  |
| 108 | ctrlm-rf4ce-hal | | 1.0.0-r0 |  | NA |  |
| 109 | ctrlm-hal-rf4ce-prebuilt | | 1.0.0-r0 |  | NA |  |
| 110 | qorvo-mod-rf4ce | | 2.11-r0 |  | NA |  |
| 111 | fairplay-cdm | **1.0.0-r0** | NA | **022e5fb** | NA |  [](https://github.com/rdk-e/hdmiservice-realtek) |
| 112 | fairplayreelib | **2.10-r0** | NA |  | NA |  |
| 113 | linux-libc-headers | | 4.9-r9 |  | NA |  |
| 114 | packagegroup-kernel-modules | | 4.9.119.01-r9 |  | NA |  |
| 115 | [linux-hank](#linux-hank) | | 4.9.119.01-r9 | **cf4b52e** | 3500cd1 |  [3500cd1...cf4b52e](https://github.com/rdk-e/linux_kernel-soc-realtek/compare/3500cd177ab64fe8d740db795fc6c93e9bb64663...cf4b52ea8efd4f4924e08456d108716b8aad2a1b) |
| 116 | rtkaudiosink | | 3.1.4-r0 |  | b5ddc36 |  |
| 117 | mfi-ree | | 2.0.0-r0 |  | 4941717 |  |
| 118 | sysint-oem | | 3.0.4-r1 |  | 000bd91 |  |
| 119 | [apparmor-vendor](#apparmor-vendor) | **3.3.0-r0** | 3.0.3-r0 | **973fc2f** | 6e525d1 |  [6e525d1...973fc2f](https://github.com/rdk-e/apparmor-profiles/compare/6e525d13e3882d28208a635a69c169c8c1f5d795...973fc2f477dc2adf8cf730ab9ca2e7f8de049040) |
| 120 | directfb | | 1.7.7-r0 |  | NA |  |
| 121 | [product-firmware-pb](#product-firmware-pb) | **1.2.0-r0** | 1.0.9-r0 | **23446b1** | 426b3ea |  [426b3ea...23446b1](https://github.com:rdk-e/firmware-prebuilt-xione-soc-realtek.git/compare/426b3eaec4ecac9a6c6dedd5e3067189dd821f45...23446b1fb83948c1a20c6642440348e0501f1f74) |
| 122 | testagentlib | | 3.0.2-r1 |  |  |  |
| - |  - testagentlib_testagentlib | |  |  | b8eb1f8 |  |
| - |  - testagentlib_xione_factory | |  |  | 6281804 |  |
| 123 | testagent-loader | | 2.3.0-r0 |  | NA |  |
| 124 | libbinder | | 1.0.0-r1 |  | 0f7a23b |  |
| 125 | aidl-generator-native | | 1.0.0-r1 |  | 0f7a23b |  |
| 126 | flash-aidl | | 1-r0 |  | ddcceef |  |
| 127 | image-hal-service | | 1.0.0-r0 |  | 7eb82c9 |  |
| 128 | platform-imagehal-lib | | 1.0.0-r0 |  | NA |  |
| 129 | asappsserviced-vendor-conf | | 1.1.0-r0 |  | 1.1.0 |  |

## Vendor Layer Component Integration Details


## Consolidated change list from vendor layer repositories

## Changes in meta repositories

## [meta-rdk-auxiliary](https://github.com/rdkcentral/meta-rdk-auxiliary/blob/main/CHANGELOG.md)

- Merge branch 'release/1.7.0' [b5d4376](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/b5d437634b49daf552354b96c1b67fc430b99455)
- RDKE-899: Update changelog for Rel 1.7.0 [575d2b5](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/575d2b51965528e556813e9fb458c8ee2d3bce09)
- Merge tag '4.7.0' into develop [0cadbd2](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/0cadbd2b1477118074e905f79ddcb60dd414efb6)
- Merge branch 'release/4.7.0' [a23e4bb](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/a23e4bb259d09558646750925effe8cb7f7006e4)
- RDKE-899: Update changelog for Rel 4.7.0 [584f951](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/584f951bd5d87966e88b4337154958439924db0c)
- RDKOSS-370:Bring required class used by broadband stack ( [#85](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/85))
- RDKOSS-546: RRD JSON Merge is failed in RDKE builds ( [#94](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/94))
- RDK-59308: Revert - Improve Reliability of Log Rotation Mechanism ( [#90](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/90))
- Merge pull request  [#89](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/89) from rdkcentral/sbarre01-patch-1
- Update CODEOWNERS [e30e4bd](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/e30e4bd1328c820445df4236f40cfe2fe04f2185)
- Merge pull request  [#73](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/73) from rdkcentral/feature/RDK-59308
- Merge branch 'develop' into feature/RDK-59308 [5c34d12](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/5c34d12e87c643fdc8c2dc78c6b4cdc166abc63a)
- Revert "RDK-59546 Integrate the memcapture tool on release build ( [#76](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/76))" ( [#76](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/76))
- Merge branch 'develop' into feature/RDK-59308 [2b03575](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/2b035758514c416856ebb8f4801fc9f9a037c1bc)
- RDK-59546 Integrate the memcapture tool on release build ( [#76](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/76))
- Merge tag '1.6.0' into develop [662a499](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/662a499464cb5ca35ef7acb2b1a97e297728337c)
- Merge branch 'release/1.6.0' into main [2edd57d](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/2edd57db2f1526c6f0c061cd149261f36185369b)
- RDKE-893: Update change log for Rel 1.6.0 [8e8f81e](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/8e8f81ee199ab708247e718497cc2299deee930b)
- RDK-59308 Improve Reliability of Log Rotation Mechanism [91dfdc2](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/91dfdc217d5b541b8154bb3f27df42216cc21b99)
- Merge pull request  [#37](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/37) from rdkcentral/feature/action-deploy-for/develop
- Deploy cla action [6e6fa13](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/6e6fa13bdd9b7fba3bf878bc66d9efcf7fa6f2f3)
- Merge branch 'develop' into feature/action-deploy-for/develop [21c0a1c](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/21c0a1c7fd63c9f987cd1a0756cb0022afc909eb)
- Merge branch 'hotfix/1.3.1' into support/1.3.0 [fa505be](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/fa505be38e7d9eb46a510dc44aa1b8b62542b1d7)
- RDKE-905: Hotfix Release 1.3.1 [d4c7dbd](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/d4c7dbd77fd1f6a9ddeb842500d9f7f54752d6e0)
- RDKOSS-468: Add fix for WRONG_KEY retry logic and dnsmasq started by NetworkManager ( [#59](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/59))
- RDK-57904: Update post-rootfs-hooks.bbclass ( [#44](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/44))
- Merge pull request  [#54](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/54) from rdkcentral/topic/RDKEMW-6240
- Merge branch 'hotfix/1.3.1-community' into support/1.3.0 [1c476f2](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/1c476f24285923809c48745763f780ad27bc3fff)
- Update CHANGELOG.md [8aa4a7d](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/8aa4a7d2052e9dbc6463a0e194c444b3982cffd0)
- RDK-58119 License manifest pdf creation in local RDK-E build [4641a2c](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/4641a2c4e457ccde2e368c4762a3081c6858236f)
- Update to support core-image-minimal license manifest generation [0b9bb50](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/0b9bb5063739cb5c94bcf0ffa9db3ef993684a5b)
- RDK-58119 Update license_create_manifest_pdf.bbclass to support local file system [f6ccd93](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/f6ccd93ea3532d13fbc76d5147d45f99e5b19996)
- RDKEMW-6240:Fix RDKE Coverity MW Layer build error [13a40cf](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/13a40cf8947c43d7a581bf5baa30b6359237067c)
- Merge tag '1.5.1' into develop [0191efb](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/0191efb3368e565b6ccd9c21dc5be5281adf37b0)
- Merge branch 'release/1.5.1' into main [80c9c95](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/80c9c956bfeb4ca8e58ca70fabcbb3325b8f60c2)
- RDKE-849: Update change log for Rel 1.5.1 [c63eb0c](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/c63eb0c2eb193efefa17d162a6582184ea167abe)
- RDKOSS-402: Remove timeout from ls-remote ( [#49](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/49))
- Merge tag '1.5.0' into develop [511031e](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/511031e1e04455f049ebb9793c3414ae11abb57a)
- Merge branch 'release/1.5.0' into main [17da49e](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/17da49ebe049194ffb86b8d2680f0dc93cc1a880)
- RDKE-849: Update change log for Rel 1.5.0 [d4b386f](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/d4b386f87e3f3539f59a7214a5ec73c776a6a4cc)
- RDKOSS-402: Fix ls-remote timeout ( [#45](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/45))
- Remove ssh key installation here and moving it to dropbear.bbappends ( [#32](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/32))
- XIONE-17490: Include systemd-analyze in dbg builds ( [#41](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/41))
- Merge branch 'develop' into feature/action-deploy-for/develop [3a32be4](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/3a32be4134c43776031a882697caf019a4cd35df)
- Merge pull request  [#40](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/40) from rdkcentral/feature/RDK-58119
- RDK-58119 License manifest pdf creation in local RDK-E build [2aaf98d](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/2aaf98d3967fb9c2baa58c5e9b6f11967fb4405a)
- Merge tag '1.4.0' into develop [f769c8b](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/f769c8be11ce7ea0e4db07d28f07ef7f1d10635f)
- Merge branch 'release/1.4.0' into main [4ed0873](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/4ed0873e8011bf17eee91fc98bd2e26eb8282d4f)
- RDKE-849: Release 1.4.0 [ba33e95](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/ba33e950d1aab5793528abfc7b489cea361c21c3)
- RDK-57157: Prototype to improve NTP (timesyncd) reliability ( [#31](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/31))
- RDKTV-36648: USB Drive Fails to Launch in Offline Mode After Restart via Settings ( [#34](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/34))
- Merge pull request  [#35](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/35) from rdkcentral/feature/RDK-58119
- Deploy cla action [3b27b3f](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/3b27b3fcec8ffe4c740243d84cc9e9eaf8204b39)
- Merge branch 'develop' into feature/RDK-58119 [3abb324](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/3abb324a874d4dfac0442463eb510dc3cd017aeb)
- Merge pull request  [#33](https://github.com/rdkcentral/meta-rdk-auxiliary/pull/33) from rdkcentral/feature/RDKOSS-358
- Update to support core-image-minimal license manifest generation [da426b0](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/da426b0548eb65cee4a23d6fcd263cf280fd7c76)
- RDK-58119 Update license_create_manifest_pdf.bbclass to support local file system [dc1ae11](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/dc1ae11daa5d2c4610a9073649a430199fe572e5)
- RDKOSS-358: Add error condition check [d0cdb1b](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/d0cdb1b25df371a4c77b62afa9d5ce600d59c01c)
- RDKOSS-358: Enable multithreaded parsing of src_uris [66a216c](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/66a216c913af666aedd04650f94838340c6b49cf)
- RDKOSS-358: Optimize ls-remote calls by caching SHA values [169fa2d](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/169fa2d0ef564077c61ed69cbdbef1ba41623c18)
- Merge tag '1.3.0' into develop [b364786](https://github.com/rdkcentral/meta-rdk-auxiliary/commit/b364786cdce1ec1a4a6d0c0e4260a39e131b06a2)

## [meta-rdk-oss-reference](https://github.com/rdkcentral/meta-rdk-oss-reference/blob/main/CHANGELOG.md)

- Merge branch 'release/4.10.0' [eb9b40f](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/eb9b40fad49c764d883b782c40c0739f716c3b9f)
- RDKE-899: Update changelog for Rel 4.10.0 [de880f3](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/de880f375700f4cfc0a4058d4701155b8064252d)
- RDKE-899: Update OSS version to 4.10.0 ( [#297](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/297))
- RDKOSS-522 Integrate libp11 component for PKCS11 ( [#295](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/295))
- RDKOSS-371: Changes required in meta-rdk-oss-reference to build RDKB ( [#261](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/261))
- RDKEMW-7910: Reduce opkg install thread count from 64 to 16 ( [#291](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/291))
- RDKOSS-540 : X and Y buttons are interchanged for PS4 gen1 controller… ( [#275](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/275))
- RDKOSS-545 : Enable config to support bgscan ( [#281](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/281))
- RDKEMW-8657: GStreamer lacks WebVTT encoder (webvttenc) ( [#240](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/240))
- Revert "RDK-59308 Improve Reliability of Log Rotation Mechanism" ( [#272](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/272))
- Merge pull request  [#271](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/271) from rdkcentral/sbarre01-patch-1
- Update CODEOWNERS [c3ee3d7](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/c3ee3d7548828f651ec42872abc481931f0b4c90)
- Merge pull request  [#243](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/243) from rdkcentral/feature/RDK-59308
- Merge branch 'develop' into feature/RDK-59308 [2790253](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/279025313fe205df36b14be0fae3c615c385eabb)
- RDKEMW-9060: Sync with RDKV to support new game controllers ( [#247](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/247))
- Merge branch 'develop' into feature/RDK-59308 [bc027c6](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/bc027c6002006a04cc7b1635dc236aa19392c799)
- Merge tag '4.9.0' into develop [eac6160](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/eac6160258b3707bd56e646d943145916bff2ca7)
- Merge branch 'release/4.9.0' into main [f91acde](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/f91acde7438c5aea1803ff451e8816ebf72b9bc6)
- RDKE-893: Updated Changelog for Rel 4.9.0 [705f041](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/705f041dafd487b0c3e9fb152f70a98b53fc0d34)
- RDKE-893: Updated OSS Rel version to 4.9.0 Feature/rdke 893 ( [#248](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/248))
- RDKEMW-8719 : btMgrBus crash ( [#232](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/232))
- Merge branch 'develop' into feature/RDK-59308 [a83e1a2](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/a83e1a2d4e19499b2eb00f9e86e2e4c017338fe5)
- Revert "Update dnsmasq.service ( [#128](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/128))" ( [#128](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/128))
- RDK-59308 Improve Reliability of Log Rotation Mechanism [60bb042](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/60bb042bf1cde8d789fff6e16e4ee1cc4287dae1)
- Reason for change: soup_message_io_finished (called from run_until_read_done) invokes message_completed callback that 'finishes' the item. ( [#237](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/237))
- RDKE-904, DELIA-68725: fix network process hang in io_try_write ( [#197](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/197))
- RDKEMW-7209, RDKOSS-477: Update AppArmor userspace to 3.1.7 ( [#207](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/207))
- RDKOSS-509: Enable override for OSS ARCH and PR ( [#239](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/239))
- RDKE-921: Clean up the mitigation done for dnsmasq restart in Xumo TV Release ( [#217](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/217))
- RDKOSS-467: append include_dir to allow mosquitto persistent custom configurations ( [#212](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/212))
- RDKOSS-490: Define OSS_LAYER_VERSION ( [#222](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/222))
- Merge pull request  [#129](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/129) from rdkcentral/feature/action-deploy-for/develop
- Deploy cla action [856a5f9](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/856a5f9d059ab9f4b6f37c745037e94f922865d8)
- Merge branch 'develop' into feature/action-deploy-for/develop [a20bf3c](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/a20bf3ceaa7244bca244cf758ad1ac2766074e0f)
- RDKEMW-8441:  handle_ZERO_RETURN_as_closed_connection ( [#215](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/215))
- Merge branch 'hotfix/4.7.6' into support/4.7.0 [5c8ec4a](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/5c8ec4a37bb283460253383ec402a96e7b35474a)
- RDKE-932: Update changelog for Rel 4.7.6 [381893f](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/381893f6415821a4b4a28cf171a3771653078bf7)
- RDKE-932: Update OSS release to 4.7.6 [d2b8329](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/d2b83290ab82c7ca4154d6d01bb4ce3db51093a0)
- RDK-57964 - Improve NTP Analytics in RDK ( [#211](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/211))
- Merge branch 'hotfix/4.7.5' into support/4.7.0 [b37b16f](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/b37b16fd79144c9e07f1ecc4e00ad858e2c7d4d6)
- RDKE-925-RDKE-905: Updated change log for Rel 4.7.5 [a43f0d9](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/a43f0d908b638a6093fef65381e13a7ea639fa87)
- RDKE-925:Update OSS release version to 4.7.5 [a5e4ab2](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/a5e4ab2b57278d9e909baef7978b8249ad8ea45b)
- RDKOSS-467 : Added DAB required missing dependencies ( [#206](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/206))
- RDKOSS-468: Add RDEPENDS for service package ( [#205](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/205))
- RDKOSS-468: Add fix for WRONG_KEY retry logic and dnsmasq started by NetworkManager ( [#202](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/202))
- RDKEMW-5776: Memory leaks in gstreamer LSAN/ASAN ( [#198](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/198))
- Merge branch 'hotfix/4.7.4' into support/4.7.0 [cb455fc](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/cb455fc70881d57cfd971c95c77ba5fca7c01e35)
- RDKE-905: Updated change log for Rel 4.7.4 [c318cd9](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/c318cd9c68b33a079d72b915fa9e3a45bf345684)
- RDKE-905: Update OSS release version to 4.7.4 [8bd6df3](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/8bd6df3a26bf321930fe8ffa61bd9afb328959ac)
- RDKOSS-468: Add fix for WRONG_KEY retry logic and dnsmasq started by NetworkManager ( [#201](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/201))
- RDK-57904: Update Dnsmasq to be managed by NetworkManager ( [#186](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/186))
- Merge pull request  [#190](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/190) from rdkcentral/feature/RDKOSS-337-cleanup
- Merge branch 'develop' into feature/RDKOSS-337-cleanup [ebde694](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/ebde6945226ac01daef5d576308a4de9a50abf9a)
- RDKOSS-241: Integrate rust 1.82.0 from meta-lts-mixin ( [#188](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/188))
- RDKOSS-337: Remove unmapped binaries from OSS packages [6de955c](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/6de955cd89944001175b8cc46096ed2cde391513)
- Merge pull request  [#189](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/189) from rdkcentral/develop
- Update CHANGELOG.md [5888b75](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/5888b75298f632e7a113bb9d4090f554e4f1d3ee)
- Update util-linux_%.bbappend [f69c925](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/f69c925d4d1bf059052964d5f970a6b773c7dda1)
- Update iptables_%.bbappend [e98cce3](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/e98cce33c08ad425fabf3203302bfba16c9d44cd)
- Update package_revisions_oss.inc [0fa2996](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/0fa2996b60313b851c7ed7317163f8e2a5594b0e)
- Update packagegroup-oss-layer.bb [c2baa29](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/c2baa2977b0895c6654a6b554eeca7bff8e67524)
- Delete recipes-support/libcroco/libcroco_%.bbappend [1fe9e85](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/1fe9e85d409855d653b08810d4875e605e849aaa)
- Update package_revisions_oss.inc [de90dcd](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/de90dcdabda45303d87666e44b2177917adaf869)
- Merge branch 'hotfix/4.7.3' into support/4.7.0 [700c592](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/700c59238cdce13f578263b417c229af5f33f4a7)
- RDKE-896: Update change log for rel 4.7.3 [f045d86](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/f045d86a08a7f29078a3ac3a9d4012b5326deb38)
- RDKE-896: Update oss release version [cf350fa](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/cf350fae779596e4df1fee428339204b78065e07)
- RDKOSS-451: Change logrotate to systemd timer logic ( [#182](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/182))
- RDKOSS-451: Change logrotate to systemd timer logic ( [#182](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/182))
- RDKEMW-6121: NetworkManager Daemon Process crashed post reboot test [No User Impact] ( [#184](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/184))
- RDKOSS-382, RDKOSS-383 Remove unused binaries [97586fe](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/97586fe6d30ce13cd2745ca65bf1e7a75ab64342)
- Merge pull request  [#174](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/174) from rdkcentral/feature/RDKOSS-128-rebase
- Merge tag '4.8.0' into develop [84295d8](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/84295d8dfbda6cf63fcd87a963d470a28bf34aa6)
- Merge branch 'release/4.8.0' into main [19003e0](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/19003e0dd4e39edfc69adb8cc5b5131856896141)
- RDKE-849: Update change log for rel 4.8.0 [5ea011f](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/5ea011fb221089f83d0b9dfa3e71d626f5c11cec)
- RDKE-849: OSS release 4.8.0 [be0d7d2](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/be0d7d298e767ce0c78553fe991ad627e20d553f)
- RDK-58081 : Porting RDK-57842 CVE patches to RDK-E ( [#121](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/121))
- RDKOSS-430:Enable dropbear to accept custom authorized_keys file ( [#108](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/108))
- RDKOSS-420: Update rdkperf version ( [#167](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/167))
- RDKOSS-420: Use tune profile to determine OSS package arch ( [#162](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/162))
- Merge branch 'hotfix/4.7.2' into support/4.7.0 [f3bd92c](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/f3bd92cae0a0fb5a4c9340d6dd39f0c78801309f)
- RDKE-881: Update change log for rel 4.7.2 [c70f44f](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/c70f44fcc81a11b956297e38bdebfb74b323ce93)
- RDKE-881: OSS hotfix release 4.7.2 [04aba69](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/04aba69ac4f1de567e67a1179e8f309b8f09cb69)
- RDKOSS-409: Restore the required binaries and scripts ( [#159](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/159))
- RDKOSS-409: Restore the required binaries and scripts ( [#159](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/159))
- RDKEMW-6391: Remove NetworkManager-wait-online.service ( [#156](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/156))
- RDKOSS-405: libdrm fails to compile with stack layering 3.0.0 ( [#153](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/153))
- RDKOSS-404 : Enable connectivity check In NetworkManager ( [#147](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/147))
- Deploy cla action [353a8a0](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/353a8a063875276ed9ad88b368667f7559ef0071)
- RDKEVD-2071: wipefs and blkdiscard are required ( [#149](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/149))
- RDKTV-37484: Add libraries required for iptables service ( [#150](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/150))
- RDKEVD-2071: wipefs and blkdiscard are required ( [#142](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/142))
- RDKTV-37484: Add libraries required for iptables service ( [#145](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/145))
- RDKEMW-4148: Reason for change : Move Wifi User credentials to secure partition ( [#141](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/141))
- Delete recipes-extended/zstd directory [1642cd4](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/1642cd48b1bf105d7845df53d275f4685528d08f)
- Update libpcre_8.39.bb [b278d09](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/b278d09539289e30abb41d68e00467de25ab5083)
- Update libpcre_8.39.bb [1003850](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/10038508c3363e6b2ddeb95c1c82b874b4e6edc1)
- Update zstd_%.bbappend [bdc954c](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/bdc954c4c398c0004fa90f72388ab1a79823a474)
- Update libcroco_%.bbappend [abfa500](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/abfa500f5fee4040168221b660a427751c36bfbd)
- RDKOSS_128-test: remove unmapped binaries [a67e639](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/a67e63953585f19e849bcec587f93c0fd806f6e4)
- RDKE-855: Include wayland-default-egl ( [#130](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/130))
- Update dnsmasq.service ( [#128](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/128))
- RDK-57964 : Improve NTP analytics in RDK ( [#120](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/120))
- RDKOSS-358: Fix westeros sercrev ( [#123](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/123))
- Feature/rdke 850 ( [#122](https://github.com/rdkcentral/meta-rdk-oss-reference/pull/122))
- Merge tag '4.7.0' into develop [7376eaf](https://github.com/rdkcentral/meta-rdk-oss-reference/commit/7376eaf20eb3fecb324460ffc13f2d08d23342a3)

## [meta-rdk-soc-realtek](https://github.com/rdk-e/meta-rdk-soc-realtek/blob/main/CHANGELOG.md)

- RDKEVD-4163 [RDK-E][RTK] Realtek Release 9.4.0 Merge branch 'release/4.1.6' [e6c43f7](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/e6c43f77a4c8ab4f89595621aad9170239b884ad)
- RDKEVD-4163 [RDK-E][RTK] Realtek Release 9.4.0 [636953c](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/636953cc800446454416e6dd1f78ab286a1ea8b2)
- Merge pull request  [#164](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/164) from rdk-e/feature/RDKEVD-3575-patch
- RDKEVD-4163 Rtk Release xione 9.4.0  [#172](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/172) from rdk-e/main
- RDKEVD-3575: [ES1] Release 12MB CMA memory from fwstack. [431cb3a](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/431cb3a0fd90abd1bb05e0493f99701cf6c2c85f)
- RDKEVD-4163 Rtk Release xione 9.4.0 Merge branch 'release/4.1.5' [c4741c4](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/c4741c4943ee728ac98dbe242b08e91811cfb813)
- Merge branch 'main' into release/4.1.5 [ec59d50](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/ec59d50d2336de16ead00648373afbc0b52dc537)
- RDKEVD-4163 Rtk Release xione 9.4.0 [67804ab](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/67804ab8a0ec1dd244c0cdc250103dac5aa2c8a3)
- RDK-59643:XiOne IT Platform bringup. ( [#169](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/169))
- RDK-49420 Move Widevine to the vendor layer for Realtek ( [#162](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/162))
- Merge pull request  [#140](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/140) from rdk-e/RDKEVD-477
- RDK-59614 : Include the rtk-resource-manager ( [#168](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/168))
- Merge pull request  [#138](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/138) from rdk-e/feature/RDKEVD-1565-gpu-load-per-process
- RDK-59569: Vendor release 1.0.0 tag ( [#167](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/167))
- Merge branch 'release/4.1.4' [f98cf93](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/f98cf93a3cb7429d2ab8f5242bc5540cf56e7c95)
- RDK-59569: Vendor release 1.0.0 tag [2862c17](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/2862c176197b410bd7bce4a5f3b3029702976235)
- RDKEVD-3076:ES1 Realtek Bringup. ( [#165](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/165))
- RDKEVD-1565: Extend /proc/gpu_load to include per-process breakdown [0b6dd2a](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/0b6dd2a35465bfc4a4b1affed2354d8a2a32701c)
- Merge pull request  [#160](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/160) from rdk-e/feature/RDKEVD-3411-hpd
- RDKEVD-3411: Fix get_raw_edid error [671a83b](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/671a83b6a9c8fcfe7252a77f24f889f763c42dd9)
- Merge pull request  [#163](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/163) from rdk-e/main
- RDKEVD-477 : Implement Zero-Warning Policy and Code Cleanup [e96fdd5](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/e96fdd56fa5c6437a8179ff1159472bc2a8c8b8b)

## [meta-oem-stream](https://github.com/rdk-e/meta-oem-stream/blob/main/CHANGELOG.md)

- Merge branch 'release/4.1.2' [5e20b16](https://github.com/rdk-e/meta-oem-stream/commit/5e20b16b454fe7d3aabb2cce79f24a4816dd7c4a)
- Merge branch 'main' into release/4.1.2 [c78e6a6](https://github.com/rdk-e/meta-oem-stream/commit/c78e6a61b053f928f1ca431edcbc1fe95739e8b5)
- RDK-59569: ES1 Vendor release 1.0.0 tag [eefb6b4](https://github.com/rdk-e/meta-oem-stream/commit/eefb6b49d55a259cc2771501aadb21dd4b43b4e8)
- RDKSVREQ-43134:Create CODEOWNERS [10b3618](https://github.com/rdk-e/meta-oem-stream/commit/10b36188355a0c97598cf90a5b070048aeff6dbf)
- Merge pull request  [#52](https://github.com/rdk-e/meta-oem-stream/pull/52) from rdk-e/feature/xione-17389-splash
- XIONE-17389: splashscreen are not displayed correctly [1489f37](https://github.com/rdk-e/meta-oem-stream/commit/1489f377c77a47a15aae60b29fa94e425c64efd0)

## [meta-oem-realtek-stream](https://github.com/rdk-e/meta-oem-realtek-stream/blob/main/CHANGELOG.md)

- Merge branch 'hotfix/9.4.0' into support/9.4.0_Baseline [e8931a5](https://github.com/rdk-e/meta-oem-realtek-stream/commit/e8931a510b9970bf89fac2fea907a6561b79da85)
- RDKEVD-4163:Release 9.4.0 [fcd81df](https://github.com/rdk-e/meta-oem-realtek-stream/commit/fcd81df9d88c4185c77f14a7fa5977b109468b0f)
- RDKEVD-4163 [RDK-E][RTK] Realtek Release 9.4.0 [e506308](https://github.com/rdk-e/meta-oem-realtek-stream/commit/e506308046302f2af53a395d0dfc804993c18c52)
- Merge pull request  [#580](https://github.com/rdk-e/meta-oem-realtek-stream/pull/580) from rdk-e/feature/RDKEVD-3575
- Merge pull request  [#582](https://github.com/rdk-e/meta-oem-realtek-stream/pull/582) from rdk-e/XIONE-17761-Formal
- Merge branch 'develop' into XIONE-17761-Formal [3845dad](https://github.com/rdk-e/meta-oem-realtek-stream/commit/3845dad6a7b1e3308be053cd6e7c8ed54d391e15)
- RDKEVD-4029: Kernel Panic during overnight standby mode [18e946e](https://github.com/rdk-e/meta-oem-realtek-stream/commit/18e946eb2d31ba81a2d237293072678d23468162)
- Merge pull request  [#578](https://github.com/rdk-e/meta-oem-realtek-stream/pull/578) from rdk-e/feature/RDKEMW-10537
- RDKEVD-4271 : Port dobby,rialto and debugger config file. [fcce503](https://github.com/rdk-e/meta-oem-realtek-stream/commit/fcce503beff514a56d82e27d83501e0f9b6f285e)
- RDKEVD-4344: Integrate formal delivery of firmware from Qualcomm [b04fd7a](https://github.com/rdk-e/meta-oem-realtek-stream/commit/b04fd7a8e1fe6bb44e3a05ee77351932a730f364)
- RDKEVD-3575: [ES1] Integrated HIFI and Audio Firmwares. [ebec742](https://github.com/rdk-e/meta-oem-realtek-stream/commit/ebec74204bba82521487a7f5be228938746a8030)
- Merge pull request  [#579](https://github.com/rdk-e/meta-oem-realtek-stream/pull/579) from rdk-e/feature/RDKEVD-4163
- Merge branch 'develop' into feature/RDKEVD-4163 [6e76331](https://github.com/rdk-e/meta-oem-realtek-stream/commit/6e763313f40c74829315a0fb33bd0cfd264935af)
- Merge pull request  [#564](https://github.com/rdk-e/meta-oem-realtek-stream/pull/564) from rdk-e/feature/RDKEVD-3954_VFW
- Merge pull request  [#567](https://github.com/rdk-e/meta-oem-realtek-stream/pull/567) from rdk-e/feature/RDKEVD-3867-Westeros-1.01.62
- Merge pull request  [#571](https://github.com/rdk-e/meta-oem-realtek-stream/pull/571) from rdk-e/feature/XIONE-17832_bl_update
- XIONE-17960: XR15 and XR16 wakeup key config for PCPU [4017595](https://github.com/rdk-e/meta-oem-realtek-stream/commit/401759574fd25183a5b949cc53d4bcbb65dd63a1)
- RDKEVD-4163 Rtk Release xione 9.4.0 es1 1.1.0 [89030a6](https://github.com/rdk-e/meta-oem-realtek-stream/commit/89030a65186a630d0810f1e8fe96208f7c5d8aa1)
- XIONE-17832 : [Alpaca-UK] Bootloader Release v14.0.0 [0347863](https://github.com/rdk-e/meta-oem-realtek-stream/commit/0347863a00adf90ee5527756426d99023a84f85a)
- Merge pull request  [#570](https://github.com/rdk-e/meta-oem-realtek-stream/pull/570) from rdk-e/feature/RDK-59643-Error-1
- RDK-59643:IT Bringup into Vendor layer. [d682b84](https://github.com/rdk-e/meta-oem-realtek-stream/commit/d682b842bc58333c12fd9769fe137cf6da02aa66)
- Merge pull request  [#569](https://github.com/rdk-e/meta-oem-realtek-stream/pull/569) from rdk-e/feature/RDK-59643-Error
- Merge pull request  [#552](https://github.com/rdk-e/meta-oem-realtek-stream/pull/552) from rdk-e/feature/RDK-59643-IT-Bringup
- Merge pull request  [#552](https://github.com/rdk-e/meta-oem-realtek-stream/pull/552) from rdk-e/feature/RDK-59643-IT-Bringup
- Merge branch 'develop' into feature/RDK-59643-IT-Bringup [3a0de2f](https://github.com/rdk-e/meta-oem-realtek-stream/commit/3a0de2f1d37d99cef2c806952a373c1b6b3d9826)
- Merge pull request  [#565](https://github.com/rdk-e/meta-oem-realtek-stream/pull/565) from rdk-e/feature/RDKEVD-4000-OSS-4.9.0
- RDKEVD-4000:Include OSS 4.9.0. [e92eb2b](https://github.com/rdk-e/meta-oem-realtek-stream/commit/e92eb2b5e0ede0b05cc986c1ffdd909cf90c4fad)
- Merge pull request  [#560](https://github.com/rdk-e/meta-oem-realtek-stream/pull/560) from rdk-e/feature/RDKEVD-3935-DV-CA_TA
- RDKEVD-3954: [Netflix]PLAY-AV1-60FPS-HEAAC NTS test failed. [c3ef18c](https://github.com/rdk-e/meta-oem-realtek-stream/commit/c3ef18c9e4e38b5b9521316c62081511ef8cb65f)
- Merge pull request  [#562](https://github.com/rdk-e/meta-oem-realtek-stream/pull/562) from rdk-e/feature/RDKEMW-9616-pciconfig
- Merge pull request  [#557](https://github.com/rdk-e/meta-oem-realtek-stream/pull/557) from rdk-e/RDKEMW-9836-test1
- Merge pull request  [#527](https://github.com/rdk-e/meta-oem-realtek-stream/pull/527) from rdk-e/feature/RDKEVD-3428-fix-L1-dsGetHDCPCurrentProtocol-VTS-assertion-error
- RDKEVD-3428: Directly query HDCP version if no callback is registerd [c452d3b](https://github.com/rdk-e/meta-oem-realtek-stream/commit/c452d3b198f8bed1093e1eb2481303673d3cb450)
- RDKEVD-3935: [ES1 RTK] Dolby vision enabled customer ID check [da6fd63](https://github.com/rdk-e/meta-oem-realtek-stream/commit/da6fd6320f2c405b34792f217ef4896e7c783ed3)
- RDKEVD-3906: Support of auto binding keymap for RF4CE based RCU [ac5d0be](https://github.com/rdk-e/meta-oem-realtek-stream/commit/ac5d0be6d7566f8ea53737cf20fc3fd44cce6ca9)
- RDKEMW-9836 : Unable to pair any BT controller with 8.2 RDKE GA build [a8dcf85](https://github.com/rdk-e/meta-oem-realtek-stream/commit/a8dcf85c62759f9a69d32ecc40564ffa256942bc)
- Update ENTOS-EU-UK.inc [b933a9d](https://github.com/rdk-e/meta-oem-realtek-stream/commit/b933a9d7ff5fc969cc6ca3b55c36d3b7d98a89eb)
- RDKEVD-3906: Support of manual binding keymap for RF4CE based RCU [0a194ef](https://github.com/rdk-e/meta-oem-realtek-stream/commit/0a194ef6a4bdbe6b814657e047018440655f233f)
- Merge pull request  [#551](https://github.com/rdk-e/meta-oem-realtek-stream/pull/551) from rdk-e/feature/RDKEVD-3772_Device_stuck_at_deepsleep_tag_update
- RDKEVD-3772: Device stuck in Deepsleep [6675750](https://github.com/rdk-e/meta-oem-realtek-stream/commit/66757501704b1b1e0b3ff23e3f58b8aa1e67aa4d)
- RDKEVD-3772: Device stuck in Deepsleep [00b69af](https://github.com/rdk-e/meta-oem-realtek-stream/commit/00b69af626f546c65d8bed87fcb3255e73ecacab)
- Merge pull request  [#470](https://github.com/rdk-e/meta-oem-realtek-stream/pull/470) from rdk-e/topic/RDKEMW-7650
- Merge pull request  [#545](https://github.com/rdk-e/meta-oem-realtek-stream/pull/545) from rdk-e/feature/RDKEVD-3875_ES1_RTK_TLTA_and_PKCS11_integration_new
- RDKEVD-3875 : ES1-RTK TLTA and PKCS11 integration [c11b803](https://github.com/rdk-e/meta-oem-realtek-stream/commit/c11b803cdcc8e97d30d1ba4bc1ebca1e419f34d5)
- RDKEVD-3867: Update Westeros to 1.01.62 [54b349e](https://github.com/rdk-e/meta-oem-realtek-stream/commit/54b349e6abee41b5b34ef8ca8db8b6906335be70)
- Merge pull request  [#544](https://github.com/rdk-e/meta-oem-realtek-stream/pull/544) from rdk-e/feature/RDKEVD-3875_ES1_RTK_TLTA_and_PKCS11_integration
- RDKEVD-3875 : ES1-RTK TLTA and PKCS11 integration [6467121](https://github.com/rdk-e/meta-oem-realtek-stream/commit/646712188a57791f6ccbb591d1157b60376a4aea)
- RDKEVD-3818: Enable dynamic IR logging [69aa22e](https://github.com/rdk-e/meta-oem-realtek-stream/commit/69aa22e37d6fec64b7732f16a0d822f4aac35475)
- RDKEMW-7650: Update dobby.xi1.json [ea6cd14](https://github.com/rdk-e/meta-oem-realtek-stream/commit/ea6cd143c0df058d403378f45a75b335047d7d4d)
- RDKEMW-7650: Update dobby.xi1.json [5db3785](https://github.com/rdk-e/meta-oem-realtek-stream/commit/5db37850a4ba891bf6f54c6984e615aa13762ac3)
- Merge pull request  [#543](https://github.com/rdk-e/meta-oem-realtek-stream/pull/543) from rdk-e/develop
- RDKEMW-7650: Update dobby.xi1.json [e39b169](https://github.com/rdk-e/meta-oem-realtek-stream/commit/e39b16959b9a6e844323fcd2d0128fdd88ef1c5b)
- Merge pull request  [#524](https://github.com/rdk-e/meta-oem-realtek-stream/pull/524) from rdk-e/feature/RDKEVD-3534-cleaning-up-kernel-configs
- RDK-59614 : Include PCICOnfig.ini [f048da5](https://github.com/rdk-e/meta-oem-realtek-stream/commit/f048da53f76c92c1bcd515f723b183603a991be5)
- Merge pull request  [#496](https://github.com/rdk-e/meta-oem-realtek-stream/pull/496) from rdk-e/topic/RDK-49420
- Merge pull request  [#540](https://github.com/rdk-e/meta-oem-realtek-stream/pull/540) from rdk-e/feature/RDKEMW-9317
- Merge branch 'develop' into feature/RDKEMW-9317 [3cc06f7](https://github.com/rdk-e/meta-oem-realtek-stream/commit/3cc06f7d99372a7ccd5ba77afb2a7990411d669b)
- RDKEMW-9317:Include missed componenents. [f533370](https://github.com/rdk-e/meta-oem-realtek-stream/commit/f533370009891694bc75aca029e800c7f28fef9f)
- RDK-59643:XiOne IT Platform bringup. [a971908](https://github.com/rdk-e/meta-oem-realtek-stream/commit/a9719088d1a01328611cad5bdf634ad57c10e8fb)
- Merge pull request  [#536](https://github.com/rdk-e/meta-oem-realtek-stream/pull/536) from rdk-e/feature/RDKEVD-3516-Westeros-1.01.61
- Westeros 1.01.61 - update revision [33ca448](https://github.com/rdk-e/meta-oem-realtek-stream/commit/33ca448b108be425799e36a83fc000656c77ee43)
- Westeros 1.01.61 - update version tag [83258d2](https://github.com/rdk-e/meta-oem-realtek-stream/commit/83258d24a24c74cc19945616714ca2aa94c6a4d9)
- RDKEVD-3807: Support of additional wakeup keys for XMP RCU [0f19806](https://github.com/rdk-e/meta-oem-realtek-stream/commit/0f1980657d8018ed7d212c3ec922a4a237f84868)
- Merge branch 'develop' into topic/RDK-49420 [aab8103](https://github.com/rdk-e/meta-oem-realtek-stream/commit/aab81031252adefe54d3186004ba69fb2ce78cc8)
- RDKEVD-3516: Update Westeros to 1.01.61 - add blacklist triage log [225e0d4](https://github.com/rdk-e/meta-oem-realtek-stream/commit/225e0d41b1e91e227e9beff5fa729519a47a8e76)
- RDKEVD-3516: Update Westeros to 1.01.61 [7071c77](https://github.com/rdk-e/meta-oem-realtek-stream/commit/7071c77c9fe210c5a49c67adda663e84ca8a97d3)
- Merge pull request  [#394](https://github.com/rdk-e/meta-oem-realtek-stream/pull/394) from rdk-e/RDKEVD-477
- RDKEVD-477: bump devicesettings to v4.1.9 [fb68c03](https://github.com/rdk-e/meta-oem-realtek-stream/commit/fb68c034aec979335ce926cb0393185c631d1324)
- Merge pull request  [#535](https://github.com/rdk-e/meta-oem-realtek-stream/pull/535) from rdk-e/feature/RDK-59614-Error
- RDK-59614:Resolve compile time error. [b6947aa](https://github.com/rdk-e/meta-oem-realtek-stream/commit/b6947aa2ce96a69af7732e41909fd4eb55967714)
- Merge branch 'develop' into RDKEVD-477 [1ede7b7](https://github.com/rdk-e/meta-oem-realtek-stream/commit/1ede7b7b0027157a020ddbac615f64959bb16028)
- Merge pull request  [#533](https://github.com/rdk-e/meta-oem-realtek-stream/pull/533) from rdk-e/feature/RDK-59614-rtk-resource-manager
- Merge branch 'develop' into feature/RDKEVD-3534-cleaning-up-kernel-configs [6638704](https://github.com/rdk-e/meta-oem-realtek-stream/commit/6638704c269a6b7d65efda6c1c5232cd60daeeb1)
- Merge pull request  [#532](https://github.com/rdk-e/meta-oem-realtek-stream/pull/532) from rdk-e/feature/RDK-59614
- RDK-59614:Resolve the cimpilation error. [db97b87](https://github.com/rdk-e/meta-oem-realtek-stream/commit/db97b874e275218d4992f91365d2051b796a8cb6)
- Merge pull request  [#531](https://github.com/rdk-e/meta-oem-realtek-stream/pull/531) from rdk-e/feature/RDK-59614
- RDK-59614:Resolve the cimpilation error. [ad930ad](https://github.com/rdk-e/meta-oem-realtek-stream/commit/ad930ad419c4e28be29f4afafd80c54cd5204f4b)
- RDKEVD-3534 : cleaning up unwanted kernel configs Reason for change:               cleaning activity Test Procedure:               basic sanity for all products Signed-off-by: Arun Selvam <arun.selvam@sky.uk> [8fd373d](https://github.com/rdk-e/meta-oem-realtek-stream/commit/8fd373d9932a59a9e9b3e7e267bfb778387ad863)
- RDK-59614 : Include the stark-mod-mali [e5864d5](https://github.com/rdk-e/meta-oem-realtek-stream/commit/e5864d5cfc69e08d17c68f6352e911ed6cc19d98)
- RDK-59614 : Include the rtk-resource-manager [ddb0d9c](https://github.com/rdk-e/meta-oem-realtek-stream/commit/ddb0d9cc2d029e46aebd52c38755dddf3d50f6c0)
- Merge pull request  [#499](https://github.com/rdk-e/meta-oem-realtek-stream/pull/499) from rdk-e/feature/RDKEVD-1565-adds-per-process-gpu-metrics
- RDKEVD-1565: Adds per-process GPU metrics [ed024a2](https://github.com/rdk-e/meta-oem-realtek-stream/commit/ed024a2a43f008e4d670b0c027dcb15decdf117d)
- Merge pull request  [#487](https://github.com/rdk-e/meta-oem-realtek-stream/pull/487) from rdk-e/feature/RDKEVD-3291-audio_DV-TA
- Merge branch 'develop' into feature/RDKEVD-3291-audio_DV-TA [32843c1](https://github.com/rdk-e/meta-oem-realtek-stream/commit/32843c1c24b335ec15a207d2662175466544f081)
- Merge tag 'ES1_1.0.0' into develop [3ad5e9f](https://github.com/rdk-e/meta-oem-realtek-stream/commit/3ad5e9f29d90456964dde527af1dc46e4435b42c)
- Merge branch 'release/ES1_1.0.0' [9567436](https://github.com/rdk-e/meta-oem-realtek-stream/commit/9567436b0a0c4ee19f4c6924208e8a98d64a798d)
- Merge branch 'main' into release/ES1_1.0.0 [ec63f0f](https://github.com/rdk-e/meta-oem-realtek-stream/commit/ec63f0f61cfd2c050b276de73f6d567320999318)
- RDK-59569: ES1 Vendor release 1.0.0 tag [a9dcbb6](https://github.com/rdk-e/meta-oem-realtek-stream/commit/a9dcbb632b59fea4cb5b4cbcb2b9ca0281d65dfa)
- Merge pull request  [#523](https://github.com/rdk-e/meta-oem-realtek-stream/pull/523) from rdk-e/feature/RDKEVD-3622
- Merge branch 'develop' into feature/RDKEVD-3622 [c9a0ceb](https://github.com/rdk-e/meta-oem-realtek-stream/commit/c9a0cebcd900f8269a9319707018b9c7ca69f7fe)
- Merge pull request  [#520](https://github.com/rdk-e/meta-oem-realtek-stream/pull/520) from rdk-e/feature/RDKEVD-3076-1
- Merge pull request  [#519](https://github.com/rdk-e/meta-oem-realtek-stream/pull/519) from rdk-e/feature/RDKEVD-3076
- Merge pull request  [#519](https://github.com/rdk-e/meta-oem-realtek-stream/pull/519) from rdk-e/feature/RDKEVD-3076
- RDKEVD-3076:ES1 RTK Bringup changes. [2bdb4c3](https://github.com/rdk-e/meta-oem-realtek-stream/commit/2bdb4c3b4f24c3ff2c6d769d035e8af79f015cec)
- Merge pull request  [#518](https://github.com/rdk-e/meta-oem-realtek-stream/pull/518) from rdk-e/feature/RDKEVD-3076-ES1-Bringup
- RDKEVD-3076-ES1 Bringup [36245ad](https://github.com/rdk-e/meta-oem-realtek-stream/commit/36245ad28fe0309091107553232ce10a18167c13)
- RDKEVD-3076:ES1 Realtek Bringup. [3c203e3](https://github.com/rdk-e/meta-oem-realtek-stream/commit/3c203e3f896a8ef73559a72aec9f72f537e70c62)
- RDKEVD-3622:Updating TA-Loader .bb file. Reason for change: Excluded "testagent-hal-init" api from TA-Loader for RDKE build Test Procedure: Boot the box, Verify client certificate installation in the dedicated path & ta-loader performance Risks: None Priority: P0 ('P0'-->high , 'P1'-->medium, 'P2'-->low) [7485829](https://github.com/rdk-e/meta-oem-realtek-stream/commit/74858297ac56c963bc0d93ac7a807f652e8a3287)
- Merge pull request  [#512](https://github.com/rdk-e/meta-oem-realtek-stream/pull/512) from rdk-e/feature/XIONE-17846-disabling-RT-scheduling-for-thread-balancing
- Merge branch 'develop' into RDKEVD-477 [0b9e20c](https://github.com/rdk-e/meta-oem-realtek-stream/commit/0b9e20ceb1f43cbe14c10ea39e41fdbb32e7dbae)
- RDKEVD-3497: [RTK] PR Series RCU support for XOE and Flex2 [111010f](https://github.com/rdk-e/meta-oem-realtek-stream/commit/111010fb2005167217070bb998dacda2a300ab14)
- Update widevine to version 1.4.2 moves Widevine to the vendor middleware layer [4372884](https://github.com/rdk-e/meta-oem-realtek-stream/commit/43728849376609f053af8fcca74a1ad6ab68719d)
- Merge pull request  [#489](https://github.com/rdk-e/meta-oem-realtek-stream/pull/489) from rdk-e/ENTDAI-1753_set_max_inactive_apps_to_5
- XIONE-17846 : Disabling CONFIG_RT_GROUP_SCHED for Thread balancing changes Reason for change: This change will allow UI to launch and is need for Thread balancing chnages. [d5527a3](https://github.com/rdk-e/meta-oem-realtek-stream/commit/d5527a3406fc9c34f43bc224873339c17e169a35)
- RDKEVD-3421: BleWakeupEnabler support for AC103 [c3d1eeb](https://github.com/rdk-e/meta-oem-realtek-stream/commit/c3d1eeb88847473daf36dec594dc127aed898008)
- XIONE-17689: Switch CPU GOV to ondemand after ds Resume [e56d274](https://github.com/rdk-e/meta-oem-realtek-stream/commit/e56d2748ef53bb5e4b18b58122068056ebe49370)
- XIONE-17689: Switch CPU GOV to ondemand after deepsleep Resume [f184b43](https://github.com/rdk-e/meta-oem-realtek-stream/commit/f184b43c400a2f94a9ac83331223ffbd7ef7e764)
- RDKEVD-3421: BleWakeupEnabler support for AC103 [ec88d97](https://github.com/rdk-e/meta-oem-realtek-stream/commit/ec88d971a450f52a882703b56a7d9361eaba94e6)
- Merge pull request  [#491](https://github.com/rdk-e/meta-oem-realtek-stream/pull/491) from rdk-e/feature/RDKEVD-418
- Merge pull request  [#490](https://github.com/rdk-e/meta-oem-realtek-stream/pull/490) from rdk-e/feature/RDKEVD-571
- resolve wv syntax error [ace87fb](https://github.com/rdk-e/meta-oem-realtek-stream/commit/ace87fb38380aa6f3a8a307f9514ca09384af529)
- Added Widevine to the packagegroup bb files [6fc268d](https://github.com/rdk-e/meta-oem-realtek-stream/commit/6fc268d2a7116da3ee78076408b1c75711a27fdb)
- -49420 Move Widevine to the vendor layer for Realtek [497ec6b](https://github.com/rdk-e/meta-oem-realtek-stream/commit/497ec6b8adcfdaa7d3c36cb3e95c415551fc5820)
- Merge pull request  [#493](https://github.com/rdk-e/meta-oem-realtek-stream/pull/493) from rdk-e/RDK-59361-I
- RDK-59361: Google stadia controller support for a Xione realtek Reason for change: Integrate google stadia driver  Signed-off-by: Ananth Marimuthu <ananth_marimuthu2@comcast.com> [b060f7b](https://github.com/rdk-e/meta-oem-realtek-stream/commit/b060f7bd7bc088bb4c677b19c3db829768e70693)
- RDKEVD-477 : Implement Zero-Warning Policy and Code Cleanup [7d80b43](https://github.com/rdk-e/meta-oem-realtek-stream/commit/7d80b4398fe4e61cf1e06e682c7005baa6d5350e)
- RDK-59361: Google stadia controller support for a Xione realtek Reason for change: Integrate google stadia driver [de95de8](https://github.com/rdk-e/meta-oem-realtek-stream/commit/de95de84fcfd3646958f2951af205de66b6acfc3)
- RDKEVD-418: Tag 1.1.1 [f3e2dbb](https://github.com/rdk-e/meta-oem-realtek-stream/commit/f3e2dbb9992a464a8000cc80c6ddd39ae76c1f1a)
- RDKEVD-571: Tag 1.0.1 [2e8fcee](https://github.com/rdk-e/meta-oem-realtek-stream/commit/2e8fcee3d8ae990ebf205b63a2846c2e8524db1a)
- ENTDAI-1753: set CONF_MAX_INACTIVE_APPS=5 [35b3be8](https://github.com/rdk-e/meta-oem-realtek-stream/commit/35b3be87f7dbffbe4b8881270d412960be8420d4)
- RDKEVD-3291: HDR-SDR conversion [57a81e4](https://github.com/rdk-e/meta-oem-realtek-stream/commit/57a81e436f6fceacee32a3bfa5f63e44e162842f)
- Merge pull request  [#476](https://github.com/rdk-e/meta-oem-realtek-stream/pull/476) from rdk-e/develop
- RDKEMW-7650: Remove /tmp/communicator mount from dobby.json [17f959d](https://github.com/rdk-e/meta-oem-realtek-stream/commit/17f959d938d9a457298f996d6bea73d731391b98)

## [meta-rdk-vendor-realtek-common](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/blob/main/CHANGELOG.md)

- RDKEVD-4163 Rtk Release xione 9.4.0 Merge branch 'release/9.4.0' [059d72e](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/059d72ec78277d8325506e63af360ac958ae8602)
- RDKEVD-4163 Rtk Release xione 9.4.0 [3dbe643](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/3dbe6432ea3d82f0cf9b56a78c928fb86507dad0)
- Merge pull request  [#66](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/pull/66) from rdk-e/feature/RDK-59614-rtk-resource-manager
- RDK-59614 : Include install-lib into the build [7091c15](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/7091c153b0724833c4f04335a03e842e190e154b)
- Merge tag 'ES1_1.0.0' into develop [c198312](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/c198312c292602e3823855cef67ed40530c88c60)
- Merge branch 'release/ES1_1.0.0' [0890c54](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/0890c54eab49159481d566c3265b4ca56c794450)
- RDK-59569: ES1 Vendor release 1.0.0 tag [45858b5](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/45858b5035c35f7a6028044ad5ea408d1d787460)
- Merge pull request  [#62](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/pull/62) from rdk-e/feature/RDKEVD-3076-ES1-Bringup-emmc
- RDKEVD-3076 : emmc-read-util , mfrlib update [bd9cdfb](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/bd9cdfb7e557a7b232aad3044aa8767215684e15)
- Merge pull request  [#60](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/pull/60) from rdk-e/feature/RDKEVD-3076-ES1-Bringup
- Merge branch 'develop' into feature/RDKEVD-3076-ES1-Bringup [f37bd6d](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/f37bd6d1128d00b4068c141443c5ddae758e15fc)
- RDKEVD-3076:ES1 Realtek bringup. [77cda2d](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/77cda2d02ed6ff135ef83025848f351eec641c57)
- Merge tag '9.3.0' into develop [4bf7607](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/4bf7607ade4cf77bd542fb95ba9fd3da86b20426)

## [meta-oss-vendor-realtek](https://github.com/rdk-e/meta-oss-vendor-realtek/blob/main/CHANGELOG.md)

- RDKEVD-4163 [RDK-E][RTK] Realtek Release 9.4.0 Merge branch 'release/4.1.5' [7b9f256](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/7b9f256bc350b5bd49d68af96a92fea863b28f97)
- RDKEVD-4163 [RDK-E][RTK] Realtek Release 9.4.0 [51cb64f](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/51cb64f8ee6cd88ea804cd52070ab76670a6598d)
- Merge pull request  [#94](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/94) from rdk-e/feature/RDKEVD-4208
- RDKEVD-4308: Adjust aac/opus delta for av sync [cf51f7f](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/cf51f7f5981743970fc9e18569621c1d301ddcf4)
- Merge tag '4.1.4' into develop [9e26acd](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/9e26acdb0577978c526a71637a3c2af687fefd6a)
- RDKEVD-4163 Rtk Release xione 9.4.0 Merge branch 'release/4.1.4' [e5997cd](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/e5997cd80e16232c06d416c516686ebf90c19ac6)
- RDKEVD-4163 Rtk Release xione 9.4.0 [e22c3c2](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/e22c3c2d9fa371ebda4704b2afa0719d458ffb17)
- RDKEVD-3516: Update Westeros to 1.01.61 ( [#92](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/92))
- Merge tag '4.1.3' into develop [8952e3c](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/8952e3cdaf4752505c342a0df230471606e1af38)

## [meta-mediarite-vendor](https://github.com/rdk-e/meta-mediarite-vendor/blob/main/CHANGELOG.md)

- Merge pull request  [#64](https://github.com/rdk-e/meta-mediarite-vendor/pull/64) from rdk-e/prerelease/21.8
- RDKEVD-4067: Add changelog for 21.8 [76a9adb](https://github.com/rdk-e/meta-mediarite-vendor/commit/76a9adb2748043ccc575e0a862fa3a3f77f9cd56)
- Merge pull request  [#62](https://github.com/rdk-e/meta-mediarite-vendor/pull/62) from rdk-e/rdk-e/update-versions
- RDKEVD-4067: Update versions for 21.8 [982167d](https://github.com/rdk-e/meta-mediarite-vendor/commit/982167dc9efad96874d1628fa255d073129857ee)
- Merge pull request  [#59](https://github.com/rdk-e/meta-mediarite-vendor/pull/59) from rdk-e/prepare/21.7
- Merge pull request  [#60](https://github.com/rdk-e/meta-mediarite-vendor/pull/60) from rdk-e/prepare/21.7
- RDKEVD-3581: Release 21.7 [7eb9b84](https://github.com/rdk-e/meta-mediarite-vendor/commit/7eb9b84905a883211173f9622335df6c2b890551)
- Merge pull request  [#58](https://github.com/rdk-e/meta-mediarite-vendor/pull/58) from rdk-e/update-versions
- RDKEVD-3581: Update versions for 21.7 [d9014cb](https://github.com/rdk-e/meta-mediarite-vendor/commit/d9014cbfbf0eb659a6778f4d7c8e4b3676321dc2)
- Merge pull request  [#57](https://github.com/rdk-e/meta-mediarite-vendor/pull/57) from rdk-e/feature/RDKEVD-3502_element-mtk
- RDKEVD-3502 : Use generic override for mtk platforms [1db4bb3](https://github.com/rdk-e/meta-mediarite-vendor/commit/1db4bb3e2e8f3282bea4b0e06467fbf91a71d679)
- Merge pull request  [#56](https://github.com/rdk-e/meta-mediarite-vendor/pull/56) from rdk-e/release/21.6.2
- Merge pull request  [#55](https://github.com/rdk-e/meta-mediarite-vendor/pull/55) from rdk-e/release/21.6.2
- Release 21.6.2 [a1184cb](https://github.com/rdk-e/meta-mediarite-vendor/commit/a1184cb6a7fec175904462053062f1c93333c2e3)
- Merge pull request  [#53](https://github.com/rdk-e/meta-mediarite-vendor/pull/53) from rdk-e/release/21.6.1



## Changes in component repositories

## ['hdmicec-hal-realtek'](https://github.com/rdk-e/hdmicec-soc-realtek/blob/main/CHANGELOG.md)

- RDKEVD-4163 Rtk Release xione 9.4.0 Merge branch 'release/3.0.2' [6b18674](https://github.com/rdk-e/hdmicec-soc-realtek/commit/6b18674167c7959bbbab609039e544a635766ca4)
- Merge branch 'main' into release/3.0.2 [a26041a](https://github.com/rdk-e/hdmicec-soc-realtek/commit/a26041a420810c64994cb2623216dcda52a401ea)
- RDKEVD-4163 Rtk Release xione 9.4.0 [aa8c80d](https://github.com/rdk-e/hdmicec-soc-realtek/commit/aa8c80da77e5e15df7f7e6fdb93f1c79461609de)
- Merge pull request  [#13](https://github.com/rdk-e/hdmicec-soc-realtek/pull/13) from rdk-e/feature/RDKEVD-1098-HDMICEC-VTS-Failures
- RDKEVD-1098 : Refactor handle validation and return codes for VTS compliance [a337269](https://github.com/rdk-e/hdmicec-soc-realtek/commit/a33726929b8c5d8d780e08a5b2929782dafe5464)
- Merge branch 'release/999.999.998' Dummy release. [3d5451a](https://github.com/rdk-e/hdmicec-soc-realtek/commit/3d5451a7017a06083631f018a0ae68006371689a)
- Dummy Release test 999.999.998 [3afb313](https://github.com/rdk-e/hdmicec-soc-realtek/commit/3afb313d240e0124b5435652ac3b2baf5e27f0d0)
- Add CODEOWNERS file [5071fd3](https://github.com/rdk-e/hdmicec-soc-realtek/commit/5071fd3859ae6981c7facfecb1e8050629681cd7)
- Merge pull request  [#9](https://github.com/rdk-e/hdmicec-soc-realtek/pull/9) from rdk-e/main
## ['hank-mod-mali'](https://github.com/rdk-e/kernel-modules-mali-soc-realtek/blob/main/CHANGELOG.md)

- Merge branch 'release/3.0.2' [8a83b55](https://github.com/rdk-e/kernel-modules-mali-soc-realtek/commit/8a83b55d8d7663384e7a4a346fc6664a2e63f966)
- RDKEVD-1565: update CHANGELOG.md [c186668](https://github.com/rdk-e/kernel-modules-mali-soc-realtek/commit/c18666809501f20dcebd579ee36f4df33c031bb3)
- Merge pull request  [#5](https://github.com/rdk-e/kernel-modules-mali-soc-realtek/pull/5) from rdk-e/feature/RDKEVD-1565-gpu-load-per-process
- RDKEVD-1565: Fix busy_time_ns value [ae4a9ee](https://github.com/rdk-e/kernel-modules-mali-soc-realtek/commit/ae4a9ee4bac4dcfd481e25bb937b5c48f6c2371f)
- RDKEVD-1565: Extend /proc/gpu_load to include per-process breakdown [6746c7d](https://github.com/rdk-e/kernel-modules-mali-soc-realtek/commit/6746c7dc20b5f7b4ce5bea7a91eb897d2c8aa06b)
- Merge pull request  [#9](https://github.com/rdk-e/kernel-modules-mali-soc-realtek/pull/9) from rdk-e/main
- Merge pull request  [#8](https://github.com/rdk-e/kernel-modules-mali-soc-realtek/pull/8) from rdk-e/release/3.0.1
## ['hdmiservice'](https://github.com/rdk-e/hdmiservice-realtek/blob/main/CHANGELOG.md)

- RDKEVD-4163 Rtk Release xione 9.4.0 Merge branch 'release/4.2.2' [51eccac](https://github.com/rdk-e/hdmiservice-realtek/commit/51eccacacd4128fa6f33a09162792bcc9c218a2c)
- RDKEVD-4163 Rtk Release xione 9.4.0 [c691a74](https://github.com/rdk-e/hdmiservice-realtek/commit/c691a741bf03b219aa1aeccc423071d415288f4c)
- Merge pull request  [#40](https://github.com/rdk-e/hdmiservice-realtek/pull/40) from rdk-e/feature/RDKEVD-3587-audio
- RDKEVD-3587: Skip redundancy audio mute command [111f341](https://github.com/rdk-e/hdmiservice-realtek/commit/111f3419d92509ce4c17496df9786ae8a5972720)
- Merge pull request  [#39](https://github.com/rdk-e/hdmiservice-realtek/pull/39) from rdk-e/main
- Merge pull request  [#38](https://github.com/rdk-e/hdmiservice-realtek/pull/38) from rdk-e/release/4.2.1
- Merge branch 'release/4.2.1' [bbb4186](https://github.com/rdk-e/hdmiservice-realtek/commit/bbb418639129ab166b0ffe4c436642d8b32fc87a)
## ['linux-hank'](https://github.com/rdk-e/linux_kernel-soc-realtek/blob/main/CHANGELOG.md)

- Merge branch 'release/3.0.5' [cf4b52e](https://github.com/rdk-e/linux_kernel-soc-realtek/commit/cf4b52ea8efd4f4924e08456d108716b8aad2a1b)
## ['apparmor-vendor'](https://github.com/rdk-e/apparmor-profiles/blob/main/CHANGELOG.md)

- Merge branch 'release/3.3.0' [973fc2f](https://github.com/rdk-e/apparmor-profiles/commit/973fc2f477dc2adf8cf730ab9ca2e7f8de049040)
- 3.3.0 release changelog updates [0cb0467](https://github.com/rdk-e/apparmor-profiles/commit/0cb0467f0e2a72fd16db3e604deabceb61008daf)
- Merge pull request  [#188](https://github.com/rdk-e/apparmor-profiles/pull/188) from rdk-e/topic/RDKEMW-6774
- RDKEMW-6774: Apparmor loading for NA services [2970156](https://github.com/rdk-e/apparmor-profiles/commit/297015671610fb71b33148a42484f5d8416d8b64)
- RDKEVD-2846: Apparmor entries in vendor is not reflecting [c8707d3](https://github.com/rdk-e/apparmor-profiles/commit/c8707d327f903790dd8466835d714ad48d1227dc)
- RDKEVD-2846: Apparmor entries in vendor is not reflecting [070cdba](https://github.com/rdk-e/apparmor-profiles/commit/070cdbad59dedde46e1f2d9996511cc1a84eeac1)
- Update usr.bin.routerDiscovery [a4aef1a](https://github.com/rdk-e/apparmor-profiles/commit/a4aef1aa5a8df2c3fe91ebed2114c01b81c38075)
- RDKEMW-8814: Update apparmor_generic_defaults [ebc0aeb](https://github.com/rdk-e/apparmor-profiles/commit/ebc0aebda4374e0c39779dd8acf9ce2362d8728e)
- ENTDAI-1824: Update DobbyDaemon apparmor profile. [9dccb5b](https://github.com/rdk-e/apparmor-profiles/commit/9dccb5bd5a8f5f26fe190c3b979234f8e0fe612b)
- RDKEMW-8814: Update apparmor_generic_defaults [c15a9ad](https://github.com/rdk-e/apparmor-profiles/commit/c15a9ad99975482b03c0753406dd9dc8dfc5a905)
- Merge tag '3.2.0' into develop [32af79d](https://github.com/rdk-e/apparmor-profiles/commit/32af79da57f57f33011e4fd943c88ec6f64d51ab)
- Merge branch 'release/3.2.0' into main [9768d52](https://github.com/rdk-e/apparmor-profiles/commit/9768d521939dea443c774ede49396c003cb7cc5d)
- 3.2.0 release changelog updates [1f4281e](https://github.com/rdk-e/apparmor-profiles/commit/1f4281e40b37cc1879eeccac04dbfde9890d56c9)
- Merge pull request  [#178](https://github.com/rdk-e/apparmor-profiles/pull/178) from rdk-e/topic/RDKEMW-8317
- RDKEMW-8317: Optimize AppArmor Profile install [fc79fae](https://github.com/rdk-e/apparmor-profiles/commit/fc79fae36fb76d781ac9cfe5346d9349b925198d)
- Merge tag '3.1.0' into develop [c521cb7](https://github.com/rdk-e/apparmor-profiles/commit/c521cb7599bafa954042fed680688a85bbbaed44)
- Merge branch 'release/3.1.0' into main [478ecaa](https://github.com/rdk-e/apparmor-profiles/commit/478ecaada1f324f4b4380c867dc56d11f1d28a8d)
- 3.1.0 release changelog updates [53824db](https://github.com/rdk-e/apparmor-profiles/commit/53824db3e262737e1e14b0c62981505923343055)
- Merge pull request  [#174](https://github.com/rdk-e/apparmor-profiles/pull/174) from rdk-e/topic/RDKEVD-2846
- RDKEVD-2846: Apparmor entries inside vendor is not reflecting [b694e04](https://github.com/rdk-e/apparmor-profiles/commit/b694e0454b18dd1291188773fd86fff573a35243)
- Update usr.bin.authservice - to update inline with the ticket DELIA-68771 [841982f](https://github.com/rdk-e/apparmor-profiles/commit/841982fa5219e3a4f16e9931e5bb5c66cfde8978)
- Update usr.bin.fogcli - in line with ticket XIONE-17637 [14a2cb7](https://github.com/rdk-e/apparmor-profiles/commit/14a2cb79a77b72aa1be45978431c4cdc7a2064a7)
- RDKEVD-2752 : Update mfrMgrMain apparmor permission [7d0b557](https://github.com/rdk-e/apparmor-profiles/commit/7d0b557a4780b524e691d685dae9d3e581caec2c)
- Merge tag '3.0.3' into develop [89549ab](https://github.com/rdk-e/apparmor-profiles/commit/89549ab37fcd1345a66c0f79461b4673cf4a63ac)
## ['product-firmware-pb'](https://github.com:rdk-e/firmware-prebuilt-xione-soc-realtek.git/blob/main/CHANGELOG.md)

