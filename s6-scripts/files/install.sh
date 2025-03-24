#!/bin/sh

set -eu

: "${DESTDIR:=$1}"
: "${PREFIX:=/usr}"

(
	cd s6-contrib

	mkdir -p "$DESTDIR/$PREFIX"

	cp -R etc "$DESTDIR/"
	cp -R bin "$DESTDIR/$PREFIX"
)

(
	cd s6-rc

	mkdir -p "$DESTDIR/etc/s6-rc/rc" "$DESTDIR/$PREFIX/share/s6-sv"

	cp -R adminsv "$DESTDIR/etc/s6-rc/"
	cp -R config "$DESTDIR/etc/s6-rc/"

	cp -R sv/*/* "$DESTDIR/$PREFIX/share/s6-sv/"

	ln -s "$PREFIX/share/s6-sv" "$DESTDIR/etc/s6-rc/sv"
)
