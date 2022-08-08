#!/bin/bash
#Assignment 17

if [ -f $3 ]
then 
    	echo "It is not an exisiting file but is a directory"
       elif [ -s $3 ]
       then 
	   echo "It is an empty file"
       fi


