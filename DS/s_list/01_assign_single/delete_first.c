#include"main.h"
#include<stdio.h>
#include<stdlib.h>
int delete_first (slist_t** head)    //function defintion to delete the first element of the list.
{
    if (*head == NULL)          //condition if the list is empty.
    {
	printf("INFO:The list is empty.\n");  
	return FAILURE;
    }
    slist_t* temp = *head;    //if the list is not empty then these operations take place.
    *head = temp->next;
    free (temp);      //after deleting the node freeing the memory of that particluar node.
    return SUCCESS;
}
