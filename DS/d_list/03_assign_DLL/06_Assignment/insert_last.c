#include "main.h"

int insert_at_last(slist **head, data_type data)
{
    /* Dynamic memory allocation */
    slist *new = malloc(sizeof(slist));

    /* to check new equal to NULL or not */
    if (new == NULL)                              
    {
	return FAILURE;
    }

    /* assigning data */
    new -> data = data;                             
    new -> link = NULL;      

    /* condition to check head is NULL */
    if (*head == NULL)                           
    {
	/* assigning new */
	*head = new;                          
	return SUCCESS;
    }

    slist *temp = *head;

    /* loop tp travel till NULL */
    while (temp -> link != NULL)                   
    {
	/* assigning next node address */
	temp = temp -> link;                    
    }

    /* sorting */
    temp -> link = new;                           
    sort(head);                                   
    return SUCCESS;
}
