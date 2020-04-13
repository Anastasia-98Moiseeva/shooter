#!/bin/sh
bindir=$(pwd)
cd /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/tutorial14_render_to_texture/
export 

if test "x$1" = "x--debugger"; then
	shift
	if test "xYES" = "xYES"; then
		echo "r  " > $bindir/gdbscript
		echo "bt" >> $bindir/gdbscript
		/usr/bin/gdb -batch -command=$bindir/gdbscript --return-child-result /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/cmake-build-debug/tutorial14_render_to_texture 
	else
		"/home/anastasia/Documents/mipt/3d-graph/repositories/ogl/cmake-build-debug/tutorial14_render_to_texture"  
	fi
else
	"/home/anastasia/Documents/mipt/3d-graph/repositories/ogl/cmake-build-debug/tutorial14_render_to_texture"  
fi
