/*Documentation
Name: Anand Arvind Kulkarni.
Date: 29/01/2022.
Description: WAP for stack implementation using arrays.
 */

#include "main.h"

int main()
{
    Stack stackArray;      //initialize the stack
    stackArray.top = -1;   //stack position indicator.

    int data, result;      //variable declaration.
    char choice;
    int option;

    do                    //do-while loop initiated.
    {
	printf("1.Push\n2.Pop\n3.Peep(Print stack)\n4.Peek(Element at Top)\nEnter your option:");  //display menu.	
	scanf("%d", &option);

	switch(option)
	{
	    case 1:      //To push element into stack.
		printf("Enter the element to be pushed onto stack: ");
		scanf("%d", &data);
		result = push(&stackArray, data);    //function call.
		(result == SUCCESS)? printf("INFO: PUSH successful.\n"): printf("PUSH failed.\n") ;
		if (result == STACKFULL)
		{
		    printf("Stack is full\n");
		}
		break;
	    case 2:      //To pop the topmost element.
		result = pop(&stackArray, &data);   //function call.
		(result == SUCCESS) ? printf("INFO: POP successful.\n") : printf("INFO: POP failed.\n") ;
		if (result == STACKEMPTY)
		{
		    printf("Stack is empty\n");
		}
		break;
	    case 3:       //To print the exisitng stack.
		result = peep(stackArray);   //function call.
		(result == SUCCESS)? printf("INFO: PEEP operation successful.\n"): printf("INFO: PEEP operation failed.\n");
		if (result == STACKEMPTY)
		{
		    printf("Stack is empty\n");
		}
		break;
	    case 4:     //To print the top value.
		result = peek(stackArray);    //function call.
		(result == STACKEMPTY) ? printf("INFO: peek failed.\nINFO: Stack is empty\n") : printf("INFO: peek value: %d\n", result) ;
		break;
	    default:  
		printf("Invalid option\n");
		break;
	}
	printf("Do you want to continue?(y/Y): ");   // check for continue.
	scanf(" %c", &choice);
    }while (choice == 'y' || choice == 'Y');
    return 0;
}
