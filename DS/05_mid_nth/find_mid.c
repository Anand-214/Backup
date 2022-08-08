#include<stdio.h>
#include<stdlib.h>
#include"header.h"

int find_mid( slist **head)   //function definition.
{
    if (*head == NULL)       //condition to check if the list isnt empty.
    {
	printf("List is empty\n");
	return FAILURE;
    }
    slist *slow = *head;    //assigning value of both the pointer to head.
    slist *fast = *head;
    while ( fast -> next != NULL )  //iterate over the loop till end of the list.
    {
	fast = fast -> next;
	if (fast -> next == NULL )  
	    break;
	fast = fast -> next;    
	slow = slow -> next;
    }
	return slow -> data;     //slow->data is the mid value returned.
}
