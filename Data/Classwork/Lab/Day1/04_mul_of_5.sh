#!/bin/bash
#To check the number is multiple of 5 or not
read -p "Enter the number: " Number
if [ `expr $Number % 5` -eq 0 ]
then 
    echo "The number is multiple of 5"
else 
    echo "The number is not multiple of 5"
fi
