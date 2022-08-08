#!/bin/bash
#to execute usage of CLA
#here we access arguments by iterating $@

echo "Total numbers of arguments : $#"
echo "Arguments list : $@ " #commonly used
echo "Arguments list : $* " 

#Iterate over arguments $@)
echo "Iterate over arguments ($@)"
for ARG in $@
do 
    echo $ARG
done
#Iterate over argumentsand finding sum
echo "Sum of all command line arguments:"
for ARG in $@
do
   echo "$ARG" 
    sum=$(($sum + $ARG))
done
