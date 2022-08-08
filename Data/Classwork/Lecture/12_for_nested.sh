#!/bin/bash
#Nested for loop
read -p "Enter the rows and columns" row1 col2
#count=`seq 6`
for row in `seq $row1`
do
echo -n "$row-->"
for col in `seq $col2`
do 
    echo -n "$col "
done
echo
done
