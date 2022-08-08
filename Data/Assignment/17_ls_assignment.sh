<<Documentation
Name:-Anand Arvind Kulkarni
Date:-13/10/2021  
Description:-Write script to print contents of file from given line number to next given line number.
Sample i/p(1):- ./17_print_lines.sh 5 3 myfile.txt
Sample o/p(1):- line number 5.
		line number 6.
		line number 7.
Sample i/p(2):- ./17_print_lines.sh myfile.txt
Sample o/p(2):-  ERROR:argument missing!!Please enter 3 arguments. 
		 Usage: ./file_filter.sh start_line upto_line.
		 eg: ./20_file_filter.sh 5 5 <file>
Sample i/p(3):- ./17_print_lines.sh 5 10 myfile.txt
Sample o/p(3):-	ERROR: <file name> is having only <no. of lines> lines,file should have at least <expected no.of lines> lines to execute."
Documentation

#!/bin/bash
if [ $# -eq 3 ]      #Condition if the number of arguments passed as i/p are not equal to 3.
then 
    lines=`(expr $1 + $2)`  #variable to check the required lines are less than the exisiting no. of lines in file.
    if [ $lines -le 11 ]    #to check if the required no. of lines in o/p do not exceed the total no. of lines in file.
    then
	if [ -f $3 ]       #to check whether 3rd argument is a regular file or not.
	then
	    if [ -s $3 ]   #to check whether 3rd argument is not an empty file.
	    then		
		count=`(expr $lines - 1)`   #the actual no. of lines to be printed by 
		cat $3 | head -n $count | tail -n $2  #this command will select the starting line ad the end line upto which the lines are to be printed. 
	    else
		echo "The file is empty"   #error if the file is empty.
	    fi
	else
	    echo "It is not a regular file." #error if the file is not a regular exisitng file.
	fi
    else #below error displayed if the required lines exceed than the actual no. of lines in file. 
	echo -e "ERROR: $3 is having only $(wc -l < $3) lines.\nFile should have at least $(($lines-1)) lines to execute."
    fi
else    #below error displayed if 3 arguments are not passed in i/p.
    echo -e "ERROR:argument missing!!Please enter 3 arguments.\nUsage: ./file_filter.sh start_line upto_line.\neg: ./20_file_filter.sh 5 5 <file>"
fi
