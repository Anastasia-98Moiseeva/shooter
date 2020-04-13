#!/bin/sh
bindir=$(pwd)
cd /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/tutorial03_matrices/
export 

if test "x$1" = "x--debugger"; then
	shift
	if test "xYES" = "xYES"; then
		echo "r  " > $bindir/gdbscript
		echo "bt" >> $bindir/gdbscript
		/usr/bin/gdb -batch -command=$bindir/gdbscript --return-child-result /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/cmake-build-debug/tutorial03_matrices 
	else
		"/home/anastasia/Documents/mipt/3d-graph/repositories/ogl/cmake-build-debug/tutorial03_matrices"  
	fi
else
	"/home/anastasia/Documents/mipt/3d-graph/repositories/ogl/cmake-build-debug/tutorial03_matrices"  
fi
