<<Documentation
Name:- Anand Arvind Kulkarni
Date:- 22/10/2021
Descripition:- Script to find and delete the .swp files in system or directory.
sample i/p(1):- ./19_swp_files.sh 
Sample o/p(1a):-If no .swp files present then the o/p is as below: 
		"No .swp files found."
Sample o/p(1b):-If .swp files are present then they will be listed and deleted with a confirmation of deletion.
	       The .swp files found are /home/user/ECEP/file001.swp
	       The .swp files found are /home/user/ECEP/file002.swp
	       The .swp files found are /home/user/ECEP/file003.swp
	       Note:All the .swp files have been deleted.
sample i/p(2):- ./19_swp_files.sh ~/Data/testing
Sample o/p(2a): If .swp files are present then:
		The .swp files found are /home/Data/testing file001.swp
		The .swp files found are /home/Data/testing file002.swp
		Note:All the .swp files have been deleted.
Sample o/p(2b): If no .swp files are present then:
		"No .swp files found."
sample i/p(3):- ./19_swp_files.sh random/
Sample o/p(3): Error:"random/" no such file or directory present.

Documentation

#!/bin/bash

if [ $# -eq 0 ]          #condition to check command line argument has been passed or not.If not passed then .swp files in home directory will be displayed and deleted.
then
    var1=(` find ~/ -name *.swp `) 	#command to find the .swp files 
    length1=${#var1[@]}                 #length of the array calculated.The length will tell the .swp files are present or not.
    if [ $length1 -eq 0 ]               #if the length is 0 it means their are no .swp files found.
    then
	echo "No .swp files present."
    else                               #condition true if length > 0
	echo "The .swp files found are:"
	for j in ${var1[@]}             #loop to access each .swp file present.
	do 
	    echo $j                     #will display the list of the all .swp files found.
	done
    fi
elif [ $# -eq 1 ]              #if a command line is passed it means we are finding the .swp files in mentioned directory
then
    if [ -d $1 ]               #to check if the passed command line is an exisiting directory or not.
    then
	var=(`find $1 -name *.swp`)  #this command will find the list of .swp files in that particular directory and store them in array.
	length=${#var[@]}            #again the length calculated to check if the exisiting directory has any .swp files or not.
	if [ $length -eq 0 ]         #if length=0 means directory has no .swp files present in it.  
	then
	    echo "No .swp files found in $1" 
	else
	    echo "The .swp files found are:"
	    for i in ${var[@]}      #all the .swp files found in the the directory are accessed through loop.
	    do
		echo $i            #display the found .swp files
		rm $i              #delete those files.
	    done
	    echo "Note:All the above .swp files have been deleted."   #confirmation of deletion.
	fi
    else 
	echo "Error:"$1" no such a file or directory present."      #error if the command line directory doesnot exists.
    fi
fi
