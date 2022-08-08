#!/bin/bash
echo "Enter 1 for top 2 lines"
echo "Enter 2 for bottom 3 lines"
#To access emp.txt and sort the content
echo -n "Enter the number:"
read Num

case $Num in
	1)
		head -2 emp.txt
		;;
	2)
		tail -3 emp.txt
		;;
	*)
		echo "Enter either 1 or 2"
		;;
	esac
