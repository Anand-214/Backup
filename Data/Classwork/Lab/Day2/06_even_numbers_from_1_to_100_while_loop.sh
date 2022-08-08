#!/bin/bash
#Program to print even numbers between 1 to 100 using while loop
var=1 
while [ $var -le 100 ]
do 
    echo $var
    var=$((var+2))
done

