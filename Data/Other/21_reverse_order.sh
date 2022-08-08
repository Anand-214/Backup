#!/bin/bash
#program to print reverse order

num=$1
echo $num
if [[ $num =~ ^[0-9]+$ ]] 
then
   echo "The number is entered"
else
    echo "Enter only number in first argument"
fi

