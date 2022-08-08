#!/bin/bash
echo "Enter any number"
read num
#var='^[0-9]+$' 
if [[ $num =~ ^[0-9]+$  ]]
then
    echo $num is only number
else
    echo $num is not a number
fi
