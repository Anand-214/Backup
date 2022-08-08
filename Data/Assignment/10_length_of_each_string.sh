<<Documentation
Name:- Anand Arvind Kulkarni
Date:- 19/10/2021
Description:- Script to print the length of the each and every string using arrays.
Sample i/p(1):- ./10_length_of_string.sh Hi Hello how are you ?
       o/p(2):- length of string (Hi)- 2
		length of string (Hello)- 5
		length of string (how)- 3
		length of string (are)- 3
		length of string (you)- 3
		length of string (?)- 1
Sample i/p(2):- ./10_length_of_string.sh
       o/p(2):- Error: Please pass the arguments through command line.
Documentation
#!/bin/bash

arr=($@)           #all the command lines entered are stored in an array. 
if [ $# -gt 0 ]    #to check if any comman line is passed or not.If passed then the further execution takes place.
then
    for i in ${arr[@]}   #each element of the array if accessed through for loop iteration.
    do
	echo "length of string ($i)- ${#i}"  #here ${#i} is used to calculate the length of the string.If 5 arguments are passed then one by  one length of each string will be calculated as it is in a loop.
    done                   #loop completed
else                   #if no arguments are passed then if condition turns out to be false and else condition executes.
    echo "Error: Please pass the arguments through command line."  #error displayed if no arguments are passed through command line.
fi
