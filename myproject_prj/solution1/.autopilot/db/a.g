#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/YL_HUANG/6_17/structure/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
