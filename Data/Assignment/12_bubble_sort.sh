#!/bin/bash
<<Documentation
Name:- Anand Arvind Kulkarni
Date:- 22/10/2021
Description:-Script to sort number using bubble sort technique
Sample i/p:- -a 20 15 70 9
Sample o/p:- 9 15 20 70
Documentation
if [ $# -gt 2 ] #checking if the no of arguments is greater than 2
then
    aur=($@)  #declaring an array for the command line.
	len=$(($#-1))  #to use it in a loop for giving seq we find the length and the length-1 integer.
	char=$1
	arr=("${aur[@]:1}")  #removing the first argument as it is a indicator to ascend or descend.Remaining is stored.
	    if [ $char = '-a' ]  #to perform ascending we need the 1st operator to be -a always. this condition verifies it.
	    then
		for i in `seq 0 $((len-1))` #the length of the array is iterated through the for loop
		do
		    for j in `seq $((i+1)) $((len-1))`  #iterating through the loop
		    do
			if [ ${arr[$i]} -gt ${arr[$j]} ]  #this checks if the current value is greater than the rest values.
			then
			    var=${arr[$j]}  
			    arr[$j]=${arr[$i]}   #swaping of the elements is done through this operation. here we get the desired o/p.
			    arr[$i]=$var
			fi
		    done
		done
		echo "Ascending order of array  is ${arr[@]}"
	    elif [ $char = '-d' ]  #to perform descending operation we need the -d operator always.This condition verifies the same.
	    then
		for i in `seq 0 $((len))`  #the length of the array is used as limit of the for loop sequence starting from 0.
		do
		    for j in `seq $((i+1)) $((len-1))`  
		    do
			if [ ${arr[$i]} -lt ${arr[$j]} ]  #we need the iterating i value to be less than the remaining elements.
			then
			    var=${arr[$j]}
			    arr[$j]=${arr[$i]}    #swaping of the elements is done through this operation to get o/p
			    arr[$i]=$var
			fi
		    done
		done
		echo "Descending order of array  is ${arr[@]}"   #the final o/p is displayed in an descending order.
	    else
		echo "Error : Please pass the choice"
	    fi
	else
	    echo "Please pass the argument through command line"
fi
