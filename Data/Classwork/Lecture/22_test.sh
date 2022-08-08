#!/bin/bash
#To check exists or not

if [ -e emp.txt ]
then
	echo "The file is present"
        if [ -s emp.txt ]
	then
                echo "The file is not empty"
	        head -2 emp.txt
	else "file is empty"
	fi
else
      echo "file not exist"
fi
