SUMMARY = "Middleware reference image"
LICENSE = "MIT"

FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

inherit core-image custom-rootfs-creation

IMAGE_INSTALL = " \
                 packagegroup-vendor-layer \
                 packagegroup-middleware-layer \
                 packagegroup-application-layer \
                 "

IMAGE_ROOTFS_SIZE ?= "8192"
IMAGE_ROOTFS_EXTRA_SPACE:append = "${@bb.utils.contains("DISTRO_FEATURES", "systemd", " + 4096", "" ,d)}"

PACKAGE_TYPE = "MIDDLE_WARE"

yocto_suffix = "${@bb.utils.contains('DISTRO_FEATURES', 'kirkstone', 'kirkstone', 'dunfell', d)}"

# All kirstone builds use qt515 and dunfell use qt512
#qt_version = "${@bb.utils.contains('DISTRO_FEATURES', 'kirkstone', 'qt515', 'qt512', d)}"

# RDKE dunfell uses qt512, configure the same qt512 with kirkstone. Qt can be upgraded later once qt 515 becomes stable in RDKV release.
qt_version = "qt512"

ROOTFS_POSTPROCESS_COMMAND += "create_init_link; "
create_init_link() {
        ln -sf /sbin/init ${IMAGE_ROOTFS}/init
}

# Binding to 0.0.0.0 should be allowed only for VBN images
wpeframework_binding_patch(){
    if [ -f "${IMAGE_ROOTFS}/etc/WPEFramework/config.json" ]; then
        sed -i "s/127.0.0.1/0.0.0.0/g" ${IMAGE_ROOTFS}/etc/WPEFramework/config.json
    fi
}
ROOTFS_POSTPROCESS_COMMAND += "wpeframework_binding_patch; "

ROOTFS_POSTPROCESS_COMMAND += "image_size_cleanup; "
image_size_cleanup() {
    # remove qmlplugins and plugins from rootfs -> RDK-47966
    rm -rf ${IMAGE_ROOTFS}/usr/lib/qml
    rm -rf ${IMAGE_ROOTFS}/usr/lib/plugins/qmltooling
}
