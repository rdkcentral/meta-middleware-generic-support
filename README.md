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
|Date|23 May 2025|
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

The aim of this release to provide the hotfix [RDKEVD-1434](https://ccp.sys.comcast.net/browse/RDKEVD-1434), [XIONE-17133](https://ccp.sys.comcast.net/browse/XIONE-17133), [XIONE-17161](https://ccp.sys.comcast.net/browse/XIONE-17161), [XIONE-17162](https://ccp.sys.comcast.net/browse/XIONE-17162) on top of vendor release 7.0.0 R37 sync vendor layer. This release will provide a versioned "meta-vendor-xione-realtek-release" that will be used by the middleware as well as image assembler.

### The scope of this release includes:

- Unable to switch the UHD resolution. [RDKEVD-1434](https://ccp.sys.comcast.net/browse/RDKEVD-1434)
- HDMI Connection error in Amazon Prime. [XIONE-17133](https://ccp.sys.comcast.net/browse/XIONE-17133)
- Dolby Vision contents are not available. [XIONE-17161](https://ccp.sys.comcast.net/browse/XIONE-17161)
- UHD & HDR assets are not available.[XIONE-17162](https://ccp.sys.comcast.net/browse/XIONE-17162)

## Release layer and components

### Vendor Release Components

| Vendor Release Components | New Version (7.0.1) | Version in Previous Release (7.0.0) | Changelist |
|------------|---------|------------------------------------|------------|
| Kernel & DTB | | 4.9.119.01-r8  | |
| packagegroup-vendor-layer | 7.0.1-r0 | 7.0.0-r0 | [7.0.0...7.0.1](https://github.com/rdk-e/meta-oem-realtek-stream/compare/7.0.0...7.0.1) |
| packagegroup-common-vendor-layer |  | 1.0.5-r0 |  |

### Stack layer

| Layer | Tag |
|------|------|
| [meta-vendor-release](https://github.com/rdk-e/meta-vendor-xione-realtek-release) | [7.0.1](https://github.com/rdk-e/meta-vendor-xione-realtek-release/tree/7.0.1) |

#### Artifactory Location for IPKs

| Product | Location |
|------------|---------|
| XiOne-UK | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-uk-release/7.0.1/xione-uk/ipks/debug |
| XiOne-Foxtel | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-foxtel-release/7.0.1/xione-foxtel/ipks/debug |
| XiOne-DE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-de-release/7.0.1/xione-de/ipks/debug |
| XiOne-Alpaca-De | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-alpaca-de-release/7.0.1/xione-alpaca-de/ipks/debug |
| XOE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xfinity-stream-box-release/7.0.1/xfinity-stream-box/ipks/debug |
| WNC Xfinity | https://partners.artifactory.comcast.com/ui/repos/tree/General/wnc-xfinity-stream-box-release/7.0.1/wnc-xfinity-stream-box/ipks/debug |
| RTK-Flex2 | https://partners.artifactory.comcast.com/ui/repos/tree/General/xumo-stream-box-release/7.0.1/xumo-stream-box/ipks/debug |


### Meta Repos

#### Meta repos maintained by layers layer

| Meta Repo | New Version (7.0.1) | Version in Previous Release (7.0.0) | ChangeList |
|------------|---------|------------------------------------|--------------|
| [meta-rdk-auxiliary](#meta-rdk-auxiliary) |  | 1.2.0 |  |
| [meta-oss-reference-release](#meta-oss-reference-release) | | 4.6.0 | |
| [meta-rdk-oss-reference](#meta-rdk-oss-reference) |  | 1.2.0 |  |
| meta-rdk-tools |  | 2.3.1 | |
| meta-vts |  | 1.2.0 | |
| [meta-rdk-soc-realtek](#meta-rdk-soc-realtek) |  | 4.0.7 |  |
| meta-oem-stream |  | 4.0.3 | |
| [meta-oem-realtek-stream](#meta-oem-realtek-stream) |  **7.0.1** | 7.0.0 | [7.0.0...7.0.1](https://github.com/rdk-e/meta-oem-realtek-stream/compare/7.0.0...7.0.1) |
| [meta-rdk-vendor-realtek-common](#meta-rdk-vendor-realtek-common) |  | 1.0.5 |  |
| [meta-oss-vendor-realtek](#meta-oss-vendor-realtek) |  | 4.0.7 | |
| meta-mediarite-vendor |  | 10.0.34.0a2-r2 | |

#### Meta repos common for RDK-E

| Meta Repo | New Version (7.0.1) | Version in Previous Release (7.0.0) | ChangeList |
|------------|---------|------------------------------------|--------------|
| **buildscripts** ||||
| build-scripts |  | 4.1.1 | |
| | | | |
| **buildsupport** ||||
| meta-image-support |  | 4.2.2 | |
| meta-stack-layering-support | | 1.2.0 |  |
| | | | |
| **oe** ||||
| meta-openembedded |  | rdk4.0.0 | |
| poky |  | rdk4.1.0 |  |
| meta-python2 | | rdk4.0.0 | |
| | | | |
| **extention** ||||
| meta-rdk-oss-ext |  | 1.2.0 |  |
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
| meta-rdk-halif-headers |  | 1.0.3 |  |
| meta-rdk-cpc-halif-headers |  | 1.0.0 | |
| | | | |
| **products** ||||
| meta-product-xione | | 3.3.5 | |
| | | | |
| **binder** ||||
| meta-binder |  | 1.0.0 | |
| | | | |

### Interface versions

| # | HAL Interface Header (rdkcentral github) | New Version (7.0.1) | Versionfrom Previous Release (7.0.0)
|---|------------------------------------------|-------------|----------------------|
| 1 | media-utils-headers | | 1.0.5 |
| 2 | hdmicecheader | | 1.3.10 |
| 3 | deepsleep-manager-headers | | 1.0.4 |
| 4 | power-manager-headers | | 1.0.3 |
| 5 | devicesettings-hal-headers |  | 4.1.2 |
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
- Created the  middleware image `"SKXI11ADS_MIDDLEWARE_DEV_feature_RDKEVD-936-VL-7.0.0_20250521140129.bin for UK SKXI11ADSSOFT_MIDDLEWARE_DEV_feature_RDKEVD-936-VL-7.0.0_20250521140149.bin for Foxtel"` from the `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Middleware-Build/18175/s3/ for UK https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/view/1-RDKE-Pipeline-Jobs/job/RTK-XIONE-Foxtel-Middleware-Build/1098/s3/ for foxtel"`

- Testing done by using the feature branch `"feature/RDKEVD-936-VL-7.0.0"` based on the tag `"refs/tags/2.11.0"` included of latest vendor ipk feed info https://github.com/rdk-e/meta-vendor-xione-realtek-release/blob/release/7.0.1/conf/machine/include/vendor.inc and the middleware manifest from 2.11.0 tag.

- Tag details here `"XiOne-UK(refs/tags/2.11.0)"`. We created the feature branch from this tag (https://github.com/rdk-e/rdke-middleware-manifest/tree/feature/RDKEVD-936-VL-7.0.0)

#### Image assembler side

- We are unable to generate the Image Assembler with 2.11.0+RDNRDP7 supported middleware manifest. So we couldn't verify the full stack build from image assembler side.
- Please check the error build rhttps://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Image-Assembler-Build/1883/console)

#### Middleware side

- This vendor build supports NRDP7, so please make sure required changes are present in the middleware side.

#### Known issue

- Known issue list [here](https://ccp.sys.comcast.net/browse/XIONE-17196?jql=labels%20%3D%20Vendor_7.0.1)

## Build instructions

- Steps to check out and build the vendor layer project [https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project](https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project)
- Steps to check out and build the image assembler project [https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler](https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler)


### Boot Command

#### Copy image to device /mnt/usb or /opt partitions or connect and mount USB having the image binn- Execute FlashApp command

- Move to directory containing the image
- FlashApp \<dirname\> \<imagename\>
- eg. FlashApp /mnt/usb/SKXI11ADS_VENDOR_DEV_refs_tags_7.0.1_20250521111326.bin

#### USB Flash Method using xboot prompt

- Copy the image `"SKXI11ADS_VENDOR_DEV_refs_tags_7.0.1_20250521111326.bin"` to the usb and connect to the STB
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

- Created the `"vendor test image"` `"SKXI11ADS_VENDOR_DEV_refs_tags_7.0.1_20250521111326.bin for XiOne-UK and for all other variants as well"` using the vendor layer jenkins job `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Vendor-Release-Build/86/"`
- Successfully booted the `"vendor test image"` and obtained the shell prompt.
- Verified vendor layer services up and running
- Verified IP acquisition via Ethernet
- Played clear AV with gst-play-1.0.
- Verified image flashing using FlashApp

Testing details in [RDKEVD-1348](https://ccp.sys.comcast.net/browse/RDKEVD-1348)

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

- We are unable to generate the Image Assembler with 2.11.0+RDNRDP7 supported middleware manifest. So we couldn't verify the full stack build from image assembler side.
- Please check the error build rhttps://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Image-Assembler-Build/1883/console)

## Components details in 'packagegroup-common-vendor-layer'

| # | Vendor layer Component | New PV-PR (7.0.1) | PV-PR in Previous Release (7.0.0)| New SRCREV | SRCREV in Previous Release (6.0.2)| Diff |
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



## Components details in 'packagegroup-vendor-layer'

| # | Vendor layer Component | New PV-PR (7.0.1) | PV-PR in Previous Release (7.0.0)| New SRCREV (7.0.1) | SRCREV in Previous Release (7.0.0)| Diff |
|---|------------------------------------------|-------------|----------------------|-----------|------------|-----|
| 1 | media-utils-soc-realtek | | 1.0.5-1.0.0-r1 |  | 5e71382 | |
| 2 | closedcaption-hal-realtek | | -3.0.0-r0 |  | 2f365d0 | |
| 3 | hdmicec-hal-realtek | | 1.3.10-3.0.1-r0 |  | 950a89e | |
| 4 | iarmmgrs-hal-realtek | | 1.0.1-2.0.0-r1 |  | a15d303 | |
| 5 | rdk-gstreamer-utils-platform | | 1.0.0-2.0.0-r0 | **6ba04b9** | 739cdb7 |  |
| 6 | devicesettings-hal-realtek | **4.1.2-4.1.0-R37-r0** | 4.1.2-4.1.0-r0 |  |  |[]( https://github.com/rdk-e/devicesettings-soc-realtek/compare/4.1.0...4.1.0-R37) |
| - |  - devicesettings-hal-realtek_devicesettingssocrealtek | |  | **ad17470** | 6e9ed62 |  |
| - |  - devicesettings-hal-realtek_devicesettingsskyxione | |  |  | 6929995 | |
| 7 | deepsleepmgr-hal-realtek | | 1.0.4-1.0.2-r0 | **adaf974** | cbe53a0 |   |
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
| 46 | westeros-simpleshell |  | 1.01.58-r0 | | | |
| 47 | westeros-simplebuffer | | 1.01.58-r0 |  |  |  |
| 48 | westeros-soc |  | 1.01.58-r0 | | | |
| 49 | westeros-sink | | 1.01.58-r0 |  |  | |
| - |  - westeros-sink_westeros | |  | |  | |
| - |  - westeros-sink_realtek | |  | | |  |
| 50 | westeros | | 1.01.58-r0 |  | |  |
| 51 | essos | | 1.01.58-r0 | | |
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
| 77 | [rtk-audio-service](#rtk-audio-service) |  | 3.1.0-r0 | |  | |
| 78 | [hdmiservice](#hdmiservice) |  | 4.1.0-r0 | | |  |
| 79 | rtkpcrclksink | | 2.0.0-r0 |  | c8272d9 | |
| 80 | blewakeupenabler | | 1.4.0-r0 |  |  |  |
| 81 | linux-libc-headers |  | 4.9-r8 |  | NA | |
| 82 | packagegroup-kernel-modules | | 4.9.119.01-r8 |  |  | |
| 83 | [linux-hank](#linux-hank) |  | 4.9.119.01-r8 | |  |  |
| 84 | mediarite-vendor | | 10.0.34.0a2-r0 |  | NA | |
| 85 | gst-plugins-mediarite | | 1.0-r0 |  | NA | |
| 86 | [rtkaudiosink](#rtkaudiosink) | | 3.1.0-r0 | | | |
| 87 | mfi-ree | | 2.0.0-r0 |  | 4941717 | |
| 88 | sysint-oem | | 3.0.0-r0 |  | 50d274a | |
| 89 | [sysint-soc](#sysint-soc) | | 3.0.2-r0 | | |  |
| 90 | apparmor-vendor | | 2.3.2-r0 |  | 4de375b | |
| 91 | directfb | | 1.7.7-r0 |  | NA | |
| 92 | [product-firmware-pb](#product-firmware-pb) | | 1.0.5-r0 | |  |  |
| 93 | testagentlib | | 3.0.2-r0 |  |  | |
| - |  - testagentlib_testagentlib | |  |  | b8eb1f8 | |
| - |  - testagentlib_xione_factory | |  |  | 6281804 | |
| 94 | testagent-loader | | 2.3.0-r0 |  | NA | |
| 95 | libbinder | | 1.0.0-r1 |  | 0f7a23b | |
| 96 | aidl-generator-native | | 1.0.0-r1 |  | 0f7a23b | |
| 97 | flash-aidl | | 1-r0 |  | ddcceef | |
| 98 | image-hal-service | | 1.0.0-r0 |  | 7eb82c9 | |
| 99 | platform-imagehal-lib | | 1.0.0-r0 |  | NA | |



## Consolidated change list from vendor layer repositories

## Changes in meta repositories

## [meta-oem-realtek-stream](https://github.com/rdk-e/meta-oem-realtek-stream/blob/support/R37-7.0.0-Release/CHANGELOG.md)

- RDKEVD-1434:Add delay when report HDCP status

## ['devicesettings-soc-broadcom'](https://github.com/rdk-e/devicesettings-soc-realtek/blob/support/R37-7.0.0-Release/CHANGELOG.md)

