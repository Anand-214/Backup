<<Documentation
Name:- Anand Arvind Kulkarni
Date:- 13/10/2021
Description:- Script for arithmetic calculator using command line arguments.
Sample i/p(1):- ./04_arithmetic_calc.sh 25 + 41 
       o/p(1):- 25+41=66
Sample i/p(2):- ./04_arithmetic_calc.sh 10 x 5
       o/p(2):- 10x5=50
Sample i/p(3):- ./04_arithmetic_calc.sh 10.2 - 5.6
       o/p(3):- 10.2-5.6=4.6
Sample i/p(4):- ./04_arithmetic_calc.sh 25 / 5
       o/p(4):- 25/5=5
Sample i/p(5):- ./04_arithmetic_calc.sh 23
       o/p(5):- Please pass 3 arguments.
		Usage: ./04_arithmetic_calc 2.3 + 6.7
Sample i/p(6):- ./04_arithmetic_calc.sh
       o/p(6):- Please pass arugments through command line.
		Usage: ./04_arithmetic_calc 2.3 + 6.7
Documentation

#!/bin/bash
if [ $# -gt 0 ]    #condition if no arguments are passed.
then 
    if [ $# -eq 3 ] #condition to check if only 3 arguments are passed or not.    
    then

	case $2 in             #case statement for checking multiple conditions one by one according to the operator entered.       
	    + ) addition=`echo "scale=3;$1+$3"|bc`  #addition of entered numbers-Piping using bc command-scale=3 for upto 3 decimals.
		echo "$1+$3= $addition"             
		;;
	    - ) subtraction=`echo "scale=3;$1-$3"|bc` #subtraction of entered numbers-piping using bc command-scale=3 for upto 3 decimal 
		echo "$1-$3= $subtraction"             
		;;
	    x ) multiplication=`echo "scale=3;$1*$3"|bc` #multiplication of entered numbers.
		echo "$1x$3= $multiplication"
		;;
	    / ) division=`echo "scale=3;$1/$3"|bc` #division of entered numbers.
		echo "$1/$3= $division"
		;;	       
	    * ) 
		echo "Use +,-,x,/ as operators." #default condition if none of the above operators are entered.
		;;
	esac
    else
	echo -e "ERROR:Please pass 3 arguments.\nUsage: ./04_arithmetic_calc 2.3 + 6.7" #error if 3 arguments are not passed.
    fi
else
    echo -e "ERROR:Please pass the arugments through command line.\nUsage: ./04_arithmetic_calc 2.3 + 6.7" #error if no argument is passed
fi
