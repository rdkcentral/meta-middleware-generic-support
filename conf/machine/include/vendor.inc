# To support layered ipk generation
RDK_ARTIFACTS_BASE_URL = "https://partners.artifactory.comcast.com/artifactory"
RDK_ARTIFACTS_URL = "partners.artifactory.comcast.com/artifactory"

MACHINE_COMMON_IPK = "xione-rtk-common"
VENDOR_COMMON_LAYER_EXTENSION = "${MACHINE_COMMON_IPK}-vendor"
VENDOR_LAYER_EXTENSION = "${MACHINE}-vendor"

#common ipk repo path
VENDOR_COMMON_IPK_DEV ="rtk-xione-common-dev"
VENDOR_COMMON_IPK_RELEASE ="rtk-xione-common-release"
VENDOR_COMMON_IPK_REL_VERSION = "1.0.2"
VENDOR_PRODUCT_IPK_REL_VERSION = "5.1.0"

#IPK Server path for Common feed
VENDOR_COMMON_IPK_SERVER_PATH = "${RDK_ARTIFACTS_BASE_URL}/${VENDOR_COMMON_IPK_RELEASE}/${VENDOR_COMMON_IPK_REL_VERSION}/${MACHINE_COMMON_IPK}/ipks/debug"

#IPK Server path for Product feed
VENDOR_IPK_SERVER_PATH = "${RDK_ARTIFACTS_BASE_URL}/${MACHINE}-release/${VENDOR_PRODUCT_IPK_REL_VERSION}/${MACHINE}/ipks/debug"

PACKAGE_EXTRA_ARCHS:append = " ${VENDOR_COMMON_LAYER_EXTENSION}"
PACKAGE_EXTRA_ARCHS:append = " ${VENDOR_LAYER_EXTENSION}"

#To set the remote feeds for common one
IPK_FEED_URIS += " \
                ${VENDOR_COMMON_LAYER_EXTENSION}##${VENDOR_COMMON_IPK_SERVER_PATH} "

# To set the remote feeds
IPK_FEED_URIS += " \
                ${VENDOR_LAYER_EXTENSION}##${VENDOR_IPK_SERVER_PATH} "

