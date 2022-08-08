#!/bin/bash
#BMI of a person
read -p "Enter the weight (in kg's): " weight
read -p  "Enter the height (in meters): " height
bmi=`echo "scale=4; $weight/($height * $height)" | bc`
echo "$bmi"
if [ $bmi -lt 18.5 ]
then 
    echo "Underweight"
else
    echo "Obese"
fi
