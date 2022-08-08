#include<stdio.h>
#include<stdlib.h>
#include"main.h"

int delete_last (slist_t** head)   //function definition to delete the last node.
{
    if (*head == NULL)     //condition to check if the list is empty or not.
    {
	printf("INFO:The list is empty.\n");
	return FAILURE;
    }
    else                  //if the list is not empty.
    {
	slist_t* temp = *head;
	slist_t* prev = temp;
	while ( temp->next != NULL)
	{
	    prev = temp;
	    temp = temp->next;
	}
	if ( temp == *head )    //if only one node is present.
	{
	    *head = NULL;
	    free(temp);
	    return SUCCESS;
	}
	else
	{
	    prev->next = NULL;
	    free(temp);
	    return SUCCESS;
	}
    }
}
