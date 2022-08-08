#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int delete_element(dlist_t** head, int data)   //function to delete element in a list
{
    if( *head == NULL )
	return EMPTY;
    dlist_t* tmp = *head;

    if ( tmp->data == data )    //if first node has to be deleted
    {
	*head = tmp->next;
	(*head)->prev = NULL;
	free(tmp);
	return SUCCESS;		
    }

    while( tmp != NULL && tmp->data != data )   // loop until data is found
    {
	tmp = tmp->next;		
    }

    if( tmp == NULL )		// if data not found
	return FAILURE;

    if( tmp->next == NULL )		// if last has to deleted
    {
	tmp->prev->next = NULL;
	free(tmp);
	return SUCCESS;	
    }

    tmp->prev->next = tmp->next;
    tmp->next->prev = tmp->prev;
    free(tmp);     //free the deleted element.

    return SUCCESS;
}
