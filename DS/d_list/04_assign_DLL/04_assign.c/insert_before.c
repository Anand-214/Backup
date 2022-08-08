#include <stdio.h>
#include <stdlib.h>
#include "main.h"

//function to insert before a specific node
int insert_before(dlist_t** head, int before, int data){

	if( *head == NULL )
		return EMPTY;
		
	dlist_t* tmp = *head;

	if( tmp->data == before){		// if data has to be inserted before first node
	
		dlist_t* new = malloc(sizeof(dlist_t));

		new->next = tmp;
		new->data = data;
		new->prev = NULL;
		tmp->prev = new;
		*head = new;
		
		return SUCCESS;	
	}

	while( tmp != NULL && tmp->data != before){		// loop til the element is found
	
		tmp = tmp->next;		
	}

	if( tmp == NULL )
		return FAILURE;

	dlist_t* new = malloc(sizeof(dlist_t));

	if( new == NULL )
		return FAILURE;

	new->next = tmp;
	new->data = data;
	new->prev = tmp->prev;
	tmp->prev->next = new;
	tmp->prev = new;

	return SUCCESS;
}
