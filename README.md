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
|Date|27 Mar 2025|
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

The aim of this release to include  the XiOne RealTek  DE,Alpaca DE,Xfinity,Xumo products in the vendor layer. This release will provide a versioned "meta-vendor-xione-realtek-release" that will be used by the middleware as well as image assembler.

The scope of this release includes:

- Include XOE US product [RDKEVD-329](https://ccp.sys.comcast.net/browse/RDKEVD-329)
- Include Xumo US product [RDKEVD-589](https://ccp.sys.comcast.net/browse/RDKEVD-589)
- Add libsoup3 support in VL [XIONE-16016](https://ccp.sys.comcast.net/browse/XIONE-16016)
- DE RDK-E migration [RDKEVD-513](https://ccp.sys.comcast.net/browse/RDKEVD-513)
- Ignore the disconti flag when prev_pts is invalid [RDKEVD-494](https://ccp.sys.comcast.net/browse/RDKEVD-494)
- To fix the SystemMemory_GetPhyAddr crash [RDKEVD-644](https://ccp.sys.comcast.net/browse/RDKEVD-644)
- Move syint oem to product specific [RDKEVD-388](https://ccp.sys.comcast.net/browse/RDKEVD-388)


## Release layer and components

### Vendor Release Components

| Vendor Release Components | New Version (6.0.2) | Version in Previous Release (5.1.0) | Changelist |
|------------|---------|------------------------------------|---------------------------|
| Kernel & DTB | | 4.9.119.01-r6  | | |
| packagegroup-vendor-layer | 6.0.2-r0 | 5.1.0-r0 | [5.1.0...6.0.2](https://github.com/rdk-e/meta-oem-realtek-stream/compare/5.1.0...6.0.2) |
| packagegroup-common-vendor-layer |1.0.3-r0 | 1.0.2-r0 | [1.0.2...1.0.3](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/compare/1.0.2...1.0.3) |

### Stack layer

| Layer | Tag |
|------|------|
| [meta-vendor-release](https://github.com/rdk-e/meta-vendor-xione-realtek-release) | [6.0.2](https://github.com/rdk-e/meta-vendor-xione-realtek-release/tree/6.0.2) |

#### Artifactory Location for IPKs

| Product | Location |
|------------|---------|
| XiOne-UK | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-uk-release/6.0.2/xione-uk/ipks/debug |
| XiOne-Foxtel | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-foxtel-release/6.0.2/xione-foxtel/ipks/debug |
| XiOne-DE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-de-release/6.0.2/xione-de/ipks/debug |
| XiOne-Alpaca-DE | https://partners.artifactory.comcast.com/ui/repos/tree/General/xione-alpaca-de-release/6.0.2/xione-alpaca-de/ipks/debug |
| Xfinity-stream-box | https://partners.artifactory.comcast.com/ui/repos/tree/General/xfinity-stream-box-release/6.0.2/xfinity-stream-box/ipks/debug |
| Xumo-stream-box | https://partners.artifactory.comcast.com/ui/repos/tree/General/xumo-stream-box/6.0.2/xumo-stream-box/ipks/debug |


### Meta Repos

#### Meta repos maintained by layers layer

| Meta Repo | New Version(6.0.2) | Version in Previous Release (5.1.0) | ChangeList |
|------------|---------|------------------------------------|--------------|
| meta-rdk-auxiliary |  | 4.1.5 | |
| [meta-oss-reference-release](#meta-oss-reference-release) |  **4.4.1** | 4.4.0 | [4.4.0...4.4.1](https://github.com/rdk-e/meta-oss-reference-release/compare/4.4.0...4.4.1) |
| [meta-rdk-oss-reference](#meta-rdk-oss-reference) |  **4.4.1** | 4.4.0 | [4.4.0...4.4.1](https://github.com/rdk-e/meta-rdk-oss-reference/compare/4.4.0...4.4.1) |
| [meta-rdk-tools](#meta-rdk-tools) |  **2.3.1** | 2.2.0 | [2.2.0...2.3.1](https://github.com/rdk-e/meta-rdk-tools/compare/2.2.0...2.3.1) |
| meta-vts |  | 1.2.0 | |
| [meta-rdk-soc-realtek](#meta-rdk-soc-realtek) |  **4.0.6** | 4.0.2 | [4.0.2...4.0.6](https://github.com/rdk-e/meta-rdk-soc-realtek/compare/4.0.2...4.0.6) |
| [meta-oem-stream](#meta-oem-stream) |  **4.0.3** | 4.0.2 | [4.0.2...4.0.3](https://github.com/rdk-e/meta-oem-stream/compare/4.0.2...4.0.3) |
| [meta-oem-realtek-stream](#meta-oem-realtek-stream) |  **6.0.2** | 5.1.0 | [5.1.0...6.0.2](https://github.com/rdk-e/meta-oem-realtek-stream/compare/5.1.0...6.0.2) |
| [meta-rdk-vendor-realtek-common](#meta-rdk-vendor-realtek-common) |  **1.0.3** | 1.0.2 | [1.0.2...1.0.3](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/compare/1.0.2...1.0.3) |
| [meta-oss-vendor-realtek](#meta-oss-vendor-realtek) |  **4.0.5** | 4.0.4 | [4.0.4...4.0.5](https://github.com/rdk-e/meta-oss-vendor-realtek/compare/4.0.4...4.0.5) |
| meta-mediarite-vendor |  | 10.0.34.0a2-r2 | |

#### Meta repos common for RDK-E

| Meta Repo | New Version(6.0.2) | Version in Previous Release (5.1.0) | ChangeList |
|------------|---------|------------------------------------|--------------|
| **buildscripts** ||||
| build-scripts |  **4.1.1** | 4.1.0 | [4.1.0...4.1.1](https://github.com/rdk-e/build-scripts/compare/4.1.0...4.1.1) |
| | | | |
| **buildsupport** ||||
| meta-image-support |  **4.2.2** | 4.1.1 | [4.1.1...4.2.2](https://github.com/rdk-e/meta-image-support/compare/4.1.1...4.2.2) |
| meta-stack-layering-support |  **1.1.2** | 1.0.0 | [1.0.0...1.1.2](https://github.com/rdkcentral/meta-stack-layering-support/compare/1.0.0...1.1.2) |
| | | | |
| **oe** ||||
| meta-openembedded |  | v4.1.0 | |
| poky |  **v4.1.4** | v4.1.2 | [v4.1.2...v4.1.4](https://github.com/rdk-e/poky/compare/v4.1.2...v4.1.4) |
| meta-python2 |  | v4.0.0 | |
| | | | |
| **configs** ||||
| rdke-region-uk-config |  **2.1.6** | 2.1.5 | [2.1.5...2.1.6](https://github.com/rdk-e/rdke-region-uk-config/compare/2.1.5...2.1.6) |
| rdke-region-au-config |  | 1.0.0 | |
| rdke-region-de-config |  **1.0.2** | NA | [1.0.2](https://github.com/rdk-e/rdke-region-de-config/commits/1.0.2) |
| rdke-region-us-config |  **1.0.10** | NA | [1.0.10](https://github.com/rdk-e/rdke-region-us-config/commits/1.0.10) |
| rdke-common-config |  **4.3.3** | 4.1.0 | [4.1.0...4.3.3](https://github.com/rdk-e/rdke-common-config/compare/4.1.0...4.3.3) |
| rdke-stb-config |  **1.0.3** | 1.0.2 | [1.0.2...1.0.3](https://github.com/rdk-e/rdke-stb-config/compare/1.0.2...1.0.3) |
| | | | |
| **rdk** ||||
| meta-rdk-halif-headers |  **1.0.2** | 4.0.0 | [4.0.0...1.0.2](https://github.com/rdkcentral/meta-rdk-halif-headers/compare/4.0.0...1.0.2) |
| meta-rdk-cpc-halif-headers |  **1.0.0** | NA | [1.0.0](https://github.com/rdk-e/meta-rdk-cpc-halif-headers/commits/1.0.0) |
| | | | |
| **products** ||||
| meta-product-xione |  **3.3.3** | 3.3.0 | [3.3.0...3.3.3](https://github.com/rdk-e/meta-product-xione/compare/3.3.0...3.3.3) |
| | | | |
| **binder** ||||
| meta-binder |  **1.0.0** | NA | [1.0.0](https://github.com/rdkcentral/meta-binder/commits/1.0.0) |
| | | | |

### Interface versions

| # | HAL Interface Header (rdkcentral github) | New Version(6.0.2) | Version from Previous Release (5.1.0)|
|---|------------------------------------------|-------------|----------------------|
| 1 | media-utils-headers |  | 1.0.5 |
| 2 | hdmicecheader |  | 1.3.10 |
| 3 | deepsleep-manager-headers |  | 1.0.4 |
| 4 | power-manager-headers |  | 1.0.3 |
| 5 | devicesettings-hal-headers |  | 4.1.2 |
| 6 | tvsettings-hal-headers |  | 2.1.0 |
|   |   |  |  |
|   | RDK HAL Headers (RDKE github) |  |  |
|   |   |  |  |
| 7 | iarmmgrs-hal-headers | | 2.1.5 |
| 8 | closedcaption-hal-headers | | 1.0.0 |
| 9 | iarmbus-headers | | 1.0.0 |
| 10 | rdk-gstreamer-utils-headers | | 1.3.0 |

### Limitations

It should be noted that some services may not run as they have dependencies with other layers. Additionally, the exclusion of inter-layer bbappends/patches might result in the failure to start some services. These limitations should be taken into consideration during the verification process. These Limitations will be addressed in Future Releases.


### Middleware and Production image Integration

##### XiOne-UK
- Created the  middleware image `"SKXI11ADS_MIDDLEWARE_DEV_feature_RDKEVD-698_20250324184135.bin"` from the `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Middleware-Build/14604/"`

##### XiOne-Foxtel
- Created the  middleware image `"SKXI11ADSSOFT_MIDDLEWARE_DEV_feature_RDKEVD-698_20250324184221.bin"` from the `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/view/1-RDKE-Pipeline-Jobs/job/RTK-XIONE-Foxtel-Middleware-Build/32/"`

##### XiOne-DE
- Created the  middleware image `"SKXI11AIS_MIDDLEWARE_DEV_feature_RDKEVD-698_20250324191522.bin"` from the `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Middleware-Build/14608/"`

##### XiOne-Alpaca-DE
- Created the  middleware image `"SKXI11AEISODE_MIDDLEWARE_DEV_feature_RDKEVD-698_20250324184539.bin"` from the `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Middleware-Build/14605/"`

##### Xfinity-stream-box
- Created the  middleware image `"SCXI11AIC_MIDDLEWARE_DEV_feature_RDKEVD-698-US_20250324185641.bin"` from the `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Middleware-Build/14606/"`

##### Xumo-stream-box
- Created the  middleware image `"SCXI11AIC_MIDDLEWARE_DEV_feature_RDKEVD-698-US_20250324202936.bin"` from the `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Middleware-Build/14612/"`


- Testing done by using feature branch`"feature/RDKEVD-698 for XiOne-uk,foxtel,DE,Alpaca-de" "feature/RDKEVD-698-US for Xfinity,xumo stream box"` included of latest vendor ipk feed info https://github.com/rdk-e/meta-vendor-xione-realtek-release/blob/release/6.0.2/conf/machine/include/vendor.inc and the middleware manifest branched from 2.7.1 tag.

- Feature branch details here `"XiOne-UK,Foxtel,DE,Alpaca-de(feature/RDKEVD-698)" "Xfinity,Xumo stream box(feature/RDKEVD-698-US)"`

#### Image assembler side

- None

#### Middleware side

- Please make sure to include apparmor related mw layer changes.
- Please make sure below chnages are included in the middleware side for DE,Alpaca DE stream box products

        - https://github.com/rdk-e/meta-mediarite/commit/25d6052cffc021b9c072ce392976a63e5891e895
        - https://github.com/rdk-e/meta-middleware-development/commit/6ced3584d14c433caba00ba469196e5062751065
        - https://github.com/rdk-e/meta-rdk-comcast-video/commit/eb173c19e452c722c5ef3e5f04d804d48fb701c0
        - https://github.com/rdk-e/meta-rdk/commit/794d9d3df758f667ee5d7f7b53ae03903a00a79a
        - https://github.com/rdk-e/meta-rdk-sky/commit/d51c4537c942c96e9ba34b9a4405b9aaf6924397
        - https://github.com/rdk-e/meta-rdk-video/commit/ecf1a696e31f79b90aac35398f0b6434b7a2ba10

- Also include below additional changes for Xfinity and Xumo stream box

        - https://github.com/rdk-e/meta-middleware-cspc-support/commit/a71e527ce1e9d0153bb125371cb6157e38004404

## Build instructions

- Steps to check out and build the vendor layer project [https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project](https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project)
- Steps to check out and build the image assembler project [https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler](https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler)


### Boot Command

#### Copy image to device /mnt/usb or /opt partitions or connect and mount USB having the image binn- Execute FlashApp command
- Move to directory containing the image
- FlashApp \<dirname\> \<imagename\>
- eg. FlashApp /mnt/usb/SKXI11ADS_VENDOR_DEV_refs_tags_6.0.2_20250324171809.bin

#### USB Flash Method using xboot prompt
- Copy the image `"SKXI11ADS_VENDOR_DEV_refs_tags_6.0.2_20250324171809.bin"` to the usb and connect to the STB
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

- Created the `"vendor test image"` `"SKXI11ADS_VENDOR_DEV_refs_tags_6.0.2_20250324171809.bin for XiOne-UK"` using the vendor layer jenkins job `"https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Vendor-Release-Build/65/"`
  - Successfully booted the `"vendor test image"` and obtained the shell prompt.
  - Verified vendor layer services up and running
  - Verified IP acquisition via Ethernet
  - Played clear AV with gst-play-1.0.
  - Verified image flashing using FlashApp

Testing details for all the products captured in [RDKEVD-698](https://ccp.sys.comcast.net/browse/RDKEVD-698)

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
| Mar 26 2025 |  SKXI11ADS_VENDOR_DEV_refs_tags_6.0.2_20250324171809 | 1547376 | 444252 | 29245 | 473497 | 2173175 |
| Mar 17 2025 |  SKXI11ADS_VENDOR_DEV_refs_tags_5.1.1_20250316220627 | 1547368 | 450302 | 30231 | 480533 | 2166147 |
| Feb 14 2025 |  SKXI11ADS_VENDOR_DEV_refs_tags_5.1.0_20250213181547 | 1547368 | 454816 | 28838 | 483654 | 2163026 |
| Jan 07 2025 |  SKXI11ADS_VENDOR_DEV_refs_tags_5.0.1_20250106184824 | 1547368 | 447174 | 29121 | 476295 | 2170385 |
| Dec 30 2024 |  SKXI11ADS_VENDOR_DEV_refs_tags_5.0.0_20241224172552 | 1547368 | 445508 | 29135 | 474643 | 2172037 |
| Dec 03 2024 |  SKXI11ADS_VENDOR_DEV_refs_tags_4.0.1_20241203115633 | 1547368 | 447008 | 26733 | 473741 | 2172939 |

##### XiOne-Foxtel

| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| Mar 26 2025 |  SKXI11ADSSOFT_VENDOR_DEV_refs_tags_6.0.2_20250324172329 | 1547376 | 438063 | 28223 | 466286 | 2180386 |
| Jan 28 2025 |  SKXI11ADSSOFT_VENDOR_DEV_refs_tags_5.0.2_20250124172925 | 1547368 | 443566 | 28438 | 472004 | 2174676 |
| Dec 30 2024 |  SKXI11ADSSOFT_VENDOR_DEV_refs_tags_5.0.0_20241224173052 | 1547368 | 450228 | 32825 | 483053 | 2163627 |

##### XiOne-DE

| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| Mar 26 2025 |  SKXI11AIS_VENDOR_DEV_refs_tags_6.0.2_20250324181951 | 1547348 | 460736 | 28870 | 489606 | 2157094 |


##### XiOne-Alpaca-DE

| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| Mar 26 2025 |  SKXI11AEISODE_VENDOR_DEV_refs_tags_6.0.2_20250324172723 | 1547376 | 445013 | 28365 | 473378 | 2173294 |


##### Xfinity-stream-box

| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| Mar 26 2025 |  SCXI11AIC_VENDOR_DEV_refs_tags_6.0.2_20250324172822 | 1547356 | 456510 | 29065 | 485575 | 2161117 |


##### Xumo-stream-box

| ReleaseDate | Build | Static reserved |  Vendor Baseline Memory |  Vendor Dynamic usage on uhd_play | Vendor Dynamic Total |  Avaialable Memory |
| --- | --- | --- | --- | --- | --- | --- |
| Mar 26 2025 |  SCXI11AIC_VENDOR_DEV_refs_tags_6.0.2_20250324190109	 | 1547356 | 456595 | 28437 | 485032 | 2161660 |


### Fullstack image testing

##### XiOne-UK
- Created Image Assembler build `" SKXI11ADS_DEV_feature_RDKEVD-698_20250326155812.bin from the jenkins job https://rdkjenkins-e.stb.r53.xcal.tv/jenkins/job/RTK-XIONE-Image-Assembler-Build/1542/"` based on Middleware version 2.7.1 and the 2.7.1 tag based manifest branched to `"feature/RDKEVD-698"`.

- Included the application release 4.26.0 using [rdke-assembler-manifest](https://github.com/rdk-e/rdke-assembler-manifest) feature branch `"feature/RDKEVD-698"`.
- Tested the below scenarios as part of [RDKEVD-698](https://ccp.sys.comcast.net/browse/RDKEVD-698)

  - Successfully booted \"SKXI11ADS_DEV_feature_RDKEVD-698_20250326155812\" and obtained the shell prompt and UI.
  - Verified UI navigation
  - Verified AV with Disney+ App
  - Verified AV with Xumo Play
  - Verified AV with Netflix
  - Verified AV with Amazon Prime
  - Verified AV with YouTube
  - Verified remote control pairing
  - Verified Log files are present in /opt/logs

- Note

  - Reported issues in this release 6.0.2 https://ccp.sys.comcast.net/browse/STBT-50972?jql=issuetype%20%3D%20Bug%20AND%20labels%20%3D%20vendor_6.0.2
  - Attached the test report here(https://ccp.sys.comcast.net/secure/attachment/10468343/XiOne%20RTK%206.0.2%20vendor%20release%20Test%20Report.msg)
  - The testing will continue until we receive the r35 product build, once we receive the product build we will continue the testing on that build.

## Components details in 'packagegroup-common-vendor-layer'

| # | Vendor layer Component | New PV-PR(6.0.2) | PV-PR in Previous Release (5.1.0)| New SRCREV(6.0.2) | SRCREV in Previous Release (5.1.0)| Diff |
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
| 21 | blewakeupenabler | | 1.3.0-r0 |  | 7c0eb9c | |
| 22 | rtk-platform-conf | | 2.6.0-r1 |  | NA | |
| 23 | emmc-read-util | | 4.0.0-r0 |  | 6281804 | |
| 24 | sky-dropbear | | 1.0.0-r1 |  | NA | |
| 25 | sysint-soc | | 3.0.0-r0 |  | f8dded4 | |
| 26 | sky-led-app | | 1.0.0-r0 |  | NA | |
| 27 | audiocapturemgr-vendor | | 1.0.0-r0 |  | a063707 | |
| 28 | displayinfo-soc | | 1.0.0-r0 |  | e7b2c24 | |
| 29 | ffmpeg | | 4.2.2-r1 |  | NA | |

## Components Removed

| # |  Component Name | Reason |
|----|--------------|------|
| 1 | sysint-oem |  |


## Components details in 'packagegroup-vendor-layer'

| # | Vendor layer Component | New PV-PR | PV-PR in Previous Release (5.1.0)| New SRCREV | SRCREV in Previous Release (5.1.0)| Diff |
|---|------------------------------------------|-------------|----------------------|-----------|------------|-----|
| 1 | media-utils-soc-realtek | | 1.0.5-1.0.0-r1 |  | 5e71382 | |
| 2 | closedcaption-hal-realtek | | 1.0.0-3.0.0-r0 |  | 2f365d0 | |
| 3 | [hdmicec-hal-realtek](#hdmicec-hal-realtek) | **1.3.10-3.0.1-r0** | 1.3.10-3.0.0-r0 | **950a89e** | 15cb845 |  [15cb845...950a89e](https://github.com/rdk-e/hdmicec-soc-realtek/compare/15cb8454ec796a487d9b901697f78833cad93b57...950a89e59e4ea0067d35208869770ca0ee1c6c29) |
| 4 | iarmmgrs-hal-realtek | | 1.0.1-2.0.0-r1 |  | a15d303 | |
| 5 | rdk-gstreamer-utils-platform | | 1.0.0-1.0.0-r0 |  | 739cdb7 | |
| 6 | devicesettings-hal-realtek | **4.1.3-4.0.4-r0** | 4.1.3-4.0.1-r0 |  |  | |
| - |  - devicesettings-hal-realtek_devicesettingssocrealtek | |  | **5ba3b40** | 85c82ea |  [](https://github.com/rdk-e/hdmicec-soc-realtek) |
| - |  - devicesettings-hal-realtek_devicesettingsskyxione | |  |  | 6929995 | |
| 7 | deepsleepmgr-hal-realtek | | 1.0.4-1.0.0-r0 |  | cbe53a0 | |
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
| 46 | westeros-simpleshell | | 1.01.57-r0 |  | 3cd00f7 | |
| 47 | westeros-simplebuffer | | 1.01.57-r0 |  | 3cd00f7 | |
| 48 | westeros-soc | | 1.01.57-r0 |  | 3cd00f7 | |
| 49 | westeros-sink | | 1.01.57-r0 |  |  | |
| - |  - westeros-sink_westeros | |  |  | 3cd00f7 | |
| - |  - westeros-sink_realtek | |  |  | 80d02bd | |
| 50 | westeros | | 1.01.57-r0 |  | 3cd00f7 | |
| 51 | essos | | 1.01.57-r0 |  | 3cd00f7 | |
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
| 76 | platform-lib | **2.6.0-r4** | 2.6.0-r3 |  | NA | |
| 77 | rtk-audio-service | | 3.0.1-r0 |  | d444891 | |
| 78 | [hdmiservice](#hdmiservice) | **4.0.2-r0** | 4.0.0-r1 | **022ee20** | 9fad0da |  [9fad0da...022ee20](https://github.com/rdk-e/hdmiservice-realtek/compare/9fad0da0dcf97e70a76aec346b715c89aebd0e9a...022ee202f887de70a4c8167f6c6ce17ed73b5ea4) |
| 79 | rtkpcrclksink | | 2.0.0-r0 |  | c8272d9 | |
| 80 | linux-libc-headers | | 4.9-r6 |  | NA | |
| 81 | packagegroup-kernel-modules | | 4.9.119.01-r6 |  | NA | |
| 82 | [linux-hank](#linux-hank) | | 4.9.119.01-r6 | **92f6fc3** | e608d5f |  [e608d5f...92f6fc3](https://github.com/rdk-e/linux_kernel-soc-realtek/compare/e608d5faf955cd54a9cb8885d68f192c7e5644d9...92f6fc37bec6fd0a220cc27e6494aea8dec6b06d) |
| 83 | mediarite-vendor | | 10.0.34.0a2-r0 |  | NA | |
| 84 | gst-plugins-mediarite | | 1.0-r0 |  | NA | |
| 85 | rtkaudiosink | | 3.0.2-r0 |  | eaee836 | |
| 86 | mfi-ree | | 2.0.0-r0 |  | 4941717 | |
| 87 | sysint-oem | | 3.0.0-r0 |  | 50d274a | |
| 88 | sysint-soc | | 3.0.1-r0 |  | 7d06f20 | |
| 89 | [apparmor-vendor](#apparmor-vendor) | **2.3.2-r0** | 1.0.0-r0 | **4de375b** | 41e3674 |  [41e3674...4de375b](https://github.com/rdk-e/apparmor-profiles/compare/41e367427f7b647f17a7ad97571b024affae44dd...4de375b526694ee1434fe2a8ef198dbf149c2835) |
| 90 | directfb | | 1.7.7-r0 |  | NA | |
| 91 | product-firmware-pb | **1.0.3-r0** | 1.0.2-r0 | **a5b256f** | 3079cbe |  [](https://github.com/rdk-e/apparmor-profiles) |
| 92 | testagentlib | | 3.0.2-r0 |  |  | |
| - |  - testagentlib_testagentlib | |  |  | b8eb1f8 | |
| - |  - testagentlib_xione_factory | |  |  | 6281804 | |
| 93 | testagent-loader | | 2.3.0-r0 |  | NA | |
| 94 | libbinder | **1.0.0-r1** | NA | **0f7a23b** | NA |  [](https://github.com/rdk-e/apparmor-profiles) |
| 95 | aidl-generator-native | **1.0.0-r1** | NA | **0f7a23b** | NA |  [](https://github.com/rdk-e/apparmor-profiles) |
| 96 | flash-aidl | **1-r0** | NA | **ddcceef** | NA |  [](https://github.com/rdk-e/apparmor-profiles) |
| 97 | image-hal-service | **1.0.0-r0** | NA | **7eb82c9** | NA |  [](https://github.com/rdk-e/apparmor-profiles) |
| 98 | platform-imagehal-lib | **1.0.0-r0** | NA |  | NA | |


## Consolidated change list from vendor layer repositories

## Changes in meta repositories

## [meta-oss-reference-release](https://github.com/rdk-e/meta-oss-reference-release/blob/main/CHANGELOG.md)

- RDKE-724: Update release info for 4.4.1 [b6040bf](https://github.com/rdk-e/meta-oss-reference-release/commit/b6040bf385fb7a1828235bab4b380b2b8af7474c)
- RDKE-724: Update release ipk feed 4.4.1 [918ee24](https://github.com/rdk-e/meta-oss-reference-release/commit/918ee244f5c0332d071211db6c85b6353182ba1b)
## [meta-rdk-oss-reference](https://github.com/rdk-e/meta-rdk-oss-reference/blob/main/CHANGELOG.md)

- RDKE-724: OSS hotfix release 4.4.1 [bd7c957](https://github.com/rdk-e/meta-rdk-oss-reference/commit/bd7c9572bc9eae5b8e6fab71cf4be2dd5beb05eb)
- RDKEMW-1929: [RDKE][XUMO]-Unable to REVSSH to Device ( [#567](https://github.com/rdk-e/meta-rdk-oss-reference/pull/567))
- RDKEMW-1708: Update logging level in NetworkManager ( [#564](https://github.com/rdk-e/meta-rdk-oss-reference/pull/564))
## [meta-rdk-tools](https://github.com/rdk-e/meta-rdk-tools/blob/main/CHANGELOG.md)

- Update amlogic-collectd-plugins.bb ( [#20](https://github.com/rdk-e/meta-rdk-tools/pull/20))
- RDKEMW-567:lib32-rdk-fullstack-image build failed ( [#16](https://github.com/rdk-e/meta-rdk-tools/pull/16))
- RDK-53646: Vendor Release 3.0.0. ( [#13](https://github.com/rdk-e/meta-rdk-tools/pull/13))
## [meta-rdk-soc-realtek](https://github.com/rdk-e/meta-rdk-soc-realtek/blob/main/CHANGELOG.md)

- RDKEVD-698: Release 6.0.1 [eff47c7](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/eff47c7be029044a530abc44fb2107c6744ef6d7)
- RDKEVD-644 : To fix the SystemMemory_GetPhyAddr crash. ( [#109](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/109))
- RDKEVD-477 : Implement Zero-Warning Policy and Code Cleanup [e761f19](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/e761f19593ef97599cc41af824a1d70d3a637615)
- RDKEVD-97: Tuner config in S3 mode [9d3a44f](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/9d3a44f882b94f5cee307f2db64b88b21d5e59e9)
## [meta-oem-stream](https://github.com/rdk-e/meta-oem-stream/blob/main/CHANGELOG.md)

- RDK-55735: Firmware HAL service reference implementaion [f91f26b](https://github.com/rdk-e/meta-oem-stream/commit/f91f26ba133c2cd3a5d61cd0e28e0943eceaee63)
- RDK-55735: Firmware HAL service reference implementaion [0fe7180](https://github.com/rdk-e/meta-oem-stream/commit/0fe7180f578cd14415d2048f24ab0809e5c8ccbb)
## [meta-oem-realtek-stream](https://github.com/rdk-e/meta-oem-realtek-stream/blob/main/CHANGELOG.md)

- RDKEVD-698: Release 6.0.2 [c417f2e](https://github.com/rdk-e/meta-oem-realtek-stream/commit/c417f2ed6393670fbb95742445d70f9cc24d8d7e)
- RDKEVD-698: Release 6.0.0 [b538090](https://github.com/rdk-e/meta-oem-realtek-stream/commit/b538090522dcaa3342d5ce659a1bbc44ef68bcd9)
- RDKEVD-698: Release 6.0.0 [d8e2c95](https://github.com/rdk-e/meta-oem-realtek-stream/commit/d8e2c95b230ec8548733d0e1a8c31e15dbaa2517)
- RDKEVD-698: Release 6.0.0 [f341bcc](https://github.com/rdk-e/meta-oem-realtek-stream/commit/f341bcc6dee53698b9b252b05c42593d5434a694)
- RDKEVD-698: Release 6.0.0 [3688791](https://github.com/rdk-e/meta-oem-realtek-stream/commit/36887915cbe8e36b520f0ae08df2d7a819368d69)
- RDKEVD-773:Youtube app keymapping. [259e49b](https://github.com/rdk-e/meta-oem-realtek-stream/commit/259e49bdf0aa322fa3431f58280935bda705902c)
- RDKEVD-477 : Implement Zero-Warning Policy and Code Cleanup [7c0af32](https://github.com/rdk-e/meta-oem-realtek-stream/commit/7c0af326c796d68ff12348dd1a503d809939333c)
- RDKEVD-698:Release 6.0.0. [70b753b](https://github.com/rdk-e/meta-oem-realtek-stream/commit/70b753b9e84d23f55fbe958035b0d2694e482edf)
- RDKEVD-698:Release 6.0.0. [e9825e0](https://github.com/rdk-e/meta-oem-realtek-stream/commit/e9825e0c9a1a9e14daff225e92646f00347cfd5d)
- RDKEVD-644 : Add RTK lib to apparmor [4d18367](https://github.com/rdk-e/meta-oem-realtek-stream/commit/4d183676a4d64e7cf4be4a80ac75d98c97d00557)
- RDKEVD-698:Release 6.0.0. [9abbdb2](https://github.com/rdk-e/meta-oem-realtek-stream/commit/9abbdb28502c88d8296a17f41bddf71d490301ac)
- RDKEVD-670 : Including evtest into vendor image [bd0dd6d](https://github.com/rdk-e/meta-oem-realtek-stream/commit/bd0dd6d10c2ba54b7cdc3777a0a9316b06515126)
- RDKEVD-589: RTK US XUMO Bringup [ec9f72b](https://github.com/rdk-e/meta-oem-realtek-stream/commit/ec9f72ba11dbc8fd3d85ea23d78085c3c242609e)
- RDKEVD-589: RTK US XUMO Bringup [e054bc0](https://github.com/rdk-e/meta-oem-realtek-stream/commit/e054bc0d2e1919468b62457b3c387fd631bdf8cc)
- RDKEVD-329: RTK XOE Bringup [acf98b4](https://github.com/rdk-e/meta-oem-realtek-stream/commit/acf98b4dc9ba7d9eec38dc48682be9d040ae7191)
- RDK-56548: Fix compilation issue on Jenkins ( [#287](https://github.com/rdk-e/meta-oem-realtek-stream/pull/287))
- RDKEVD-589: RTK US XUMO Bringup [42cd1d3](https://github.com/rdk-e/meta-oem-realtek-stream/commit/42cd1d3260520f1bde0cb7b872fd58b698868fa9)
- RDKEVD-329: RTK XOE Bringup [48d1f79](https://github.com/rdk-e/meta-oem-realtek-stream/commit/48d1f79248871e47b44f15847d7d748b779a08eb)
- RDKEVD-329:XiOne XOE [5dffd4a](https://github.com/rdk-e/meta-oem-realtek-stream/commit/5dffd4ae1978f54b9c1258e53a1c583735911a93)
- RDK-55735: Firmware HAL service reference implementaion [ea36cb9](https://github.com/rdk-e/meta-oem-realtek-stream/commit/ea36cb93b8457702e531b6f0e9c9f9c7cd79b98a)
- RDKEVD-329:XiOne US XOE build environment [1bbaddd](https://github.com/rdk-e/meta-oem-realtek-stream/commit/1bbadddf27e7e62ee4991e19b2b551c4300b97ed)
- RDKEVD-329:XiOne US XOE build environment [4436c94](https://github.com/rdk-e/meta-oem-realtek-stream/commit/4436c94514fa38ceddcd05bc595ace46bd2690fc)
- RDKEMW-1960: Update the URL of the gst-svp-ext repo to use GitHub [caf5029](https://github.com/rdk-e/meta-oem-realtek-stream/commit/caf50290c914157aa3f9d0058d3af7dac181c4b7)
- RDK-56085: Integrate meta-binder in the vendor layer of XiOne UK [c57b1bc](https://github.com/rdk-e/meta-oem-realtek-stream/commit/c57b1bc058fb3ee0854a54ae3262d4f9351a925b)
- RDKEVD-329:XiOne US XOE build environment [997d297](https://github.com/rdk-e/meta-oem-realtek-stream/commit/997d29781fdabdf539b22f070c2b9257b4a83c00)
- Update dobby.xi1.json ( [#278](https://github.com/rdk-e/meta-oem-realtek-stream/pull/278))
- Update dobby.xi1.json ( [#277](https://github.com/rdk-e/meta-oem-realtek-stream/pull/277))
- RDKEMW-1431 Remove the Device Specific json from Middleware and move to vendor ( [#281](https://github.com/rdk-e/meta-oem-realtek-stream/pull/281))
- DELIA-66481:Sync apparmor profile repo RDKV to RDKE [04f2a38](https://github.com/rdk-e/meta-oem-realtek-stream/commit/04f2a385965dc1b4e66cd1faf9d210421c3ce8bf)
- RDKEVD-388:Move syint oem to product specific. ( [#270](https://github.com/rdk-e/meta-oem-realtek-stream/pull/270))
- RDKEVD-513:DE RDK-E migration. [7ca75a4](https://github.com/rdk-e/meta-oem-realtek-stream/commit/7ca75a4b92939d92c222698f92eef45e7a6801c1)
## [meta-rdk-vendor-realtek-common](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/blob/main/CHANGELOG.md)

- RDKEVD-698:Release 6.0.0. [ef1a938](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/ef1a938e3dfb64a38af5599e955e6d2e46c46389)
- RDKEVD-388:Move syint oem to product specific. [5762884](https://github.com/rdk-e/meta-rdk-vendor-realtek-common/commit/5762884360c65dcd390bca47715f0ef235462d01)
## [meta-oss-vendor-realtek](https://github.com/rdk-e/meta-oss-vendor-realtek/blob/main/CHANGELOG.md)

- XIONE-16016:Add libsoup3 support in VL ( [#50](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/50))
- RDKEVD-494 : Ignore the disconti flag when prev_pts is invalid. ( [#49](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/49))


## Changes in component repositories

