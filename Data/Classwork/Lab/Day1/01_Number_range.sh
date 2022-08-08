#!/bin/bash
#To check whether the number is between 30 and 40

read -p "Enter the number to check the range:" Num

if [ $Num -gt 30 -a $Num -lt 40 ]
then
	echo "The Number $Num lies in the  range"
else 
	echo "The Number $Num does not occur between 30 and 40"
fi
