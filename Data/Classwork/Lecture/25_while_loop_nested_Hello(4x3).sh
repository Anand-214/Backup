#!/bin/bash
#Nested while loop
count=0
while [ $count -lt 4 ]
do
    echo "Hello"
var=0
while [ $var -lt 3 ]
do
    echo "Hello"
    var=$((var+1))
done
echo
count=$((count+1))
done
