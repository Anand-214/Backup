#!/bin/bash
#To check two numbers are multiple of each other or not
read -p "Enter the two numbers: " Num1 Num2
if [ `expr $Num1 % $Num2` -eq 0 ] 
then 
   echo "The numbers are multiple of each other"
else
   echo "The numbers are not multiple of each other"
fi
