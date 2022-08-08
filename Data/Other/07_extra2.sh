#!/bin/bash
#practice of all patterns
read -p "Eter the number of rows: " Row
till=1
for var in `seq $Row`
do
    for count in `seq $var`
    do
	echo -n "$((till++)) "
    done
    echo
done

