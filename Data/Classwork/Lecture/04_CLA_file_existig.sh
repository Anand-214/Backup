#!/bin/bash
if [ $# -ge 1 ]
then 
   if  [ -e $1 ]
   then 
      echo "The file exists" 
    if [ -S $1 ]
    then
	echo "It is an empty file"
    else
	head -2 $1
    fi
else
    echo "File not exists"
fi
fi
