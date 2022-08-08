<< Documentation
Name:- Anand Arvind Kulkarni
Date:- 13/10/2021
Description:- Arithmetic Operations to perform arithmetic operation on digits of a given number.
Sample i/p(1):- 12345+
       o/p(1):- 15
Sample i/p(2):- 345*
Sample o/p(2):- 60
Documentation

#! /bin/bash
number=$1  #input command line argument 
len=${#number}   #we find the length of the o/p here
count=$((len-1))   #the complete numbers of i/p are seperated from the operator
operator=${number:$count:1}  #the operator is stored here
result=${number:0:1}  #use of offset command to access the first digit
if [ $# -eq 1 ]       #condition to check if one argument is passed or not
then
    if [[ $operator =~ ^[+]?[-]?[*]?[/]?+$ ]]  #checking whether the operator is present at the last or not
    then
	for i in `seq 1 $((count-1))`   #for loop executed with carry the operation one by one digit with the seperated operator.
	do
	    var=${number:$i:1}
	    result=`echo "scale=2; $result $operator $var" | bc`  #the main o/p of the complete loop
	done
	echo "$result"  
    else
	echo -e "ERROR:operator missing.\nPlease pass operator as last digit (+,-,*,/)" #error if the operator is missing at the end
    fi
else
    echo -e "ERROR:Please pass one argument ending with a operator."  #error if the i/p has no argument passed
fi
