
Debian
====================
This directory contains files used to package highstakesd/highstakes-qt
for Debian-based Linux systems. If you compile highstakesd/highstakes-qt yourself, there are some useful files here.

## highstakes: URI support ##


highstakes-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install highstakes-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your highstakesqt binary to `/usr/bin`
and the `../../share/pixmaps/highstakes128.png` to `/usr/share/pixmaps`

highstakes-qt.protocol (KDE)

