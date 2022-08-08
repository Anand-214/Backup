#!/bin/bash
#practice of all patterns
read -p "Enter the number of Rows: " Row
#read -p "Enter the number of columns: " Col
#read -p "Enter the name to be printed: " Name
for var in `seq $Row`
do
    for count in `seq $var`
    do 
	echo -n "$count "
    done
    echo 
done

