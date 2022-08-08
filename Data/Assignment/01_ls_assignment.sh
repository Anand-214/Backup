<<Documentation
Name:- Anand Arvind Kulkarni.
Date:- 07/10/2021
Description:- Program to read "n" and generate pattern to increment number from left to right.
Sample i/p(1):- Enter the number : 4
Sample o/p(1):- 1
		1 2
		1 2 3
		1 2 3 4
Sample i/p(2):- Enter the number: 34
Sample o/p(2):- ERROR: 34 is out of range.Please enter 2<number<32.
Sample 1/p(3):- Enter the number: 2a
Sample o/p(3):- ERROR: 2a is not a number.Please enter a valid number.

Documentation

#!/bin/bash
# Program to read "n" and generate pattern to increment number from left to right.

read -p "Enter the number: " number              #input from the user.
if [[ "$number" =~ ^[0-9]+$ ]]                   #Validation to check input is alpha-numeric or a valid numeric entry.
then
    if [ "$number" -le 2 -o "$number" -ge 32 ]   #To check whether the entered number is in valid range or not.
    then 
	echo "ERROR: $number is out of range.Please enter number between range 2<number<32."
    else
	for row in `seq $number`        #row is a variable assigned for no. of rows & "for loop" to create sequence for iteration.
	do
	    for column in `seq $row`   #column is a variable assigned to no. of columns & created loop sequence as per the iterating rows. 
	    do
		echo -n "$column "      #The number of columns will increment the number as per the iteration in rows. 
	    done
	    echo
	done
    fi
else
    echo "ERROR: $number is not a number.Please enter a valid number."   #error if the input is alphanumeric based on above validation.
fi
