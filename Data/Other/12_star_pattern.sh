#!/bin/bash
#To print the stars in a pattern given by user
read -p "Enter the number of rows and columns for the star pattern: " Row Col
for var in `seq $Row`
do
    for count in `seq $Col`
    do
	echo -n "* "
    done
    echo
done


