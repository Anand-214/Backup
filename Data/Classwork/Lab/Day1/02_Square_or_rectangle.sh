#!/bin/bash
#To check whether the length and breadth corresponds to square or not

read -p "Enter the Length:" Length
read -p "Enter the Breadth:" Breadth

if [ $Length -eq $Breadth ]
then 
	echo "The Length and Breadth corresponds to the Square"
else
          echo "The Length and Breadth corresponds to the Rectangle"
fi
