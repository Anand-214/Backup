#!/bin/bash
# Program for the uasge of function with CLA
# $# - contains the argument count
# $@ - contains the arguments to function
# Accessing function arguments is similar to accessing cla




#function definition
function find_sum()
{
    echo "Arg count: $#"
    echo "Arg list: $@"
    SUM=0
    #iterate over function arguments
    for ARG in $@
    do
	SUM=`expr $ARG + $SUM`
    done

    echo $SUM
}
 
#call find_sum with many arguments
find_sum 1 2 3 4 5
find_sum $@

