#include"main.h"
#include<stdio.h>
#include<stdlib.h>

//Function defination for delete list
int delete_list( dlist **head , dlist **tail)
{
    if( *head == NULL && *tail == NULL )  //Checking whether the head is equal to null and tail is equal to null or not
    {
	printf("List is empty\n");
	return FAILURE;
    }
    else
    {
	dlist *temp = *head;
	//Iterate over argument
	while ( temp -> next != NULL )
	{
	*head = temp -> next;  //Stored temp next in head
	(*head) -> prev = NULL;
	temp = temp -> next;
	free(temp -> prev);  //Free the node
	}
	*head = *tail = NULL;  //Stored null in head and tail
	return SUCCESS;
    }
}
