#!/bin/bash

read -p "Enter the weight in kg(s): " weight
read -p "Enter the height in meter(s): " height
var=0
if [ `echo "$weight<0 || $height<0" | bc` -eq 1 ]
then
echo -e "Error:Invalid input\nPlease enter only positive integers"
else
bmi=`echo "scale=4;$weight/($height*$height)" | bc`
if [ `echo "$bmi<18.5" | bc` -eq 1 ]
then
echo "BMI is $bmi"
echo "you are underweight"
elif [ `echo "$bmi>=18.5 && $bmi<=24.0" | bc` -eq 1 ]
then
echo "BMI is $bmi"
echo "You are Normal"
elif [ `echo "$bmi>=25 && $bmi<=29.9" | bc` -eq 1 ]
then
echo "BMI is $bmi"
echo "You are overweight"
else
echo "BMI is $bmi"
echo "You are obese"
fi
fi

