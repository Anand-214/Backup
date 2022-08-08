#!/bin/bash
#To find the greatest number using and operator
read -p "Enter the three numbers to be compared :" a b c
if [ $a -gt $b -a $a -gt $c ]
then
    echo "$a is the greatest"
elif [ $b -gt $a -a $b -gt $c ]
then
   echo "$b is the greatest" 
else 
   echo "$c is the greatest"
fi


