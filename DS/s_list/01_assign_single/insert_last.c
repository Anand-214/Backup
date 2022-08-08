#include"main.h"
#include<stdio.h>
#include<stdlib.h>
int insert_last (slist_t** head, int val)  //function defintion to insert element at last.
{
    slist_t *temp;    //variable declaration.
    temp = *head;

    slist_t *new = malloc(sizeof(slist_t));   //memory allocation for the new ode.

    if (NULL == new)
    {
	return FAILURE;
    }

    new->data = val;     // update the data and link.
    new->next = NULL;

    if (*head == NULL )  // If empty list 
    {
	*head = new;  //update head and tail.
	return SUCCESS;
    }
    else
    {
	while(temp->next)      //iterate till the last
	{
	    temp = temp->next;
	}
	(temp->next) = new;    // establish link between last and new Node and update tail.
    }
    return SUCCESS;
}
