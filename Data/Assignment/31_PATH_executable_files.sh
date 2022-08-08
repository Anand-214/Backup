<<Documentation
Name:- Anand Arvind Kulkarni
Date:- 22/10/2021
Description:- For each directory in $PATH display number of executable files in that directory.
After execution we will get the count of executable files in each directory from the $PATH with the sum of all the files at the end.
Documentation
#!/bin/bash
sum=0           #initialize the variable in which later the sum of all executable files will be stored.
var=`echo $PATH | tr -s ":" " "` #will display the directories in $PATH separated by ":".Using tr command the ":" was squeezed to " "  
arr=($var)               #The above list of directories seperated with spaces in between is now stored in array.
for i in ${arr[@]}      #loop to access each directory present as element of the array
do
    cd $i               #the directory will be changed according to the iteration each time.
    var=`ls`            #list the content of the directory using ls 
    echo "The current directory: `pwd`" #display the current working directory and below it display its executable file count.
    count=0          #this variable will count executable files from each directory individually and store them.for every iteration the   count will reset so that for next directory the counting starts from 0 again.
    if [ -x $i ]     #condition to allow only the executable files from all the files in that iterating directory.
    then
	for j in $var    #loop to access each executable file and further count them
	do
	    count=$((count+1))   #the variable will increment after every count and thus will give the final count for that particular    directory.
	done
    fi
    echo "Current count:$count"   #the count of the executable files will be displayed for each iterating file.
    sum=$((sum+count))          #sum was 0 initially and later after every iteration the directory count keeps on adding to the sum to get the total sum of all the executable files in $PATH.
done
echo "The total number of executable files are: $sum"  #display the total sum/
