#!/bin/bash

read -p "Enter the number: " num

if [[ "$num" =~ ^[0-9]+$ ]]
then
    if [[ "$num" =~ ^[-]+$ ]]
then
    echo "Hello"
else
    echo "enter only positive numbers."
    fi
else
    echo "enter only integers."
fi




