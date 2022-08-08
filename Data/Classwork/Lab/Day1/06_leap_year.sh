#!/bin/bash
#To check the year is leap year or not
read -p "Enter the year: " Year
if [ `expr $Year % 4` -eq 0 ]
then
    echo "The year $Year is a Leap Year"
else 
    echo "The year $Year is not a Leap Year"
fi
 
