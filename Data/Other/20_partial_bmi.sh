#!/bin/bash

read -p "enter the weight: " weight
read -p "Enter the height: " height

bmi=`echo "scale=3;$weight/($height*$height)" | bc`
echo "$bmi"
if [[ $bmi -le 18.5 ]]
then
    echo "Underweight"
fi
