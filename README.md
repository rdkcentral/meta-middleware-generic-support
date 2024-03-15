XiOne UK RDKE Vendor Layer Release Notes

---

|Summary|Content|
|---|----|
|Classification|Confidential|
|Date|14 March 2024|
|Author|Pothiraj Paulraj|

| Platform supported |
|-------------------|
|XiOne-UK UHD - 1319|


| Components | Tag |
|----------|--------|
| Linux | 4.9.119.01-r1|
| DTB | 4.9.119.01-r1|
| packagegroup-vendor-layer| 1.0.2-r0|
| meta-rdk-halif-headers|1.2.0|

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

The aim of this release is to integrate new release based oss ipk's and  integrate all the vendor layer component and generate ipk from RDK-E build environment and provide to middleware, image assembler build projects to start to remove the interlayer dependencies.
This release will provide a versioned "meta-vendor-xione-realtek-release" that will be used by the middleware, image assembler.

The scope of this release includes:

- Integration of latest oss-release version of below tag version.
	1. meta-oss-reference-release - refs/tags/2.1.1
	2. meta-rdk-oss-reference - refs/tags/2.1.0
	3. poky - refs/tags/v1.0.2
	4. meta-openembedded - refs/tags/v1.0.0_dunfell
- Capturing all the inter-layer dependencies.
  [We have created the needed mw ipk's from the "topic/rdke_rtkxione" branch and uploaded in the artifacotory test server to avoid interlayer dependency ]
- Capturing all the inter-layer ".bbappends"
- Generating the versioned "meta-vendor-xione-realtek-release" to be consumed by the image assembler for generating the full stack image.

From 1.0.0 release onwards we moved some of the OSS and Middleware components to Vendor layer

- Gstreamer,westeros and mentioned in the ticket RDK-46827
- secapi3-rtk,secapi2-adapter,secapi-common-hw,secapi-rtk,secapi-common-crypto moved to Vendor layer
- Mediarite removed from Vendor layer
- Changes to accommodate Vendor specific base-files bbappend contents in Vendor layer

Note: 
1. Currently we used the gerrit repo's from "topic/rdke_rtkxione" branch for the component from vendor layer.
2. Following components we included in test server to avoid the interlayer dependencies from "topic/rdke_rtkxione". These ipk's are maintained in the below path
	"https://partners.artifactory.comcast.com/ui/repos/tree/General/opkg/xione-uk/RDK-47090/xione-uk-middleware"
        |Component|
	|---------|
	|iarmbus|
	|libbreakpadwrapper0|
	|devicesettings|
	|qtbase|
	|rmfosal|
	|qtbase-mkspecs|

	Also to avoid compilation issue we created the "feature/RDK-47632-MW-IPK-Consume-Test_Feed" and keep the feed info in the middleware.inc file.
    
### Limitations

It should be noted that some services may not run as they have dependencies with other layers. Additionally, the exclusion of inter-layer bbappends/patches might result in the failure to start some services. These limitations should be taken into consideration during the verification process. These Limitations will be addressed in Future Releases.

## Build instructions

- Steps to check out and build the vendor layer project [https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project](https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project)


### Boot Command

We will not be able to flash the image through `FlashApp`, as it is initial release..

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

- Created the `"vendor test image"` `"SKXI11ADS_vendor_test_20240314172528.bin"` using the vendor layer project.
- Successfully booted the `"vendor test image"` and obtained the shell prompt.


## Release layer and components

|Layer|Tag|
|-----|---|
|meta-vendor-layer|1.0.2|

### Stack layer

| Vendor-layer Component | (=version) |
|------------------------|------------|
|iarmmgrs-hal-realtek|1.0.0|		
|testagentlib|2.9.0|							
|emmc-read-util|1.0.0|
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
|rtk-audio-service|1.0.0|
|libdrm|2.4.100|
|westeros-simpleshell|1.3.0|
|westeros-simplebuffer|1.3.0|
|westeros-soc|1.3.0|
|westeros-sink|1.0.0|
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
|early-display|1.0.0|							
|rtk-tee|1.0.0|
|secauthn|1.0.0|
|secapi3-rtk|3.0.0|
|secapi2-adapter|1.0.0|
|secapi-common-hw|2.3.0|						
|secapi-rtk|2.1.0|
|closedcaption-hal-realtek|1.0.0|
|dvrmgr-hal-realtek|1.0.0|
|media-utils-soc-realtek|1.0.0|
|hdmicec-hal-realtek|1.0.0|
|devicesettings-hal-realtek|1.0.0|
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
|rtkaudiosink|1.0.0|
|rtkv1sink|1.0.0|
|led-boot-pattern|1.0.0|
|rtkmali|2.8.0|
|platform-lib|2.6.0|
|rtk-audio-service|1.0.0|
|hdmiservice|1.0.0|
|rtkpcrclksink|1.0.0|
