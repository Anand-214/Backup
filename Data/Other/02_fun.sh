#!/bin/bash
if [ $# != 2 ]
then 
    echo "Usage: enter 2 arguments"
else
    echo "The 1st argument is			:$1"
    echo "The 2nd argument is			:$2"
    echo "The total number of arguments are	:$#"
    echo "List of the arguments is		:$*"
    echo "The addition of $1 & $2 is		:`expr $1 + $2`"
fi
