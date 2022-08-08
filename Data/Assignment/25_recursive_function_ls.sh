<<Documentation
Name:- Anand Arvind Kulkarni
Date:- 18/10/2021
Description:- Use of recursive function to print argument passed to a function
Sample i/p:- bash 25_Recursive_function.sh Hello how are you?
Sample o/p:- Hello
	     how 
	     are 
	     you?
Documentation


#!/bin/bash
if [[ $# -gt 0 ]]    #to check if any command line argument is passed or not.
then
    function print ()  #function named "print" declared here.
    {
	echo $1              #first argument is fetched.
	array=($@)           #the total passed arguments are stored in an array
	length=${#array[*]}     #the length of the array is calculated to decrement is one by one later.
	if [[ $length -gt 0 ]]  #the function will return each time till the length is greater than zero.
	then
	    array=${array[*]:1:$length-1}  #using offset each element of the array is access one by one.
	else
	    return                      #return used to continue the execution till the above if condition is true.
	fi
	print $array                    #function "print" called here.The program doesnt execute till the function is not called.
    }
print $@                         #the command lines passed are printed 
else
    echo "Error:Please pass the arguments through command line."  #error if no command lines are passed a input.
fi
