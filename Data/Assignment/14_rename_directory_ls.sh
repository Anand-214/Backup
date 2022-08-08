<<Documentation
Name:- Anand Arvind Kulkarni
Date:- 18/10/2021
Description:- Script to rename a file and directory replaced by lower/Upper case letters
Sample i/p:- Before running the script the files names are in upper case and directory names are in lower case
		FILE1.TXT FILE2.TXT FILE3.TXT dir1 dir2 dir3
Sample o/p:- After running the script in the directory where the changes are needed the files names are replaced with lower case and the               directory names are replaced with upper case as below.
		  bash ./14_rename_files_and_directories.sh
		  file1.txt file2.txt file3.txt DIR1 DIR2 DIR3
Documentation

#!/bin/bash

content_list=`ls`       #using ls command the contents of the directory are displayed
for i in $content_list  #for loop to access the content one by one 
do
    if [[ -f $i ]]          #the statement is true if the content is a file. 
    then
	change_lower=`echo $i | tr A-Z a-z` #here all the file names are replaced with lower case letters.   
	mv $i $change_lower                 #the old files(in upper case) and moved to lower case names.
    elif [[ -d $i ]]        #the statement is true if the content is a directory  
    then
	change_upper=`echo $i | tr a-z A-Z`  #here all the old directory name are replaced by upper case names.
	mv $i $change_upper                  #the earlier directories are moved to upper case names.
    fi
done
echo "The modifications have been done."  #to inform the user the changes have been done.
