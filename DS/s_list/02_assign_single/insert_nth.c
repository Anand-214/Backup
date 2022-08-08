#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int insert_nth_pos(slist_t** head, int pos, int data)   //function to insert at nth position
{
    int count = 1;
    slist_t* tmp = *head;
    slist_t* prev;
    if( *head == NULL )	// check if list is empty
	return EMPTY;
    if( pos == 1 )		// if the node to be inserted is at 1 position
    {
	slist_t* new = malloc(sizeof(slist_t));
	new->next = *head;
	new->data = data;
	*head = new;
	return SUCCESS;	
    }
    while(tmp != NULL && count != pos)	//loop till the position 
    {
	++count;	
	prev = tmp;
	tmp = tmp->next;	
    }	
    if(tmp == NULL)		//if position not present 
	return FAILURE;

    else
    {
	prev->next = malloc(sizeof(slist_t));   //create node at given position	
	if( prev->next == NULL )
	    return FAILURE;
	prev->next->data = data;
	prev->next->next = tmp;	
	return SUCCESS;	
    }
}
