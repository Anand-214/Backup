#!/bin/bash
#print the name given by the user in pattern
read -p "Enter the number of rows " Row
read -p "Enter the name to be printed in pattern: " Name
for var in `seq $Row`
do
    echo -n "$var-->" 
    for count in `seq $var`
    do
	echo -n "$Name "
    done
    echo 
done

