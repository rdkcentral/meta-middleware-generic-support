# To support layered ipk generation
RDK_ARTIFACTS_BASE_URL = "https://partners.artifactory.comcast.com/artifactory"
RDK_ARTIFACTS_URL = "partners.artifactory.comcast.com/artifactory"

VENDOR_LAYER_ARCH = "${MACHINE}-vendor"

VENDOR_IPK_SERVER_PATH = "${RDK_ARTIFACTS_BASE_URL}/opkg/${MACHINE}/ipks/${VENDOR_LAYER_ARCH}/"

PACKAGE_EXTRA_ARCHS_append = " ${VENDOR_LAYER_ARCH}"

# To set the remote feeds
IPK_FEED_URIS += " \
                ${VENDOR_LAYER_ARCH}##${VENDOR_IPK_SERVER_PATH} "

require conf/machine/include/arm/arch-arm64.inc

