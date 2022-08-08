<<Documentation
Name:- Anand Arvind Kulkarni
Date:- 19/10/2021
Description:- Script to print the largest and the smallest username from /etc/passwd file.
After execution of the script,
		     The largest username is : gnome-initial-setup 
		     The shortest username is : lp
Documentation

#!/bin/bash
max=0         #initialised the max length with value 0 which will become the actual largest value after the loop is completed. 
var=`cat /etc/passwd | cut -d ":" -f 1` #get the contents of /etc/passwd & separate the usernames cloumn by using ":" as delimiter.
arr=($var)                          #the user names column is stored in an array with variable "arr".
min=${#arr[0]}           #initialised the smallest count with the 0th element. 
total=${#arr[@]}                    #here we find the actual length of the complete array .i/e no of lines in the fetched column.
size=$(($total-1))             #the array starts with index 0 hence we need to subtract length with 1 to get the exact count to iterate.
for i in `seq 0 $size`      #to consider all the usernames in the loop we start the sequence from 0 to the size 
do            #in this case the total usernames are 47 hence to invlove all the 47 elements we give sequence from 0 to 46.
    length=${#arr[$i]}        #here the length of each iterating element is calculated.    
    if [ $length -ge $max ] #We compare the length with the initialised value i.e 0 and the one which is greatest is stored.
    then
	max=$length       #the element with the largest length value is the longest user name.
	largest_string=${arr[$i]}   #here we fetch the name of the element which has largest length in terms of integer value.
    fi                 
    if [ $length -le $min ]  #here length of each iterating element is compared with the 0th element.
    then
	min=$length         #the element with smallest user name is stored in this variable
	smallest_string=${arr[$i]}    #here we fetch the smallest user name from all 
    fi
done
echo "The largest username is: $largest_string"   #the largest user name is printed.
echo "The shortest username is: $smallest_string" #the smallest user name is printed.

