#!/bin/sh
bindir=$(pwd)
cd /home/anastasia/Documents/mipt/3d-graph/repositories/shooter/tutorial09_vbo_indexing/
export 

if test "x$1" = "x--debugger"; then
	shift
	if test "xYES" = "xYES"; then
		echo "r  " > $bindir/gdbscript
		echo "bt" >> $bindir/gdbscript
		/usr/bin/gdb -batch -command=$bindir/gdbscript --return-child-result /home/anastasia/Documents/mipt/3d-graph/repositories/shooter/cmake-build-debug/tutorial09_several_objects 
	else
		"/home/anastasia/Documents/mipt/3d-graph/repositories/shooter/cmake-build-debug/tutorial09_several_objects"  
	fi
else
	"/home/anastasia/Documents/mipt/3d-graph/repositories/shooter/cmake-build-debug/tutorial09_several_objects"  
fi
