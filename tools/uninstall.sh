#!/bin/sh

set -ex

TARGET="$1"
PREFIX="/usr/local"
BINDIR="$PREFIX/bin"

RM="rm"
RMFLAGS="-rf"

MANPAGE="$TARGET.1.gz"
MANDEST="$PREFIX/share/man/man1"

$RM $RMFLAGS $BINDIR/$TARGET $MANDEST/$MANPAGE
