#!/bin/bash
#To find whether the student is failed Average or excellent based on his marks of 3 subjects.
read -p "Marks in  1st subject: " Maths
read -p "Marks in  2nd subject: " English
read -p "Marks in  3rd subject: " Science
Total=`expr $Maths + $English + $Science`
echo "Student scored Total $Total Marks"
if [ $Total -le 50 ]
then
    echo "The Student has Failed"
elif [ $Total -gt 50 -a $Total -le 100 ]
then
     echo "The student is Average"
else
    echo "The Student is Excellent"
fi

