#!/bin/bash
#Program to execute sequence
#Uses for loop to iterate the reange
read -p "Enter the n value : " n
RANGE=`seq 1 $n`

#iterate over range 1 2 3..10

for i in $RANGE 
do 
	echo $i
done
echo "OR"
for i in `seq $n`
do
	echo $i
done

