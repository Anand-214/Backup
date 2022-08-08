#!/bin/bash
#Assignment 17
if [ $# -eq 3 ]
then 
              var=`(expr $1 + $2)`
	      if [ $var -le 11 ]
              then
		if [ -f $3 ]
	        then
	            if [ -s $3 ]
		    then
	            var=`(expr $1 + $2)`
		    count=`(expr $var - 1)`
		    cat $3 | head -n $count | tail -n $2
	    else
	    echo "The file is empty"
		fi
            else
                 echo "It is not a regular file."
    		fi
else 
exp=`(expr $1 + $2)`
echo "ERROR: There are only $(wc -l < $3) lines,file should have at least $(($exp-1)) lines to execute as per the given arguments."
	fi
    else
		echo "ERROR:argument missing.Please enter 3 arguments."
	        echo "Usage: ./file_filter.sh start_line upto_line"
		echo "eg: ./20_file_filter.sh 5 5 <file>"
fi
