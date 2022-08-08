<<Documentation
Name:- Anand Arvind Kulkarni
Date:- 22/10/2021
Description:- Script to print chess board.
After execution of this script a 8x8 chess board will be displayed.
Documentation


#!/bin/bash
for row in `seq 1 8`   #we wants 8 rows in the board hence sequence created from 1 to 8.
do
    for column in `seq 1 8`  #sinilar to rows we wanted 8 columns to be printed hence sequence of columns from 1 to 8.
    do
	main=$(((row+column)%2))  #.e.g for 1st row and 1st column the sum is 2 and 2%2 is 0 similar for 1 row 3rd column 4%2=0.This will created an alternate pattern. 
	if [ $main -eq 0 ]  #condition true if the result of above operation is 0 and will print a white box.
	then
	    echo -e -n "\e[47m" " " #command to print a white color.
	else
	    echo -e -n "\e[40m" " " #command to print black color. if the % result is 1 then this conditon will be executed.
	fi
    done
    echo -e -n "\e[0m" " "   #to normalise the color code after the 8x8 boxes are printed we use this command.
    echo " "                 #this echo helps to allow the pattern of black and white get executed one below the other.if this is not mentioned then the strips of 8 alternate black and white colors will print.
done
