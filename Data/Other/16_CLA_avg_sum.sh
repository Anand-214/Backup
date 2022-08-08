#!/bin/bash
#sum ad avg of n arguments entered

echo "The total arguments entered are: $#"
echo "The list of the arguments is : $@"

	sum=0
        for i in $@
	do
    sum=$(($sum+$i))
done
echo "The sum of the command lines is: $sum"
avg=`echo "scale=3;$sum/$#"|bc`
echo " the average is :$avg"

