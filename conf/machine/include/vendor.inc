# To support layered ipk generation
RDK_ARTIFACTS_BASE_URL = "https://partners.artifactory.comcast.com/artifactory"
RDK_ARTIFACTS_URL = "partners.artifactory.comcast.com/artifactory"

VENDOR_LAYER_EXTENSION = "${MACHINE}-vendor"

VENDOR_IPK_SERVER_PATH = "${RDK_ARTIFACTS_BASE_URL}/opkg/${MACHINE}/RDK-50869-oss-3-0-4-vendor-tag-2_2_0/${VENDOR_LAYER_EXTENSION}"

PACKAGE_EXTRA_ARCHS_append = " ${VENDOR_LAYER_EXTENSION}"

# To set the remote feeds
IPK_FEED_URIS += " \
                ${VENDOR_LAYER_EXTENSION}##${VENDOR_IPK_SERVER_PATH} "

require conf/machine/include/arm/arch-arm64.inc
require conf/include/vendor_pkg_versions.inc

