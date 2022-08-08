<<Documentation
Name:- Anand Arvind Kulkarni
Date:- 22/10/2021
Description:- Display the names of the files-system which have less than 10% free space available.
After Execution:- 
		  FIlesystem /dev/loop2 have less than 10% free space.
		  FIlesystem /dev/loop1 have less than 10% free space.

Documentation

#!/bin/bash
start=`df -h | tr -s " " | cut -d " " -f 1`    #after the "df" command the first field of file systems is separated by the cut command. 
file_system=($start)                       #the 1st field is stored in an array to iterate using s for loop.
occupied_space=(`df -h | tr -s " " | cut -d " " -f 5 | cut -d "%" -f 1`) # the 5th filed stating the used space info is separated and the "%" symbol after every entry is separated further so that it can be treated as an integer value to calculate the available space.
length=${#occupied_space[@]}          #length calculated to get the total number of fields. This is further used to decide the loop count.
echo

echo "File systems which have memory less than 10% are:"
echo
for number in `seq 1 $((length-1))`    #we exclude the 1st row of the "df" command information. Thus the loop has count from 1 to len-1.
do
    available_space=$((100-occupied_space[number]))  #available space of each file system is calculated. 100-the used space gives available space
    if [ $available_space -lt 10 ]       #we need only those file system names in which the calculated available space is less than 10%
    then
	echo "FIle system ${file_system[$number]} have less than 10% available_space space."
    fi           
done
