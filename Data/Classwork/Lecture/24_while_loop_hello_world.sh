#!/bin/bash
#Program for the useage of while loop
Count=0

while [ $Count -lt 5 ]
do 
	echo -n "${Count}"
	echo "Hello World"
	Count=$((Count+1))
done
echo
echo "Exiting Program"
