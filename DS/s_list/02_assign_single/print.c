#include <stdio.h>
#include "main.h"

// function to print the entire list.
void print(slist_t* head)
{
    slist_t* tmp = head;
    if ( head == NULL )	// if head contains no address
    {
	printf("List Empty\n");
    }
    else
    {
	printf("SL List ");
	while( tmp != NULL ){		// loop until the end of the list
	    printf("[%d]-> ", tmp->data);		// print data
	    tmp = tmp->next;	
	}
	printf("NULL\n");	
    }
}
