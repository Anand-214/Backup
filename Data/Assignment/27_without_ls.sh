<<Documentation
Name:- Anand Arvind Kulkarni
Date:- 18/10/2021
Description:- To print the content of the directory passed as a command line
Sample i/p :- ~ ~/ECEP
Sample o/p :- /home/user:
	      Downloads Documents Desktop Music Pictures Public Videos
	      /home/user/ECEP:
	      Linux_systems Advance_c Micro_controllers
Documentation

#!/bin/bash
if [[ $# -gt 0 ]]  #to check if any command line argument has been given or not
then
    arguments=$@        #the command line content are stored in a variable
    for directory in $arguments  #iterating over the list of the directories passed as arguments.
    do
	if [[ -d $directory ]]    #to check if the directory exists or not
	then
	    cd $directory         #change directory to the entered argument
	    echo $directory       #print the name of the directory which is currently been iterated
	    echo *                #print the content of the directory
	else
	    echo -e "No such file or directory exists.\nPlease Enter the existing directories path."
	fi
    done
else
    echo "Please pass directory path in command line."
fi
