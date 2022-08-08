#include"main.h"
#include<stdio.h>
#include<stdlib.h>

//Function definition for delete last node
int delete_last( dlist **head , dlist **tail)
{
    if( *head == NULL && *tail == NULL )  //Checkinfg whether the head and tail are NULL or not
    {
	printf("List is empty\n");
	return FAILURE;
    }
    if ( *head == *tail )  //Checking whether address of head and tail are equal or not
    {
	*tail = *head = NULL;
	free(*tail); 
	return SUCCESS;
    }
    else
    {
	//Deleting last node
	dlist *temp = *tail;
	*tail = temp -> prev;
	(*tail) -> next = NULL;
	free(temp);  
	return SUCCESS;
    }
}
