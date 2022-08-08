#To perform all artihmatic operations in one program
#!/bin/bash
read -p "Enter the three numbers for the operations: " a b c
sum=`expr $a + $b + $c`
echo "The sum is $sum"
sub=`expr $a - $b`
echo "The sub of $a and $b is $sub"
mul=`expr $a \* $b \* $c`
echo "The multiplication is $mul"
div=`echo "scale=3;$b/$c"|bc`
echo "The division of $b and $c is $div"



