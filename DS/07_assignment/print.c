#include"main.h"
#include<stdio.h>
#include<stdlib.h>
int print_list (slist_t* head)    //function to print the complete list.
{
    slist_t* temp = head;
	printf("SL list:  ");
    while (temp != NULL)          //loop till NULL to print data of each node.
    {
	printf("[%d] -> ", temp->data);   
	temp = temp->link;           //here temp is pointing to the next node now.
    }
	printf("NULL");
	printf("\n");
}
