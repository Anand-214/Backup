#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int delete_element(slist_t** head, int data)    // function to delete the element
{
    slist_t* tmp = *head;
    slist_t* prev;	
    if( *head == NULL )		// if list is empty
	return EMPTY;
    
    if( tmp->data == data )    // if element to be deleted is first element
    {
	*head = tmp->next;
	free(tmp);	
	return SUCCESS;
    }
    
    while ( tmp != NULL && tmp->data != data )  // loop till the element is found
    {
	prev = tmp;	
	tmp = tmp->next;	
    }
    
    if( tmp == NULL )		// if data not found
	return FAILURE;
    
    else
    {
	prev->next = tmp->next;
	free(tmp);	
	return SUCCESS;	
    }	

}

