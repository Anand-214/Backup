#!/bin/bash
#To find out the greatest numbers from the given numbers
read -p "Enter the three numbers whose comparision is need to be done :" a b c
if [ $a -gt $b ]
then
    if [ $a -gt $c ]
	then
	    echo "$a is the greatest"
    else
	echo "$c is the greatest"
    fi
elif [ $b -gt $a ]
then 
    if [ $b -gt $c ]
    then
	echo "$b is the greatest"
    else
	 echo "$c is the greatest"
    fi
else
	echo "$c is the greatest"
fi


