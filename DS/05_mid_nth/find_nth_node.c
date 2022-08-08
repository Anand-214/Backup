#include<stdio.h>
#include<stdlib.h>
#include"header.h"

int find_nth( slist **head, int nth)   //function defintion
{
    if ( *head == NULL )  //to check if the list is empty or not.
    {
	return FAILURE;
    }
    int count = 1, count1 = 1;    //variable initialization.
    slist * temp = *head;         //assigning the pointer values as head.
    slist * find = *head;          
    while (temp -> next != NULL)  //iterate over the loop till end of the list.  
    {
	temp = temp -> next;     
	if ( count >= nth )      //count value increments only till nth value.
	{
	    find = find -> next;  
	}
	count++;
    }
	return find -> data;        
}

