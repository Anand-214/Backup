#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int insert_after(dlist_t** head, int after, int data)   //function to insert after a specific node
{

    if( *head == NULL )		//check if node is empty
	return EMPTY;

    dlist_t* tmp = *head;

    while( tmp != NULL && tmp->data != after )  // loop until the data is found
    {
	tmp = tmp->next;		
    }

    if( tmp == NULL )		// if data not found
	return FAILURE;

    dlist_t* new = malloc(sizeof(dlist_t));

    if( new == NULL )
	return FAILURE;

    if( tmp->next == NULL )    //if data has to inserted at last node
    {
	new->next = NULL;
	new->data = data;
	new->prev = tmp;
	tmp->next = new;	

	return SUCCESS;
    }

    new->next = tmp->next;
    new->data = data;
    new->prev = tmp;
    tmp->next = new;
    new->next->prev = new;

    return SUCCESS;
}
