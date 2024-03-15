DESCRIPTION = "Relaese iImage and dtb"
SECTION = "core"
LICENSE = "CLOSED"

inherit bin_package
inherit kernel

COMPATIBLE_MACHINE = "(hank)"

LINUX_VERSION = "${LINUXLIBCVERSION}"
PV = "${LINUXLIBCVERSION}.${KERNEL_PV}"
PR = "r1"

SRC_URI = "\
   ${VENDOR_IPK_SERVER_PATH}/kernel-image-${KERNEL_IMAGETYPE}-${LINUX_VERSION}_${PV}-${PR}_${MACHINE}-vendor.ipk;subdir=${BP};name=vendor-linux \
   ${VENDOR_IPK_SERVER_PATH}/kernel-devicetree_${PV}-${PR}_${MACHINE}-vendor.ipk;subdir=${BP};name=vendor-dtb \
   "

SRC_URI[vendor-linux.md5sum] = "ead6411bef8aed5e2d5ece6c57ca2477"
SRC_URI[vendor-linux.sha256sum] = "8760c384c4136edf0c25581579fd4f3c980dbf34147a3ab77cd8fa92274f6b60"
SRC_URI[vendor-dtb.md5sum] = "15f326f398cafe4d5796b75481494b91"
SRC_URI[vendor-dtb.sha256sum] = "e9e95673a6419936e865baabb9823cd0c3c3ec06741b46326fb331594e9dc8c6"

do_unpack_extra() {
    mkdir -p ${S}
    mkdir -p ${WORKDIR}
    mkdir -p ${BP}
}

addtask unpack_extra  after do_fetch before do_unpack
do_configure[noexec] = "1"
do_compile[noexec] = "1"
do_prepare_recipe_sysroot[noexec] = "1"
do_shared_workdir[noexec] = "1"
do_kernel_link_images[noexec] = "1"
do_package[noexec] = "1"
do_packagedata[noexec] = "1"
do_package_write_ipk[noexec] = "1"
do_deploy[noexec] = "1"
do_package_qa[noexec] = "1"
do_install[noexec] = "1"

INHIBIT_PACKAGE_STRIP = "1"
INHIBIT_SYSROOT_STRIP = "1"
INHIBIT_PACKAGE_DEBUG_SPLIT= "1"

python do_package_custom_write_ipk(){
    manifest_name = d.getVar("SSTATE_MANFILEPREFIX", True) + ".package_write_ipk"
    bb.note(" manifest_name %s"  % manifest_name)
    manifest_file = open(manifest_name, "w")
    manifest_file.close()
}
addtask do_package_custom_write_ipk after do_install_image before do_build

python do_custom_package(){
    kernel_depmod = oe.path.join(d.getVar('PKGDATA_DIR'), "kernel-depmod")
    bb.utils.mkdirhier(kernel_depmod)
    kernel_abi_ver_file = oe.path.join(d.getVar('PKGDATA_DIR'), "kernel-depmod",
                                           'kernel-abiversion')
    linux_ver = d.getVar("LINUX_VERSION")
    with open(kernel_abi_ver_file, "w") as abi_ver_file:
       abi_ver_file.write("%s" % linux_ver)
}
addtask do_custom_package after do_install_image before do_build

do_install_image () {
        install -d ${DEPLOY_DIR_IMAGE}
        install -m 0644 ${WORKDIR}/${PREFERRED_PROVIDER_virtual/kernel}-${PV}/boot/* ${DEPLOY_DIR_IMAGE}
}
addtask do_install_image after do_unpack before do_build

