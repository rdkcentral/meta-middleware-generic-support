SUMMARY = "A vDevice image uses xfce as Desktop Enviornment"

LICENSE = "MIT"

inherit core-image

export IMAGE_BASENAME = "${PN}"

SYSTEMD_DEFAULT_TARGET = "graphical.target"

IMAGE_INSTALL  = "packagegroup-core-boot ${CORE_IMAGE_EXTRA_INSTALL}"
IMAGE_INSTALL += "gstreamer1.0 gstreamer1.0-plugins-base gstreamer1.0-plugins-good gstreamer1.0-plugins-bad gstreamer1.0-plugins-ugly"
IMAGE_INSTALL += "packagegroup-xfce-base packagegroup-xfce-extended"
IMAGE_INSTALL += "alsa-lib alsa-plugins alsa-state alsa-utils alsa-utils-scripts libsdl2 libbinder"

IMAGE_INSTALL:append = " packagegroup-middleware-layer-core-xfce "

IMAGE_FEATURES:append = " ssh-server-dropbear"
IMAGE_FEATURES:append = " x11-base"

IMAGE_PREPROCESS_COMMAND:append = " symlink_lib64;"

# To enable binaries built outside of Yocto can ran on the image because most of
# the binaries has hardcode "program interpreter" in "/lib64", but the linker in
# Yocto build is in "/lib" instead
symlink_lib64() {
	ln -sf lib ${IMAGE_ROOTFS}/lib64
}

