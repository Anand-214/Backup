#include "main.h"

int create_loop(slist **head, data_type n)
{
    /* to check head equal to NULL */
    if (*head == NULL)                                    
    {
	return LIST_EMPTY;
    }

    /* assigning head value to temporary pointer */
    slist *temp = *head;  

    /* loop to travel till NULL */
    while (temp != NULL)                                  
    {
	if (temp -> data == n)             
	{
	    /* assigning head to temp -> link */
	    temp -> link = *head;                   
	    return SUCCESS;
	}

	/* assigning temp -> link to temp */
	temp = temp -> link;                            
    }
    return DATA_NOT_FOUND;
}
