<<Documentation
Name:- Anand Arvind Kulkarni
Date:- 13/10/2021
Description:-Script to print the 5th line of the file passed through command line.
sample i/p(1):-bash 23_print_fifth_line.sh abc.txt
sample o/p(1):-Fifth line of the file <file name> is: line 5. 
sample i/p(2):-bash 23_print_fifth_line.sh xyz.txt
sample o/p(2):-Error:<file name> has only 2 lines. So cant print the 5th line.
sample i/p(3):-bash 23_print_fifth_line.sh
sample o/p(3):-Please pass the file name in command line. 
Documentation

#!/bin/bash

if [ $# -eq 1 ]     #condition to check if only 1 command line is passed in i/p
then
    if [ -f $1 ]    #condition to check if the file passed in 1st command line is a regular file.
    then
	if [ -s $1 ] #condition to check if the file passed in the command line is not an empty file.
	then
	    var=`wc -l < $1`  #variable to check the no. 0f line in the file($1).
	    if [ $var -ge 5 ] #condition to check if the no. of lines in file are greater than 5 or not.
	    then
		echo "Fifth line of file $1 is:" `cat $1 | head -5 | tail -1`  #head will select first 5 lines and tail will select the last line so that exactly the 5th line is printed as o/p
	    else
		echo "ERROR:$1 having only $(wc -l < $1) lines.So can't print the fifth lines." #Error shown if the no. of lines in file are less than 5
	    fi
	else
	    echo "It is an empty file."  #error if the file is empty.
	fi
    else
	echo -e "No such file exists.\nPlease enter the correct file name."  #error if the file is not an exisiting regular file.
    fi
else
    echo -e "Please pass only the file name in the 1st command line.\nNote: Only 1 command line allowed." #error if only 1 command line is not passed.
fi
