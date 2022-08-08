#include <stdio.h>
#include <stdlib.h>
#include "main.h"

//function to insert node at first
int insert_first(dlist_t** head, int data){
	
	if( *head == NULL )		// check if head is empty
	{
		dlist_t* new = malloc(sizeof(dlist_t));
		
		if( new == NULL )	
			return FAILURE;

		new->next = NULL;
		new->data = data;
		new->prev = NULL;
		*head = new;

		return SUCCESS;
	}

	dlist_t* new = malloc(sizeof(dlist_t));

	if( new == NULL )
		return FAILURE;

	dlist_t* tmp = *head;

	new->next = *head;
	new->data = data;
	new->prev = NULL;
	*head = new;

	return SUCCESS;
}
