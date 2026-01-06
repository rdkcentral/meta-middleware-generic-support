PV:pn-rmfosal = "1.0.0"
PR:pn-rmfosal = "r3"
PACKAGE_ARCH:pn-rmfosal = "${MIDDLEWARE_ARCH}"

PV:pn-qtwayland = "5.15.7"
PR:pn-qtwayland = "r1"
PACKAGE_ARCH:pn-qtwayland = "${MIDDLEWARE_ARCH}"

PV:pn-aamp = "2.11.1"
PR:pn-aamp = "r0"
PACKAGE_ARCH:pn-aamp = "${MIDDLEWARE_ARCH}"

PV:pn-pn-player-interface = "0.1.0"
PR:pn-pn-player-interface = "r0"
PACKAGE_ARCH:pn-pn-player-interface = "${MIDDLEWARE_ARCH}"

PV:pn-audiocapturemgr = "1.0.0"
PR:pn-audiocapturemgr = "r0"
PACKAGE_ARCH:pn-audiocapturemgr = "${MIDDLEWARE_ARCH}"

PV:pn-bluetooth-core = "1.0.6"
PR:pn-bluetooth-core = "r2"
PACKAGE_ARCH:pn-bluetooth-core = "${MIDDLEWARE_ARCH}"

PV:pn-bluetooth-mgr = "1.0.6"
PR:pn-bluetooth-mgr = "r2"
PACKAGE_ARCH:pn-bluetooth-mgr = "${MIDDLEWARE_ARCH}"

PV:pn-commonutilities = "1.4.4"
PR:pn-commonutilities = "r0"
PACKAGE_ARCH:pn-commonutilities = "${MIDDLEWARE_ARCH}"

PV:pn-rdkfwupgrader = "1.4.0"
PR:pn-rdkfwupgrader = "r0"
PACKAGE_ARCH:pn-rdkfwupgrader = "${MIDDLEWARE_ARCH}"

# All of these iarm-query-powerstate, iarm-set-powerstate, iarm-event-sender,
# key-simulator and mfr-utils use sys_mon_tools repo.
PV:pn-iarm-query-powerstate = "1.0.8"
PR:pn-iarm-query-powerstate = "r0"
PACKAGE_ARCH:pn-iarm-query-powerstate = "${MIDDLEWARE_ARCH}"

PV:pn-iarm-set-powerstate = "${PV:pn-iarm-query-powerstate}"
PR:pn-iarm-set-powerstate = "${PR:pn-iarm-query-powerstate}"
PACKAGE_ARCH:pn-iarm-set-powerstate = "${MIDDLEWARE_ARCH}"

PV:pn-iarm-event-sender = "${PV:pn-iarm-query-powerstate}"
PR:pn-iarm-event-sender = "${PR:pn-iarm-query-powerstate}"
PACKAGE_ARCH:pn-iarm-event-sender = "${MIDDLEWARE_ARCH}"

PV:pn-key-simulator = "${PV:pn-iarm-query-powerstate}"
PR:pn-key-simulator = "${PR:pn-iarm-query-powerstate}"
PACKAGE_ARCH:pn-key-simulator = "${MIDDLEWARE_ARCH}"

PV:pn-mfr-utils = "${PV:pn-iarm-query-powerstate}"
PR:pn-mfr-utils = "${PR:pn-iarm-query-powerstate}"
PACKAGE_ARCH:pn-mfr-utils = "${MIDDLEWARE_ARCH}"
PV:pn-firebolt-cpp-transport = "0.2.0"
PR:pn-firebolt-cpp-transport = "r0"
PACKAGE_ARCH:pn-firebolt-cpp-transport = "${MIDDLEWARE_ARCH}"

PV:pn-firebolt-cpp-client = "0.2.0"
PR:pn-firebolt-cpp-client = "r0"
PACKAGE_ARCH:pn-firebolt-cpp-client = "${MIDDLEWARE_ARCH}"

PV:pn-firebolt-ripple = "${RIPPLE_RELEASE_VER}"
PR:pn-firebolt-ripple = "r1"
PACKAGE_ARCH:pn-firebolt-ripple = "${MIDDLEWARE_ARCH}"

PV:pn-sqlite3see = "1.0.0"
PR:pn-sqlite3see = "r0"
PACKAGE_ARCH:pn-sqlite3see = "${MIDDLEWARE_ARCH}"

PV:pn-rdkwindowmanager = "1.9.0"
PR:pn-rdkwindowmanager = "r0"
PACKAGE_ARCH:pn-rdkwindowmanager = "${MIDDLEWARE_ARCH}"

PACKAGE_ARCH:pn-packagegroup-youtube-widgets = "${MIDDLEWARE_ARCH}"
