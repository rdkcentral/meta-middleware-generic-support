FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI += " file://disable-subtitle-for-aamp.patch "
SRC_URI += " file://0001-RDKEMW-3062-support-encrypted-playback.patch "

DEPENDS:remove += " playready-cdm-rdk virtual/vendor-closedcaption-hal virtual/vendor-dvb"

CXXFLAGS += " -lIARMBus -lds -ldshalcli"
