#include"main.h"
#include<stdio.h>
#include<stdlib.h>

//Function definiton for delete first node
int delete_first( dlist **head , dlist **tail)
{
    if ( *head == NULL && *tail == NULL )  //Checking whether tha head and tail are NULL or not
    {
	printf("List is Empty\n");  
	return FAILURE;
    }
    *head = (*head) -> next;
    if ( *head != NULL ) //Checking whether head is NULL or not
    {
	free((*head) -> prev);
	(*head) -> prev = NULL;
	return SUCCESS;
    }
    //deleting first node
    free(*tail);
    *tail = NULL;
    return SUCCESS;

}
