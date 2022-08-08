#!/bin/bash
#program to execute the loops with if statemet
echo -n "Enter the string: "
read STR
echo -n "Enter how many times to execute: "
read $Max_Count
if [ -z ${STR} ]
then 
	echo "Enter non empty string"
	exit
fi
if [ $Max_Count -lt 0 ]
then
	echo "Enter value as a positive count"
	exit
fi

COUNT=0

while [ $COUNT -lt $Max_Count ]
do
	echo $STR
	COUNT=$((COUNT + 1))
done
