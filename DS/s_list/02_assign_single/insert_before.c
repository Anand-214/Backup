#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int insert_before(slist_t** head, int before, int data)   //function to insert before the given element
{
    slist_t* tmp = *head;
    slist_t* prev;	
    if( *head == NULL )		// check if list is empty
	return EMPTY;
    if( (*head)->data == before )   // if element to be inserted before the first node
    {
	slist_t* new = malloc(sizeof(slist_t));	
	new->next = *head;
	new->data = data;
	*head = new;
	return SUCCESS;
    }
    while ( tmp != NULL && tmp->data != before )  // loop till the element is found
    {
	prev = tmp;	
	tmp = tmp->next;	
    }
    if( tmp == NULL )		// if not found 
	return FAILURE;
    else
    {
	prev->next = malloc(sizeof(slist_t));	 //if found create new node before the element	
	if( prev->next == NULL )
	    return FAILURE;

	prev->next->data = data;
	prev->next->next = tmp;
	return SUCCESS;	
    }	
}
