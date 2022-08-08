<<Documentation
Name:- Anand Arvind Kulkarni
Date:- 19/10/2021
Description:- Script to delete empty lines from the file.
sample execution:- ./07_empty_lines.sh abc.txt
	   After this execution the empty lines from the file "abc.txt" 
Documentation

#!/bin/bash
if [ -f $1 ]        #to check if the file passed through command line is regular exisiting  file or not.
then
    if [ -s $1 ]    #to check if the file passed through command line is not an empty file.
    then
	if [ $# -eq 1 ]   #codition to check if only one file name is passed or not.
	then
	    sed -i '/^[[:blank:]]*$/d' $1     #sed command here deletes all the blank lines (also the blank lines with tabs used in them)
	    echo "Empty lines are deleted from the file $1."   #execution confirmation.
	else
	    echo "Error:Please pass file name through command line." #if no command line passed.
	fi
    else
	echo "Error:$1 is an empty file.So cannot delete the empty lines."  #if the file in command line is en empty file.
    fi 
else 
    echo "The file is not a regular file." #if the file isnt a regular exisiting file.
fi
