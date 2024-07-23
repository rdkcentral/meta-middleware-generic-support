# Vendor Layer Release Notes

XiOne UK REALTEK STB RDKE Vendor Layer Release Notes

---

|Platforms supported|
|-------|
|XiOne-UK UHD - 1319|

|Summary|Content|
|---|----|
|Classification|Confidential|
|Date|22 Jul 2024|
|Author|pothiraj.paulraj@sky.uk|


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
  - [Vendor Layer Component Integration Details](#vendor-layer-component-integration-details)
  - [Consolidated change list from vendor layer repositories](#consolidated-change-list-from-vendor-layer-repositories)
    - [Changes in meta repositories](#changes-in-meta-repositories)
    - [Changes in component repositories](#changes-in-component-repositories)

## Release Description

The aim of this release to integrate the latest oss release 3.1.0 which has libsoup for HBBTV. This release will provide a versioned "meta-vendor-xione-realtek-release" that will be used by the middleware, image assembler.

The scope of this release includes:

- OSS 3.1.0 release integartion [RDK-50924](https://ccp.sys.comcast.net/browse/RDK-50924)
- Netflix playback lands on "tvq-pb-101(8.1)" error code [XIONE-14855](https://ccp.sys.comcast.net/browse/XIONE-14855)
- Collectd plugins realtek [RDK-51740](https://ccp.sys.comcast.net/browse/RDK-51740)

### Vendor Release Components

| Vendor Release Components | New Version | Version in Previous Release (2.3.0) | ChangeList |
|------------|---------|------------------------------------|----------------|
| Linux |  | 4.9.119.01-r4 | |
| DTB |  | 4.9.119.01-r4 | |
| packagegroup-vendor-layer | **2.5.0-r0** | 2.3.0-r0 | [2.3.0...2.5.0](https://github.com/rdk-e/meta-oem-realtek-stream/compare/2.3.0...2.5.0) |

### Meta Repos

#### Meta repos maintained by layers layer 

| Meta Repo | New Version | Version in Previous Release (2.3.0) | ChangeList |
|------------|---------|------------------------------------|--------------|
| [meta-oss-reference-release](#meta-oss-reference-release) |  **3.1.0** | 3.0.4 | [3.0.4...3.1.0](https://github.com/rdk-e/meta-oss-reference-release/compare/3.0.4...3.1.0) |
| [meta-rdk-oss-reference](#meta-rdk-oss-reference) |  **3.1.0** | 3.0.4 | [3.0.4...3.1.0](https://github.com/rdk-e/meta-rdk-oss-reference/compare/3.0.4...3.1.0) |
| [meta-rdk-tools](#meta-rdk-tools) |  **2.1.0** | NA | [2.1.0](https://github.com/rdk-e/meta-rdk-tools/commits/2.1.0) |
| meta-vts |  | 1.1.1 | |
| [meta-rdk-soc-realtek](#meta-rdk-soc-realtek) |  **2.4.0** | 2.2.0 | [2.2.0...2.4.0](https://github.com/rdk-e/meta-rdk-soc-realtek/compare/2.2.0...2.4.0) |
| meta-oem-stream |  | 2.2.0 | |
| [meta-oem-realtek-stream](#meta-oem-realtek-stream) |  **2.5.0** | 2.3.0 | [2.3.0...2.5.0](https://github.com/rdk-e/meta-oem-realtek-stream/compare/2.3.0...2.5.0) |
| meta-oss-vendor-realtek |  | 2.2.0 | |
| meta-mediarite-vendor |  | 10.0.34.0a2-1 | |


#### Meta repos common for RDK-E

| Meta Repo | New Version | Version in Previous Release (2.3.0) | ChangeList |
|------------|---------|------------------------------------|--------------|
| **buildscripts** ||||
| build-scripts |  **2.0.5** | 2.0.3 | [2.0.3...2.0.5](https://github.com/rdk-e/build-scripts/compare/2.0.3...2.0.5) |
| | | | | |
| **imagebuilder** ||||
| meta-image-support |  **3.0.3** | 3.0.1 | [3.0.1...3.0.3](https://github.com/rdk-e/meta-image-support/compare/3.0.1...3.0.3) |
| | | | | |
| **oe** ||||
| meta-openembedded |  | v1.0.0_dunfell | |
| poky |  | v1.0.4 | |
| | | | | |
| **configs** ||||
| rdke-region-uk-config |  **2.1.0** | 2.0.2 | [2.0.2...2.1.0](https://github.com/rdk-e/rdke-region-uk-config/compare/2.0.2...2.1.0) |
| rdke-common-config |  **1.0.8** | 2e690f0 | [2e690f0...1.0.8](https://github.com/rdk-e/rdke-common-config/compare/2e690f0a544394461114d5fe95224c42353d9576...1.0.8) |
| rdke-stb-config |  **1.0.1** | 1.0.0 | [1.0.0...1.0.1](https://github.com/rdk-e/rdke-stb-config/compare/1.0.0...1.0.1) |
| | | | | |
| **rdk** ||||
| meta-rdk-halif-headers |  | 3.0.1 | |
| | | | | |
| **products** ||||
| meta-product-xione |  **2.3.0** | 2.2.0 | [2.2.0...2.3.0](https://github.com/rdk-e/meta-product-xione/compare/2.2.0...2.3.0) |
| | | | | |

### Interface versions

| # | HAL Interface Header (rdkcentral github) | New Version | Versionfrom Previous Release (2.3.0)
|---|------------------------------------------|-------------|----------------------|
| 1 | media-utils-headers | | 1.0.4 |
| 2 | hdmicecheader | | 1.3.7 |
| 3 | deepsleep-manager-headers | | 1.0.3 |
| 4 | power-manager-headers | | 1.0.2 |
| 5 | devicesettings-hal-headers | | 2.0.0 |
| 6 | tvsettings-hal-headers | | 1.2.0 |
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

- Created the `"vendor test image"` `"SKXI11ADS_vendor_test_20240722152618.bin"` using the vendor layer project.
- Successfully booted the `"vendor test image"` and obtained the shell prompt.
- For this release testing was done by using feature branch feature/RDK-51635-Release-240 for rdke-middleware-manifest/realtek-xione.xml

## Release layer and components

### Stack layer

| Layer | Tag |
|------|------|
| [meta-vendor-xione-realtek-release](https://github.com/rdk-e/meta-vendor-xione-realtek-release) | 2.5.0 |
#### Artifactory Location for IPKs -  https://partners.artifactory.comcast.com/ui/repos/tree/General/opkg/xione-uk/ipks/xione-uk-vendor/2-5-0

### Components details in 'packagegroup-vendor-layer'

 Components which are prebuilt or the ones which installs config files or scripts from meta layer have SRCREV marked as NA 


| # | Vendor layer Component | New PV-PR | PV-PR in Previous Release (2.3.0)| New SRCREV | SRCREV in Previous Release (2.3.0)| Diff |
|---|------------------------------------------|-------------|----------------------|-----------|------------|-----|
| 1 | media-utils-soc-realtek |  | **1.0.4-1.0.0-r0** | | **GRT_STB_v2** | |
| 2 | closedcaption-hal-realtek | | **1.0.0-1.0.0-r0** | | **GRT_STB_v2** |  |
| 3 | hdmicec-hal-realtek | | **1.3.7-1.0.0-r0** | | **GRT_STB_v2** | |
| 4 | iarmmgrs-hal-realtek | | 2.0.1-1.0.0-r0 |  | GRT_STB_v2 | |
| 5 | rdk-gstreamer-utils-platform | | 1.3.0-r0 |  | 739cdb7 | |
| 6 | devicesettings-hal-realtek | | 2.0.0-1.0.0-r0 |  |  | |
| - |  - devicesettings-hal-realtek_devicesettingssocrealtek | |  |  | GRT_STB_v2 | |
| - |  - devicesettings-hal-realtek_devicesettingsskyxione | |  |  | GRT_STB_v2 | |
| 7 | rtk-platform-conf | | 2.6.0-r0 |  | NA | |
| 8 | testagentlib | | 2.9.0-r0 |  | NA | |
| 9 | emmc-read-util | | 3.3.4-r0 |  | NA | |
| 10 | otp-program | | 2.2-r1 |  | NA | |
| 11 | gstreamer1.0 | | 1.18.5-r2 |  | NA | |
| 12 | gstreamer1.0-meta-base | | 1.18.5-r2 |  | NA | |
| 13 | gstreamer1.0-omx | | 1.10.4-r2 |  | NA | |
| 14 | gstreamer1.0-libav | | 1.18.5-r2 |  | NA | |
| 15 | gstreamer1.0-plugins-good | | 1.18.5-r2 |  | NA | |
| 16 | gstreamer1.0-plugins-good-meta | | 1.18.5-r2 |  | NA | |
| 17 | gstreamer1.0-plugins-bad | | 1.18.5-r2 |  | NA | |
| 18 | gstreamer1.0-plugins-bad-meta | | 1.18.5-r2 |  | NA | |
| 19 | gstreamer1.0-rtsp-server | | 1.18.5-r2 |  | NA | |
| 20 | gstreamer1.0-plugins-base | | 1.18.5-r2 |  | NA | |
| 21 | gstreamer1.0-plugins-base-meta | | 1.18.5-r2 |  | NA | |
| 22 | gstreamer1.0-plugins-base-playback | | 1.18.5-r2 |  | NA | |
| 23 | gstreamer1.0-plugins-good-wavparse | | 1.18.5-r2 |  | NA | |
| 24 | gstreamer1.0-plugins-good-audiofx | | 1.18.5-r2 |  | NA | |
| 25 | gstreamer1.0-plugins-good-isomp4 | | 1.18.5-r2 |  | NA | |
| 26 | gstreamer1.0-plugins-good-audioparsers | | 1.18.5-r2 |  | NA | |
| 27 | gstreamer1.0-plugins-good-soup | | 1.18.5-r2 |  | NA | |
| 28 | gstreamer1.0-plugins-base-gio | | 1.18.5-r2 |  | NA | |
| 29 | gstreamer1.0-plugins-base-videoconvert | | 1.18.5-r2 |  | NA | |
| 30 | gstreamer1.0-plugins-base-videoscale | | 1.18.5-r2 |  | NA | |
| 31 | gstreamer1.0-plugins-base-volume | | 1.18.5-r2 |  | NA | |
| 32 | gstreamer1.0-plugins-base-typefindfunctions | | 1.18.5-r2 |  | NA | |
| 33 | gstreamer1.0-plugins-good-autodetect | | 1.18.5-r2 |  | NA | |
| 34 | gstreamer1.0-plugins-good-avi | | 1.18.5-r2 |  | NA | |
| 35 | gstreamer1.0-plugins-good-deinterlace | | 1.18.5-r2 |  | NA | |
| 36 | gstreamer1.0-plugins-good-interleave | | 1.18.5-r2 |  | NA | |
| 37 | gstreamer1.0-plugins-bad-dash | | 1.18.5-r2 |  | NA | |
| 38 | gstreamer1.0-plugins-bad-mpegtsdemux | | 1.18.5-r2 |  | NA | |
| 39 | gstreamer1.0-plugins-bad-smoothstreaming | | 1.18.5-r2 |  | NA | |
| 40 | gstreamer1.0-plugins-bad-videoparsersbad | | 1.18.5-r2 |  | NA | |
| 41 | gstreamer1.0-plugins-bad-opusparse | | 1.18.5-r2 |  | NA | |
| 42 | gstreamer1.0-plugins-bad-dashdemux | | 1.18.5-r2 |  | NA | |
| 43 | gstreamer1.0-plugins-good-matroska | | 1.18.5-r2 |  | NA | |
| 44 | gstreamer1.0-plugins-base-app | | 1.18.5-r2 |  | NA | |
| 45 | gstreamer1.0-plugins-base-audioconvert | | 1.18.5-r2 |  | NA | |
| 46 | gstreamer1.0-plugins-base-audioresample | | 1.18.5-r2 |  | NA | |
| 47 | rtk-audio-service | | 2.0.0-r0 |  | e52aef88fc80d0e3b6166000e8553a7b7dc7fa7a & 6bb3a0f37357296c4f0697c1c4ecd9d69f45eb02 | |
| 48 | libdrm | | 2.4.100-r0 |  | NA | |
| 49 | westeros-simpleshell | | 1.3.0-r0 |  | NA | |
| 50 | westeros-simplebuffer | | 1.3.0-r0 |  | NA | |
| 51 | westeros-soc | | 1.3.0-r1 |  | NA | |
| 52 | westeros-sink | | 2.0.0-r0 |  | 5724b0f | |
| 53 | westeros | | 1.0.0-r0 |  | NA | |
| 54 | essos | | 1.0.0-r0 |  | NA | |
| 55 | cairo | | 1.16.0-r0 |  | NA | |
| 56 | libepoxy | | 1.5.4-r1 |  | NA | |
| 57 | python3-pygobject | | 3.34.0-r0 |  | NA | |
| 58 | pango | | 1.44.7-r0 |  | NA | |
| 59 | make-mod-scripts | | 1.0-r0 |  | NA | |
| 60 | librsvg | | 2.40.21-r0 |  | NA | |
| 61 | python3-pycairo | | 1.19.0-r0 |  | NA | |
| 62 | sky-fpbutton-driver | | 2.8-r0 |  | NA | |
| 63 | xsign | | 4.0.1-r1 |  | NA | |
| 64 | mfrlib-hal-xione | | 7.0.4-r0 |  | NA | |
| 65 | wipe-disk-partitions | | 1.0.0-r0 |  | NA | |
| 66 | early-display | | 2.0.0-r0 |  | GRT_STB_v2 | |
| 67 | rtk-tee | | 1.0.0-r0 |  | NA | |
| 68 | secauthn | | 1.0.0-r0 |  | NA | |
| 69 | secapi-rtk | **2.1.0-r1** | 2.1.0-r0 |  | 95b6bd4 | |
| 70 | secapi3-rtk | | 3.0.0-r0 |  | aa3c293 | |
| 71 | secapi2-adapter | | 1.0.0-r0 |  | NA | |
| 72 | secapi-common-hw | | 2.3.0-r0 |  | 3a51b88 | |
| 73 | secapi-netflix | | 1.0.0-r0 |  |  | |
| - |  - secapi-netflix_com_inc_rtk | |  |  | 0fa3af3 | |
| - |  - secapi-netflix_socrealtek | |  |  | d3c7c87 | |
| 74 | gst-svp-ext | | 1.0.0-r0 |  | NA | |
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
| 88 | hank-mod-mali | | 1.0.0-r1 |  | GRT_STB_v2 | |
| 89 | rtkv1sink | | 2.0.0-r0 |  | GRT_STB_v2 | |
| 90 | led-boot-pattern | | 1.0.0-r0 |  | NA | |
| 91 | rtkmali | | 2.8.0-r0 |  | NA | |
| 92 | platform-lib | | 2.6.0-r2 |  | NA | |
| 93 | hdmiservice | | 2.0.0-r0 |  | GRT_STB_v2 | |
| 94 | rtkpcrclksink | | 2.0.0-r0 |  | GRT_STB_v2 | |
| 95 | linux-libc-headers | | 4.9-r4 |  | NA | |
| 96 | packagegroup-kernel-modules | | 4.9.119.01-r4 |  | NA | |
| 97 | linux-hank | | 4.9.119.01-r4 |  | e608d5f | |
| 98 | mediarite-vendor | | 10.0.34.0a2-r0 |  | NA | |
| 99 | gst-plugins-mediarite | | 1.0-r0 |  | NA | |
| 100 | rtkaudiosink | | 2.0.0-r0 |  | GRT_STB_v2 | |
| 101 | sky-dropbear | | 1.0.0-r0 |  | NA | |
| 102 | mfi-ree | | 2.0.0-r0 |  | GRT_v2 | |
| 103 | sysint-oem | | 1.0.0-r0 |  | ec0f597 | |
| 104 | sysint-soc | | 1.0.0-r0 |  | c3ae6f4 | |
| 105 | apparmor-vendor | | 1.0.0-r0 |  | 41e3674 | |
| 106 | directfb | | 1.7.7-r0 |  | NA | |
| 107 | audiocapturemgr-vendor | | 1.0.0-r0 |  | a063707 | |
| 108 | realtek-collectd-plugins | **1.0.0-r0** | NA | **032a4be** | NA |  [](https://github.com/rdk-e/hdmicec-soc-realtek) |




## Consolidated change list from vendor layer repositories

## Changes in meta repositories

## [meta-oss-reference-release](https://github.com/rdk-e/meta-oss-reference-release/blob/main/CHANGELOG.md)

- Merge branch 'release/3.1.0' into main [36c7870](https://github.com/rdk-e/meta-oss-reference-release/commit/36c7870e84eb6c397419a9ee5b95a27ea8adb0ba)
- RDK-50924: OSS Release 3.1.0 [2a7d93b](https://github.com/rdk-e/meta-oss-reference-release/commit/2a7d93b09f935be97ac09cd38cdf4a7e2b07e1fa)
- Merge pull request  [#47](https://github.com/rdk-e/meta-oss-reference-release/pull/47) from rdk-e/feature/rel_3_1_0
- RDK-50924: OSS release 3.1.0 [a57167c](https://github.com/rdk-e/meta-oss-reference-release/commit/a57167c44a88304b690e5b24ae7f0f2ede9f3e64)
- Merge tag '3.0.4' into develop [20f0f30](https://github.com/rdk-e/meta-oss-reference-release/commit/20f0f302b052dedec8d539c431b415b2678e859f)
## [meta-rdk-oss-reference](https://github.com/rdk-e/meta-rdk-oss-reference/blob/main/CHANGELOG.md)

- Merge branch 'release/3.1.0' into main [9295112](https://github.com/rdk-e/meta-rdk-oss-reference/commit/92951123f4258c8c9ae99b307ee579077425897e)
- RDK-50924: OSS release 3.1.0 [e1c0ddd](https://github.com/rdk-e/meta-rdk-oss-reference/commit/e1c0dddeeb358ebd8d8e6e34c3221483146e416c)
- RDK-50924: Update oss release version 3.1.0 [a325b11](https://github.com/rdk-e/meta-rdk-oss-reference/commit/a325b116a74061715dc001022c7fa1311e1f5673)
- RDK-50689: libsoup3 support for HBBTV feature [003cf28](https://github.com/rdk-e/meta-rdk-oss-reference/commit/003cf282e7328f3339df1be174c41bacb06ede63)
- RDK-50394: Move comcast specific lighttpd certs to comcast meta layer [3cec329](https://github.com/rdk-e/meta-rdk-oss-reference/commit/3cec329f63c9f45bf5e6ebf1bdf7ca5c76932fd5)
- RDK-50394: Move comcast specific lighttpd certs to comcast meta layer [534b565](https://github.com/rdk-e/meta-rdk-oss-reference/commit/534b5650ac491c84f8ce2150fc17747aff877e2e)
- RDK-49604 : Remove RDK component pxcore-libnode from RDKE [ad8e788](https://github.com/rdk-e/meta-rdk-oss-reference/commit/ad8e788b93ff3e75d6c43b3f0de86af3ba5182eb)
- RDK-49791: Remove swap file [7f167d5](https://github.com/rdk-e/meta-rdk-oss-reference/commit/7f167d5764e5bb76290486180fd55207de319b61)
- Merge tag '3.0.4' into develop [1e3a452](https://github.com/rdk-e/meta-rdk-oss-reference/commit/1e3a4529e3b7bc8e5d6170a3306c2f679d3ed957)
## [meta-rdk-tools](https://github.com/rdk-e/meta-rdk-tools/blob/main/CHANGELOG.md)

- Merge tag '2.1.0' into develop [6de64dd](https://github.com/rdk-e/meta-rdk-tools/commit/6de64dd5d25cc1951db99717b38aafdfbc3a0a28)
- Merge branch 'release/2.1.0' into main [566f5cf](https://github.com/rdk-e/meta-rdk-tools/commit/566f5cf4c52d1db7a4ca0b7f70696683062e9186)
- Changelog updates for 2.1.0 release [96982b6](https://github.com/rdk-e/meta-rdk-tools/commit/96982b60ef76bf2b35e0934d4a6d01a5fc28cb9d)
- ES1-1476: [RDKE] Custom collectd plugins for ES1/XIONE monitoring ( [#9](https://github.com/rdk-e/meta-rdk-tools/pull/9))
- Merge pull request  [#8](https://github.com/rdk-e/meta-rdk-tools/pull/8) from rdk-e/feature/RDKTV-30726
- RDKTV-30726: [collectd] Data metrics not populated in the Dashboard [b166e9e](https://github.com/rdk-e/meta-rdk-tools/commit/b166e9e9ed47834f5494292f319fe51697be0793)
- Merge pull request  [#7](https://github.com/rdk-e/meta-rdk-tools/pull/7) from rdk-e/feature/RDK-49592-conf
- RDK-49592: Create layer for performance tools meta-rdk-tools [a2561b0](https://github.com/rdk-e/meta-rdk-tools/commit/a2561b076acafd8c4d61587828697c4925e2cb22)
- Merge pull request  [#6](https://github.com/rdk-e/meta-rdk-tools/pull/6) from rdk-e/feature/RDK-49592-vol
- RDK-49592: Create layer for performance tools meta-rdk-tools [922b157](https://github.com/rdk-e/meta-rdk-tools/commit/922b157b333b4dd7c907dfacc8c89db277933c61)
- Merge pull request  [#4](https://github.com/rdk-e/meta-rdk-tools/pull/4) from rdk-e/feature/RDK-49592
- Update rdk-collectd-plugins.bb [9c8c937](https://github.com/rdk-e/meta-rdk-tools/commit/9c8c937fd348510cacefcf1467d8500cf7724196)
- Update amlogic-collectd-plugins.bb [84b2c76](https://github.com/rdk-e/meta-rdk-tools/commit/84b2c76c6f0b54a05bdc4687a8e044dc3d5eef2e)
- Update package_revisions_tools.inc [627ff72](https://github.com/rdk-e/meta-rdk-tools/commit/627ff72371d420e80341228c858d7fc8e6d2dca9)
- RDK-49592: Update package_revisions_tools.inc [6fe23fa](https://github.com/rdk-e/meta-rdk-tools/commit/6fe23fae21a6ac7e487aed50c8394169b003f1c8)
- Update collectd_%.bbappend [33fe452](https://github.com/rdk-e/meta-rdk-tools/commit/33fe4526c7d05a21f5fb919ddfd7170a0bbfd439)
- Update package_revisions_tools.inc [9a85b0a](https://github.com/rdk-e/meta-rdk-tools/commit/9a85b0a25a94e83ff614102db691f72d49fb4bca)
- RDK-49592: Move collectd to tools repo [072b2d6](https://github.com/rdk-e/meta-rdk-tools/commit/072b2d62f7d04bf97c1b29d92a5dca4168bc4e2b)
- Update rdk-collectd-plugins.bb [bf03f6e](https://github.com/rdk-e/meta-rdk-tools/commit/bf03f6eabf0571d91bc005be1975892a91e5cd18)
- Update amlogic-collectd-plugins.bb [a71920f](https://github.com/rdk-e/meta-rdk-tools/commit/a71920f988c5bfc8d04fd51e935f845fe22aeb24)
- Update package_revisions_tools.inc [cb9c34f](https://github.com/rdk-e/meta-rdk-tools/commit/cb9c34f26a6c5357b40f620dc3deb62cc2fe49e2)
- Update rdk-collectd-plugins.bb [dc140ef](https://github.com/rdk-e/meta-rdk-tools/commit/dc140ef89385ffe74df63024b830563da34f11fa)
- Update package_revisions_tools.inc [ca51532](https://github.com/rdk-e/meta-rdk-tools/commit/ca515321af008e5e053c1510529ea1d5ee110950)
- Update collectd_%.bbappend [e3980c7](https://github.com/rdk-e/meta-rdk-tools/commit/e3980c7a5ac7f7243e5e1564b03c28ae6960c718)
- Update collectd_%.bbappend [46fbec8](https://github.com/rdk-e/meta-rdk-tools/commit/46fbec85290844c98ec98508162ef4e199851542)
- RDK-49592: Move collectd to tools repo [5a7fe1f](https://github.com/rdk-e/meta-rdk-tools/commit/5a7fe1f4db15b66a57af154811b0f1d013f76818)
- Merge pull request  [#2](https://github.com/rdk-e/meta-rdk-tools/pull/2) from rdk-e/feature/RDK-49082
- RDK-49082: Update package_revisions_tools.inc [b86d66f](https://github.com/rdk-e/meta-rdk-tools/commit/b86d66f777330afdfc6d5ad9e1609f4819c74a0c)
- RDK-49082: Add performance to tools to new meta-rdk-tools layer [6a1ccc7](https://github.com/rdk-e/meta-rdk-tools/commit/6a1ccc7b1b0bdeaf09127bb340f4fd5bdddcc704)
- Update and rename collectd-service.conf to collectd.service [25276e0](https://github.com/rdk-e/meta-rdk-tools/commit/25276e07f6a8508f98c24df59051ce09fd0383e7)
- RDK-49082: Add performance to tools to new meta-rdk-tools layer [ba1b559](https://github.com/rdk-e/meta-rdk-tools/commit/ba1b559df04a4615fd6baa8e4fc029927621d28f)
- RDK-49082: Add performance to tools to new meta-rdk-tools layer [818b43d](https://github.com/rdk-e/meta-rdk-tools/commit/818b43d13dd604eb8a63363c5e82c4c218756379)
- Add CODEOWNERS file [4c78bd8](https://github.com/rdk-e/meta-rdk-tools/commit/4c78bd8e40def5a982eda5223236d28c3687f332)
- Initial commit [c744e98](https://github.com/rdk-e/meta-rdk-tools/commit/c744e98f1de1367c4396a1d33f9ead921ee13072)
## [meta-rdk-soc-realtek](https://github.com/rdk-e/meta-rdk-soc-realtek/blob/main/CHANGELOG.md)

- Merge branch 'release/2.4.0' [e5be784](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/e5be7848610b6bb782447edf30e15c8902937db1)
- Merge branch 'main' into release/2.4.0 [bfcdd8d](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/bfcdd8d5becacbc0487e1c556255faf6943e7cca)
- RDK-51635 : Update change log for XiOne UK release 2.4.0 [f7c6b0d](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/f7c6b0df41488df1091dcc488accc3a9d5af7159)
- XIONE-14855: Netflix playback lands on tvq-pb-101(8.1) error code ( [#67](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/67))
- RDK-50706 : Update change log for XiOne UK release 2.2.0 ( [#66](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/66))
## [meta-oem-realtek-stream](https://github.com/rdk-e/meta-oem-realtek-stream/blob/main/CHANGELOG.md)

- Merge branch 'release/2.5.0' [9969732](https://github.com/rdk-e/meta-oem-realtek-stream/commit/996973288f608444a49bb1277473bdeadc3513ef)
- Merge branch 'main' into release/2.5.0 [3751476](https://github.com/rdk-e/meta-oem-realtek-stream/commit/375147627beeebccc6b0548dc404d6a84bf139a8)
- RDK-51635 : Update change log for XiOne UK release 2.5.0 [9c57319](https://github.com/rdk-e/meta-oem-realtek-stream/commit/9c573198d1deeaa6271ec7b280c40152a4c515e2)
- RDK-51742: Display VL Name. ( [#156](https://github.com/rdk-e/meta-oem-realtek-stream/pull/156))
- RDK-51740: Add realtek collectd plugin version. ( [#155](https://github.com/rdk-e/meta-oem-realtek-stream/pull/155))
- RDK-51635: Vendor Release 2.4.0. ( [#153](https://github.com/rdk-e/meta-oem-realtek-stream/pull/153))
- Merge branch 'release/2.4.0' [ea63e7c](https://github.com/rdk-e/meta-oem-realtek-stream/commit/ea63e7c02f347e82c6a25f285a0968533c6774bc)
- Merge branch 'main' into release/2.4.0 [51946d9](https://github.com/rdk-e/meta-oem-realtek-stream/commit/51946d9a4f98446d6178da36f0c8303eedeedc15)
- RDK-51635 : Update change log for XiOne UK release 2.4.0 [77ea994](https://github.com/rdk-e/meta-oem-realtek-stream/commit/77ea99402a62e394d01121deef644aba4bc978bb)
- RDK-51635: Vendor Release 2.4.0. ( [#151](https://github.com/rdk-e/meta-oem-realtek-stream/pull/151))
- RDK-51444 : Dynamic Halif header version ( [#150](https://github.com/rdk-e/meta-oem-realtek-stream/pull/150))
- Revert "Revert "XIONE-14866: [RDKE] Custom collectd plugins for ES1/XIONE monitoring ( [#142](https://github.com/rdk-e/meta-oem-realtek-stream/pull/142))" ( [#142](https://github.com/rdk-e/meta-oem-realtek-stream/pull/142))" ( [#142](https://github.com/rdk-e/meta-oem-realtek-stream/pull/142))
- Merge pull request  [#141](https://github.com/rdk-e/meta-oem-realtek-stream/pull/141) from rdk-e/feature/RDK-48633
- RDK-50706 : Update change log for XiOne UK release 2.3.0 ( [#148](https://github.com/rdk-e/meta-oem-realtek-stream/pull/148))
- RDK-48633 :Remove all product/platform/region specific build time configs/variables/distro features [48a6216](https://github.com/rdk-e/meta-oem-realtek-stream/commit/48a62162a4dd28e90a2ba134c61ee8edba3b06f3)
- RDK-48633 :Remove all product/platform/region specific build time configs/variables/distro features [f9640f4](https://github.com/rdk-e/meta-oem-realtek-stream/commit/f9640f43bd2d384217ec34266915172a11270624)


## Changes in component repositories

