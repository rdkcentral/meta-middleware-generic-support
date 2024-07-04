# Vendor Layer Release Notes

XiOne UK REALTEK STB RDKE Vendor Layer Release Notes

---

|Platforms supported|
|-------|
|XiOne-UK UHD - 1319|

|Summary|Content|
|---|----|
|Classification|Confidential|
|Date|04 Jul 2024|
|Author|shahbas.alipakkada@sky.uk|


---

## Table of Contents

- [Vendor Layer Release Notes](#vendor-layer-release-notes)
  - [Table of Contents](#table-of-contents)
  - [Release Description](#release-description)
  - [Vendor Release Components](#vendor-release-components)
  - [Meta Repos](#meta-repos)
  - [Interface versions](#interface-versions)
  - [Limitations](#limitations)
  - [Middleware Integration](#middleware-integration)
  - [Build instructions](#build-instructions)
    - [Boot Command](#boot-command)
  - [Testing](#testing)
  - [Release layer and components](#release-layer-and-components)
    - [Stack layer](#stack-layer)
    - [Components details in 'packagegroup-vendor-layer'](#components-details-in-packagegroup-vendor-layer)
  - [Consolidated change list from vendor layer repositories](#consolidated-change-list-from-vendor-layer-repositories)
    - [Changes in meta repositories](#changes-in-meta-repositories)
    - [Changes in component repositories](#changes-in-component-repositories)

## Release Description

The aim of this release to integrate the latest oss release 3.0.4 which has critical fixes related to WiFi. This release will provide a versioned "meta-vendor-xione-realtek-release" that will be used by the middleware, image assembler.

The scope of this release includes:

- OSS 3.0.4 release integartion [RDK-50872](https://ccp.sys.comcast.net/browse/RDK-50872)
- gst-svp-ext moved from Middleware to Vendor layer [RDK-45190](https://ccp.sys.comcast.net/browse/RDK-45190)
- Stable 2 syncup code between gerrit to github [RDK-50439](https://ccp.sys.comcast.net/browse/RDK-50439)
- Removed the packageversioned inherit class [RDK-50659](https://ccp.sys.comcast.net/browse/RDK-50659)

### Vendor Release Components

| Vendor Release Components | New Version | Version in Previous Release (2.1.0) |ChangeList |
|------------|---------|------------------------------------|----------------|
| Linux | **4.9.119.01-r4** | 4.9.119.01-r3 | [2.1.0...2.2.0](https://github.com/rdk-e/meta-oem-realtek-stream/commit/5cac18ffbef7764dcccc4711e60bffd58d040782#diff-3f0f3d808b320574e5a41ed43848e81f2dd80b995f007fc58c152d83bc2392ce) |
| DTB | **4.9.119.01-r4** | 4.9.119.01-r3 | [2.1.0...2.2.0](https://github.com/rdk-e/meta-oem-realtek-stream/commit/5cac18ffbef7764dcccc4711e60bffd58d040782#diff-3f0f3d808b320574e5a41ed43848e81f2dd80b995f007fc58c152d83bc2392ce) ||
| packagegroup-vendor-layer | **2.3.0-r0** | 2.1.0-r0 | [2.1.0...2.2.0](https://github.com/rdk-e/meta-oem-realtek-stream/pull/146/commits/200601aed5b7b4cd2f93bf02e57cfad5bd092ed0) |

Note : Kernel version upgraded due to change in linux recipe

### Meta Repos

#### Meta repos maintained by Vendor layer 

| Meta Repo | New Version | Version in Previous Release (2.1.0) | ChangeList |
|------------|---------|------------------------------------|--------------|
| [meta-rdk-soc-realtek](#meta-rdk-soc-realtek) |  **2.2.0** | 2.1.0 | [2.1.0...2.2.0](https://github.com/rdk-e/meta-rdk-soc-realtek/compare/2.1.0...2.2.0) |
| [meta-oem-stream](#meta-oem-stream) |  **2.2.0** | 2.0.0 | [2.0.0...2.2.0](https://github.com/rdk-e/meta-oem-stream/compare/2.0.0...2.2.0) |
| [meta-oem-realtek-stream](#meta-oem-realtek-stream) |  **2.3.0** | 2.1.0 | [2.1.0...2.3.0](https://github.com/rdk-e/meta-oem-realtek-stream/compare/2.1.0...2.3.0) |
| [meta-oss-vendor-realtek](#meta-oss-vendor-realtek) |  **2.2.0** | 2.1.0 | [2.1.0...2.2.0](https://github.com/rdk-e/meta-oss-vendor-realtek/compare/2.1.0...2.2.0) |
| [meta-mediarite-vendor](#meta-mediarite-vendor) |  **10.0.34.0a2-1** | NA | [10.0.34.0a2-1](https://github.com/rdk-e/meta-mediarite-vendor/commits/10.0.34.0a2-1) |


#### Meta repos common for RDK-E

| Meta Repo | New Version | Version in Previous Release (2.1.0) | ChangeList |
|------------|---------|------------------------------------|--------------|
| **buildscripts** ||||
| [build-scripts](https://github.com/rdk-e/build-scripts) |  | 2.0.3 | |
| | | | | |
| **imagebuilder** ||||
| [meta-image-support](https://github.com/rdk-e/meta-image-support) |  **3.0.1** | 2.4.1 | [2.4.1...3.0.1](https://github.com/rdk-e/meta-image-support/compare/2.4.1...3.0.1) |
| | | | | |
| **oe** ||||
| [meta-openembedded](https://github.com/rdk-e/meta-openembedded) |  | v1.0.0_dunfell | |
| poky |  | v1.0.4 | |
| | | | | |
| **configs** ||||
| [rdke-region-uk-config](https://github.com/rdk-e/rdke-region-uk-config) |  **2.0.2** | 2.0.0 | [2.0.0...2.0.2](https://github.com/rdk-e/rdke-region-uk-config/compare/2.0.0...2.0.2) |
| [rdke-common-config](https://github.com/rdk-e/rdke-common-config) |  **2e690f0** | 1.0.6 | [1.0.6...2e690f0](https://github.com/rdk-e/rdke-common-config/compare/1.0.6...2e690f0a544394461114d5fe95224c42353d9576) |
| [rdke-stb-config](https://github.com/rdk-e/rdke-stb-config) |  | 1.0.0 | |
| | | | | |
| **rdk** ||||
| [meta-rdk-halif-headers](https://github.com/rdk-e/meta-rdk-halif-headers) |  **3.0.1** | 2.1.0 | [2.1.0...3.0.1](https://github.com/rdk-e/meta-rdk-halif-headers/compare/2.1.0...3.0.1) |
| | | | | |
| **products** ||||
| [meta-product-xione](https://github.com/rdk-e/meta-product-xione) |  **2.2.0** | 2.1.0 | [2.1.0...2.2.0](https://github.com/rdk-e/meta-product-xione/compare/2.1.0...2.2.0) |
| | | | | |
| **OSS** ||||
| [meta-oss-reference-release](#meta-oss-reference-release) |  **3.0.4** | 2.3.1 | [2.3.1...3.0.4](https://github.com/rdk-e/meta-oss-reference-release/compare/2.3.1...3.0.4) |
| [meta-rdk-oss-reference](#meta-rdk-oss-reference) |  **3.0.4** | 2.3.1 | [2.3.1...3.0.4](https://github.com/rdk-e/meta-rdk-oss-reference/compare/2.3.1...3.0.4) |
| [meta-vts](https://github.com/rdk-e/meta-vts) |  | 1.1.1 | |
| | | | | |

### Interface versions

| # | HAL Interface Header (rdkcentral github) | New Version | Versionfrom Previous Release (2.1.0)
|---|------------------------------------------|-------------|----------------------|
| 1 | media-utils-headers | | 1.0.4 |
| 2 | hdmicecheader | | 1.3.7 |
| 3 | deepsleep-manager-headers | | 1.0.3 |
| 4 | power-manager-headers | | 1.0.2 |
| 5 | devicesettings-hal-headers | **2.0.0** | 1.0.8 |
| 6 | tvsettings-hal-headers | **1.2.0** | 0.1.1 |
|   |   |  |  |
|   | RDK HAL Headers (RDKE github) |  |  |
|   |   |  |  |
| 7 | iarmmgrs-hal-headers | | 2.0.3 |
| 8 | closedcaption-hal-headers | | GRT_v2 |
| 9 | iarmbus-headers | | GRT_v2 |
| 10 | rdk-gstreamer-utils-headers | | 1.3.0 |
### Limitations

It should be noted that some services may not run as they have dependencies with other layers. Additionally, the exclusion of inter-layer bbappends/patches might result in the failure to start some services. These limitations should be taken into consideration during the verification process. These Limitations will be addressed in Future Releases.

### Middleware Integration

Since gst-svp-ext is moved from Middleware to Vendor layer, changes are needed in middleware to remove gst-svp-ext, these changes are avaiable in [RDK-45190](https://ccp.sys.comcast.net/browse/RDK-45190)
Also it's recommended to use the OSS version 3.0.4 and same versions of the common config repos and product repo.

## Build instructions

- Steps to check out and build the vendor layer project [https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project](https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project)

### Boot Command

We will not be able to flash the image through `FlashApp`, on 1.0.1 release and We have supported Flash app from 2.0.0 onwards.

- Copy the image to the usb and connect to the TV
- Switch on the STB
- Press z button multiple time to get the bootloader prompt.
- From bootloader prompt, need to do below method
- Choose option c (flashing image)
- Choose select option h/i (depends on from which bank the image is booting)
- Enter the image name which we need to copy.
- After image flashed successfully. Choose the option "exit"
- Choose the option "exit" (or) Enter "i" (automatically reboot the box)

## Testing

- Created the `"vendor test image"` `"SKXI11ADS_vendor_test_20240703182153"` using the vendor layer project.
- Successfully booted the `"vendor test image"` and obtained the shell prompt.
- For this release testing was done by using feature branch featue/feature/RDK-50869-Integrate-oss-3-0-4_mediarite for rdke-middleware-manifest/realtek-xione.xml

## Release layer and components

### Stack layer

| Layer | Tag |
|------|------|
| [meta-vendor-xione-realtek-release](https://github.com/rdk-e/meta-vendor-xione-realtek-release) | 2.3.0 |
#### Artifactory Location for IPKs -  https://partners.artifactory.comcast.com/ui/repos/tree/General/opkg/xione-uk/ipks/xione-uk-vendor/2-3-0

### Components details in 'packagegroup-vendor-layer'

 Components which are prebuilt or the ones which installs config files or scripts from meta layer have SRCREV marked as NA 


| # | Vendor layer Component | New PV-PR | PV-PR in Previous Release (2.1.0)| New SRCREV | SRCREV in Previous Release (2.1.0)| Diff |
|---|------------------------------------------|-------------|----------------------|-----------|------------|-----|
| 1 | [media-utils-soc-realtek](#media-utils-soc-realtek) | | 2.0.0-r0 | **GRT_STB_v2** | c0d66badd98f83ead8553c30c8e6a28f6aba5c09 |  [c0d66badd98f83ead8553c30c8e6a28f6aba5c09 & GRT_STB_v2](https://github.com/rdk-e/media_utils-soc-realtek/compare/c0d66badd98f83ead8553c30c8e6a28f6aba5c09 ) |
| 2 | [closedcaption-hal-realtek](#closedcaption-hal-realtek) | | 2.0.0-r0 | **GRT_STB_v2** | 871a279f43eb82d6d30d0bd8de68b48ce2cfb693 |  [871a279f43eb82d6d30d0bd8de68b48ce2cfb693 & GRT_STB_v2](https://github.com/rdk-e/closedcaption-soc-realtek/compare/871a279f43eb82d6d30d0bd8de68b48ce2cfb693 ) |
| 3 | [hdmicec-hal-realtek](#hdmicec-hal-realtek) | | 2.0.0-r0 | **GRT_STB_v2** | 884604d697c36c112f6349d40349782eb4bc3273 |  [884604d697c36c112f6349d40349782eb4bc3273 & GRT_STB_v2](https://github.com/rdk-e/hdmicec-soc-realtek/compare/884604d697c36c112f6349d40349782eb4bc3273 ) |
| 4 | [iarmmgrs-hal-realtek](#iarmmgrs-hal-realtek) | | 2.0.1-1.0.0-r0 | **GRT_STB_v2** | cbd3783 |  [cbd3783...GRT_STB_v2](https://github.com/rdk-e/iarmmgrs-soc-realtek/compare/cbd3783eb258636a607bf8568a98ca4a2b7e9098...GRT_STB_v2) |
| 5 | rdk-gstreamer-utils-platform | | 1.3.0-r0 |  | 739cdb7 | |
| 6 | devicesettings-hal-realtek | **2.0.0-1.0.0-r0** | 1.0.8-1.0.0-r0 |  |  | |
| - |  - devicesettings-hal-realtek_devicesettingssocrealtek | |  | **GRT_STB_v2** | 00e9459 |  [](https://github.com/rdk-e/iarmmgrs-soc-realtek) |
| - |  - devicesettings-hal-realtek_devicesettingsskyxione | |  | **GRT_STB_v2** | 76c6243 |  [](https://github.com/rdk-e/iarmmgrs-soc-realtek) |
| 7 | rtk-platform-conf | | 2.6.0-r0 |  | NA | |
| 8 | testagentlib | | 2.9.0-r0 |  | NA | |
| 9 | emmc-read-util | | 3.3.4-r0 |  | NA | |
| 10 | otp-program | | 2.2-r1 |  | NA | |
| 11 | gstreamer1.0 | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 12 | gstreamer1.0-meta-base | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 13 | gstreamer1.0-omx | **1.10.4-r2** | 1.10.4-r1 |  | NA | |
| 14 | gstreamer1.0-libav | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 15 | gstreamer1.0-plugins-good | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 16 | gstreamer1.0-plugins-good-meta | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 17 | gstreamer1.0-plugins-bad | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 18 | gstreamer1.0-plugins-bad-meta | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 19 | gstreamer1.0-rtsp-server | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 20 | gstreamer1.0-plugins-base | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 21 | gstreamer1.0-plugins-base-meta | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 22 | gstreamer1.0-plugins-base-playback | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 23 | gstreamer1.0-plugins-good-wavparse | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 24 | gstreamer1.0-plugins-good-audiofx | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 25 | gstreamer1.0-plugins-good-isomp4 | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 26 | gstreamer1.0-plugins-good-audioparsers | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 27 | gstreamer1.0-plugins-good-soup | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 28 | gstreamer1.0-plugins-base-gio | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 29 | gstreamer1.0-plugins-base-videoconvert | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 30 | gstreamer1.0-plugins-base-videoscale | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 31 | gstreamer1.0-plugins-base-volume | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 32 | gstreamer1.0-plugins-base-typefindfunctions | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 33 | gstreamer1.0-plugins-good-autodetect | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 34 | gstreamer1.0-plugins-good-avi | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 35 | gstreamer1.0-plugins-good-deinterlace | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 36 | gstreamer1.0-plugins-good-interleave | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 37 | gstreamer1.0-plugins-bad-dash | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 38 | gstreamer1.0-plugins-bad-mpegtsdemux | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 39 | gstreamer1.0-plugins-bad-smoothstreaming | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 40 | gstreamer1.0-plugins-bad-videoparsersbad | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 41 | gstreamer1.0-plugins-bad-opusparse | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 42 | gstreamer1.0-plugins-bad-dashdemux | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 43 | gstreamer1.0-plugins-good-matroska | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 44 | gstreamer1.0-plugins-base-app | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 45 | gstreamer1.0-plugins-base-audioconvert | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 46 | gstreamer1.0-plugins-base-audioresample | **1.18.5-r2** | 1.18.5-r0 |  | NA | |
| 47 | rtk-audio-service | | 2.0.0-r0 |  | e52aef88fc80d0e3b6166000e8553a7b7dc7fa7a & 6bb3a0f37357296c4f0697c1c4ecd9d69f45eb02 | |
| 48 | libdrm | | 2.4.100-r0 |  | NA | |
| 49 | westeros-simpleshell | | 1.3.0-r0 |  | NA | |
| 50 | westeros-simplebuffer | | 1.3.0-r0 |  | NA | |
| 51 | westeros-soc | | 1.3.0-r1 |  | NA | |
| 52 | westeros-sink | | 2.0.0-r0 |  | 5724b0f | |
| 53 | westeros | | 1.0.0-r0 |  | NA | |
| 54 | essos | | 1.0.0-r0 |  | NA | |
| 55 | cairo | **1.16.0-r0** | 1.14.6-r0 |  | NA | |
| 56 | libepoxy | | 1.5.4-r1 |  | NA | |
| 57 | python3-pygobject | | 3.34.0-r0 |  | NA | |
| 58 | pango | | 1.44.7-r0 |  | NA | |
| 59 | make-mod-scripts | | 1.0-r0 |  | NA | |
| 60 | librsvg | | 2.40.21-r0 |  | NA | |
| 61 | python3-pycairo | | 1.19.0-r0 |  | NA | |
| 62 | sky-fpbutton-driver | | 2.8-r0 |  | NA | |
| 63 | xsign | **4.0.1-r1** | 4.0.1-r0 |  | NA | |
| 64 | mfrlib-hal-xione | | 7.0.4-r0 |  | NA | |
| 65 | wipe-disk-partitions | | 1.0.0-r0 |  | NA | |
| 66 | [early-display](#early-display) | | 2.0.0-r0 | **GRT_STB_v2** | de41005 |  [de41005...GRT_STB_v2](https://github.com/rdk-e/device-tools-realtek/compare/de410057a1756c18480111bce7fa3c7da310dd4b...GRT_STB_v2) |
| 67 | rtk-tee | | 1.0.0-r0 |  | NA | |
| 68 | secauthn | | 1.0.0-r0 |  | NA | |
| 69 | secapi-rtk | | 2.1.0-r0 |  | 95b6bd4 | |
| 70 | secapi3-rtk | | 3.0.0-r0 |  | aa3c293 | |
| 71 | secapi2-adapter | | 1.0.0-r0 |  | NA | |
| 72 | secapi-common-hw | | 2.3.0-r0 |  | 3a51b88 | |
| 73 | secapi-netflix | | 1.0.0-r0 |  |  | |
| - |  - secapi-netflix_com_inc_rtk | |  |  | 0fa3af3 | |
| - |  - secapi-netflix_socrealtek | |  |  | d3c7c87 | |
| 74 | gst-svp-ext | **1.0.0-r0** | NA |  | NA | |
| 75 | systemaudioplatform | | 1.0.0-r0 |  | 776348d | |
| 76 | dvrmgr-hal-realtek | | 1.0.0-r0 |  | NA | |
| 77 | secapi-crypto-rtk | | 2.3.0-r0 |  | f5eb924 | |
| 78 | secapi-common-crypto | | 2.3.0-r0 |  | 3a51b88 | |
| 79 | testagent-loader | | 2.3.0-r0 |  | NA | |
| 80 | qca6390-mod-wifi | | 1.0.0-r0 |  | NA | |
| 81 | qca-hciattach | | 1.0.0-r0 |  | NA | |
| 82 | emmc-fw-update | | 1.0.0-r0 |  | NA | |
| 83 | mount-disk-partition | | 1.0.0-r0 |  | NA | |
| 84 | image-verifier-lib | | 6.2.0-r0 |  | NA | |
| 85 | flashapp | | 5.9.2-r0 |  | NA | |
| 86 | sky-led-driver | | 1.0.0-r0 |  | NA | |
| 87 | fmtsasidlibs | | 2.4-r0 |  | NA | |
| 88 | [hank-mod-mali](#hank-mod-mali) | | 1.0.0-r1 | **GRT_STB_v2** | 35b764c |  [35b764c...GRT_STB_v2](https://github.com/rdk-e/kernel-modules-mali-soc-realtek/compare/35b764c2771f3be6daf9720498cf72a26e97840d...GRT_STB_v2) |
| 89 | [rtkv1sink](#rtkv1sink) | | 2.0.0-r0 | **GRT_STB_v2** | 7080ede |  [7080ede...GRT_STB_v2](https://github.com/rdk-e/rtkv1sink-soc-realtek/compare/7080ede06cd46d9c38ae932a483cbe1e834f625b...GRT_STB_v2) |
| 90 | led-boot-pattern | | 1.0.0-r0 |  | NA | |
| 91 | rtkmali | | 2.8.0-r0 |  | NA | |
| 92 | platform-lib | | 2.6.0-r2 |  | NA | |
| 93 | [hdmiservice](#hdmiservice) | | 2.0.0-r0 | **GRT_STB_v2** | 1af1b56 |  [1af1b56...GRT_STB_v2](https://github.com/rdk-e/hdmiservice-realtek/compare/1af1b56d18aa44bf2fac8a9382335a8f98448205...GRT_STB_v2) |
| 94 | [rtkpcrclksink](#rtkpcrclksink) | | 2.0.0-r0 | **GRT_STB_v2** | a03032e |  [a03032e...GRT_STB_v2](https://github.com/rdk-e/rtkpcrclksink-soc-realtek/compare/a03032e9bd33573bd1faaa87c7309ede0169afc4...GRT_STB_v2) |
| 95 | linux-libc-headers | **4.9-r4** | 4.9-r3 |  | NA | |
| 96 | packagegroup-kernel-modules | **4.9.119.01-r4** | 4.9.119.01-r3 |  | NA | |
| 97 | linux-hank | **4.9.119.01-r4** | 4.9.119.01-r3 |  | e608d5f | |
| 98 | mediarite-vendor | **10.0.34.0a2-r0** | NA |  | NA | |
| 99 | gst-plugins-mediarite | **1.0-r0** | NA |  | NA | |
| 100 | [rtkaudiosink](#rtkaudiosink) | | 2.0.0-r0 | **GRT_STB_v2** | ca2933f |  [ca2933f...GRT_STB_v2](https://github.com/rdk-e/rtkaudiosink-soc-realtek/compare/ca2933fa986b1298a5b0aab6fbb4d82366176633...GRT_STB_v2) |
| 101 | sky-dropbear | | 1.0.0-r0 |  | NA | |
| 102 | [mfi-ree](#mfi-ree) | | 2.0.0-r0 | **GRT_v2** | 3fa29a8 |  [3fa29a8...GRT_v2](https://github.com/rdk-e/mfi-ree-cpc/compare/3fa29a8bcb7e4923758c5042fca4ebd0eb77fbe8...GRT_v2) |
| 103 | sysint-oem | | 1.0.0-r0 |  | ec0f597 | |
| 104 | sysint-soc | | 1.0.0-r0 |  | c3ae6f4 | |
| 105 | [apparmor-vendor](#apparmor-vendor) | **1.0.0-r0** | 1.0-r0 | **41e3674** | 80787ee |  [80787ee...41e3674](https://github.com/rdk-e/apparmor-profiles/compare/80787ee6065e1ac7c05d2be33d82de387e7d1cae...41e367427f7b647f17a7ad97571b024affae44dd) |
| 106 | directfb | | 1.7.7-r0 |  | NA | |
| 107 | [audiocapturemgr-vendor](#audiocapturemgr-vendor) | **1.0.0-r0** | NA | **a063707** | NA |  [a063707](https://github.com/rdk-e/audiocapturemgr-soc-realtek/commits/a063707e44eb91a3bd66b499b18f45cd5c41014d) |




## Consolidated change list from vendor layer repositories

## Changes in meta repositories

## [meta-rdk-soc-realtek](https://github.com/rdk-e/meta-rdk-soc-realtek/blob/main/CHANGELOG.md)

- Merge branch 'release/2.2.0' [37e4037](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/37e403720c1cb80a9a9c432317f72393c27fd874)
- RDK-50706 : Update change log for XiOne UK release 2.2.0 [f1cc8e3](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/f1cc8e3f38a6f1b869273f45faf1354cf35205fd)
- Add GitHub Actions workflow file [3eb4d20](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/3eb4d20a677cf56fde354a66c736342b487f419c)
- RDK-50439: Sync stable2 code. ( [#63](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/63))
- Merge pull request  [#60](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/60) from rdk-e/feature/RDK-49400-Audiocapmgrconf
- RDK-49400: Integrate audcapturemgr conf to VL. [fc4bdc5](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/fc4bdc5a0fbeca7c58990e89d57af35602c18d8a)
- Merge pull request  [#62](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/62) from rdk-e/feature/RDK-50454-sysint-github
- RDK-50454: Refer repo from github for sysint. [8b0d9fa](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/8b0d9fa1c250836649b44d06471a0086564f30ed)
- Merge pull request  [#61](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/61) from rdk-e/feature/RDK-50363-Remove-dev-files-from-rootfs-dependency
- RDK-50363 : Remove dev files from rootfs dependency [3aa8685](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/3aa86859e1f89124c16cfb6ea4cc115da8b90d34)
- Merge pull request  [#59](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/59) from rdk-e/main
## [meta-oem-stream](https://github.com/rdk-e/meta-oem-stream/blob/main/CHANGELOG.md)

- Merge branch 'release/2.2.0' [8b53e30](https://github.com/rdk-e/meta-oem-stream/commit/8b53e3077304373fb44d5df8a2b249fd8b536d91)
- RDK-50706 : Update change log for XiOne UK release 2.2.0 [cf6a683](https://github.com/rdk-e/meta-oem-stream/commit/cf6a68329c75a008e2021ca3332fb08235087ea1)
- Add GitHub Actions workflow file [dc784e7](https://github.com/rdk-e/meta-oem-stream/commit/dc784e764bd5c0a43e936119d2dd062b2ba23a52)
- Merge pull request  [#13](https://github.com/rdk-e/meta-oem-stream/pull/13) from rdk-e/feature/ES1-1476
- ES1-1476: [RDKE] Custom collectd plugins for ES1/XIONE monitoring [a9e53ba](https://github.com/rdk-e/meta-oem-stream/commit/a9e53ba787574ebee2798d7c5000d8b992439d4b)
- Merge pull request  [#12](https://github.com/rdk-e/meta-oem-stream/pull/12) from rdk-e/remove_unused_files
- Delete .github/workflows/ci_target_repo_workflow_call_pr.yml [7bde1be](https://github.com/rdk-e/meta-oem-stream/commit/7bde1bef7d42bcf12c74041d3b442de38bce4627)
- Merge pull request  [#11](https://github.com/rdk-e/meta-oem-stream/pull/11) from rdk-e/main
## [meta-oem-realtek-stream](https://github.com/rdk-e/meta-oem-realtek-stream/blob/main/CHANGELOG.md)

- Merge branch 'release/2.3.0' [5d13c8b](https://github.com/rdk-e/meta-oem-realtek-stream/commit/5d13c8bef3d0d0ea4b20c9daed6f8b0ef012ae17)
- Merge branch 'main' into release/2.3.0 [2a501c1](https://github.com/rdk-e/meta-oem-realtek-stream/commit/2a501c1f7c1005084ab3c31749e24ce468844538)
- RDK-50706 : Update change log for XiOne UK release 2.3.0 [a7967c9](https://github.com/rdk-e/meta-oem-realtek-stream/commit/a7967c90b46936083a90688f40afff2937e0044f)
- RDK-50869 : Vendor realease 2.3.0 ( [#146](https://github.com/rdk-e/meta-oem-realtek-stream/pull/146))
- RDK-50706 : Update change log for XiOne UK release 2.2.0 ( [#145](https://github.com/rdk-e/meta-oem-realtek-stream/pull/145))
- Merge branch 'release/2.2.0' [c5ee37d](https://github.com/rdk-e/meta-oem-realtek-stream/commit/c5ee37da37a639680dccd5acef9d66b3ae1360e5)
- RDK-50706 : Update change log for XiOne UK release 2.2.0 [ae06f5e](https://github.com/rdk-e/meta-oem-realtek-stream/commit/ae06f5e2f92c3946e52ca94d56cd610b16f6e782)
- Revert "XIONE-14866: [RDKE] Custom collectd plugins for ES1/XIONE monitoring ( [#142](https://github.com/rdk-e/meta-oem-realtek-stream/pull/142))" ( [#142](https://github.com/rdk-e/meta-oem-realtek-stream/pull/142))
- XIONE-14866: [RDKE] Custom collectd plugins for ES1/XIONE monitoring ( [#142](https://github.com/rdk-e/meta-oem-realtek-stream/pull/142))
- RDK-50869 : Resolving integartion build issues ( [#139](https://github.com/rdk-e/meta-oem-realtek-stream/pull/139))
- RDK-45190 : Move gst-svp-ext recipe into vendor layer ( [#138](https://github.com/rdk-e/meta-oem-realtek-stream/pull/138))
- RDK-50706: Release activity 2.2.0. ( [#137](https://github.com/rdk-e/meta-oem-realtek-stream/pull/137))
- RDK-50814: Integrate IP service. ( [#136](https://github.com/rdk-e/meta-oem-realtek-stream/pull/136))
- RDK-45190 ( [#135](https://github.com/rdk-e/meta-oem-realtek-stream/pull/135))
- RDK-50814: Integrate IP service. ( [#134](https://github.com/rdk-e/meta-oem-realtek-stream/pull/134))
- XIONE-14669: Integrate DBG BL31. ( [#133](https://github.com/rdk-e/meta-oem-realtek-stream/pull/133))
- RDK-50439: Gstreamer version changes. ( [#132](https://github.com/rdk-e/meta-oem-realtek-stream/pull/132))
- RDK-50587: Add eth0 interface to vendor. ( [#130](https://github.com/rdk-e/meta-oem-realtek-stream/pull/130))
- RDK-50439: Sync stable2 code. ( [#125](https://github.com/rdk-e/meta-oem-realtek-stream/pull/125))
- Merge pull request  [#127](https://github.com/rdk-e/meta-oem-realtek-stream/pull/127) from rdk-e/feature/RDK-50659
- Merge pull request  [#126](https://github.com/rdk-e/meta-oem-realtek-stream/pull/126) from rdk-e/feature/XIONE-14896-cairoversion
- Merge pull request  [#128](https://github.com/rdk-e/meta-oem-realtek-stream/pull/128) from rdk-e/feature/RDK-50653
- XIONE-14896: Cairo version for RTK. [69b0b22](https://github.com/rdk-e/meta-oem-realtek-stream/commit/69b0b22f2b553a953259a3980270bd6037692528)
- RDK-50653: Remove xsign dev depends from xsign package. [b96567b](https://github.com/rdk-e/meta-oem-realtek-stream/commit/b96567b7216e5f85e37898d7ae26e114599ef6af)
- RDK-50659: Remove the versioned package. [dfecbd8](https://github.com/rdk-e/meta-oem-realtek-stream/commit/dfecbd8a71620376e44b72da31ef6fa8bd9bd794)
- Merge pull request  [#121](https://github.com/rdk-e/meta-oem-realtek-stream/pull/121) from rdk-e/feature/RDK-50270-Stable2Sync
- Merge pull request  [#118](https://github.com/rdk-e/meta-oem-realtek-stream/pull/118) from rdk-e/feature/RDK-49400-Audiocapmgrconf
- Merge pull request  [#124](https://github.com/rdk-e/meta-oem-realtek-stream/pull/124) from rdk-e/feature/RDK-50454-sysint-github
- Merge branch 'develop' into feature/RDK-49400-Audiocapmgrconf [7f3ff91](https://github.com/rdk-e/meta-oem-realtek-stream/commit/7f3ff91d26c414a67de341cafee8e41dcb6d572b)
- RDK-50454: Refer repo from github for sysint. [474ac8a](https://github.com/rdk-e/meta-oem-realtek-stream/commit/474ac8af484a262cce193a2a07f9ac4426279e7f)
- RDK-49400: Integrate audcapturemgr conf to VL. [82c2b43](https://github.com/rdk-e/meta-oem-realtek-stream/commit/82c2b4398ea15215a30d8f4fb45cc4004810a966)
- Merge pull request  [#123](https://github.com/rdk-e/meta-oem-realtek-stream/pull/123) from rdk-e/feature/RDK-50081-dbg-prod-build
- RDK-50081: Add support dev prod build. [7ea3a86](https://github.com/rdk-e/meta-oem-realtek-stream/commit/7ea3a8620ac5ebe27aef16e5c39977ac9e468be1)
- RDK-50270: Integrate HALIF headers 3.0.0. [2068ca6](https://github.com/rdk-e/meta-oem-realtek-stream/commit/2068ca6c8fb180b9b8a5c4923538cd7991acf12f)
- Merge pull request  [#117](https://github.com/rdk-e/meta-oem-realtek-stream/pull/117) from rdk-e/feature/RDK-50262-Add-MediaRite-vendor-layer-components-to-all-platforms
- Merge pull request  [#120](https://github.com/rdk-e/meta-oem-realtek-stream/pull/120) from rdk-e/feature/RDK-48217-apparmor
- RDK-48217: Removing profile header/footer from vendor apparmor profiles [07f384f](https://github.com/rdk-e/meta-oem-realtek-stream/commit/07f384fb789979e9621d8181bb0112244866e122)
- RDK-48217: (For RDKE) Removing profile header/footer from vendor apparmor profile(s). [b261254](https://github.com/rdk-e/meta-oem-realtek-stream/commit/b2612547f7d4560001a6d7b0c2282a7f434bbaf8)
- RDK-50262: Add MediaRite vendor layer components to all platforms [d79b196](https://github.com/rdk-e/meta-oem-realtek-stream/commit/d79b19601500b2953e4ccfa7425e1e8f46903927)
- Merge pull request  [#114](https://github.com/rdk-e/meta-oem-realtek-stream/pull/114) from rdk-e/feature/RDK-48217-apparmor
- RDK-48217: Installing device specific apparmor_defaults [3e28360](https://github.com/rdk-e/meta-oem-realtek-stream/commit/3e2836062c06d04b4d957141778137901ae08212)
- Merge pull request  [#113](https://github.com/rdk-e/meta-oem-realtek-stream/pull/113) from rdk-e/main
- Merge pull request  [#115](https://github.com/rdk-e/meta-oem-realtek-stream/pull/115) from rdk-e/develop
- Update apparmor-vendor.bb to install device specifi apparmor_defaults [7cb9917](https://github.com/rdk-e/meta-oem-realtek-stream/commit/7cb991740f3b04f61d2289696a1ed2087c4cf2f5)
- RDK-48217: updating apparmor-vendor.bb installing device specific apparmor_defaults [db834b0](https://github.com/rdk-e/meta-oem-realtek-stream/commit/db834b06aa54b8107713858c81be95b90cdf6933)
## [meta-oss-vendor-realtek](https://github.com/rdk-e/meta-oss-vendor-realtek/blob/main/CHANGELOG.md)

- Merge branch 'release/2.2.0' [1ff2ccc](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/1ff2ccc327545dee9634165e1081d14e037553f2)
- RDK-50706 : Update change log for XiOne UK release 2.2.0 [bd99afe](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/bd99afee1adab3802779d3e7972cadc8d72b9f17)
- XIONE-14896: Cairo version for RTK. ( [#26](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/26))
- Add GitHub Actions workflow file [8e0acc1](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/8e0acc1b01a4a3043c1f9aae46c47783b253f19e)
- XIONE-14896: Cairo version for RTK. ( [#25](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/25))
- RDK-50125: [RDK-E] Update RDKServices to latest stable2 - ResourceManager ( [#24](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/24))
- RDK-50439: Sync stable2 code. ( [#22](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/22))
- Merge pull request  [#23](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/23) from rdk-e/feature/XIONE-14896-cairoversion
- XIONE-14896: Cairo version for RTK. [cf8b249](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/cf8b2495e0b5e0cf52d93dbf2f1865203ef4ef13)
- Merge pull request  [#21](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/21) from rdk-e/main
## [meta-mediarite-vendor](https://github.com/rdk-e/meta-mediarite-vendor/blob/main/CHANGELOG.md)

- Merge branch 'release/10.0.34.0a2-1' [82914c1](https://github.com/rdk-e/meta-mediarite-vendor/commit/82914c16129c80b4e8d24b290d9e4a6028718ce7)
- RDK-50262 : Update chage log for release 10.0.34.0a2-1 [01a8838](https://github.com/rdk-e/meta-mediarite-vendor/commit/01a883822328b59ecc432bebbcfe73b3007aa5da)
- Merge pull request  [#4](https://github.com/rdk-e/meta-mediarite-vendor/pull/4) from rdk-e/feature/RDK-50262-Add-MediaRite-vendor-layer-components-to-all-platforms
- RDK-50262: Add MediaRite vendor layer components to all platforms [b05a536](https://github.com/rdk-e/meta-mediarite-vendor/commit/b05a5364b866ad757984c77accad72b8838f11a2)
- RDK-48500 : Merge tag '10.0.34.0a2' into develop [f5c1112](https://github.com/rdk-e/meta-mediarite-vendor/commit/f5c1112f7be0b9406a451cbfbb878b87b0118bdb)
- Merge branch 'release/10.0.34.0a2' [847d1ca](https://github.com/rdk-e/meta-mediarite-vendor/commit/847d1ca2837699b12e9f65ac039c28f7f0c46c4f)
- RDK-48500 : Update change log for release 10.0.34.0a2 [3cf4600](https://github.com/rdk-e/meta-mediarite-vendor/commit/3cf460037bfeeaabf04a51d2bc21a89f459146f6)
- RDK-48500 : Add Gst Plugin ( [#2](https://github.com/rdk-e/meta-mediarite-vendor/pull/2))
- RDK-48500 : Add Gst Plugin ( [#1](https://github.com/rdk-e/meta-mediarite-vendor/pull/1))
- Initialize develop [b0a1fce](https://github.com/rdk-e/meta-mediarite-vendor/commit/b0a1fce76c2abb3591a039b684292468c8c7ac67)


## Changes in component repositories

## ['iarmmgrs-hal-realtek'](https://github.com/rdk-e/iarmmgrs-soc-realtek/blob/main/CHANGELOG.md)

- Merge pull request  [#1](https://github.com/rdk-e/iarmmgrs-soc-realtek/pull/1) from rdk-e/topic/RDK-46603
- Merge branch 'topic/RDK-46603' of github.com:rdk-e/iarmmgrs-soc-realtek into topic/RDK-46603 [cdea48e](https://github.com/rdk-e/iarmmgrs-soc-realtek/commit/cdea48e530afabf98d629a0cb9ebc632cd0fdf9a)
- RDK-46603 - [RDKE] Update RDK components [f306326](https://github.com/rdk-e/iarmmgrs-soc-realtek/commit/f306326b4dde5db8f5d0a994cd9edf71d60a8921)
- RDK-46603 - [RDKE] Update RDK components to use latest Power Manager … …header release [cb6345f](https://github.com/rdk-e/iarmmgrs-soc-realtek/commit/cb6345fb75cb39be3f5848ab7d09ea7e895ccd47)
- Merge pull request  [#2](https://github.com/rdk-e/iarmmgrs-soc-realtek/pull/2) from rdk-e/develop
- Remove GitHub Actions workflow file [58af86b](https://github.com/rdk-e/iarmmgrs-soc-realtek/commit/58af86bf3aedaf8925dd89520d00a2e1c9609455)
- Add GitHub Actions workflow file [d9fca92](https://github.com/rdk-e/iarmmgrs-soc-realtek/commit/d9fca9204a3fd0f0d3d918c94e8370f8933d9243)
- RDK-46603 - [RDKE] Update RDK components to use latest Power Manager header release [100a716](https://github.com/rdk-e/iarmmgrs-soc-realtek/commit/100a716f14e86bd09681402da27f2e52dce9fbef)
- DELIA-63626: Power manger and deep sleep sky reviewed header merge [a79a686](https://github.com/rdk-e/iarmmgrs-soc-realtek/commit/a79a68683ed975bc1a785312dbdef01871b11686)
- Add CODEOWNERS file [91661c2](https://github.com/rdk-e/iarmmgrs-soc-realtek/commit/91661c2ec465edec0a56c82ace667f8f171bcbdf)

## ['apparmor-vendor'](https://github.com/rdk-e/apparmor-profiles/blob/main/CHANGELOG.md)

- Merge pull request  [#2](https://github.com/rdk-e/apparmor-profiles/pull/2) from rdk-e/feature/RDK-48217-apparmor
- Merge branch 'feature/RDK-48217-apparmor' of https://github.com/rdk-e/apparmor-profiles into feature/RDK-48217-apparmor [113f345](https://github.com/rdk-e/apparmor-profiles/commit/113f3459e08db70f12156c5a4025c6c536895ddf)
- RDK-48217: (For RDKE) Removing profile header/footer from vendor apparmor profile(s). [746ba71](https://github.com/rdk-e/apparmor-profiles/commit/746ba718804b472e9153116d51dad022a717bef5)
- RDK-48217: Updating Apparmor profile to include vendor related changes. [5502c1a](https://github.com/rdk-e/apparmor-profiles/commit/5502c1a749bec91630cb2b061cd6a86d5dbd929c)
## ['audiocapturemgr-vendor'](https://github.com/rdk-e/audiocapturemgr-soc-realtek/blob/main/CHANGELOG.md)

- DELIA-44796 - ACM Move start-up delay to XiOne Layer [a063707](https://github.com/rdk-e/audiocapturemgr-soc-realtek/commit/a063707e44eb91a3bd66b499b18f45cd5c41014d)
- Initial empty repository [018da68](https://github.com/rdk-e/audiocapturemgr-soc-realtek/commit/018da681a27a06ad7c6ac449563c593663411e7e)
