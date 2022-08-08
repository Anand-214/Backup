#include<stdio.h>
#include<stdlib.h>
#include"main.h"

int delete_list (slist_t** head)   //function defintion to delete the entire list.
{
    if (*head == NULL)             //condition to check if the list is empty.
    {
	printf("INFO:The list is empty.\n");  
	return FAILURE;
    }
    else                          //if the list is not empty then these opeartions.
    {
	slist_t* temp = *head;
	slist_t* prev = temp;
	while ( temp != NULL)
	{
	    prev = temp;
	    temp = temp->next;
	    free(prev);
	}
	*head = NULL;
	return SUCCESS;
    }
}
