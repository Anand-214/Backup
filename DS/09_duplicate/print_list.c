#include<stdio.h>
#include "main.h"
#include<stdlib.h>

int print_list( slist *head ) //Function defination to print list
{
    if( head == NULL ) //Check wheather list is empty or not
    {   
	return FAILURE;
    }   
    slist *temp = head;
    printf("SL List ");
    while( temp != NULL ) //Loop will iterate till last node
    {   
	printf("[%d] -> ",temp -> data); //Printing data
	temp = temp -> next; //Next node address
    }   
    return SUCCESS;
}

