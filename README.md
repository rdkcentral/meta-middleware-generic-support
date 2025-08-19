

# Vendor Layer Release Notes

XiOne UK Stream Puck RDKE Vendor Layer Release Notes

---
|Summary|Content|
|---|----|
|Classification|Confidential|
|Date|18 Aug 2025|
|Author| rosmi.sebastian@sky.uk |

---

### Build Information
|  |  |
|---------------|---------------|
| Manifest location | <https://github.com/rdk-e/vendor-manifest-xione-stream> |
| Manifest Tag | 9.0.0 |
| Manifest Name | [xione-realtek-streambox.xml](https://github.com/rdk-e/vendor-manifest-xione-stream/blob/main/xione-realtek-streambox.xml) |
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

This is a scheduled bi-weekly release from the vendor  [RDKEVD-2587](https://ccp.sys.comcast.net/browse/RDKEVD-2587). This release will provide a versioned "meta-vendor-xione-realtek-release" that will be used by the middleware as well as image assembler.
### The scope of this release includes:

- New OSS model integration to Xione UK vendor layer project [RDKEVD-1750](https://ccp.sys.comcast.net/browse/RDKEVD-1750)
- Device Firmware Detail is missing in device_details log [RDKEVD-2432 ](https://ccp.sys.comcast.net/browse/RDKEVD-2432)
- [Puck][MT-1899][Prime] Audio drop of 1 sec or less just before or during mid roll ads [RDKEVD-2350](https://ccp.sys.comcast.net/browse/RDKEVD-2350) 
- [XiOne][VTS][L2] Fix test_l2_dsAudio_SetAndGetVolumeLeveller Failure [RDKEVD-2113](https://ccp.sys.comcast.net/browse/RDKEVD-2113)
- [Prime Certificaion] The Realtek SoC fails to report an audio underrun, even when insufficient audio data is available [RDKEVD-1648](https://ccp.sys.comcast.net/browse/RDKEVD-1648)
- Update RDK-E build to support vendor configs [ENTDAI-1338](https://ccp.sys.comcast.net/browse/ENTDAI-1338)
- BT did not persist after CDL , also unable to pair BT after flashing the test builds [XIONE-17571](https://ccp.sys.comcast.net/browse/XIONE-17571)
- After CDL flashing from RDKV to RDKE Box was stuck in Standby and didnot wake up using key codes , also after wakeup using command box is stuck in Blackscreen and no LED [XIONE-17573](https://ccp.sys.comcast.net/browse/RDKEVD-17573)
## Release layer and components

### Vendor Release Components

| Vendor Release Components | New Version (9.0.0) | Version in Previous Release (8.1.2) | Changelist |
|------------|---------|------------------------------------|------------|
| Kernel & DTB | | 4.9.119.01-r8  | |
| packagegroup-vendor-layer | 9.0.0-r0 | 8.1.2-r0 | [8.1.2....9.0.0](https://github.com/rdk-e/meta-oem-realtek-stream/compare/8.1.2...9.0.0) |
| packagegroup-common-vendor-layer | 9.0.1-r0 | 1.1.1-r0 |[1.1.1....9.0.1](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/compare/1.1.1...9.0.1)  |
### Stack layer

| Release meta Layer | Tag |
|------|------|
| [meta-vendor-xione-realtek-release](https://github.com/rdk-e/meta-vendor-xione-realtek-release) | [9.0.0](https://github.com/rdk-e/meta-vendor-xione-realtek-release/tree/9.0.0) |

#### Artifactory Location for IPKs

| Product | Location |
|------------|---------|
| XiOne-UK | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-uk-release/9.0.0/xione-uk/ipks/debug |
| XiOne-Foxtel | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-foxtel-release/9.0.0/xione-foxtel/ipks/debug |
| XiOne-DE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-de-release/9.0.0/xione-de/ipks/debug |
| XiOne-Alpaca-De | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-alpaca-de-release/9.0.0/xione-alpaca-de/ipks/debug |
| XOE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xfinity-stream-box-release/9.0.0/xfinity-stream-box/ipks/debug |
| WNC Xfinity | https://partners.artifactory.comcast.com/ui/repos/tree/General/wnc-xfinity-stream-box-release/9.0.0/wnc-xfinity-stream-box/ipks/debug |
| RTK-Flex2 | https://partners.artifactory.comcast.com/ui/repos/tree/General/xumo-stream-box-release/9.0.0/xumo-stream-box/ipks/debug |
### Meta Repos

#### Meta repos maintained by layers layer

| Meta Repo | New Version (9.0.0) | Version in Previous Release (8.1.2) | ChangeList |
|------------|---------|------------------------------------|--------------|
| meta-rdk-auxiliary |  | 1.3.0 | |
| meta-rdk-oss-reference |  | 4.7.1 | |
| meta-rdk-tools |  | 2.3.1 | |
| meta-vts |  | 1.2.0 | |
| [meta-rdk-soc-realtek](#meta-rdk-soc-realtek) |  **4.1.1** | 4.1.0 | [4.1.0...4.1.1](https://github.com/rdk-e/meta-rdk-soc-realtek/compare/4.1.0...4.1.1) |
| [meta-oem-stream](#meta-oem-stream) |  **4.1.0** | 4.0.8 | [4.0.8...4.1.0](https://github.com/rdk-e/meta-oem-stream/compare/4.0.8...4.1.0) |
| [meta-oem-realtek-stream](#meta-oem-realtek-stream) |  **9.0.0** | 8.1.2 | [8.1.2...9.0.0](https://github.com/rdk-e/meta-oem-realtek-stream/compare/8.1.2...9.0.0) |
| [meta-rdk-vendor-realtek-common](#meta-rdk-vendor-realtek-common) |  **9.0.1** | 1.1.1 | [1.1.1...9.0.1](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/compare/1.1.1...9.0.1) |
| [meta-oss-vendor-realtek](#meta-oss-vendor-realtek) |  **4.1.1** | 4.1.0 | [4.1.0...4.1.1](https://github.com/rdk-e/meta-oss-vendor-realtek/compare/4.1.0...4.1.1) |
| meta-mediarite-vendor |  | 21.4 | |

#### Meta repos common for RDK-E

| Meta Repo | New Version (9.0.0) | Version in Previous Release (8.1.2) | ChangeList |
|------------|---------|------------------------------------|--------------|
| **buildscripts** ||||
| build-scripts |  | 1.0.1 | |
| | | | |
| **buildsupport** ||||
| meta-image-support |  | 4.2.4 | |
| meta-stack-layering-support |  **3.0.0** | 2.1.3 | [2.1.3...3.0.0](https://github.com/rdkcentral/meta-stack-layering-support/compare/2.1.3...3.0.0) |
| | | | |
| **oe** ||||
| meta-openembedded |  | rdk-4.0.0 | |
| poky |  | rdk-4.4.0 | |
| meta-python2 |  | rdk-4.0.0 | |
| | | | |
| **extention** ||||
| meta-rdk-oss-ext |  | 1.3.0 | |
| | | | |
| **configs** ||||
| rdke-region-uk-config |  **2.3.1** | 2.1.6 | [2.1.6...2.3.1](https://github.com/rdk-e/rdke-region-uk-config/compare/2.1.6...2.3.1) |
| rdke-region-au-config |  **1.2.1** | 1.0.0 | [1.0.0...1.2.1](https://github.com/rdk-e/rdke-region-au-config/compare/1.0.0...1.2.1) |
| rdke-region-de-config |  **1.0.6** | 1.0.2 | [1.0.2...1.0.6](https://github.com/rdk-e/rdke-region-de-config/compare/1.0.2...1.0.6) |
| rdke-region-us-config |  **1.5.2** | 1.0.10 | [1.0.10...1.5.2](https://github.com/rdk-e/rdke-region-us-config/compare/1.0.10...1.5.2) |
| rdke-common-config |  | 4.3.3 | |
| rdke-stb-config |  | 1.0.3 | |
| | | | |
| **rdk** ||||
| meta-rdk-halif-headers |  | 3.0.0 | |
| meta-rdk-cpc-halif-headers |  | 1.0.0 | |
| meta-rdk-vendor-cpc-common |  **1.4.0** | NA | [1.4.0](https://github.com/rdk-e/meta-rdk-vendor-cpc-common/commits/1.4.0) |
| | | | |
| **products** ||||
| meta-product-xione |  | 3.3.5 | |
| | | | |
| **binder** ||||
| meta-binder |  | 1.0.0 | |
| | | | |
| **release** ||||
| meta-vendor-xione-realtek-release |  **bfdb405** | NA | [bfdb405](https://github.com/rdk-e/meta-vendor-xione-realtek-release/commits/bfdb405f531834d0001e0993049a7e746cf22f5f) |
| | | | |

### Interface versions

| # | HAL Interface Header (rdkcentral github) | New Version | Version from Previous Release (8.1.2)|
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

## Build instructions

- Steps to check out and build the vendor layer project [https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project](https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project)
- Steps to check out and build the image assembler project [https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler](https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler)


### Boot Command

#### Copy image to device /mnt/usb or /opt partitions or connect and mount USB having the image binn- Execute FlashApp command
- Move to directory containing the image
- FlashApp \<dirname\> \<imagename\>
- eg. FlashApp /mnt/usb/SKXI11ADS_9.0.0_VENDOR_DEV.bin
#### USB Flash Method using xboot prompt
- Copy the image `"SKXI11ADS_9.0.0_VENDOR_DEV.bin"` to the usb and connect to the STB
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

- Created the `"vendor test image"` `"SKXI11ADS_9.0.0_VENDOR_DEV.bin "` for XiOne-UK and for all other variants as well using the vendor layer jenkins job `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Vendor-Release-Build/"`
- Successfully booted the `"vendor test image"` and obtained the shell prompt.
- Verified vendor layer services up and running
- Verified IP acquisition via Ethernet
- Played clear AV with gst-play-1.0.
- Verified image flashing using FlashApp

Testing details in [RDKEVD-2587](https://ccp.sys.comcast.net/browse/RDKEVD-2587)
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
| Aug 13 2025 |  SKXI11ADS_VENDOR_DEV_release_9.0.0_20250813055248   | 1547372 | 447036	| 22322	| 469358 | 2177318 |
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
| Aug 13 2025 |  SKXI11AIS_VENDOR_DEV_release_9.0.0_20250813055550   | 1547344 | 471490	| 22621	| 494111 | 2152593 |
| Jul 17 2025 |  SKXI11AIS_8.1.2_VENDOR_DEV                          | 1547344 | 463329 | 22820 | 486149 | 2160555 |
| July 07 2025|  SKXI11AIS_VENDOR_DEV_refs_tags_8.0.3_20250703153514 | 1547344 | 472815 | 22831 | 495646 | 2151058 |
| May 23 2025 |  SKXI11AIS_VENDOR_DEV_refs_tags_7.0.1_20250521111817 | 1547348 | 463827 | 28698 | 492525 | 2154175 |
| May 16 2025 |  SKXI11AIS_7.0.0_VENDOR_DEV | 1547348 | 463950 | 29451 | 493401 | 2153299 |
| Mar 26 2025 |  SKXI11AIS_VENDOR_DEV_refs_tags_6.0.2_20250324181951 | 1547348 | 460736 | 28870 | 489606 | 2157094 |
##### XiOne-Alpaca-DE
| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
|  Aug 13 2025 | SKXI11AEISODE_VENDOR_DEV_release_9.0.0_20250813055454	 | 1547372 | 446892 | 22480 | 469372 |	2177304 |
| Jul 17 2025 |   SKXI11AEISODE_8.1.2_VENDOR_DEV                          | 1547372 | 447820 | 22314 | 470134 |2176542 |
| July 07 2025 |  SKXI11AEISODE_VENDOR_DEV_refs_tags_8.0.3_20250703153622 | 1547372 | 456489 | 22418 | 478907 | 2167769 |
| May 23 2025 |  SKXI11AEISODE_VENDOR_DEV_refs_tags_7.0.1_20250521111552 | 1547376 | 443789 | 28103 | 471892 | 2174780 |
| May 16 2025 |  SKXI11AEISODE_VENDOR_DEV_refs_tags_7.0.0_20250511204108 | 1547376 | 440746 | 28691 | 469437 | 2177235 |
| Mar 26 2025 |  SKXI11AEISODE_VENDOR_DEV_refs_tags_6.0.2_20250324172723 | 1547376 | 445013 | 28365 | 473378 | 2173294 |
##### Xfinity-stream-box
| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
|  Aug 13 2025| SCXI11AIC_VENDOR_DEV_release_9.0.0_20250813055548     |	1547348	| 471324 | 22355 | 493679 | 2153021 |
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
|  Aug 13 2025 | WNXI11AEI_VENDOR_DEV_release_9.0.0_20250814165809   | 1547348 | 474320 | 22482	| 496802 | 2149898 |                                 | 
| Jul 14 2025 |  WNXI11AEI_8.1.2_VENDOR_DEV                          | 1547348 | 463448 | 22637 |  486085 | 2160615 |
| July 07 2025 |  WNXI11AEI_VENDOR_DEV_refs_tags_8.0.3_20250703153256| 1547348 | 473436 | 23006 | 496442 | 2150258 |
| May 23 2025 |  WNXI11AEI_VENDOR_DEV_refs_tags_7.0.1_20250521171806 | 1547356 | 473728 | 29253 | 502981 | 2143711 |
| May 16 2025 |  WNXI11AEI_VENDOR_DEV_refs_tags_7.0.0_20250512160923 | 1547356 | 472994 | 22047 | 495041 | 2151651 |
### Fullstack image testing
##### XiOne-UK
- Created Image Assembler build `"SKXI11ADS_DEV_9.0.0_20250813082157`" from `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Image-Assembler-Build/2769/s3/ `"
##### XiOne-Foxtel
- Created Image Assembler build `"SKXI11ADSSOFT_DEV_9.0.0_20250813140717`" from `" https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/view/4-Assembler-Jobs/job/RTK-XIONE-Foxtel-Image-Assembler-Build/334/s3/`"
##### XiOne-Alpaca-DE
- Created Image Assembler build `"SKXI11AEISODE_DEV_9.0.0_20250813140803`" from `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/view/4-Assembler-Jobs/job/RTK-XIONE-ALPACA-DE-Image-Assembler-Build/85/s3/ `"
##### XiOne-DE
- Created Image Assembler build `"SKXI11AIS_DEV_9.0.0_20250813141327`" from `" https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/view/4-Assembler-Jobs/job/RTK-XIONE-DE-Image-Assembler-Build/309/s3/`"
##### XiOne-XOE
- Created Image Assembler build `"SCXI11AIC_DEV_9.0.0_20250813150407`" from `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-XFINITY-STREAM-BOX-Image-Assembler-Build/268/s3/`"
##### XiOne-WNC-Xfinity
- Created Image Assembler build `"WNXI11AEI_DEV_9.0.0_20250815075036`" from `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-WNC-XFINITY-Image-Assembler-Build/67/s3/`"

- Testing is done by using the middleware ipk 2.16.3_B4 and  with the image assembler manifest branch  feature/9.0.0 - referenced from 8.3s10 tag and including latest vendor ipk feed info https://github.com/rdk-e/meta-vendor-xione-realtek-release/blob/release/9.0.0/conf/machine/include/vendor.inc
- Tested the below scenarios as part of [RDKEVD-2298](https://ccp.sys.comcast.net/browse/RDKEVD-2298)
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
  - Issues observed in  release 9.0.0 https://ccp.sys.comcast.net/browse/XIONE-17389?jql=labels%20%3D%20Vendor_9.0.0
  - Attached the test report here https://ccp.sys.comcast.net/secure/attachment/12049177/Report_9.0.0_18_08_2025.pdf
## Components details in 'packagegroup-common-vendor-layer'
| # | Vendor layer Component | New PV-PR (9.0.0)| PV-PR in Previous Release (8.1.2)| New SRCREV | SRCREV in Previous Release (8.1.2)| Diff |
|---|------------------------------------------|-------------|----------------------|-----------|------------|-----|
| 1 | libdrm | | 2.4.110-r0 |  | NA |  |
| 2 | cairo | | 1.16.0-r1 |  | NA |  |
| 3 | libepoxy | | 1.5.9-r1 |  | NA |  |
| 4 | python3-pygobject | | 3.34.0-r0 |  | NA |  |
| 5 | pango | | 1.44.7-r0 |  | NA |  |
| 6 | librsvg | | 2.40.21-r0 |  | NA |  |
| 7 | python3-pycairo | | 1.19.0-r0 |  | NA |  |
| 8 | vulkan-tools | **ERROR-r0** | NA |  | NA |  |
| 9 | vulkan-loader | **ERROR-r0** | NA |  | NA |  |
| 10 | vulkan-headers | **ERROR-r0** | NA |  | NA |  |
| 11 | xsign | | 4.0.1-r2 |  | NA |  |
| 12 | mfrlib-hal-xione | | 8.1.0-r0 |  | NA |  |
| 13 | wipe-disk-partitions | | 1.0.0-r2 |  | NA |  |
| 14 | secauthn | | 1.0.0-r0 |  | NA |  |
| 15 | qca-hciattach | | 1.0.0-r1 |  | NA |  |
| 16 | emmc-fw-update | | 1.0.0-r0 |  | NA |  |
| 17 | mount-disk-partition | **1.0.1-r0** | 1.0.0-r0 |  | NA |  |
| 18 | image-verifier-lib | | 6.2.0-r1 |  | NA |  |
| 19 | fmtsasidlibs | | 2.4-r1 |  | NA |  |
| 20 | led-boot-pattern | **1.0.0-r1** | 1.0.0-r0 |  | NA |  |
| 21 | rtkmali | **2.20.0-r0** | 2.8.0-r0 |  | NA |  |
| 22 | rtk-platform-conf | | 2.6.0-r1 |  | NA |  |
| 23 | emmc-read-util | | 4.0.0-r0 |  | 6281804 |  |
| 24 | sky-dropbear | | 1.0.0-r1 |  | NA |  |
| 25 | [sysint-soc](#sysint-soc) | **3.0.0-r0** | 3.0.2-r0 | **f8dded4** | f8dded4af097061aade727bd591a273af8b1a58a & 9f68324f0cc2306e7fb5d6f19aa54d5a5e298f36 |  [f8dded4af097061aade727bd591a273af8b1a58a & 9f68324f0cc2306e7fb5d6f19aa54d5a5e298f36...f8dded4](https://github.com/rdk-e/sysint-soc-rtk/compare/f8dded4af097061aade727bd591a273af8b1a58a & 9f68324f0cc2306e7fb5d6f19aa54d5a5e298f36...f8dded4af097061aade727bd591a273af8b1a58a) |
| 26 | sky-led-app | | 1.0.0-r0 |  | NA |  |
| 27 | audiocapturemgr-vendor | | 1.0.0-r0 |  | a063707 |  |
| 28 | displayinfo-soc | | 1.0.0-r0 |  | e7b2c24 |  |
| 29 | ffmpeg | | ERROR-r1 |  | NA |  |
| 30 | media-utils-soc-realtek | | 1.0.5-2.1.1-r1 |  | 30f3fdd |  |
| 31 | closedcaption-hal-realtek | | 1.0.0-3.1.0-r0 |  | ee52d85 |  |
| 32 | hdmicec-hal-realtek | | 1.3.10-3.0.1-r0 |  | 950a89e |  |
| 33 | rdk-gstreamer-utils-platform | | 2.0.0-2.0.0 |  | 6ba04b9 |  |
| 34 | devicesettings-hal-realtek | **6.0.0-4.1.4-r0** | 6.0.0-4.1.3-r0 |  |  |  |
| - |  - devicesettings-hal-realtek_devicesettingssocrealtek | |  | **cf2f965** | 3f059a2 |  [](https://github.com/rdk-e/sysint-soc-rtk) |
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
| 97 | hank-mod-mali | | 3.0.0-r0 |  | a574cc2 |  |
| 98 | rtkv1sink | | 2.0.0-r1 |  | 67bdf5b |  |
| 99 | platform-lib | | 2.6.0-r4 |  | NA |  |
| 100 | rtk-audio-service | | 3.2.0-r0 |  | e62564d |  |
| 101 | hdmiservice | | 4.2.0-r0 |  | 1730920 |  |
| 102 | rtkpcrclksink | | 2.0.0-r0 |  | c8272d9 |  |
| 103 | blewakeupenabler | | 1.4.1-r0 |  | 6f8176d |  |
| 104 | linux-libc-headers | | 4.9-r9 |  | NA |  |
| 105 | packagegroup-kernel-modules | | 4.9.119.01-r9 |  | NA |  |
| 106 | linux-hank | | 4.9.119.01-r9 |  | f8fe28d |  |
| 107 | rtkaudiosink | | 3.1.3-r0 |  | 3e9ee18 |  |
| 108 | mfi-ree | | 2.0.0-r0 |  | 4941717 |  |
| 109 | [sysint-oem](#sysint-oem) | **3.0.4-r1** | 3.0.3-r1 | **000bd91** | 356c2ab |  [356c2ab...000bd91](https://github.com/rdk-e/sysint-xione-rtk/compare/356c2abae64ec1463422a27525bdbab02fdb2558...000bd919de53b4fb083a6294d1ce7a0cd8e060aa) |
| 110 | apparmor-vendor | | 2.4.0-r0 |  | d48c9d3 |  |
| 111 | directfb | | 1.7.7-r0 |  | NA |  |
| 112 | product-firmware-pb | | 1.0.8-r0 |  | 2a1369f |  |
| 113 | testagentlib | | 3.0.2-r1 |  |  |  |
| - |  - testagentlib_testagentlib | |  |  | b8eb1f8 |  |
| - |  - testagentlib_xione_factory | |  |  | 6281804 |  |
| 114 | testagent-loader | | 2.3.0-r0 |  | NA |  |
| 115 | libbinder | | 1.0.0-r1 |  | 0f7a23b |  |
| 116 | aidl-generator-native | | 1.0.0-r1 |  | 0f7a23b |  |
| 117 | flash-aidl | | 1-r0 |  | ddcceef |  |
| 118 | image-hal-service | | 1.0.0-r0 |  | 7eb82c9 |  |
| 119 | platform-imagehal-lib | | 1.0.0-r0 |  | NA |  |
| 120 | asappsserviced-vendor-conf | **1.1.0-r0** | NA | **1.1.0** | NA |  [](https://github.com/rdk-e/sysint-xione-rtk) |




## Vendor Layer Component Integration Details



## Consolidated change list from vendor layer repositories

## Changes in meta repositories


## [meta-rdk-soc-realtek](https://github.com/rdk-e/meta-rdk-soc-realtek/blob/main/CHANGELOG.md)

- RDKEVD-2277: vkmark support ( [#150](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/150))
- RDKEVD-1899: Add common Vulkan SDK components [be737dc](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/be737dc67e5a062bbd4d4be13ece57b54bf481ed)


## [meta-oem-stream](https://github.com/rdk-e/meta-oem-stream/blob/main/CHANGELOG.md)

- RDKEVD-2527 : SHRUV specifc splash screen change [1a1967f](https://github.com/rdk-e/meta-oem-stream/commit/1a1967fd57699b5e0c017b0b0130be3ad6c9ac20)

## [meta-oem-realtek-stream](https://github.com/rdk-e/meta-oem-realtek-stream/blob/main/CHANGELOG.md)

- RDKEVD-2587 RDKE -Vendor Release -9.0.0 [d7d68b2](https://github.com/rdk-e/meta-oem-realtek-stream/commit/d7d68b28024693716c7d5a6e24cb237d9bcfb1c8)
- RDKEVD-2689:Package changes is not properly updating in dorootfs case. [e2b4c04](https://github.com/rdk-e/meta-oem-realtek-stream/commit/e2b4c04a3adecc1ded4d0db6e88b6dc9e2137936)
- ENTDAI-1338: Add appsserviced platform & profile conf files (v2) [085afd6](https://github.com/rdk-e/meta-oem-realtek-stream/commit/085afd6a0d447d27ac11411c921861bb0b8d7a96)
- RDKEVD-2151 : Product layer cleanup [68f71d7](https://github.com/rdk-e/meta-oem-realtek-stream/commit/68f71d7ebb559ec2699cf9ea91e7c89154e675bc)
- Revert "ENTDAI-1338: Add appsserviced platform & profile conf files." [f09a75a](https://github.com/rdk-e/meta-oem-realtek-stream/commit/f09a75a76ccd1b78ec98e283089d464aa959860c)
- RDKEVD-2462: Remove pkgs from .inc that are not in packagegroup [a9dfbfd](https://github.com/rdk-e/meta-oem-realtek-stream/commit/a9dfbfd6fd622c8c72607d65b281dc3844859113)
- RDKEVD-2432 :  update tag for sysint-xione-rtk 3.0.4 [466aa88](https://github.com/rdk-e/meta-oem-realtek-stream/commit/466aa88e05258b90d886535bb7feb00ea31d57b0)
- RDKEVD-1899: Add common Vulkan SDK components [cce84ca](https://github.com/rdk-e/meta-oem-realtek-stream/commit/cce84ca3c6cfecff16868e2c5ca6717f6aad1547)
- RDKEVD-2113: Update devicesettings-soc-realtek 4.1.4 [49ec35c](https://github.com/rdk-e/meta-oem-realtek-stream/commit/49ec35cca259de72340772f6fdf4f1f46593aa34)
- RDKEVD-1750 : exclude product feed from ipk [9014022](https://github.com/rdk-e/meta-oem-realtek-stream/commit/901402251ece98beaef0940e7f06ab95c6defd8e)
- RDKEVD-1750 : Removed xione-rtk-common-ipkinfo.inc [0e17b93](https://github.com/rdk-e/meta-oem-realtek-stream/commit/0e17b9388e56078dfd66da8e0bf2bf6a2830f7fd)
- RDKEVD-1750 : Added STACK_LAYER_EXTENSION [dcfcfab](https://github.com/rdk-e/meta-oem-realtek-stream/commit/dcfcfabd1541e9ac54ea2f3f799d7ec5d448f681)
- RDKEVD-1750 : Added LAYER_EXTENSION [ba5f69c](https://github.com/rdk-e/meta-oem-realtek-stream/commit/ba5f69c28e5ab246948a02faba7edef4c8bc2b5e)
- RDKEVD-1750 : Removed rdke-vendor-bbmask.inc [828cf3c](https://github.com/rdk-e/meta-oem-realtek-stream/commit/828cf3c33f8caaf6bb289342c5f437803a1fe008)
- RDKEVD-1750 : Included vendor_common_pkg_versions.inc [71fb706](https://github.com/rdk-e/meta-oem-realtek-stream/commit/71fb70665edbe4c9874bfcf8ac4d3338f5fa2c4b)
- RDKEVD-1750 : Removed xione-rtk-common-ipkinfo.inc [077ce10](https://github.com/rdk-e/meta-oem-realtek-stream/commit/077ce1087c1042bc425f6feafe01b853bb4a8faa)
- RDKEVD-1750 : added oss.inc [b14a919](https://github.com/rdk-e/meta-oem-realtek-stream/commit/b14a919f404c2097fd5345e4d7411a4aaba1a90e)
- RDKEVD-1750 : new oss model integration [f4d5df0](https://github.com/rdk-e/meta-oem-realtek-stream/commit/f4d5df0abb281cc4eb39e4cdd48f56a53472787f)
- RDKEVD-1648: add audio underrun handling [6d271d7](https://github.com/rdk-e/meta-oem-realtek-stream/commit/6d271d7feed98704520d7f32bae868e2cfa4bb25)
- Bumped the version of the config repo. [a472096](https://github.com/rdk-e/meta-oem-realtek-stream/commit/a4720961d6e66377eadbdb50b360474ff3873d93)
- Reworked the recipe to use the new appsserviced-config repo. [b6dc06c](https://github.com/rdk-e/meta-oem-realtek-stream/commit/b6dc06cc130cb13f9c7b6ff5171969c7e465dfc2)
- Changed to the "pauseOnBlur" feature which is now globally enabled for netflix, for US platforms it still contains the YouTube apps. [dc8dfd0](https://github.com/rdk-e/meta-oem-realtek-stream/commit/dc8dfd0d48993ffa0c413ca50228f13caeee72ac)
- Fixed the do_install command. [cb9e20e](https://github.com/rdk-e/meta-oem-realtek-stream/commit/cb9e20e70ea83ba69caf46ec17d0bafccd015812)
- Fix typo in do_install command. [750b8af](https://github.com/rdk-e/meta-oem-realtek-stream/commit/750b8af9c84835b9626cc58a15dc0f7cf1baf73b)
- Updated the number of background apps for the different regions. [1ff4869](https://github.com/rdk-e/meta-oem-realtek-stream/commit/1ff48697319b005c7f741fbc33ef596c0e86a85f)
- Also added the warehouse test apps script for US builds. [2500b79](https://github.com/rdk-e/meta-oem-realtek-stream/commit/2500b79b4c50f13e46a5fbf7555715a532ad7c7c)
- Reworked the changes so we have platform and region specific files and the region is selected based on DISTRO_FLAGS. [10cae04](https://github.com/rdk-e/meta-oem-realtek-stream/commit/10cae04214063ab3251c9dfc905906523df5518c)
- Should have enable netflix "pause on blur" on German devices. [458c9be](https://github.com/rdk-e/meta-oem-realtek-stream/commit/458c9be4f384e3450e161a52f99f13ab0a80e6ca)
- ENTDAI-1338: Add appsserviced platform & profile conf files. [1700dc5](https://github.com/rdk-e/meta-oem-realtek-stream/commit/1700dc5289f374b938c93dcda1fa4bf8e74d4626)

## [meta-rdk-vendor-realtek-common](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/blob/main/CHANGELOG.md)

- RDKEVD-2587 RDKE -Vendor Release -9.0.0 [d37ae69](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/d37ae698881c69a7235fb10c3da99cff7a31c535)
- RDKEVD-2601:BT Pairing not working from V to E. [a053a05](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/a053a051dc3148efb7d73a53849ef4f268dfe13e)
- RDKEVD-2587 : Latest product tag 9.0.0 [4f8ba89](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/4f8ba8984110605f0028586018d4f26ba5fbfee2)
- RDKEVD-2151 : Product layer cleanup [1aacc3d](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/1aacc3d446ffef6e05733bbb064129f7b13c278b)
- RDKEVD-2462: Remove pkgs from .inc that are not in packagegroup [16d0393](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/16d039355ae96c15247180c2628fd793c00a8e20)
- RDKEVD-1899: Add common Vulkan SDK components [f1553f6](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/f1553f6bc4da503ff75fa1ddf65630e62c545417)
- RDKEVD-2348:Remove the product firmware package. [4937df0](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/4937df09eca8dfc3db904d11f5996686058210f1)
- RDKEVD-1750 : Removed rdke-vendor-bbmask.inc [be7c761](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/be7c76181276c04ddccc010e258606352c7d404f)
- RDKEVD-1750 : Removed vendor-dev.inc from common [d85dee6](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/d85dee68297c9182f8c7e313b8eda670730a5622)

## [meta-oss-vendor-realtek](https://github.com/rdk-e/meta-oss-vendor-realtek/blob/main/CHANGELOG.md)

- RDKEVD-2350: Skip playing flush when flush_stop reset_time=FALSE [ca721ea](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/ca721ea7994051315dbfd74c8457e66c9b93dfd0)

## [meta-oss-reference-release](https://github.com/rdkcentral/meta-oss-reference-release/blob/main/CHANGELOG.md)




## Changes in component repositories

## ['sysint-soc'](https://github.com/rdk-e/sysint-soc-rtk/blob/main/CHANGELOG.md)

## ['sysint-oem'](https://github.com/rdk-e/sysint-xione-rtk/blob/main/CHANGELOG.md)

- RDKEVD-2432 : Add device FW  details in device_details.log [0d81faf](https://github.com/rdk-e/sysint-xione-rtk/commit/0d81fafc801f71960b0c87446e81901854b1a994)

