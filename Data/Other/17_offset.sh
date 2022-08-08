#!/bin/bash

num=1234+
echo ${num:0:1}
echo ${num:1:2}
len=${#num} 
echo "The length is $len"
c=$((len-1))
echo $c

var=${num:0:4}
count=${num:c:1}
echo $var
echo $count

a=${num:0:1}
b=${num:1:1}
echo "$a and $b"
