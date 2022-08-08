#include<stdio.h>
#include<stdlib.h>
#include"header.h"

int print_list( slist *head)   //function definition.
{
    if ( head == NULL )        //if list is empty.
	return FAILURE;
    slist *temp = head;       //initializing temp variable. 
    printf("SL List ");
    while (temp != NULL)     //iterating over loop.
    {
	printf(" [%d] -> ",temp -> data);   //display msg.
	temp = temp -> next;                //updating temp with the address of next node.
    }
    printf("NULL");           //mark end of node.
    printf("\n");      
    return SUCCESS;
}
