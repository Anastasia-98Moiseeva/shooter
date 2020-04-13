#!/bin/sh
bindir=$(pwd)
cd /home/anastasia/Documents/mipt/3d-graph/shooter/misc05_picking/
export 

if test "x$1" = "x--debugger"; then
	shift
	if test "xYES" = "xYES"; then
		echo "r  " > $bindir/gdbscript
		echo "bt" >> $bindir/gdbscript
		/usr/bin/gdb -batch -command=$bindir/gdbscript --return-child-result /home/anastasia/Documents/mipt/3d-graph/shooter/cmake-build-debug/misc05_picking_BulletPhysics 
	else
		"/home/anastasia/Documents/mipt/3d-graph/shooter/cmake-build-debug/misc05_picking_BulletPhysics"  
	fi
else
	"/home/anastasia/Documents/mipt/3d-graph/shooter/cmake-build-debug/misc05_picking_BulletPhysics"  
fi
