/*Documentation.
Name: Anand Arvind Kulkarni.
Date: 26/01/2022.
Description: WAF to insert data after & before given data. Also to delete given element (DLL)
 */
#include <stdio.h>
#include "main.h"

int main()
{
    char ch;
    dlist_t* head = NULL;		// initialise head to NULL
    do
    {
	int option;
	printf("1.Insert First\n");
	printf("2.Insert before\n");
	printf("3.Insert after\n");
	printf("4.Delete element\n");
	printf("5.Print List\n");
	printf("Enter your choice: ");
	scanf("%d", &option);		// read option from user
	switch(option)
	{
	    case 1:
		{
		    int num;
		    printf("Enter a number you want to insert at first: ");	
		    scanf("%d", &num);
		    if( insert_first(&head, num) )		// check if function call is returning 1
			printf("INFO: Insertion Successfull\n");
		    else
			printf("INFO: Insertion Not Successfull\n");
		    break;
		}	
	    case 2:
		{
		    int before,num;
		    printf("Enter the existing number: ");	
		    scanf("%d",&before);
		    printf("Enter a number you have to insert Before %d: ",before);
		    scanf("%d",&num);
		    if( insert_before(&head,before,num) == SUCCESS )		//if function call returns 1
			printf("INFO: Insertion Before Successfull\n");
		    else if( insert_before(&head,before,num) == EMPTY  )
			printf("INFO: List Empty\n");
		    else
			printf("INFO: Insert after not successfull\n");
		    break;
		}
	    case 3:
		{
		    int after, num;
		    printf("Enter the existing number: ");	
		    scanf("%d", &after);
		    printf("Enter a number you have to insert after %d: ",after);
		    scanf("%d", &num);

		    if( insert_after(&head, after, num) == SUCCESS )		//if the function call is returns 1
			printf("INFO: Insertion After Successfull\n");
		    else if( insert_after(&head, after, num) == EMPTY  )
			printf("INFO: List Empty\n");
		    else
			printf("INFO: Insert after not successfull\n");
		    break;
		}
	    case 4:
		{
		    int element;
		    printf("Enter element you want to delete: ");
		    scanf("%d", &element);	
		    if( delete_element(&head, element) == SUCCESS )    //function call.
			printf("INFO: Element Successfully deleted\n");	
		    else if( delete_element(&head, element) == EMPTY )  //function call.
			printf("INFO: List Empty\n");	
		    else
			printf("INFO: Data Not Found\n");	
		    break;
		}
	    case 5:
		print(head);    //function call to print the exisiting list.
		break;					
	    default: 
		printf("ERROR: Please enter the option between the displayed menu above.\n");
		break;
	}	
	printf("Do you want to continue(y/Y): ");
	scanf(" %c",&ch);	
    }while(ch == 'y' || ch == 'Y');		//do-while loop executes if user enters y or Y.
}
