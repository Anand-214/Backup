<<Documentation
Name:- Anand Arvind Kulkarni
Date:- 18/10/2021
Description:- Rename current working directory with given name through command line.
Sample execution:- Assume current working directory is /home/user/Data
	      i/p:- bash 15_change_name.sh Assignments 
	      o/p:- After execution current working directory is /home/user/Assignments.
Documentation
#!/bin/bash

if [[ $# -gt 0 ]]  #condition to check if command line is given or not.
then
    path=`pwd`
    directory=`echo "$path" | tr "/" "\n" | tail -1`  #command to filter out the last directory name from the total path displayed by pwd command.We further compare this name with the new desired directory name.
    if [[ $directory != $1 ]]  #to check if the exisitng name and the new desired name are not the same.
    then
	cd ..    #because the directory cannot be moved to sub-directory of itself hence used cd.. to access the parent directory so that the rename can be done using move command. 
	mv $path $1   #here mv command is used to rename. the present working directory is renamed by the command line name.
	echo -e "The directory has beeen renamed.\nUsage:- Please Check the changes by executing 'ls ..' command."
    else
	echo -e "Error:Current working directory "$directory" and new directory name "$1" are same.\nPlease enter different names" #if    both old and the new name are the same the user is informed to enter some different name.
    fi
else
    echo "Error:Please pass the new directory name." #new name is manditory hence error notified to user if no name entered through     command line 
fi
