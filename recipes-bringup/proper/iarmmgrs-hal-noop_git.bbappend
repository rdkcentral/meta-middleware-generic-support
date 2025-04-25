
SRC_URI:remove = "git://${RDK_GIT}/rdk/yocto_oe/layers/iarmmgrs-hal-sample;protocol=${RDK_GIT_PROTOCOL};branch=${RDK_GIT_BRANCH}"
SRC_URI = "git://${RDK_GIT}/rdk/yocto_oe/layers/iarmmgrs-hal-sample;protocol=${RDK_GIT_PROTOCOL};nobranch=1"


#Bring in code changes with power hal removed from noop
SRCREV = "239d8c6549f06ccd39ed9872f0429ebc8a7c5f81"

DEPENDS += " deepsleep-manager-headers power-manager-headers "
