#!/bin/bash
#Program shows how array 
#declare an array
#collecting list of cmd args in to an array
arr=($@)
#print size/length of an array
echo "Length: ${#arr[@]}"
echo "Whole array: ${arr[@]}"
echo "Whole array: ${arr[*]}"

echo "Looping over array elements"
#iterate over array elements
for ITEM in ${arr[@]}
do 
    echo $ITEM
done
#sum of cmd line arguments
echo "Iterating over array and finding the sum:"
sum=0
for ITEM in ${arr[@]}
do
    var=$ITEM
    sum=$((sum+var))
done
echo "Sum is $sum"
echo "iterating over array based on length and findind sum"
len=$((${#arr[*]} - 1))
sum=0
for ITEM in `seq 0 $len`
do var=${arr[$ITEM]}
    sum=$((sum+var))
done
echo "sum is $sum"



