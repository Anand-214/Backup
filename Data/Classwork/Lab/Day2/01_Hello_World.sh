#!/bin/bash
#Program to print Hello World n times
read -p "How many times to print: " count
var=0
while [ $var -lt $count ]
do
    echo "Hello World "
    var=$((var+1))
done

