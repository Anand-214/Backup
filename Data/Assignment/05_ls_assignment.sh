<<Documentation
Name:- Anand Arvind Kulkarni.
Date:- 15/10/2021
Description:- Script to find the larger number of 'n' number of arguments.
Sample i/p(1):- ./05_largest.sh 45 76 34 89
       o/p(1):- The largest value is 89.
Sample i/p(2):- ./05_largest.sh 
       o/p(2):- Error: No rgument passed.
		Please pass numbers in command line to display the largest number. 
Documentation

#!/bin/bash
if [ $# -gt 0 ]     #To check if any argument is passed ot not.
then
    greater=$1           #the number entered as 1st argument is stored in a variable
    for i in "$@"        #for loop to iterate all the numbers entered one by one." 
    do
	if [[ `echo "$i >= $greater" | bc` -eq 1 ]]   # i is compared with the first number and the greatest of them is sorted each time. 
	then 
	    greater=$i        #The value of the largest variable is stored after comparision of all numbers.
	fi
    done
    echo "The Largest value is $greater"   #the largest number will be displayed.
else
    echo -e "Error: No argument passed.\nPlease pass numbers in command line to display the largest number."  #if no arguments are passed.
fi
