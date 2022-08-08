#include <stdio.h>
#include "main.h"

//function to print the data
int print(dlist_t* head){

	if( head == NULL ){
	
		printf("Info: List Empty\n");
		return FAILURE;
	}
	
	dlist_t* tmp = head;

	printf("DL List Head -> ");
	while(tmp != NULL){				// loop till all the elements
	
		printf("[%d] <-> ",tmp->data);	
		tmp = tmp->next;
	}

	printf("Tail\n");	

	return SUCCESS;
}
