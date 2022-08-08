#!/bin/bash
#if implementation
read -p "Enter the number: " num
if [ $num -lt 2 -o $num -gt 32 ]
then
    echo "Enter the number in valid range"
else 
    echo
fi

