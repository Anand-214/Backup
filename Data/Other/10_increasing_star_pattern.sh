#!/bin/bash
#Print the increasing star pattern
read -p "Enter the number of rows: " Row
#read -p "Enter the number of columns " Col
for var in `seq $Row`
do
    for count in `seq $var`
    do
	echo -n "*  "
    done
    echo 
done

