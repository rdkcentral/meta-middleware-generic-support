SUMMARY = "Packagegroup for middleware layer"
PACKAGE_ARCH = "${MIDDLEWARE_ARCH}"

LICENSE = "MIT"

inherit packagegroup volatile-bind-gen

# For interim development and package deployment to test should be using pre release tags
PV = "8.6.1.0"

# PRs are preferred to be incremented during development stages for any updates in corresponding
#  contributing component revision intakes.
# With release prior to release, PV gets reset to production semver and PR gets reset to r0
PR = "r0"

# Community is migrating to DAC2.0 based BOLT applications : base + runtime + app bundles
# 'enable_bolt_apps' is used to remove the runtimes in that case to reduce the rootfs size.

#Generic components
RDEPENDS:${PN} = " \
    entservices-hdmicecsource \
    hdmicec \
    iarmbus \
    telemetry \
    wpeframework \
    wpeframework-clientlibraries \
    "
