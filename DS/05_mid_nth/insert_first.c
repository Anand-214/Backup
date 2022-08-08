#include<stdio.h>
#include<stdlib.h>
#include"header.h"

int insert_first( slist **head, int val)  //function definition.
{
    slist *new = malloc(sizeof(slist));   //memory allocation for the newly created node.
    if (new == NULL)
    {
	printf("node creation failed\n");  //to check if node created successfully or not.
	return FAILURE;
    }
    new -> data = val;       //node value assigned.
    new -> next = NULL;     //address of the next node is NULL initially.
    if ( *head == NULL )
    {
	*head = new;       //updating head value with the new node address.
	return SUCCESS;
    }  
	new -> next = *head;  
	*head = new;
	return SUCCESS;
}
