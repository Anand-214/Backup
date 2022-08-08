#!/bin/bash
#To prinnt decreasing star pattern
read -p "Enter the number of rows: " Row
    for var in `seq $Row`
do
    for count in `seq $var`
do
	    echo -n "* "
    done
    echo
done
    for var in `seq $Row -1 1`
do
    for count in `seq $var`
do
	    echo -n "* "
    done
    echo
done

