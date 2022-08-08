<<Documentation
Name:- Anand Arvind Kulkarni
Date:- 12/10/2021
description:-Write a script for addition of two numbers (for real numbers also)
Sample i/p(1):-Enter the first number: 10
               Enter the second number: 20
Sample o/p(1):-The addition of the numbers is: 30
Sample i/p(2):-Enter the first number: 10.32
               Enter the second number: 20.45
Sample o/p(2):-The addition of the numbers is: 30.77
Sample i/p(3):-Enter the first number: 23r45
               Enter the second number: 23
Sample o/p(3):-ERROR: Please enter only integers or real numbers.
Documentation
#Program to calculate the addition of two real numbers.
#!/bin/bash
echo "Addition of two real numbers." 
read -p "Enter the first number: " number1        #First Operand.
read -p "Enter the second number: " number2       #Second Operand. 

if [[ "$number1" =~ ^[-]?[0-9.]+$ ]]              #condition to validate whether the 1st operand is a real number or not.
then
    if [[ "$number2" =~ ^[-]?[0-9.]+$ ]]          #condition to validate whether the 2nd operand is real number or not
then
    sum=`echo "scale=3;$number1 + $number2" | bc`    #actual formula to calculate the addition of real numbers (sacle used for decimals)
    echo "The addition of the numbers is: $sum"      #to display the sum as an output. 
    fi
else
    echo "ERROR: Please enter only integers or real numbers."  #error displayed if the i/p is not a real number.
fi
