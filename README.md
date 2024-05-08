# Vendor Layer Release Notes

XiOne UK REALTEK STB RDKE Vendor Layer Release Notes

---
| Platform supported |
|-------------------|
|XiOne-UK UHD - 1319|

|Summary|Content|
|---|----|
|Classification|Confidential|
|Date|08 May 2024|
|Author|Pothiraj Paulraj|


| Components | Tag |
|----------|--------|
| Linux | 4.9.119.01-r2|
| DTB | 4.9.119.01-r2|
| packagegroup-vendor-layer| 2.0.0-r0|
| meta-rdk-halif-headers|2.1.0|
|meta-oss-reference-release|2.2.6|

## Interface versions

| # | HAL Interface Header (rdkcentral github) | version |
|---|----------------------|---------|
| 1 | media-utils-headers | 1.0.4 |
| 2 | hdmicecheader | 1.3.7 |
| 3 | deepsleep-manager-headers | 1.0.3 |
| 4 | power-manager-headers | 1.0.2 |
| 5 | devicesettings-hal-headers | 2.0.0 |
|   |   |  |
|   | RDK HAL Headers (RDKE github) |  |
|   |   |  |
| 7 | iarmmgrs-hal-headers | 2.0.1 |
| 8 | closedcaption-hal-headers  | GRT_v2 |
| 9 | iarmbus-headers  | GRT_v2 |
| 10 | rdk-gstreamer-utils-headers | 1.3.0 |


---

## Table of Contents

- [Vendor Layer Release Notes](#vendor-layer-release-notes)
  - [Table of Contents](#table-of-contents)
  - [Release Description](#release-description)
    - [Limitations](#limitations)
  - [Build instructions](#build-instructions)
    - [Boot Command](#boot-command)
  - [Testing](#testing)
  - [Release layer and components](#release-layer-and-components)
    - [Stack layer](#stack-layer)

## Release Description

The aim of this release to remove the interlayer dependencies, soc repo's moved from gerrit to github, includes latest oss 2.2.6 and bug fixes on full stack image run time.
This release will provide a versioned "meta-vendor-xione-realtek-release" that will be used by the middleware, image assembler.

The scope of this release includes:
- Migrate the repo's from gerrit to github [RDK-47858](https://ccp.sys.comcast.net/browse/RDK-47858)
- Resolve the compile and runtime issue MW integration stage[RDK-48180](https://ccp.sys.comcast.net/browse/RDK-48180)
- Need to remove the interlayer dependency between vendor and other layer for XiOne UK RTK[RDK-47851](https://ccp.sys.comcast.net/browse/RDK-47851)
- XConf over the air (OTA update) integrated to RDK-E [RDK-48019](https://ccp.sys.comcast.net/browse/RDK-48019)
- Integration of latest oss-release version of below tag version.
	1. meta-oss-reference-release - refs/tags/2.2.6
	2. meta-rdk-oss-reference - refs/tags/2.2.6
	3. poky - refs/tags/v1.0.3
	4. meta-openembedded - refs/tags/v1.0.0_dunfell

From 1.0.0 release onwards we moved some of the OSS and Middleware components to Vendor layer
- Gstreamer,westeros and mentioned in the ticket RDK-46827
- secapi3-rtk,secapi2-adapter,secapi-common-hw,secapi-rtk,secapi-common-crypto moved to Vendor layer
- Mediarite removed from Vendor layer
- Changes to accommodate Vendor specific base-files bbappend contents in Vendor layer

    
### Limitations

It should be noted that some services may not run as they have dependencies with other layers. Additionally, the exclusion of inter-layer bbappends/patches might result in the failure to start some services. These limitations should be taken into consideration during the verification process. These Limitations will be addressed in Future Releases.

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

- Created the `"vendor test image"` `"SKXI11ADS_vendor_test_20240507162855"` using the vendor layer project.
- Successfully booted the `"vendor test image"` and obtained the shell prompt.
- For this release testing was done by using feature branch feature/RDK-48711-udevmanifest for rdke-middleware-manifest/realtek-xione.xml

## Release layer and components

|Layer|Tag|
|-----|---|
|meta-vendor-layer|2.0.0|

### Stack layer

| Vendor-layer Component | (=version) |
|------------------------|------------|
|iarmmgrs-hal-realtek|2.0.1|		
|testagentlib|2.9.0|							
|emmc-read-util|3.3.4|
|otp-program| 2.2.0|								
|gstreamer1.0|1.18.5|						
|gstreamer1.0-meta-base|1.18.5|
|gstreamer1.0-plugins-good|1.18.5|
|gstreamer1.0-plugins-bad|1.18.5|
|gstreamer1.0-plugins-base|1.18.5|
|gstreamer1.0-omx|1.10.4|
|gstreamer1.0-plugins-bad-mpegtsdemux|1.18.5|
|gstreamer1.0-plugins-bad-videoparsersbad|1.18.5|
|gstreamer1.0-plugins-bad-dashdemux|1.18.5|
|gstreamer1.0-plugins-bad-opusparse|1.18.5|
|gst-plugins-mediarite|1.0.0|
|gstreamer1.0-libav|1.18.5|
|rtk-audio-service|2.0.0|
|libdrm|2.4.100|
|westeros-simpleshell|1.3.0|
|westeros-simplebuffer|1.3.0|
|westeros-soc|1.3.0|
|westeros-sink|2.0.0|
|westeros|1.0.0|
|essos|1.0.0|
|cairo|1.16.0|									
|libepoxy|1.5.4|
|python3-pygobject|3.34.0|						
|pango|1.44.7|
|make-mod-scripts|1.0.0|
|librsvg|2.40.21|
|python3-pycairo|1.19.0|
|sky-fpbutton-driver|2.8.0|
|xsign|4.0.1|
|mfrlib-hal-xione|7.0.0|
|wipe-disk-partitions|1.0.0|					
|early-display|2.0.0|							
|rtk-tee|1.0.0|
|secauthn|1.0.0|
|secapi3-rtk|3.0.0|
|secapi2-adapter|1.0.0|
|secapi-common-hw|2.3.0|						
|secapi-rtk|2.1.0|
|closedcaption-hal-realtek|2.0.0|
|dvrmgr-hal-realtek|1.0.0|
|media-utils-soc-realtek|1.0.4|
|hdmicec-hal-realtek|1.3.7|
|devicesettings-hal-realtek|2.0.0|
|secapi-crypto-rtk|2.3.0|
|secapi-common-crypto|2.3.0|
|testagent-loader|2.3.0|
|qca6390-mod-wifi|1.0.0|
|qca-hciattach|1.0.0|
|emmc-fw-update|1.0.0|
|mount-disk-partition|1.0.0|
|image-verifier-lib|6.2.0|
|flashapp|5.9.2|
|sky-led-driver|1.0.0|
|fmtsasidlibs|2.4.0|
|hank-mod-mali|1.0.0|
|rtkaudiosink|2.0.0|
|rtkv1sink|2.0.0|
|led-boot-pattern|1.0.0|
|rtkmali|2.8.0|
|platform-lib|2.6.0|
|rtk-audio-service|1.0.0|
|hdmiservice|2.0.0|
|rtkpcrclksink|2.0.0|
|rtk-platform-conf|1.0.0|
|systemaudioplatform|1.0.0|
|sky-dropbear|1.0.0|
|mfi-ree|2.0.0|
|widevinecdmi|1.0.0|
|sysint-oem|1.0.0|
|sysint-soc|1.0.0|

## Consolidated change list from vendor layer repositories
## [meta-oem-realtek-stream] (https://github.com/rdk-e/meta-oem-realtek-stream](https://github.com/rdk-e/meta-oem-realtek-stream/blob/main/CHANGELOG.md)
#### [2.0.0](https://github.com/rdk-e/meta-oem-realtek-stream/compare/1.0.2...2.0.0)

- RDK-48377:Added and modified the revisions and versions for the vendo… [`#97`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/97)
- RDK-49588:Added the secapi component into vendor layer [`#95`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/95)
- RDK-49619 : Remove the middleare depedency from bblayer conf [`#93`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/93)
- RDK-49487:Added the sysint oem component into vendor layer [`#90`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/90)
- RDK-49319 [`#88`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/88)
- RDK-47089 : Integrate the rootfs-overlay component on xione vendor layer [`#35`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/35)
- RDK-49045 : Added the proper revision for each repo from the github [`#84`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/84)
- RDK-47864 : Github Path Change in recipe for source code [`#85`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/85)
- RDK-47864 : Github Path Change for rtkv1sink rtkaudiosink [`#83`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/83)
- RDK-49064 [`#81`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/81)
- RDK-49025:Added the rdk-gstreamer-utils-platform component at vendor side [`#80`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/80)
- RDK-49024:Added the mfi-ree component as part of vendor layer [`#79`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/79)
- RDK-49023:Added the widevinecdmi at vendor layer side [`#78`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/78)
- RDK-48169 : Platform specific code for realtek -TTS & SAP [`#68`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/68)
- RDK-48870 : FlashApp Runtime Layer Depndency Removel [`#77`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/77)
- RDK-47852 : Cleanup inter layer dependency emmc read util [`#76`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/76)
- RDK-48710:Added the sky dropbear service into the vendor layer [`#71`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/71)
- RDK-48798:Installed the dri related kernel mudlues from the kernel package [`#72`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/72)
- RDK-47853 Secapi cleanup Interlayer dependency [`#74`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/74)
- RDK-46925: Cleanup SOC Specific code in rdk-gstreamer-utils [`#70`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/70)
- RDK-48006:Release Tag [`#67`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/67)
- RDK-48377:Added and modified the revisions and versions for the vendor layer components [`3991451`](https://github.com/rdk-e/meta-oem-realtek-stream/commit/39914513855b627de00c4888e1521be06d1165d3)
- RDK-46700: Platform specific code -TTS & SAP [`9a41d0c`](https://github.com/rdk-e/meta-oem-realtek-stream/commit/9a41d0ccc5396d2b515e75de1dca68db7997142e)
- RDK-47852 : Cleanup Inter layer dependency from emmc-read-util [`3ccfa1e`](https://github.com/rdk-e/meta-oem-realtek-stream/commit/3ccfa1eb1e3d8b80d3e4484fa8cad69478104809)

#### [1.0.2](https://github.com/rdk-e/meta-oem-realtek-stream/compare/1.0.1...1.0.2)

> 14 March 2024

- RDK-48006:Release changes [`#65`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/65)
- RDK-48006:Added release version for the package group [`#64`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/64)
- RDK-48006 : Update change log for XiOne UK interim release 1.0.1 [`61b4b2d`](https://github.com/rdk-e/meta-oem-realtek-stream/commit/61b4b2d82cec7ed11acb4afab000e64b76313e21)
- Update packagegroup-vendor-layer.bb [`0ccd191`](https://github.com/rdk-e/meta-oem-realtek-stream/commit/0ccd191c9b7c3c15dc6a532af644ee3be685caf3)

#### [1.0.1](https://github.com/rdk-e/meta-oem-realtek-stream/compare/1.0.0...1.0.1)

> 14 March 2024

- RDK-48006:Modified the revision for the required component [`#62`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/62)
- RDK-48073:Added missed component on vendor layer [`#61`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/61)
- RDK-48066-Need to rtkaudiosink [`#60`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/60)
- RDK-48006:Added the new oss release layer in the BBLayers file [`#59`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/59)
- RDK-47620:Need to modify the component version and packagegroup version as 1.0.0 for vendor layer release. [`#57`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/57)
- Release/1.0.0 [`#56`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/56)
- RDK-48006 : Update change log for XiOne UK interim release 1.0.1 [`3bf1316`](https://github.com/rdk-e/meta-oem-realtek-stream/commit/3bf13162553b7cf4bf577a199d1d1c974f76998f)
- RDK-48006:Modified the PR for bb file change [`c2be243`](https://github.com/rdk-e/meta-oem-realtek-stream/commit/c2be243b920a33f2506d5eb7bbc38038a8544188)
- RDK-48073:Resolved conflicts [`3b5f8f9`](https://github.com/rdk-e/meta-oem-realtek-stream/commit/3b5f8f9b09eb8109c4d5ca9d2a9408b9a93c9236)

### [1.0.0](https://github.com/rdk-e/meta-oem-realtek-stream/compare/0.1.0...1.0.0)

> 21 February 2024

- RDK-47620:Included version changes in the package group [`#55`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/55)
- RDK-47528:Added the region config in the xione uk product [`#54`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/54)
- RDK-46836:Added the imammgr-hal-realtek component [`#53`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/53)
- RDK-47523:Removed unwanted component and it's dependency headers [`#52`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/52)
- RDK-47401:Integrated the rtkmali compnent [`#49`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/49)
- RDK-46769: Added the platform lib component [`#47`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/47)
- RDK-46791:Added the testagent lib component [`#45`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/45)
- RDK-46787 : Integrate the emmc-read-util component on xione vendor layer [`#43`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/43)
- RDK-47402:Added the rtk-audio-service component [`#50`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/50)
- RDK-46842-Integrated hdmiservice component [`#48`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/48)
- RDK-46783 : Integrate the otp-program component on xione vendor layer [`#16`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/16)
- RDK-46827:Feature/rdk 46827 xione oss consumption shorterm [`#13`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/13)
- RDK-46799:Added review comments [`#51`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/51)
- RDK-46784 : Integrate the sky-fpbutton-driver component on xione vendor layer [`#17`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/17)
- RDK-46788 : Integrate the mfrlib-hal-xione,xsign component on xione vendor layer [`#9`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/9)
- RDK-46778 : Integrate the wipe-disk-partitions component on xione vendor layer [`#29`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/29)
- RDK-46850:Feature/rdk 46850 early display [`#14`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/14)
- RDK-46796:Added rtk tee component on xione vendor layer [`#23`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/23)
- RDK-47231:Added the interlayer dependency componet from RDK-V to RDK-E in vendor layer… [`#41`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/41)
- RDK-46792:Added the test agent loader component from RDKV to RDKE [`#42`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/42)
- RDK-46785 : Integrate the qca6390-mod-wifi component on xione vendor layer [`#18`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/18)
- RDK-46797: Integrate the rtkpcrclksink component [`#46`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/46)
- RDK-46782 : Integrate the qca-hciattach component on xione vendor layer [`#28`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/28)
- RDK-46795 : Integrate the emmc-fw-update component on xione vendor layer [`#40`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/40)
- RDK-46793 : Integrate the mount-disk-partition component on xione vendor layer [`#20`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/20)
- RDK-46790 : Integrate the image-verifier component on xione vendor layer [`#33`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/33)
- RDK-46789 : Integrate the flashapp component on xione vendor layer [`#36`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/36)
- RDK-46786 : Integrate the sky-led-driver component on xione vendor layer [`#19`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/19)
- RDK-46777 : Integrate the fmtsasidlibs component on xione vendor layer [`#37`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/37)
- RDK-46848:Integrated hank mod componet [`#15`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/15)
- RDK-46799:Added the rtkv1sink) component into the xione vendor layer [`#22`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/22)
- RDK-46794 : Integrate the led-boot-pattern component on xione vendor layer [`#39`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/39)
- Feature/rdk 46684 add generic img package [`#8`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/8)
- RDK-46384 include oss updates and resolve the compilation error with all latest component… [`#7`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/7)
- RDK-47620 : Update change log for XiOne UK phase2 release 1.0.0 [`165465d`](https://github.com/rdk-e/meta-oem-realtek-stream/commit/165465de1521c285399570e1220a3d2bde9c4c9c)
- RDK-47528:Added the required modification to avoid compilation issue on emmc and secapi components [`4ccd865`](https://github.com/rdk-e/meta-oem-realtek-stream/commit/4ccd865da31af909b32932bca2db491e43538b46)
- RDK-47528:Added SRCREV for sepsrately for bbappend [`ea20d6d`](https://github.com/rdk-e/meta-oem-realtek-stream/commit/ea20d6d7009e6e8496b46c55b87ecbf63b016762)

#### 0.1.0

> 15 December 2023

- Feature/rdk 45850 kernel bringup [`#5`](https://github.com/rdk-e/meta-oem-realtek-stream/pull/5)
- Added the kernel related modification and image creation files [`0242229`](https://github.com/rdk-e/meta-oem-realtek-stream/commit/0242229c29b309388587423614f6bf382e7d727c)
- Added product specific files [`ce26929`](https://github.com/rdk-e/meta-oem-realtek-stream/commit/ce269297d52836a80539a5a4ac89c34798e0a85b)
- Adding the product conf to choose the machine [`c0747c5`](https://github.com/rdk-e/meta-oem-realtek-stream/commit/c0747c57b3fdce1cb5bdf3b656cff106d71f654a)

## [meta-oem-stream] (https://github.com/rdk-e/meta-oem-stream/blob/main/CHANGELOG.md)
#### [2.0.0](https://github.com/rdk-e/meta-oem-stream/compare/1.0.0...2.0.0)

- RDK-49045:Added the proper API prototypes and removed the unnecessary enum… [`#9`](https://github.com/rdk-e/meta-oem-stream/pull/9)
- RDK-46651: Cleanup collectd component [`#7`](https://github.com/rdk-e/meta-oem-stream/pull/7)
- RDK-47620:Need to modify the component version and packagegroup version as 1.0.0 for vendor layer release. [`#6`](https://github.com/rdk-e/meta-oem-stream/pull/6)
- Release/1.0.0 [`#5`](https://github.com/rdk-e/meta-oem-stream/pull/5)
- RDK-49045:Added the proper API prototypes and removed the unnecessary enums [`8ae6c8d`](https://github.com/rdk-e/meta-oem-stream/commit/8ae6c8d758962b5d2df9181708fee4907bba760d)
- Add GitHub Actions workflow file [`368adfb`](https://github.com/rdk-e/meta-oem-stream/commit/368adfb92acaf57e9c64fb425ca6a0a9fa52553c)
- Add GitHub Actions workflow file [`c173bfa`](https://github.com/rdk-e/meta-oem-stream/commit/c173bfa420be2d31d65f247d1a9e60b7203b2b52)

### [1.0.0](https://github.com/rdk-e/meta-oem-stream/compare/0.1.0...1.0.0)

> 22 February 2024

- RDK-47231:Added the interlayer dependency componet from RDK-V to RDK-E in vendor layer [`#4`](https://github.com/rdk-e/meta-oem-stream/pull/4)
- RDK-47231:Removed unwanted files [`10565eb`](https://github.com/rdk-e/meta-oem-stream/commit/10565eb39efa1000f3a4c6a8eae0106aea56a938)
- RDK-47231:removed unwanted files [`4bace47`](https://github.com/rdk-e/meta-oem-stream/commit/4bace477b654f095730f5e171c03ec229c48c500)
- RDK-47620 : Update change log for XiOne UK phase2 release 1.0.0 [`e5ff41b`](https://github.com/rdk-e/meta-oem-stream/commit/e5ff41b993853097bc5a555e431c8982e82ca8d4)

#### 0.1.0

> 15 December 2023

- RDK-45846-Adding the product conf to choose the machine [`#2`](https://github.com/rdk-e/meta-oem-stream/pull/2)
- Initial commit [`80a29b2`](https://github.com/rdk-e/meta-oem-stream/commit/80a29b2458844ac0b0ef581363b2acea120353c6)
- Adding the product conf to choose the machine [`c8cc2bb`](https://github.com/rdk-e/meta-oem-stream/commit/c8cc2bb6961400a185d3c52399a8146fdc1ff2fc)
- RDK-46164 : Update change log for XiOne UK Initial release 0.1.0 [`cbfadaa`](https://github.com/rdk-e/meta-oem-stream/commit/cbfadaa146c5a601bd588d114d4a5beb531369fa)

## [meta-rdk-soc-realtek] (https://github.com/rdk-e/meta-rdk-soc-realtek/blob/main/CHANGELOG.md)

#### [2.0.0](https://github.com/rdk-e/meta-rdk-soc-realtek/compare/1.0.1...2.0.0)

- RDK-48711 : Need to groupadd param for vpu [`#49`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/49)
- RDK-44350 Convert qmake to cmake [`#48`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/48)
- RDK-49487:Removed unwanted systemd and added sysint component into soc layer [`#47`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/47)
- RDK-47089 : Integrate the rootfs-overlay component on xione vendor layer [`#18`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/18)
- RDK-49045 : Added the proper revision for device-settings repo from the github [`#46`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/46)
- RDK-49045:Added the Github path for all the component [`#43`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/43)
- RDK-49045:Added the proper header file inclusion [`#45`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/45)
- RDK-47864 : Github Path Change in recipe for source code [`#44`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/44)
- RDK-47864 : Github Path Change for rtkv1sink rtkaudiosink [`#42`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/42)
- RDK-46796 : Adding the rtk-tee bbappends [`#41`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/41)
- RDK-49024:Added the mfi-ree component vendor soc level [`#40`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/40)
- RDK-48182:Added .a in the platform to avoid the compilation error [`#37`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/37)
- RDK-48711:Added the group add param specific to rtk vendor [`#39`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/39)
- RDK-47853 RDK-47854 RDK-47855 RDK-47856 -Cleanup Interlayer Dependency SECAPI [`#38`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/38)
- RDK-48006:Release 1.0.1 release changes [`#36`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/36)
- RDK-44350 : Convert qmake to cmake [`186919d`](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/186919d1b581d73a40a9f41150cea9e744f65b15)
- RDK-47853 RDK-47854 RDK-47855 RDK-47856 [`7da7ff9`](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/7da7ff9424fd50b9cae7bc954a1daec6f89042c8)
- RDK-49487:Removed unwanted file from sysint component [`f5f2f2b`](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/f5f2f2b9b3747789c729117a3dacca397643f7b8)

#### [1.0.1](https://github.com/rdk-e/meta-rdk-soc-realtek/compare/1.0.0...1.0.1)

> 14 March 2024

- RDK-48006:Modified as proper path [`#34`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/34)
- RDK-47620:Need to modify the component version and packagegroup version as 1.0.0 for vendor layer release. [`#32`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/32)
- Release/1.0.0 [`#31`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/31)
- RDK-48006 : Update change log for XiOne UK interim release 1.0.1 [`94ae14a`](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/94ae14aeedd99357ead6d5b734e07f4483b8009a)

### [1.0.0](https://github.com/rdk-e/meta-rdk-soc-realtek/compare/0.1.0...1.0.0)

> 22 February 2024

- RDK-47528:Added the required modification to avoid compilation issue on secapi components [`#30`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/30)
- RDK-47514:Added needed package details [`#29`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/29)
- RDK-46842:Integrated the hdmiservice component [`#26`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/26)
- RDK-47402:Integrate the rtk-audio-service component [`#28`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/28)
- RDK-46769 Integrated the platform lib component [`#25`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/25)
- RDK-46798:Added the rtkaudio sink component [`#9`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/9)
- RDK-47401:Integated rtkmali component [`#27`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/27)
- RDK-46827:Feature/rdk 46827 xione oss consumption shorterm [`#7`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/7)
- RDK-46799:Added the rtkv1sink) component into the xione vendor layer [`#10`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/10)
- RDK-47231:Added the interlayer dependency componet from RDK-V to RDK-E in vendor layer [`#19`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/19)
- RDK-46797:Added the rtkpcrclksink component [`#24`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/24)
- RDK-46850:Feature/rdk 46850 early display  [`#23`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/23)
- RDK-46796:Added rtk tee component on xione vendor layer [`#11`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/11)
- Feature/rdk 46384 oss consumption xione [`#6`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/6)
- RDK-46827:Added the oss consumption and dependency component in soc layer [`0c390bb`](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/0c390bb5678365dd218fe7ef08de0a1dc002d9cb)
- RDK-46827:Removed unwanted files from this commit [`f580275`](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/f5802756684851a2f8ecebbc549700bad8e250e3)
- RDK-46827:Removed unwanted folder from this commit [`23b1823`](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/23b1823e7065c5734800682798b60383680d8e25)

#### 0.1.0

> 15 December 2023

- RDK-45850-Moved the kernel recipes and it is dependent recipes if available to vendor layer soc to start the kernel compilation.… [`#4`](https://github.com/rdk-e/meta-rdk-soc-realtek/pull/4)
- Moved the kernel recipes and it is dependent recipes if available to vendor layer soc to start the kernel compilation. [`b08ca6c`](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/b08ca6c987118dd0753cd5a6d1dc87ff683d4981)
- Initialize develop [`673f4c3`](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/673f4c37fd8bb35bd7f13311d31874dc19bbe9b8)
- RDK-45850 Added the review comments [`d3b1c03`](https://github.com/rdk-e/meta-rdk-soc-realtek/commit/d3b1c031791d7703292466b33b4fead311731ba5)

## [meta-oss-vendor-realtek] ([https://github.com/rdk-e/meta-rdk-soc-realtek/blob/main/CHANGELOG.md](https://github.com/rdk-e/meta-oss-vendor-realtek/blob/main/CHANGELOG.md)
#### [2.0.0](https://github.com/rdk-e/meta-oss-vendor-realtek/compare/1.0.1...2.0.0)

- RDK-49486:Sync code from stable2 to resolve AV playback issue [`#13`](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/13)
- RDK-49319 [`#12`](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/12)
- RDK-49174 : Adding omx.inc into the oss-vendor realtek specific [`#11`](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/11)
- RDK-49032:Added the proper flag to take the egl libarary [`#10`](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/10)
- RDK-48006:Release 1.0.1 changes [`#8`](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/8)
- Remove GitHub Actions workflow file [`4bcb6e9`](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/4bcb6e980b19b6598300a70fa68af2d035f411b7)
- Add GitHub Actions workflow file [`38aa18c`](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/38aa18c5a09b583debda699e6806567054797ec1)
- Remove GitHub Actions workflow file [`bb9e833`](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/bb9e8332de5a325de7020e527fd6fb507571c99d)

#### [1.0.1](https://github.com/rdk-e/meta-oss-vendor-realtek/compare/1.0.0...1.0.1)

> 14 March 2024

- RDK-48006:Update for oss release consume [`#6`](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/6)
- RDK-47620:Need to modify the component version and packagegroup version as 1.0.0 for vendor layer release. [`#5`](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/5)
- RDK-48006 : Update change log for XiOne UK interim release 1.0.1 [`a765b5b`](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/a765b5b8fb274cae904520927e8da3470142403e)
- RDK-48006:Added cairo bbappend [`d8cb23d`](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/d8cb23dd52b2eaa1af6d536cef0deaec7e9ff360)
- RDK-48006:Added the oss consumption [`f94c3c3`](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/f94c3c33a82342cc45d68fc3530cb1e0acee2c7a)

#### 1.0.0

> 22 February 2024

- Release/1.0.0 [`#4`](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/4)
- RDK-46827:Feature/rdk 46827 xione oss consumption shorterm [`#1`](https://github.com/rdk-e/meta-oss-vendor-realtek/pull/1)
- RDK-46827:Added the oss consumption componet here [`bb8c86d`](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/bb8c86d21d3923eff97e6f8c4af967ba8349ba39)
- RDK-46827:Committed the latest included westeros-sing and gstremaer omx version for rtk basef project [`b882988`](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/b882988ee0fda1c916ec3b8b3a83a695eff76840)
- Initial commit [`8685094`](https://github.com/rdk-e/meta-oss-vendor-realtek/commit/8685094bd34bd9ba0a954f51ae2c1b89fe1935f2)


