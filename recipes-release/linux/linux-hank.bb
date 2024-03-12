DESCRIPTION = "Relaese iImage and dtb"
SECTION = "core"
LICENSE = "CLOSED"

inherit bin_package
inherit kernel

COMPATIBLE_MACHINE = "(hank)"

LINUX_VERSION = "${LINUXLIBCVERSION}"
PV = "${LINUXLIBCVERSION}.${KERNEL_PV}"
PR = "${KERNEL_PR}"

SRC_URI = "\
   ${VENDOR_IPK_SERVER_PATH}/kernel-image-${KERNEL_IMAGETYPE}-${LINUX_VERSION}_${PV}-${PR}_${MACHINE}-vendor.ipk;subdir=${BP};name=vendor-linux \
   ${VENDOR_IPK_SERVER_PATH}/kernel-devicetree_${PV}-${PR}_${MACHINE}-vendor.ipk;subdir=${BP};name=vendor-dtb \
   "

SRC_URI[vendor-linux.md5sum] = "433dda5e489d92b39705dd121c3d50f4"
SRC_URI[vendor-linux.sha256sum] = "f5af4412045e520df34435a2c3ff3712e3fd27373eb00f75e22e7332c3e8579c"
SRC_URI[vendor-dtb.md5sum] = "433dda5e489d92b39705dd121c3d50f4"
SRC_URI[vendor-dtb.sha256sum] = "e2f8a7748875621a69eae29b7388d1207991675572d6b182cad801eb7d4cd5f4"

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

