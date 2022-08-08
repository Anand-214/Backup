#include "main.h"
#include<stdio.h>
#include<stdlib.h>

int reverse_iterative(slist_t **head)
{
	//take local reference to traverse through the link
	slist_t *temp, *nextNode, *result = NULL;
	temp = *head;
	
	//to check for empty
	if((*head) == NULL)
	{
		return EMPTYLIST;
	}
	else
	{
		//iterate to the last of a list and copy this into result in reverse order
		while(temp)
		{
			//get the next node
			nextNode = temp->next;
			// move the node onto the result
			temp->next = result; 
			result = temp;
			//update the temp node for iteration
			temp = nextNode;
		}
		(*head) = result;
	
		return SUCCESS;
	}
	return FAILURE;
}
