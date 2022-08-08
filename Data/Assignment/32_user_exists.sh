<<Documentation
Name:- Anand Arvind Kulkarni
Date:- 19/10/2021
Description:- Write a script to search whether the user is present or not in your system.
Sample i/p(1):- ./32_user_exists_.sh root
       o/p(1):- root exists as a user.
Sample i/p(2):- ./32_user_exists_.sh target
       o/p(2):- target doesnt exists as a user.
Sample i/p(3):- ./32_user_exists_.sh
	o/p(3):-Error:Please pass the as user name as argument through command line.

Documentation
#!/bin/bash

range=`cat /etc/passwd | cut -d ":" -f 1` #fetch the contents of /etc/passwd and cut the 1st field consisitng of the user name list.
arr=($range)                      #The list of the usernames is stored in an array.       
if [ $# -gt 0 ]                #Codition to check if any user name is passed through command line or not.If passed the contion is true.
then               
    for i in ${arr[@]}             #all the elements in an array are accessed one by one to check existence through for loop.
    do
	if [ $1 = $i ]             #if the iterating elements name matched with the name entered through command line the user exists.
	then
	    echo "$1 exists as a user." #If the name matched the display message as user exists.
	    exit
	fi
    done
    echo "$1 doesnt exists as a user."  #If the name doesnt match the element from the loop it means user name doesnt exists.
else
    echo "Error:Please pass the as user name as argument through command line." #error if no command line argument passed.
fi
