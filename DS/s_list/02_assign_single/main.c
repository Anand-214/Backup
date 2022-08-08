/* Documentation
Name: Anand Arvind Kulkarni.
Date: 26/01/2022
Description: WAF to insert data after and before given data and at nth position. ALso delete the given elements.(SLL)
 */

#include <stdio.h>
#include "main.h"

int main()
{
    char ch;
    slist_t* head = NULL;		//initialise head to NULL
    do
    {
	int option;
	printf("\n");        
	printf("Select Operation from the list displayed below.\n");    //display menu.
	printf("1.Insert first\n2.Insert after\n3.Insert before\n4.Insert Nth\n5.Delete element\n6.Print list\n");
	printf("Enter your choice:");
	scanf("%d", &option);	       //read option from user
	switch(option)
	{
	    case 1: 
		{
		    int num;
		    printf("Enter a number you want to insert at first: ");	
		    scanf("%d", &num);
		    if( insert_first(&head,num) )		// check if function call is returning 1
			printf("INFO: Insertion Successfull\n");
		    else
			printf("INFO: Insertion Not Successfull\n");
		    break;
		}
	    case 2: 
		{
		    int num, after;
		    printf("Enter number you want to search: ");
		    scanf("%d", &after);		// read after number
		    printf("Enter number you want to insert after %d: ",after);
		    scanf("%d", &num);		// read data

		    if( insert_after(&head, after, num) == SUCCESS )      // check is the function returns SUCCESS (1)
			printf("INFO: %d is inserted successfully\n", num);
		    else if( insert_after(&head, after, num) == EMPTY )  // check if function return EMPTY macro (2)
			printf("INFO: List Empty\n");			
		    else
			printf("INFO: %d not present in list\n", after);

		    break;	
		}
	    case 3:{
		       int num, before;
		       printf("Enter number you want to search: ");
		       scanf("%d", &before);		// read before number
		       printf("Enter number you want to insert before %d: ",before);
		       scanf("%d", &num);		// read the data to be inserted
		       if( insert_before(&head, before, num) == SUCCESS)		// check return of the function is 1
			   printf("INFO: %d is inserted successfully\n", num);
		       else if( insert_before(&head, before, num) == EMPTY )		
			   printf("INFO: List Empty\n");			
		       else
			   printf("INFO: %d not present in list\n", before);
		       break;	
		   }
	    case 4:
		   {
		       int pos, data;
		       printf("Enter the node number: ");
		       scanf("%d", &pos);		// read position 
		       printf("Enter the number that you want to insert %dth position: ", pos); 
		       scanf("%d", &data);
		       if( insert_nth_pos(&head, pos, data) == SUCCESS ) 
			   printf("INFO: %d successfully inserted at the position %d\n", data, pos);
		       else if( insert_nth_pos(&head, pos, data) == EMPTY )
			   printf("INFO: List Empty\n");
		       else
			   printf("INFO: %d position not found\n", pos);
		       break;
		   }
	    case 5:
		   {
		       int num;
		       printf("Enter the element you need to delete: ");
		       scanf("%d", &num);		// read number to be deleted
		       if( delete_element(&head, num) == SUCCESS )
			   printf("INFO: Element deleted succssfuly\n");
		       else if( delete_element(&head, num) == EMPTY )
			   printf("INFO: List Empty\n");			
		       else
			   printf("INFO: %d not present in list\n", num);
		       break;
		   }
	    case 6:
		   print(head);		 	  
		   break; 
	    default: 
		   printf("ERROR: Please select option from the menu displayed above.\n");
		   break;
	}	
	printf("Do you want to continue(y/Y): ");
	scanf(" %c", &ch);		// read character from user
    }while(ch == 'y' || ch == 'Y');		//loop untill ch is 'y/Y'.
}
