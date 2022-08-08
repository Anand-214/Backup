#include<stdio.h>
#include "main.h"
#include<stdlib.h>

int Remove_duplicate( slist **head ) //Function defination to delete element
{
    if( *head == NULL ) //Check wheather list is empty or not
    {   
	return FAILURE;
    }   
    slist *temp;
    slist *temp1;
    slist *dup;
    temp = *head;
    while( temp != NULL && temp -> next != NULL )
    {
	temp1 = temp;
	while( temp1 -> next != NULL )
	{

	    if( temp -> data == temp1 -> next -> data) //Check head and temp is equal
	    {   
		//Delete and free element
		dup = temp1 -> next;
		temp1 -> next = temp1 -> next -> next; //Skip the duplicate element
		free(dup);
	    }   
	    else
	    {
		temp1 = temp1 -> next; //Next node address
	    }
	}
	temp = temp -> next; //Next node address
    }
    return SUCCESS;
}


