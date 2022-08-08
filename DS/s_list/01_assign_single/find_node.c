#include"main.h"
#include<stdio.h>
#include<stdlib.h>

int find_node(slist_t **head, int val)  //function definition to find the particular element from the list.
{
    if (*head == NULL)     //Check for list empty
    {
	printf("INFO: The list is empty.");
	return FAILURE;
    }
    if ((*head)->data == val)  //Check for first node
    {
	return SUCCESS;
    }
    slist_t *temp = *head;   //Assigning head value to a temporary variable.

    while(temp)      //Traversing through the list till value is found.
    {
	if (temp->data == val)
	{
	    return SUCCESS;
	}
	temp = temp->next;
    }
}
