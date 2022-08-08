<<Documentation
Name:- Anand Arvid Kulkarni
Date:- 22/10/2021
Description:- Script to create an infinite feedback loop.
Documentation

#!/bin/bash

tail -f file.txt >> file.txt | tail -f file.txt

   #here the content of the file name "file.txt" is again sent to the same file as a feedback through redirection. The redirection (>>)   helps to send the appended output to the same file again.
   # tail -f  ( -f means follow ) is used to append (add the same content) the same file.The same content is added again and again to the file which results to an infinite loop.
   #piping is used to give the output of the earlier command to the same command again.
   #thus piping, tail -f and redirection used in the above syntax create a infinite loop which is terminated by Ctlr+C only. 
   #to check the appended output use cat (file name). The files earlier content will be added below to it till the loop is not terminated.
