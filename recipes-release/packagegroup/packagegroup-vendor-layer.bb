SUMMARY = "Custom package group for vendor layer"
PACKAGE_ARCH = "${VENDOR_LAYER_ARCH}"

LICENSE = "CLOSED"

inherit packagegroup
inherit versioned-packagegroup-install-support

PV = "2.0.0"
PR = "r0"

DEPENDS = "grpc boost curl wayland glib-2.0 cairo libpcre2 libzip bluez5 alsa-lib gawk yajl libtinyxml safec "
