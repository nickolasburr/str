#!/bin/sh

set -ex

TARGET="$1"
PRJDIR="$(dirname $PWD)"

RM="rm"
RMFLAGS="-rf"

if test -f "$PRJDIR/$TARGET"; then
	$RM $RMFLAGS "$PRJDIR/$TARGET"
fi

if test -d "$PRJDIR/$TARGET.dSYM"; then
	$RM $RMFLAGS "$PRJDIR/$TARGET.dSYM"
fi
