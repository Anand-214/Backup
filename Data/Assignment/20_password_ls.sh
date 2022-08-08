<<Documentation
Name:- Anand Arvind Kulkarni
Date:- 18/10/2021
Description:- Script for generatinng random 8 character password.
Information:- This script uses the content of the /dev/urandom file.This file contains infinite,executable as well as non-executable characters which are picked and a random 8 character password is generated.
e.g:- a@l9};7
Documentation

#!/bin/bash
#To print password with 8 random printable characters.
cat /dev/urandom | tr -cd [:graph:] | head -c 8 
echo                           

#Details of the commands used are as follows:
# cat         :- displays the content of the file
#/dev/urandom :- reference file
# tr command  :- used to delete the unwanted characters.
# -c          :- it is used to compliment the set.
# -d          :- used to delete the characters in set.
# [:graph:]   :- for extracting all the printable characters without spaces.
# head -c 8   :- using this first 8 characters are selected.
#thus totally from all the non printable characters and the spaces are deleted and finally top 8 characters                                are picked as an output. everytime the script is executed a new set of 8 random characters is displayed.
