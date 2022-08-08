#!/bin/bash
#Executing for loop
#Loop 1
for i in Mango Banana Orange Apple
do
	echo $i
done
echo
echo "Loop 2"
#Loop 2
FRUITS="Mango Banana Orange Apple"
for i  in $FRUITS
do
	echo $i
done

