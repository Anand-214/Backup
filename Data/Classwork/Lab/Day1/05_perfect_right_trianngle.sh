#!/bin/bash
#To check whether the traingle is perfect right triangle 
read -p "Enter the parameters of the triangle: " Hypo Adj Opp
area=`echo "($Opp * $Adj) / 2"|bc`
echo "The area of triangle is $area"
perimeter=`expr $Hypo + $Adj + $Opp`
echo "The perimeter of the triangle is $perimeter"
if [ $area -eq $perimeter ]
then
    echo "It is perfect right traingle"
else
    echo "It is not perfect right traingle"
fi


