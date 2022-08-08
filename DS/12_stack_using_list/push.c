#include "main.h"

int push(Stack *S, data_t data)    //function definition
{

	SLink *new = malloc(sizeof(SLink));   //create a new Node

	if (NULL == new)     // If malloc fails, stack is full 
	{
		return STACKFULL;
	}
		
	new->data = data;   //update the newNode, link and data
	new->link = NULL;

	if ( (S->top) == NULL)    //check if stack is empty initially.
	{
		(S->top) = new;   //update the stack with newi node value.	
		return SUCCESS;
	}
	new -> link = (S -> top);    //establish link between existing stack and new Node.
	S -> top = new;              //update the top value to current pushed value.
	return SUCCESS;
}
