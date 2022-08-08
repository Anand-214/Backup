/*Documentation
Name: Anand Arvind Kulkarni.
Date: 04/02/2022
Description: WAF to sort the given single linked list.
 */

#include "main.h"

int main()
{
    slist_t *head = NULL;       // initialising head with null
    data_t num, option, ret;    // declaring variable.
    char choice;              
    do
    {
	printf("1.Insert last\n2.Sort\n3.print list\nEnter your choice : "); // display menu. 
	scanf("%d", &option);      //user input.
	switch(option)
	{
	    case 1 :
		printf("Enter the number to be inserted: ");
		scanf("%d", &num);
		ret = insert_last(&head, num);   //function call to insert node at last.
		if ( ret == FAILURE )
		    printf("ERROR: Insert at last failed.\n");
		break;

	    case 2 :
		ret = sort(&head);                 // function call to sort the list.
		if ( ret == LIST_EMPTY )
		    printf("INFO: Failed to sort.List is Empty.\n");
		break;

	    case 3 :
		print_list (head);              //function call to print the list.
		printf("INFO: Printing list successfully.\n");
		break;

	    default :
		printf("ERROR: Please Enter the proper option.\n");
		break;
	}
	printf("Do you want to continue?(y/Y): ");    //user prompt.
	getchar();
	scanf("%c", &choice);
    }while ( choice == 'Y' || choice == 'y' );    //do-while loop executed if user enters Y or y only.
    return 0;
}
