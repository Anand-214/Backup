<<Documentation
Name:- Anand Arvind Kulkarni.
Date:- 15/10/2021
Description:- Script to print given number in reverse order.
Sample i/p(1):- ./06_reverse 12345
       o/p(1):- 54321
Sample i/p(2):- ./06_reverse 1540
       o/p(2):- 451
Sample i/p(3):- ./06_reverse 5
       o/p(3):- ERROR:Pass a multi digit number.
Sample i/p(4):- ./06_reverse
       o/p(4):- ERROR:No argument passed.
		Please pass a number
Sample i/p(5):- ./06_reverse 12w3.
       o/p(5):- ERROR:Pass only numbers.
Documentation

#!/bin/bash

number=$1             #The number passed as argument is stored in variable.
reverse=0             #variable declared to use in while loop.In the same variable the actual reverse number is stored.
first_digit=${number:0:1}   #seperated the first digit of the entered number.
if [[ $number =~ ^[0-9]?+$ ]]  #To check if the entered number is not alphanumeric.
then
    if [[ $number -gt 0 ]]     #To check if an argument is passed or not.
    then
	if [[ $first_digit != 0 ]] #condition to check that the first digit of the entered number is greater than zero.e.g:if the i/p number is 01234 then it is considered as 1234 and hence does not abey the reverse condition algorithm.
	then
	    if [[ ${#number} -gt 1 ]]  #To check if a multi digit number is entered or not.
	    then
		while [[ $number -gt 0 ]]   #loop to iterate the number entered.
		do
		    rem=$((number%10))       #here the last digit of number is seperated e.g 1234 then 1234%10 gives 4 which is last digit
		    reverse=$((reverse*10+$rem)) #here the actual reversed number is stored after every iteration.
		    number=$((number/10))        #the number is divided by 10 so that the last digit is dropped from the next iteration.
		done
		echo "Reverse of the number is $reverse"  #output displayed.
	    else
		echo "ERROR:Pass a multi digit number."  
	    fi
	else
	    echo "Please enter first digit as a non-zero number."
	fi
    else 
	echo -e "Error:No argument passed.\nPlease pass a number."
    fi
else
    echo "Error:Enter only numbers."
fi
