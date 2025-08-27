# Vendor Layer Release Notes

XiOne UK Stream Puck RDKE Vendor Layer Release Notes

---

|Summary|Content|
|---|----|
|Classification|Confidential|
|Date|01 Sep 2025|
|Author| rosmi.sebastian@sky.uk |

---

### Build Information
|  |  |
|---------------|---------------|
| Manifest location | <https://github.com/rdk-e/vendor-manifest-xione-stream> |
| Manifest Tag | 9.1.0 |
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

This is a scheduled bi-weekly release from the vendor  [RDKEVD-2987](https://ccp.sys.comcast.net/browse/RDKEVD-2987). This release will provide a versioned "meta-vendor-xione-realtek-release" that will be used by the middleware as well as image assembler.
### The scope of this release includes:

- RDKE Vendor Release -9.1.0 [RDKEVD-2987](https://ccp.sys.comcast.net/browse/RDKEVD-2987)
- Observing Kernel Panic(WiFi driver crash) on tuning to UHD linear channels [XIONE-17204 ](https://ccp.sys.comcast.net/browse/XIONE-17204)
- ROM code behaviour override after DeepSleep resume [XIONE-17654](https://ccp.sys.comcast.net/browse/XIONE-17654)
- [GStreamer clock time (actual) is greater than the wallclock time (expected) during playback [RDKEVD-1779](https://ccp.sys.comcast.net/browse/RDKEVD-1779 )
- Add RF4CE HAL to the vendor layer - US Xione RealteK [RDKEVD-1990](https://ccp.sys.comcast.net/browse/RDKEVD-1990)
- Log upload utility is not present [XIONE-17140 ](https://ccp.sys.comcast.net/browse/XIONE-17140)
- Move the patches properly from RDK-V to RDK-E [RDKEVD-2734](https://ccp.sys.comcast.net/browse/RDKEVD-2734)
## Release layer and components

### Vendor Release Components

| Vendor Release Components | New Version (9.1.0) | Version in Previous Release (9.0.1) | Changelist |
|------------|---------|------------------------------------|------------|
| Kernel & DTB | | 4.9.119.01-r9  | |
| packagegroup-vendor-layer | 9.1.0-r0 | 9.0.1-r0 | [9.0.1....9.1.0](https://github.com/rdk-e/meta-oem-realtek-stream/compare/9.0.1...9.1.0) |
| packagegroup-common-vendor-layer | 9.1.0-r0 | 9.0.1-r0 |[9.0.1....9.1.0](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/compare/9.0.1...9.1.1)  |
### Stack layer

| Release meta Layer | Tag |
|------|------|
| [meta-vendor-xione-realtek-release](https://github.com/rdk-e/meta-vendor-xione-realtek-release) | [9.1.0](https://github.com/rdk-e/meta-vendor-xione-realtek-release/tree/9.1.0) |

#### Artifactory Location for IPKs

| Product | Location |
|------------|---------|
| XiOne-UK | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-uk-rel/9.1.0/xione-uk/ipks/debug |
| XiOne-Foxtel | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-foxtel-rel/9.1.0/xione-foxtel/ipks/debug |
| XiOne-DE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-de-rel/9.1.0/xione-de/ipks/debug |
| XiOne-Alpaca-De | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-alpaca-de-rel/9.1.0/xione-alpaca-de/ipks/debug |
| XOE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xfinity-stream-box-rel/9.1.0/xfinity-stream-box/ipks/debug |
| WNC Xfinity | https://partners.artifactory.comcast.com/ui/repos/tree/General/wnc-xfinity-stream-box-rel/9.1.0/wnc-xfinity-stream-box/ipks/debug |
| RTK-Flex2 | https://partners.artifactory.comcast.com/ui/repos/tree/General/xumo-stream-box-rel/9.1.0/xumo-stream-box/ipks/debug |

### Meta Repos

#### Meta repos maintained by layers layer

| Meta Repo | New Version (9.1.0) | Version in Previous Release (9.0.1) | ChangeList |
|------------|---------|------------------------------------|--------------|
| meta-rdk-auxiliary |  | 1.3.0 | |
| meta-rdk-oss-reference |  | 4.7.1 | |
| meta-rdk-tools |  | 2.3.1 | |
| meta-vts |  | 1.2.0 | |
| [meta-rdk-soc-realtek](#meta-rdk-soc-realtek) |  **4.1.2** | 4.1.1 | [4.1.1...4.1.2](https://github.com/rdk-e/meta-rdk-soc-realtek/compare/4.1.1...4.1.2) |
| meta-oem-stream |  | 4.1.0 | |
| [meta-oem-realtek-stream](#meta-oem-realtek-stream) |  **9.1.0** | 9.0.1 | [9.0.1...9.1.0](https://github.com/rdk-e/meta-oem-realtek-stream/compare/9.0.1...9.1.0) |
| [meta-rdk-vendor-realtek-common](#meta-rdk-vendor-realtek-common) |  **9.1.0** | 9.0.1 | [9.0.1...9.1.0](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/compare/9.0.1...9.1.0) |
| meta-oss-vendor-realtek |  | 4.1.2 | |
| meta-mediarite-vendor |  | 21.4 | |

#### Meta repos common for RDK-E

| Meta Repo | New Version (9.1.0) | Version in Previous Release (9.0.1) | ChangeList |
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
| meta-rdk-oss-ext |  | 1.3.0 | |
| | | | |
| **configs** ||||
| rdke-region-uk-config |  | 2.3.1 | |
| rdke-region-au-config |  | 1.2.1 | |
| rdke-region-de-config |  | 1.0.6 | |
| rdke-region-us-config |  | 1.5.2 | |
| rdke-common-config |  | 4.3.3 | |
| rdke-stb-config |  | 1.0.3 | |
| | | | |
| **rdk** ||||
| meta-rdk-halif-headers |  | 3.0.0 | |
| meta-rdk-cpc-halif-headers |  | 1.0.0 | |
| meta-rdk-vendor-cpc-common |  | 1.4.0 | |
| | | | |
| **products** ||||
| meta-product-xione |  | 3.3.5 | |
| | | | |
| **binder** ||||
| meta-binder |  | 1.0.0 | |
| | | | |
| **release** ||||
| meta-vendor-xione-realtek-release |  **9.0.1** | bfdb405 | [bfdb405...9.0.1](https://github.com/rdk-e/meta-vendor-xione-realtek-release/compare/bfdb405f531834d0001e0993049a7e746cf22f5f...9.0.1) |
| | | | |

### Interface versions

| # | HAL Interface Header (rdkcentral github) | New Version (9.1.0) | Version from Previous Release (9.0.1)|
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
- eg. FlashApp /mnt/usb/SKXI11ADS_9.1.0_VENDOR_DEV.bin
#### USB Flash Method using xboot prompt
- Copy the image `"SKXI11ADS_9.1.0_VENDOR_DEV.bin "` to the usb and connect to the STB
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

- Created the `"vendor test image"` `" SKXI11ADS_9.1.0_VENDOR_DEV.bin "` for XiOne-UK and for all other variants as well using the vendor layer jenkins job `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Vendor-Release-Build/"`
- Successfully booted the `"vendor test image"` and obtained the shell prompt.
- Verified vendor layer services up and running
- Verified IP acquisition via Ethernet
- Played clear AV with gst-play-1.0.
- Verified image flashing using FlashApp

Testing details in [RDKEVD-2987](https://ccp.sys.comcast.net/browse/RDKEVD-2987)
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
| Sep 01 2025 |	 SKXI11ADS_VENDOR_DEV_release_9.1.0_20250827165528   | 1547372 | 456049	| 22406	| 478455 | 2168221 |
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
| Sep 01 2025 |	 SKXI11ADSSOFT_VENDOR_DEV_release_9.1.0_20250827165544	 | 1547372 | 446854 | 22747 | 469601 | 2177075 |
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
| Sep 01 2025 |	 SKXI11AIS_VENDOR_DEV_release_9.1.0_20250827170034   | 1547344 | 463315	| 22605	| 485920 | 2160784 |
| Aug 13 2025 |  SKXI11AIS_VENDOR_DEV_release_9.0.0_20250813055550   | 1547344 | 471490	| 22621	| 494111 | 2152593 |
| Jul 17 2025 |  SKXI11AIS_8.1.2_VENDOR_DEV                          | 1547344 | 463329 | 22820 | 486149 | 2160555 |
| July 07 2025|  SKXI11AIS_VENDOR_DEV_refs_tags_8.0.3_20250703153514 | 1547344 | 472815 | 22831 | 495646 | 2151058 |
| May 23 2025 |  SKXI11AIS_VENDOR_DEV_refs_tags_7.0.1_20250521111817 | 1547348 | 463827 | 28698 | 492525 | 2154175 |
| May 16 2025 |  SKXI11AIS_7.0.0_VENDOR_DEV | 1547348 | 463950 | 29451 | 493401 | 2153299 |
| Mar 26 2025 |  SKXI11AIS_VENDOR_DEV_refs_tags_6.0.2_20250324181951 | 1547348 | 460736 | 28870 | 489606 | 2157094 |
##### XiOne-Alpaca-DE
| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| Sep 01 2025 |	SKXI11AEISODE_VENDOR_DEV_release_9.1.0_20250827165625	 |1547372  | 446170 | 22520 | 468690 | 2177986 |
| Aug 13 2025 | SKXI11AEISODE_VENDOR_DEV_release_9.0.0_20250813055454 	 | 1547372 | 446892 | 22480 | 469372 | 2177304 |
| Jul 17 2025 |   SKXI11AEISODE_8.1.2_VENDOR_DEV                         | 1547372 | 447820 | 22314 | 470134 | 2176542 |
| Jul 07 2025 |  SKXI11AEISODE_VENDOR_DEV_refs_tags_8.0.3_20250703153622 | 1547372 | 456489 | 22418 | 478907 | 2167769 |
| May 23 2025 |  SKXI11AEISODE_VENDOR_DEV_refs_tags_7.0.1_20250521111552 | 1547376 | 443789 | 28103 | 471892 | 2174780 |
| May 16 2025 |  SKXI11AEISODE_VENDOR_DEV_refs_tags_7.0.0_20250511204108 | 1547376 | 440746 | 28691 | 469437 | 2177235 |
| Mar 26 2025 |  SKXI11AEISODE_VENDOR_DEV_refs_tags_6.0.2_20250324172723 | 1547376 | 445013 | 28365 | 473378 | 2173294 |
##### Xfinity-stream-box
| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| Sep 01 2025 |	SCXI11AIC_VENDOR_DEV_release_9.1.0_20250827170034    | 1547348 | 463488	| 22487	| 485975 | 2160725 |
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
| Sep 01 2025 |	WNXI11AEI_VENDOR_DEV_release_9.1.0_20250827170034   | 1547348 |	462996 | 22050	| 485046 | 2161654 |
| Aug 13 2025 | WNXI11AEI_VENDOR_DEV_release_9.0.0_20250814165809   | 1547348 | 474320 | 22482	| 496802 | 2149898 |                                 | 
| Jul 14 2025 |  WNXI11AEI_8.1.2_VENDOR_DEV                          | 1547348 | 463448 | 22637 |  486085 | 2160615 |
| Jul 07 2025 |  WNXI11AEI_VENDOR_DEV_refs_tags_8.0.3_20250703153256| 1547348 | 473436 | 23006 | 496442 | 2150258 |
| May 23 2025 |  WNXI11AEI_VENDOR_DEV_refs_tags_7.0.1_20250521171806 | 1547356 | 473728 | 29253 | 502981 | 2143711 |
| May 16 2025 |  WNXI11AEI_VENDOR_DEV_refs_tags_7.0.0_20250512160923 | 1547356 | 472994 | 22047 | 495041 | 2151651 |
### Fullstack image testing
##### XiOne-UK
Created Image Assembler build "SKXI11ADS_DEV_9.1.0_20250828101502.bin" from "https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Image-Assembler-Build/2925/s3/"
##### XiOne-Foxtel
Created Image Assembler build "SKXI11ADSSOFT_DEV_9.1.0_20250828101417.bin" from " https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/view/4-Assembler-Jobs/job/RTK-XIONE-Foxtel-Image-Assembler-Build/382/s3/"
##### XiOne-Alpaca-DE
Created Image Assembler build "SKXI11AEISODE_DEV_9.1.0_20250828101702.bin" from "https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/view/4-Assembler-Jobs/job/RTK-XIONE-ALPACA-DE-Image-Assembler-Build/105/s3/"
##### XiOne-DE
Created Image Assembler build "SKXI11AIS_DEV_9.1.0_20250828101719.bin" from "https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/view/4-Assembler-Jobs/job/RTK-XIONE-DE-Image-Assembler-Build/359/s3/"
##### XiOne-XOE
Created Image Assembler build "SCXI11AIC_DEV_9.1.0_20250828101738.bin" from "https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-XFINITY-STREAM-BOX-Image-Assembler-Build/313/s3/"
##### XiOne-WNC-Xfinity
Created Image Assembler build "WNXI11AEI_DEV_9.1.0_20250828101753.bin" from "https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-WNC-XFINITY-Image-Assembler-Build/81/s3/"

- Testing is done by using the middleware ipk created with branch support/2.16.0 and  with the image assembler manifest branch `"9.1.0`" - referenced from 8.3s10 tag and including latest vendor ipk feed info https://github.com/rdk-e/meta-vendor-xione-realtek-release/blob/release/9.1.0/conf/machine/include/vendor.inc
   Middleware IPKs are generated with `"support/2.16.0`" by consuming the latest common IPK containing the updated mfrlib version, ensuring compatibility and preventing compilation errors caused by version mismatches between vendor and middleware.
- Tested the below scenarios as part of [RDKEVD-2987](https://ccp.sys.comcast.net/browse/RDKEVD-2987)
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
  - Issues observed in  release 9.1.0 https://ccp.sys.comcast.net/browse/XIONE-17389?jql=labels%20%3D%20Vendor_9.1.0
  - Attached the test report here https://ccp.sys.comcast.net/secure/attachment/12227613/RDKE_Release_9.1.0_Manualtest.pdf
## Components details in 'packagegroup-common-vendor-layer'
| # | Vendor layer Component | New PV-PR | PV-PR in Previous Release (9.0.1)| New SRCREV | SRCREV in Previous Release (9.0.1)| Diff |
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
| 12 | mfrlib-hal-xione | **8.1.2-r0** | 8.1.0-r0 |  | NA |  |
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
| 33 | rdk-gstreamer-utils-platform | | 2.0.0-2.0.0 |  | 6ba04b9 |  |
| 34 | devicesettings-hal-realtek | | 6.0.0-4.1.4-r0 |  |  |  |
| - |  - devicesettings-hal-realtek_devicesettingssocrealtek | |  |  | cf2f965 |  |
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
| 104 | ctrlm-rf4ce-hal | **1.0.0-r0** | NA |  | NA |  |
| 105 | ctrlm-hal-rf4ce-prebuilt | **1.0.0-r0** | NA |  | NA |  |
| 106 | qorvo-mod-rf4ce | **2.11-r0** | NA |  | NA |  |
| 107 | linux-libc-headers | | 4.9-r9 |  | NA |  |
| 108 | packagegroup-kernel-modules | | 4.9.119.01-r9 |  | NA |  |
| 109 | linux-hank | | 4.9.119.01-r9 |  | cec7eea |  |
| 110 | rtkaudiosink | | 3.1.4-r0 |  | b5ddc36 |  |
| 111 | mfi-ree | | 2.0.0-r0 |  | 4941717 |  |
| 112 | sysint-oem | | 3.0.4-r1 |  | 000bd91 |  |
| 113 | apparmor-vendor | | 2.4.0-r0 |  | d48c9d3 |  |
| 114 | directfb | | 1.7.7-r0 |  | NA |  |
| 115 | product-firmware-pb | | 1.0.8-r0 |  | 2a1369f |  |
| 116 | testagentlib | | 3.0.2-r1 |  |  |  |
| - |  - testagentlib_testagentlib | |  |  | b8eb1f8 |  |
| - |  - testagentlib_xione_factory | |  |  | 6281804 |  |
| 117 | testagent-loader | | 2.3.0-r0 |  | NA |  |
| 118 | libbinder | | 1.0.0-r1 |  | 0f7a23b |  |
| 119 | aidl-generator-native | | 1.0.0-r1 |  | 0f7a23b |  |
| 120 | flash-aidl | | 1-r0 |  | ddcceef |  |
| 121 | image-hal-service | | 1.0.0-r0 |  | 7eb82c9 |  |
| 122 | platform-imagehal-lib | | 1.0.0-r0 |  | NA |  |
| 123 | asappsserviced-vendor-conf | | 1.1.0-r0 |  | 1.1.0 |  |




## Vendor Layer Component Integration Details




## Consolidated change list from vendor layer repositories

## Changes in meta repositories

## [meta-rdk-soc-realtek](https://github.com/rdk-e/meta-rdk-soc-realtek/blob/main/CHANGELOG.md)

- RDKEVD-2734:Update all patch file with latest changes. ( [#158](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/158))

## [meta-oem-realtek-stream](https://github.com/rdk-e/meta-oem-realtek-stream/blob/main/CHANGELOG.md)

- RDKEVD-2987 : Latest product tag 9.1.0 [b94b7f3](https://github.com/rdk-e/meta-oem-realtek-stream/commit/b94b7f3da287660bc317d5743a120294440b29e3)
- RDKEVD-2872 - Update tag 9.0.1 [574edf3](https://github.com/rdk-e/meta-oem-realtek-stream/commit/574edf35ef48e224e279efb340e6369707728849)
- RDKEVD-2519 : RTK rf4ce driver for US platforms [2991ba3](https://github.com/rdk-e/meta-oem-realtek-stream/commit/2991ba3f237c98dbfb38dd18eca6b251777db429)
- RDKEVD-1779: Update rtkaudiosink to 3.1.4 [35c2f90](https://github.com/rdk-e/meta-oem-realtek-stream/commit/35c2f90938e4bb1eec1b20d4765a88a7b2c263d4)
- updating artifactory revision [92a4c49](https://github.com/rdk-e/meta-oem-realtek-stream/commit/92a4c49d2f38d74a7b8b6f1a67a9ca8eca956ccc)
- initial revision [abb35f2](https://github.com/rdk-e/meta-oem-realtek-stream/commit/abb35f2c8999bd2073219251933ad1d45314a9ca)
- RDKEVD-2734:Update all patch file with latest changes. [ceb8d0d](https://github.com/rdk-e/meta-oem-realtek-stream/commit/ceb8d0d1a6ff2d00b1c2cf3e77d7d1840dfbf038)
- XIONE-17140: Port log upload script Reason for change: port log upload script to RDK-E vendor layer. Test Prodcedure: Build and Verify. [d34e321](https://github.com/rdk-e/meta-oem-realtek-stream/commit/d34e32191f5256b2456f91c661ea624670f573b1)

## [meta-rdk-vendor-realtek-common](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/blob/main/CHANGELOG.md)

- RDKEVD-2987 : Latest product tag 9.1.0 [7af7fd1](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/7af7fd18afa46e5f6fa45538dea878d4cacd1634)
- XIONE-17654: MFR lib hal ipk issue [22651b2](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/22651b2fb150ba1a59340be4e883dbd594ce784c)
- XIONE-17654: ROM code behaviour override after DeepSleep resume [19f9856](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/19f9856f234e2a31d14252196a3a321870639b1a)
- XIONE-17654: ROM code behaviour override after DeepSleep resume [4a6384e](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/4a6384ee766e11b322fd56909e4411dde2a61190)



## Changes in component repositories


