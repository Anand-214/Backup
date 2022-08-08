<<Documentation
Name:- Anand Arvind Kulkarni.
Date:- 18/10/2021.
Description:- script to convert string lower to upper and upper to lower.
Sample i/p(1):-./22_upper_lower.sh file.txt
		option 1 - Lower case to Upper case.
		option 2 - Upper case to lower case.
		Please select option : 1
Sample o/p(1):- WHAT IS OS?
		WHAT ARE THE DIFFERENT OS?
		WHEN IS OS USED?
Sample i/p(2):-./22_upper_lower.sh file.txt
		option 1 - Lower case to Upper case.
		option 2 - Upper case to lower case.
		Please select option : 2
Sample o/p(2):- what is os?
		what are the different os?
		when is os used?                
Documentation
#!/bin/bash

if [ $# -gt 0 ]            #to check if command line argument is passed or not.
then
    if [ -f $1 ]           #to check if the entered file through command is a regular file or not.
    then
	if [ -s $1 ]       #to check if the entered file through command line is not an empty file.
	then
	    echo -e "option 1-Lower case to Upper case.\noption 2- Upper case to Lower case."  #info for the user. 
	    read -p "Please select option: " var  #input from the user based on which the further case statement gets executed.
	    echo
	    case $var in
		1)                          #if user enters 1 option this condition will be executed.
		    cat $1 | tr a-z A-Z     #cat access the file content ($1) and then tr command will change it from lower case to upper.
		    ;;
		2)
		    cat $1 | tr A-Z a-z     #cat access the file content ($1) and tr helps to change it from upper to lower case.
		    ;;
		*)
		    echo "Please select option between 1 or 2." #default option executed if neither 1 nor 2 option selected from the user.
		    ;;
	    esac 
	else
	    echo "ERROR:It is an empty file."           #error if the file entered in command is empty file.
	fi
    else
	echo "ERROR:The file entered does not exists."  #error if the file entered does not exists.
    fi
else
    echo "ERROR:Please pass a file name through command line." #error if no file entered through command line.
fi
