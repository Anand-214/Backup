#include "main.h"

int peek(Stack S)     
{
	if ( S.top == NULL )  //return stack is empty if no elements are present in stack.
	{
		return STACKEMPTY;
	}
	
	return S.top->data;   //returns the element present at the top of the stack.
}
