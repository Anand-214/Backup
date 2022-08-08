<<Documentation
Name:- Anand Arvind Kulkarni
Date:- 18/10/2021.
Description:- Script to greet the user everytime the terminal is opened and display the current date and time in a modified way.
Sample output:- If its a morning then the greetings for the user will be
		Good Morning user!!Have a nice day.
		This is Monday 18 in October of 2021 (16:10:20 PM)
Documentation


#!/bin/bash

#pattern of the date command to display info is e.g. friday 15 october 2021 06:40:10 PM. This will help to follow to cut command used.
day_and_date=`date | cut -d " " -f 1,2` #this separates the day and the date from the date commands.
month=`date | cut -d " " -f 3`          #this separates the month from the date command.
year=`date | cut -d " " -f 4`           #this separates the year from the date command.
time=`date | cut -d " " -f 5,6`         #this separates the time from the date command.

whole_info="This is $day_and_date in $month of $year ($time)"
hour=`date +%H`           #date +%H gives info of the currently going on hour between 0 to 24 according to the current time)
if [ $hour -ge 5 -a $hour -lt 12 ]        #if time is between 5AM to 12PM
then
    echo "Good Morning $USER!!Have a nice day."  #greetings for the user
elif [ $hour -ge 12 -a $hour -lt 13 ]      #if time is between 12PM to 1PM.   
then
    echo "Good noon $USER!!Have a nice day."     
elif [ $hour -ge 13 -a $hour -lt 17 ]      #if the time is between 1PM to 5PM
then
    echo "Good afternoon $USER!!Have a nice day."
elif [ $hour -ge 17 -a $hour -lt 21 ]      #if the time is between 5PM to 9PM.
then                                      
    echo "Hello $USER!!Have a great Evening"     
else
    echo "Hello $USER!!Have a great night."   #display this line if time is between 9PM to 5AM.
fi
echo "$whole_info"
