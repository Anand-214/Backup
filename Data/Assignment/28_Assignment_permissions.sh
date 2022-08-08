<<Documentation
Name:- Anand Arvind Kulkarni
Date:- 19/10/2021
Description:- Script to lock down the file permissions of a particular directory.
Sample:- After execution the permissions for Group and User are locked down. The new permissions are as follows:
   -rw------- 1 anand anand 0 Oct 19 21:56 D2file1
   -rw------- 1 anand anand 0 Oct 19 21:56 D2file2
   -rw------- 1 anand anand 0 Oct 19 21:56 D2file3
Documentation

#!/bin/bash
if [ $# -gt 0 ]   #condition to check if directory name is passed through command line or not.
then
    if [ -d $1 ]   #condition to check if the directory exists or not.
    then
	chmod -R go-rwx $1   #This command will remove read write and execute permission of the Group annd the Other.The user permissions will remain unchanged. 
	echo "File permissios of directory $1 locked successfully." #after execution message to inform the changes have been done.
    else
	echo "Error: $1 is not directory.Please enter exisiting directory name."  #if the directory does'nt exist. 
    fi
else
    echo "Error:Please pass a directory name whose permissions are to be altered in command line." #error if no command line passed.
fi
