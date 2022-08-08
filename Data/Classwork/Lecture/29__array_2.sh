#!/bin/bash
#Program shows how array can be declared

#declare an array
declare -a FRUITS=(Apple Mango Kiwi Grapes)

echo "element o : ${FRUITS[0]}"
echo "element 1 : ${FRUITS[1]}"
echo "element 2 : ${FRUITS[2]}"
echo "element 3 : ${FRUITS[3]}"

echo "list of array : ${FRUITS[*]}"
echo "Size of an array : ${#FRUITS[@]}"
