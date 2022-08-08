#include <stdio.h>
#include <stdlib.h>
#include "main.h"

//function to insert node at first
int insert_first(slist_t** head,int data)
{
    if( *head == NULL )              // check if head is NULL
    {
	slist_t* new = malloc(sizeof(slist_t));			// allocate memory dynamically
	if ( new == NULL )	// if not successfully allocated 
	{
	    return FAILURE;	
	}
	new->data = data;		// add data to node 
	new->next = NULL;		// store address of node to NULL
	*head = new;			// head is pointing to node
	return SUCCESS;
    }
    else
    {
	slist_t* new = malloc(sizeof(slist_t));			// allocate memory dynamically 
	if ( new == NULL )
	{
	    return FAILURE;	
	}
	new->data = data;			// store data
	new->next = *head;			// strore address of head which was previously pointing other node
	*head = new;				// make head point to newly created node
	return SUCCESS;
    }	
}
