#include "main.h"

// functipon to print sorted order in the list
data_t sort(slist_t **head)
{
    if ( *head == NULL )        // checking if list is empty or not

	return LIST_EMPTY;
    else                         // list is not empty then continue the loop
    {
	if (  (*head)->link == NULL )   // if head of link is null
	    return SUCCESS;
	slist_t *temp, *temp1, *temp2, *temp3, *temp4, *temp5;    // initialising temp variables
	for ( temp3 = *head, temp1 = *head; temp1->link != NULL; temp3 = temp1,temp1 = temp1->link )
	{
	    for ( temp4 = temp1->link, temp2 = temp1->link; temp2 != NULL; temp4 = temp2, temp2 = temp2->link )
	    {
		if ( temp1->data > temp2->data )    // temp1 of data grater than temp2 of data
		{
		    temp = temp1->link;           // temp is equal to temp1 of link
		    temp1->link = temp2->link;    // temp1 of link is temp2 of link
		    temp2->link = temp;           // temp2 of link is stored in temp
		    if ( temp1 != *head )       // temp1 not equal to head
		    {
			temp3->link = temp2;   // temp3 of link is stored in temp2
		    }
		    temp4->link = temp1;
		    if ( temp1 == *head )
			*head = temp2;
		    temp = temp1;
		    temp1 = temp2;
		    temp2 = temp;     // temp1, temp2, temp3, temp4, temp5 is stored in temp variable

		}
	    }
	}
	printf("INFO: Sort list success.\n");
	return SUCCESS;
    }
}
