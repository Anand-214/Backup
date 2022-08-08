#include"main.h"

data_type find_loop(slist *head)
{
    int c = 0;
    slist *temp1, *temp2;                                             
    temp1 = head;                                               
    temp2 = head;

    /* to check the list is empty or not */
    if (head == NULL)                                                
    {
	return LIST_EMPTY;
    }

    while (temp1 != NULL && temp2 != NULL && temp2 -> link != NULL)    
    {
	/* assigning the next addresses */
	temp2 = temp2 -> link;

	/* check temp1 equal to temp2 */
	if (temp1 == temp2)                                      
	{
	    return FINDED; 
	}
    }
    return NOT_FOUND;
}


