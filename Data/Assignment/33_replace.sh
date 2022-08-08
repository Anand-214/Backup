<<Documentation
Name:- Anand Arvind Kulkarni
Date:- 22/10/2021
Description:- Script to replace 20% lines in a C file randomly and replce it with the pattern.
Sample:- ./33_replace.sh main.c
Before replacing
#include<stdio.h>
int main()
{
printf("Hello world\n");
}

After replacing.
#include<stdio.h>
int main()
{
<-----Deleted----->
}
Documentation


#!/bin/bash
if [ $# -eq 0 ]      #condition to check if any command line is passed or not.
then
    echo "Please pass the filename through command line."
else
    if [ -f $1 ]    #to check if the file passed through command line is a regular file or not.
    then
	if [ -s $1 ]  #to check if the file is not an empty file.
	then
	    line_count=`cat $1 | wc -l`   #used to count the total number of lines.
	    echo -e "Before replacing\n`cat $1`"
	    if [ $line_count -gt 4 ]    #we should have atleast 4 lines present so that 20% can be replaced thus this condition used.
	    then
		new_line=`echo "scale=2;(20/100)*$line_count" | bc | cut -d "." -f1` #formula to get the 20% lines.
		for i in `seq $new_line`     #loop to iterate through the 20% of the lines.
		do 
		    pattern=`shuf -i 1-$line_count -n 1`   #selecting random lines from the total lines present.
		    sed -i "$pattern s/.*/<------Deleted------>/" $1  #sed comman used to replace those selected lines.
		done             # -i used in the sed command to make the changes permanent.
		echo -e "After replacing\n`cat $1`"   #after replacing the o/p displayed on terminal
	    fi
	else
	    echo "Error: $1 is an empty file. So cannot replace the string."
	fi
    else
	echo "Error: This is not an existing regular file."
    fi
fi
