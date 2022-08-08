#!/bin/bash
# Program for the uasge of function with CLA with return.
# $# - contains the argument count
# $@ - contains the arguments to function
# Accessing function arguments is similar to accessing cla




#function definition
function find_sum()
{
    echo "all arguments $@"
    if [ $# -lt 2 ]
    then
	return 1 #return 1 from function (indicate failure)
    fi

    SUM=0
    #iterate over function arguments
    for ARG in $@
    do
	SUM=`expr $ARG + $SUM`
    done

    echo $SUM
}
 
#call find_sum with many arguments
find_sum $@
echo done
