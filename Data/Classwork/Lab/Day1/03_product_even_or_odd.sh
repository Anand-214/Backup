#!/bin/bash
#Product of two numbers is odd or even
read -p "Enter the first number: " a
read -p "Enter the Second number: " b
mul=`expr $a \* $b`
echo "The Multiplication is $mul"
if [ `expr $mul % 2` -eq 0 ]
then 
    echo "The Product is Even"
else
   echo "The Product is odd"
fi

