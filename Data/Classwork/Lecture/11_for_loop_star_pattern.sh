#!/bin/bash
#To print Star pattern
for row in `seq 6`
do
    echo -n "$row-->"
for col in `seq 5`
    do
	echo -n "*"
done
echo 
done


