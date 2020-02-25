#!/bin/sh

set -ex

PROJDIR="$(dirname $PWD)"
TARGET="frn"

if test -f "$PROJDIR/$TARGET"; then
	rm -rf "$PROJDIR/$TARGET"
fi

if test -d "$PROJDIR/$TARGET.dSYM"; then
	rm -rf "$PROJDIR/$TARGET.dSYM"
fi
