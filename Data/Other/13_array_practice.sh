#!/bin/bash
#To check the working of lists and arrays
arr=(2 5 7)
var=${arr[*]}
for i in $var
    do
	echo "The total number of arguments $#"
done
