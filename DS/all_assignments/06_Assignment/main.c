
/*Documentation
Name		  : Anand Arvind Kulkarni
Date		  : 03/02/2022
Description	  : Write a function to insert new data in the already sorted linked list and to detect whether the given linked list is ending with loop or not.
 */

#include "main.h"
int main()
{
    /* to store address of first node */
    data_type option, status, d;
    char choice;
    slist *head = NULL;                                                         

    /* condition to continuous loop */
    do
    {
	printf("1.Insert at last\n2.Print list\n3.Insert sorted\n4.Find loop\n5.Create loop\nEnter the option: ");
	/* read the choice */
	scanf("%d", &option);                                              

	switch (option)                                                    
	{
	    case 1:
		printf("Enter the number you want to insert at last:");
		scanf("%d", &d);
		if (insert_last (&head, d))    //function call.
		    printf("INFO:Insertion successful.\n");
		else
		    printf("ERROR:Insertion Failed.\n");
		break;

	    case 2:
		/* function to print list */
		print_list(head);                                    
		break;

	    case 3:
		printf("Enter the data :");
		scanf("%d", &d);
		status = insert_sorted (&head, d);  
		if (status == 0)
		    printf("Error: Insertion if Failure\n");
		else
		    printf("The data has been inserted successfully\n");
		break;

	    case 4:
		/* function call to find loop and to print statements accordingly */
		status = find_loop(head);                          
		if (status == 2)
		{
		    printf("LIST IS EMPTY\n");
		}
		else if (status == 4)
		{
		    printf("LOOP FOUND\n");

		}
		else if (status == 5)
		{
		    printf("ERROR : LOOP IS NOT FOUND\n");
		}
		break;

	    case 5:
		printf("Enter the data: ");
		scanf("%d", &d);

		/* function call to create loop and to print statements accordingly*/
		status = create_loop(&head, d);                       
		if (status == 1)
		{
		    printf("LOOP CREATED\n");
		}
		else if (status == 2)
		{
		    printf("LIST IS EMPTY\n");
		}
		else if (status == 3)
		{
		    printf("Error : Entered data is not found\n");
		}   
		break;

	    default:
		printf("ERROR : INVALID OPTION\n");
	}
	printf("Do you want to continue?(y/Y):");
	scanf(" %c", &choice);
    }while (choice == 'y' || choice == 'Y');

}



