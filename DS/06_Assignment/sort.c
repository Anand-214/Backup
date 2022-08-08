#include "main.h"

data_type sort(slist **head)              
{
    /* to check head is NULL or not */
    if (*head == NULL)                                                                  
    {
	return LIST_EMPTY;
    }
    else
    {
	int temp3;                   
	slist *temp1 = *head, *temp2 = *head;

	/* loop to check datas */
	for (temp1 = *head; temp1 != NULL ; temp1 = temp1 -> link)                      
	{
	    for (temp2 = temp1 -> link; temp2 != NULL; temp2 = temp2 -> link)
	    {
		/* to check the condition */
		if (temp1 -> data > temp2 -> data)                              
		{
		    /* bubble sorting */
		    temp3 = temp1 -> data;                                
		    temp1 -> data = temp2 -> data;            
		    temp2 -> data = temp3;                 
		}
	    }
	}
	return SUCCESS;
    }

}
