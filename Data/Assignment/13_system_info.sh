<<Documentation
Name:- Anand Arvind Kulkarni
Date:- 22/10/2021
description:- Write a script to print system information using commands.
Execution:-
    1) Curretly logged user:
    2) Your shell directory:
    3) Home directory:
    4) OS name & Version:
    5) Current Working Directory:
    6) Number of users logged in:
    7) Show all available shells:
    8) Hard disk info:
    9) CPU info:
    10) Memory info:
    11) File system info:
    12) Currently running process:
Enter Your Choice: 1
o/p :- Currently logged user: anand
do you want to continue(y/n) : depending on the user choice he/she can continue again with the list or exit from the script.
Documentation


#!/bin/bash
flag=1  #flag is set this is the most important declaration which will help to again continue with the list after one choice is executed.
function info()  #function declaration.This function is called in the body when the user press (y) to continue further.
{
    echo -e "Please refer the options as below:\n1.Currently logged user.\n2.Your shell directory.\n3.Home directory.\n4.OS name & version.\n5.Current working directory.\n6.Number of users logged in.\n7.Show all available shells in your system.\n8.Hard disk information.\n9.CPU information.\n10.Memory Information.\n11.File system information.\n12.Currently running process."
    echo #above is the list of all the options from which the user can choose one at a time and after execution again can go with other option
    read -p "Enter Your Choice:" input  #input choice by user any between 1 to 12. 
    case $input in   #Here the i/p will be matched the case statements mentioned below and the one matching will be executed.
	1) echo "curretly logged user:`whoami`" #The command with the information they display are shown in list below ( 1 to 12)
	    ;;
	2) echo "Your shell directory:`echo $SHELL`"
	    ;;
	3) echo "Home directory:`echo $HOME`"
	    ;;
	4) echo "OS name & Version:`uname`"
	    ;;
	5) echo "Current Working Directory:`pwd`"
	    ;;
	6) echo "Number of users logged in: `who`"
	    ;;
	7) echo "Show all available shells: `cat /etc/shells`"
	    ;;
	8) echo "Hard disk info:`du`"
	    ;;
	9) echo "CPU info: `cat /proc/cpuinfo`"
	    ;;
	10) echo "Memory info: `cat /proc/meminfo`"
	    ;;
	11) echo "File system info: `df`"
	    ;;
	12) echo "Currently running process: `ps`"
	    ;;
	*) echo "Invalid input please enter valid input." #default case executed if i/p matched no option from the above switch case list.
	    ;;
    esac              #end of the switch case.
    read -p "Do you want to continue(y/n):" flag  #the input from the user is taken in variable flag which was set at the start of script.
    if [[ $flag = 'y' ]]     #if user choose "y" option the condition is true and the function will be executed again by calling function
    then
	info   #function called if the user wants to continue through the above options.
    elif [[ $flag = 'n' ]]   #if user enters "n" the program is ended by exit statement.
    then
	exit            #used to terminate the script
    else
	echo "Please select 'y'to continue or 'n' to exit." #if (y/n) any of the 2 are not selected.
    fi
}              #end of the function body.
info #final function call. This indicates the function has to be executed.without this call the above body wont be executed.
