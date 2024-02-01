SUMMARY = "Sky Tools"
LICENSE = "CLOSED"

FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

# Configure firmware-prebuilts
FW_FINAL_REL_VER="1.0"
FW_PREBUILT_VER="${FW_FINAL_REL_VER}"
FW_PREBUILT_NAME="firmware-prebuilts-xione-realtek-rel"

#Fetch firmware-prebuilts
SRC_URI = "${RDK_ARTIFACTS_BASE_URL}/${PRODUCT_FIRMWARE_PATH}/prebuilts/${FW_PREBUILT_NAME}/${FW_PREBUILT_VER}/${FW_PREBUILT_NAME}-${FW_PREBUILT_VER}.tar.bz2;name=${FW_PREBUILT_NAME};unpack=false"
SRC_URI[firmware-prebuilts-xione-realtek-rel.sha256sum] = "6b3c18a2dae7cd69a490ec5759e29d96c9beec516b8ea235b9f9d1577d422ecc"

SRC_URI += "file://PCIConfig.ini \
	    file://imageinfo.txt \
	    "

inherit native

do_populate_lic[noexec] = "1"
do_configure[noexec] = "1"
do_compile[noexec] = "1"

do_install() {
    install -d ${D}${bindir}

    install -m 0755 ${WORKDIR}/${FW_PREBUILT_NAME}-${FW_FINAL_REL_VER}.tar.bz2 ${D}${bindir}/firmware-pb.tar.bz2
    cp -f ${WORKDIR}/PCIConfig.ini ${D}${bindir}/PCIconfig.ini
    cp -f ${WORKDIR}/imageinfo.txt ${D}${bindir}/
}

