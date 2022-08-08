#!/bin/bash
#to print Word taken from user 3 times in a set of 4 using while loop
read -p "Enter the word to be printed in sets: " word
count=0
while [ $count -lt 4 ]
do
var=0
while [ $var -lt 3 ]
do 
    echo "$word  "
    var=$((var+1))
done
    count=$((count+1))
echo
done

