#!/bin/bash
#to print to pattern using for loop along with validation
read -p "Enter the number: " num
if [ $num -lt 2 -o $num -gt 32 ]
then
    echo "ERROR: $num is out of range.Please enter 2<number<2^5"
elif [[ $num =~ ^[0-9]+$ ]]
then 
   # echo $num is only number.
   for var in `seq $num`
   do
       for count in `seq $var`
       do
	   echo -n "$count "
       done
       echo
   done 
 else
     echo "$num is not a number.Please enter a valid number."
fi
