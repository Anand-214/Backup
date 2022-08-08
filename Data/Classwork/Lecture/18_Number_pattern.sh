#!/bin/bash
#to print to pattern using for loop along with validation
read -p "Enter the number of rows: " row1
if [[ $row1 =~ ^[0-9]+$ ]]
then 
    echo $row1 is only number
    for row in `seq $row1`
 do
    for col in `seq $row`
    do 
	echo -n "$col "
    done
else
    echo "$row1 is not a number"
    echo "$row1 is not a number"
done
fi
