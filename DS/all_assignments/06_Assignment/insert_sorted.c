#include<stdio.h>
#include "main.h"
#include<stdlib.h>

int insert_sorted (slist**  head, int val)  //function defintion to insert first element.
{
    slist *new = malloc(sizeof(slist));  //memory allocation
    if (new == NULL)
    {
	return FAILURE;
    }
    new->data = val;         //updating values
    new->link = NULL;
    if (*head == NULL)      //check if list is empty or not.
    {	
	*head = new;
	return SUCCESS;
    }
    else                   //insert at first
    {
	new->link = *head;
	*head = new;
    }
}

