FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI += " file://disable-subtitle-for-aamp.patch "

DEPENDS:remove += " playready-cdm-rdk virtual/vendor-closedcaption-hal virtual/vendor-dvb"

CXXFLAGS += " -lIARMBus -lds -ldshalcli"
