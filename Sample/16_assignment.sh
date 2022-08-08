<<Documentation
Name:- Anand Arvind Kulkarni.
Date:- 18/10/2021
Descripition:- Script to rename only the jpg files in a directory by the name given through command line.
Sample:- assume the files are file.txt file2.txt DSN01.jpg DSN02.jpg DSN03.jpg
      i/p :- ./16_assignment Day_out
      o/p :-  file1.txt file2.txt Day_out01.jpg Day_out02.jpg Day_out03.jpg
Documentation


#!/bin/bash
if [[ $# -gt 0 ]]   #to check if the name through command line is provided or not.
then
    list=`ls`           #list the content of the directory by ls command.
    for i in $list      #the list is iterated in a for loop
    do
	var=`echo $i | cut -d "." -f 2`  #this step displays the content of $i after the delimiter "."  
	if [[ $var = 'jpg' ]]         #to validate only the jpg files from the total files present
	then
	    images=`echo $i | tr -d [:alpha:] | tr -d [:punct:]`  #tr will delete the alphabets and the punctuation marks (here its ".")
	    mv $i $1$images.jpg	                #the new name passed through command line will be replace by the older jpg files name with extension same as previous .i.e .jpg  and also the numbers present in the old file will be the same.
	fi
    done
else
    echo "Error:Please pass the prefix name through command line."  #if no command line passed then error is displayed
fi
