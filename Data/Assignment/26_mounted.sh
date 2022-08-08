<<Documentation
Name:- Anand Arvind Kulkarni.
Date:- 22/10/2021
Description:- Script to determine whether given system or mount point is mounted.
Sample i/p (1):- ./26_mounted.sh /udev
Sample o/p(1):- FIle system /udev is mounted on /dev and ti is having 0% used space with 4003104KB free.
Documentation

#!/bin/bash    
#tr command used several times below squeezes the spaces into an uniform pattern so that the cut command can be used with those spaces as a delimiter.
sys_file=(`df | tr -s " " | cut -d " " -f 1`) #cut used to separate the file system column from the total hard disk information by "df". 
len=${#sys_file[@]}       #the length tells us how many file systems in all are mounted so that we can use it to give sequence in loop.
avail=(`df | tr -s " " | cut -d " " -f 4`) #cut used to separate the available space column from the "df" command info.
used_percent=(`df | tr -s " " | cut -d " " -f 5`) #here we separate the used percent field from the total fields.
present_on=(`df | tr -s " " | cut -d " " -f 6`) #here cut command separates the "mounted on" column .
count=0      #we initialized a count as 0 which is further used to prioritise the if conditions.
if [ $# -eq 0 ]   #an error is displayed if no command line passed.
then
    echo "Error:Please pass the name of file system through command line."  #error message.
else
    for i in `seq 1 $((len-1))` #the length calculated above is used to run for loop as len-1 so that the 1st row is not considered.
    do
	name=${sys_file[$i]}   #to check the command line passed has an existing matchs with the file system names we declared a variable.
	if [[ $1 = $name ]]  #if the command line and the iterating file system names match then it means the file system is mounted.
	then
	    count=1     #count incremented means when the above condition is true display that particular file system info.
	    echo "File System $1 is mounted on ${present_on[$i]} and it is having ${used_percent[$i]} used space with ${avail[$i]}KB free space." 
	fi         #in the above echo statement the fields which were cut initially are displayed so that a customised information of the       particular file system is displayed as output.
    done
    if [ $count -eq 0 ]   #whenever the command line name doesnt match with the exisiting file system names the count remains 0. Thus it can be used as a condition to inform the user that the given system is not mounted.
    then
	echo "$1 is not mounted."
    fi
fi
