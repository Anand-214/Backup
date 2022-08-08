#!/bin/bash
echo "Program for the addition of three numbers"
echo "Enter the three numbers:"
read a b c
sum=`expr $a + $b + $c`
echo "The Sum is $sum"
avg=`echo "scale=3;($a+$b+$c)/3"|bc`
echo "The average is $avg"
sub=`expr $a - $c`
echo "subtraction of a and c is $sub"
div=`echo "scale=5;(($a+$b)/$c)"|bc`
echo "The custom division is:$div"

