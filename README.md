XiOne UK RDKE Vendor Layer Release Notes

---

|Summary|Content|
|---|----|
|Classification|Confidential|
|Document Version|Issue 0|
|Date|15th December 2023|
|Author|Pothiraj|

| Components | Tag |
|----------|--------|
| Linux | 4.9.119.01-r0|
| DTB | 4.9.119.01-r0|

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

Vendor release 0.1.0 having kernel and dtb recipes moved to Vendor layer

The scope of this release includes:

- New build framework changes 

### Limitations

Since this is initial vendor release involves base kernel and required core bootup recipes to boot the box and can see the boot prompt .

## Build instructions

- Steps to check out and build the vendor layer project [https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project](https://etwiki.sys.comcast.net/display/RDKAR/Vendor+Layer+Project)

- Steps to check out and build the image assembler project [https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler](https://etwiki.sys.comcast.net/display/RDKAR/Image+Assembler)

### Boot Command

We will not be able to flash the image through `FlashApp`, as it is initial release..

- Copy the image to the usb and connect to the TV
- Switch on the TV
- Press `"enter"` button to get the bootloader prompt.
- From bootloader prompt, run `"xbta"`
- Choose option `c` (flashing image)
- Choose select option `i/j` (depends on from which bank the image is booting)
- Enter the image name which we need to copy.
- Choose the option `"exit"`
- Choose the option `"exit"`
- Enter `"yes"` (automatically reboot the box)

## Testing

- Created the `"vendor test image"` `"vendor-test-image-xione-uk-20231215165651.bin"` using the vendor layer project.
- Successfully booted the `"vendor test image"` and obtained the shell prompt.


## Release layer and components

### Stack layer

| Layer | Tag |
|------|------|
|meta-vendor-layer| 0.1.0|
