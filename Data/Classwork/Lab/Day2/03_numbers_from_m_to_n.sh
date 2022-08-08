#!/bin/bash
#to print from m to n 
read -p "Enter the start of the range: " m
read -p "Enter the end of the range: " n
for i in `seq $m $n`
do
    echo -n "$i "
done

