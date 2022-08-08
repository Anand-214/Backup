#include "main.h"

void print_list(slist *head)
{
    /* to sort the value of head */
    slist *temp;                                     
    temp = head;                                     
    printf("Enterd datas are: ");

    /* to check temp is NULL or not */
    while (temp != NULL)                             
    {
	/* to print data */
	printf("%d -> ", temp -> data);              
	temp = temp -> link;                       
    }
    printf("NULL\n");
}

