# To support layered ipk generation
RDK_ARTIFACTS_BASE_URL = "https://partners.artifactory.comcast.com/artifactory"
RDK_ARTIFACTS_URL = "partners.artifactory.comcast.com/artifactory"

VENDOR_LAYER_EXTENSION = "${MACHINE}-vendor"

VENDOR_IPK_SERVER_PATH = "${RDK_ARTIFACTS_BASE_URL}/${MACHINE}-release/4.0.1/${MACHINE}/ipks/debug"

PACKAGE_EXTRA_ARCHS:append = " ${VENDOR_LAYER_EXTENSION}"

# To set the remote feeds
IPK_FEED_URIS += " \
                ${VENDOR_LAYER_EXTENSION}##${VENDOR_IPK_SERVER_PATH} "

