#!/bin/bash
#Program to show usage of function

#function defination
function print_Hello()

{
    echo "========"
    echo "Hello"
    echo "========"
}

#call the function - print_hello
for i in `seq 10`
do
print_Hello
done


