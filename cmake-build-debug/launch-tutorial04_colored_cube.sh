#!/bin/sh
bindir=$(pwd)
cd /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/tutorial04_colored_cube/
export 

if test "x$1" = "x--debugger"; then
	shift
	if test "xYES" = "xYES"; then
		echo "r  " > $bindir/gdbscript
		echo "bt" >> $bindir/gdbscript
		/usr/bin/gdb -batch -command=$bindir/gdbscript --return-child-result /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/cmake-build-debug/tutorial04_colored_cube 
	else
		"/home/anastasia/Documents/mipt/3d-graph/repositories/ogl/cmake-build-debug/tutorial04_colored_cube"  
	fi
else
	"/home/anastasia/Documents/mipt/3d-graph/repositories/ogl/cmake-build-debug/tutorial04_colored_cube"  
fi
