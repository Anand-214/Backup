/*Documentation
Name: Anand Arvind Kulkarni
Date: 29/01/2022
Description: WAP for stack implementation using linked list.
*/


#include "main.h"

int main()
{
    Stack stackList;       //initialize the stack
    stackList.top = NULL;

    int data, result;      //variable declaration.
    char choice;
    int option;

    do                    // do-while loop initiated.
    {      
	printf("1.push\n2.pop\n3.peep (print stack)\n4.peek (Element at top)\nSelect the operation:");  //menu.	
	scanf("%d", &option);          

	switch(option)   //switch case to execute the selected operation.
	{
	    case 1:       
		printf("Enter the element to be pushed onto stack: ");   
		scanf("%d", &data);
		result = push(&stackList, data);   //function call to push element.
		(result == SUCCESS)? printf("INFO: PUSH operation success.\n"): printf("INFO: PUSH operation failed. \n") ;
		if (result == STACKFULL)   
		{
		    printf("Stack is full\n");
		}
		break;
	    case 2:
		result = pop(&stackList, &data);   //function call to pop the topmost element.
		(result == SUCCESS)? printf("INFO: POP operation success.\n"): printf("INFO: POP operation failed.\n") ;
		if (result == STACKEMPTY)
		{
		    printf("INFO: Stack is empty!!!\n");
		}
		break;
	    case 3: 
		result = peep(stackList);          //function call to print the stack.
		(result == SUCCESS)? printf("INFO: PEEP operation success.\n"): printf("INFO: PEEP operation failed.\n") ;
		if (result == STACKEMPTY)
		{
		    printf("INFO: Stack is empty!!!\n");
		} 
		break;
	    case 4:
		result = peek(stackList);      //function call to print the top of stack.
		(result == STACKEMPTY)? printf("INFO: PEEK failed.\nStack is empty\n"): printf("Peek value: %d\n", result);
		break;
	    default:
		printf("ERROR: Invalid option selected.\n");
		break;
	}
	printf("Do you want to continue?(y/Y): ");  // check for continue.
	scanf(" %c", &choice);
    }while (choice == 'y' || choice == 'Y');      //do-while loop executes if i/p is either y / Y only.
    return 0;
}
