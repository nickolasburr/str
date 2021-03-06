#!/bin/sh

set -ex

TARGET="$1"
PREFIX="/usr/local"
BINDIR="$PREFIX/bin"

MANPAGE="$TARGET.1.gz"
MANDEST="$PREFIX/share/man/man1"

INSTALL="/usr/bin/install"
OPTIONS="-c"

cd ..
cp "man/$MANPAGE" "$MANDEST/$MANPAGE"

$INSTALL $OPTIONS $TARGET $BINDIR/$TARGET
