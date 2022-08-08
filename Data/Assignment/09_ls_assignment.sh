<<documentation
Name:- Anand Arvind Kulkarni
Date:- 12/10/2021
Discription:- Write a script to read 'n' and generate the fibonacci numbers.
Sample i/p(1):- Enter the limit of fibonacci series: 10
Sample o/p(1):- 0 1 1 2 3 5 8
Sample i/p(2):- Enter the limit of fibonacci series: 34
Sample o/p(2):- 0 1 1 2 3 5 8 13 21 34
Sample i/p(3):- Enter the limit of fibonacci series: -10
Sample o/p(3):- ERROR: Please enter only positive numbers.
Sample i/p(4):- Enter the limit of fibonacci series: 87y8
Sample o/p(4):- ERROR: ERROR Please enter only numbers
documentation

#!/bin/bash
read -p "Enter the limit for fibonnaci series: " Number    #Input from the number to display the limit of the series.

if [[ $Number =~ ^[-]?[0-9]+$ ]]                    #To check if the number entered is not an alphanumeric number.
then
    if [ $Number -gt 0 ]                                #To check if the number entered is a positive number or not.
    then
	a=0    #initial value of the series.
	b=1    #second initial of the series
	echo -n "$a"                  #The first term is displayed from where the series starts
	while [[ $sum -le $Number ]]  #limiting condition for the series(i.e when this condition is false the series is not terminated.
	do
	    echo -n "$sum "           #This displays the complete series after the operations below
	    a=$b                      #The first term is replaced by the second term when in loop iteration
	    b=$sum                    #The sum of the series generated till now is replaced as the second term for further iterations. 
	    sum=$((a+b))       #Both the above replaced terms are added by this formula and the loop continues till this sum < i/p number.
	done
    else
	echo "ERROR:Please enter only positive numbers."  #error displayed if the i/p is a negative number.
    fi
else
    echo "ERROR:Please enter only numbers."           #error displayed if the i/p is an alphanumeric number.
fi
