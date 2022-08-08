<<Documentation
Name:- Anand Arvind Kulkarni
Date:- 19/10/2021
Description:- Count the number of user ID's between the given range.
Sample i/p(1):- ./30_user_id.sh 
       o/p(1):- The count of the user ID between 500 to 10000 is:2
Sample i/p(2):- ./30_user_id.sh 0 100
       o/p(2):- The count of the user ID between 0 to 100 is:45
Sample i/p(3):- ./30_user_id.sh 100 20
       o/p(3):- Error:Please enter a valid range through command line.
Sample i/p(4):- ./30_user_id.sh 100
       o/p(4):- Error:Please enter 2 arguments through command line.

Documentation
#!/bin/bash
count=0                #variable to count the user ID's in various conditions used.
var=`cat /etc/passwd | cut -d ":" -f 3`  #will fetch the contents of the /etc/passwd file and cut the 3rd column of USER ID's.
if [ $# -eq 0 ]        #if no command line argument is passed then by default this condition will be executed
then
    for i in $var      #iterating using for loop to access the contents received for the cut commad.
    do
	if [ `echo "$i>=500 && $i<=10000" | bc` -eq 1 ]  #by default the user id's between 500 to 10000 will be displayed.
	then
	    count=$((count+1))       #this increment of count by 1 will count the id's dureing iteration from 500 to 10000.
	fi
    done
    echo "The count of the user ID between 500 to 10000 is:$count" #the final count after the for loop completes is displayed here.
fi    
if [[ $# != 0 ]]       #if the arguments passed are not equal to zero the condition will be true or else the above steps executed.
then
    if [ $# -eq 2 ]    #if the arguments passed are exactly 2 then the condition is true else the user will be notified error.
    then
	if [ $1 -gt $2 ]   #our valid range to display o/p is such that first argument no. should be less than the 2nd argument no.
	then
	    echo -e "Error:Please enter a valid range through command line.\nUsage: ./30_user_id.sh 100 200" 
	elif [ $1 -lt $2 ]  #if the 1st argument number is less than 2nd argument number then its a valid range and the below program     according to the conditions is execute.
	then   
	    for i in $var   #iterating using for loop to check each id between the given range. here the variable "var" from line 17 is   used.
	    do 
		if [[ `echo "$i>=$1 && $i<=$2" | bc` -eq 1 ]]   #to limit the number of id's between the given range use of if condition  done.
		then
		    count=$((count+1))         #the final count of ID's between the 1st argument and 2nd argument is stored in variable.
		fi 
	    done
	    echo "The count of the user ID's between $1 to $2 is:$count" #final count is displayed here showing the user ID's between the entered range through command line.
	fi
    else
	echo -e "Error:Please pass 2 arguments through command line.\nUsage: ./30_user_id.sh 100 200"  #error if less or more than 2        argumets  are passed.
    fi
fi
