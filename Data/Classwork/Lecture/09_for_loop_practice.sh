#!/bin/bash
#Print a word entered from user using for loop
read -p "Enter the word to be printed in loop: " word
for i in `seq 4`
do
    for j in `seq 3`
    do
	echo "$word"
done
	echo
done  



