#include "main.h"

int peep(Stack S)
{
	
	if ( S.top == NULL )     //return stackempty if there are no elements in the stack.
	{
		return STACKEMPTY;
	}
	else
	{
		SLink *temp = S.top;    //traverse along the stack
	
		//iterate till the last and print what ever is there in the list.
		while(temp)
		{
			printf("[%d] -> ", temp->data);
			temp = temp->link;
		}
		printf("NULL\n");
		return SUCCESS;   //return
	}
	return FAILURE;	
}
