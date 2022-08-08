#!/bin/bash
#To show program for the execution of arrays
#declare an array
FRUITS=(Apple Mango Banana Kiwi)

#print the size/length of an array
echo "Length:${#FRUITS[*]}"
echo "Whole array: ${FRUITS[@]}"
echo "Whole array :${FRUITS[*]}"

echo "Looping over array elements"
#itterate over array elements
for ITEM in ${FRUITS[@]}
do
    echo $ITEM
done


