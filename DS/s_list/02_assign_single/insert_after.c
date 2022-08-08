#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int insert_after(slist_t** head, int after, int data)      //function to insert after the given element
{
    slist_t* tmp = *head;
    if( *head == NULL )	// check if list is empty
	return EMPTY;
    while ( tmp != NULL && tmp->data != after )	   //loop till the element is found
    {
	tmp = tmp->next;	
    }

    if( tmp == NULL )		// if element not present
	return FAILURE;

    slist_t* new = malloc(sizeof(slist_t));	 //if element present create new node after the given element node.	

    if( new == NULL )
	return FAILURE;

    if( tmp->next == NULL )
    {
	new->next = NULL;
	new->data = data;
	tmp->next = new;	
	return SUCCESS;
    }	
    new->next = tmp->next;
    new->data = data;
    tmp->next = new;
    return SUCCESS;	
}
