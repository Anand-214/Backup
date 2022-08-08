#include "main.h"
#include <stdio.h>
#include <stdlib.h>

//Function definition for insert first node
int insert_first( dlist **head,dlist **tail, int val)
{
    dlist *new = malloc(sizeof(dlist)); //Dynamic memory allocation for structure pointer
    if ( new == NULL)  //Checking new node create or not
    {
	printf("node creation failed\n");
	return FAILURE;
    }
    //insert value in node data
    new -> data = val;
    new -> next = NULL;
    new -> prev = NULL;
   
    if( *head == NULL && *tail == NULL)  //Checking whether the list is empty or not
    {
	*head = *tail = new; 
	return SUCCESS;
    }
    //Inserting first node
    new -> next = *head;
    (*head) -> prev = new;
    *head = new;
	return SUCCESS;
}
