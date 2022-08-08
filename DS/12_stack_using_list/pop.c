#include "main.h"

int pop(Stack *S, data_t *data)
{
    //if stack is empty, return stackempty.
    if ( S->top == NULL )
    {
	return STACKEMPTY;
    }
    else
    {
	SLink *temp = S->top;   //traverse along the stack.

	if(temp->link == NULL)  //check if only one node is present.
	{
	    //get the data from top and save in data and free.
	    (*data) = S->top->data;
	    S->top = NULL;
	    free(S->top);
	}
	else
	{
	    //get the data from top and save in data and free.
	    (*data) = S->top->data;

	    // if list has multiple nodes then, update top and free the topmost node.
	    S->top = (S->top->link);
	    free(temp);
	}
	return SUCCESS;
    }
    return FAILURE;
}

