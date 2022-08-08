#!/bin/bash
#To print 1 to 100 using while loop
var=0
while [ $var ]
do 
    echo -n "$var "
    var=$((var+2))
done

