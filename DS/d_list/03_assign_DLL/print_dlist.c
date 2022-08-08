#include <stdio.h>
#include "main.h"
//Function definition for print the list
int print_dlist( dlist *head, dlist *tail, int choice )
{
    if( head == NULL && tail == NULL )   //Checking whether list is empty or not
    {
	return FAILURE;
    }
    switch ( choice )  //switch case used for according to choice i will direct jump on case
    {
	case 1: //The case used to print list in forward direction
	    {
		dlist * temp = head; //Initialize structure pointer
		printf("DL List Head ");
		//Iterate loop untill last node
		while (temp != NULL)
		{
		    printf("-> [%d] <",temp -> data);
		    temp = temp -> next;
		}
		printf("- Tail");
		printf("\n");
	    }
	    break;

	case 2:  //The case used to print list in reverse direction
	    {
		dlist *temp1 = tail;  //Initialize structure pointer
		printf("DL List Tail ");
		//Iterate loop untill last node
		while (temp1 != NULL)
		{
		    printf("-> %d <",temp1 -> data);
		    temp1 = temp1 -> prev;
		}
		printf("- Head");
		printf("\n");
		break ;
	    }
	default :  //it's used if user choice invalid case
	    printf("ERROR: Invalid\n"); 
    }
	return SUCCESS;
}
