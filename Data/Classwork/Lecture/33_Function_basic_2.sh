#!/bin/bash
#
# 2 numbers passed to the function

#function definition
function find_sum()
{
    SUM=`expr $1 + $2`
    echo $SUM
}

#Passarguments 10 and 20 to find_sum function
find_sum 10 20

#Save the output of function in a variable
RESULT=`find_sum 100 200`
echo "Result :- $RESULT"
RESULT1=`find_sum 120 380`
echo "Result :- $RESULT1"

