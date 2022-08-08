/*
 * Name		  : Sindhu T S
 * Date		  : 05.07.2021
 * Description	  : Write a function to insert new data in the already sorted linked list and to detect whether the given linked list is ending with loop or not.
 * Input & Output :  

 Entered datas are: 2 -> 4 -> 8 -> 10 -> 12 -> NULL
 1.Insert sorted 
 2.Create loop
 3.Find loop
 4.print list
 5.Exit
 Enter the option: 5

 */

#include "main.h"
int main()
{
    /* to store address of first node */
    data_type choice, status, d;
    slist *head = NULL;                                                         
    system("clear");

    /* condition to continuous loop */
    while (1)                                                                   
    {
	printf("1.Insert sorted\n2.Create loop\n3.Find loop\n4.print list\n5.Exit\nEnter the option: ");
	/* read the choice */
	scanf("%d", &choice);                                              
	system("clear"); 

	switch (choice)                                                    
	{
	    case 1:
		printf("Enter the data :");
		scanf("%d", &d);

		/* function call to insert at last and to print statements accordingly*/
		status = insert_at_last(&head, d);                   
		if (status == 0)
		    printf("Error: Insertion if Failure\n");
		else
		    printf("The data has been inserted successfully\n");
		break;

	    case 2:
		printf("Enter the data: ");
		scanf("%d", &d);

		/* function call to creat loop and to print statements accordingly*/
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

	    case 3:
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

	    case 4:
		/* function to print list */
		print_list(head);                                    
		break;

	    case 5:
		/* exit */                                      
		return 1;                                            
		break;

	    default:
		printf("ERROR : INVALID OPTION\n");
	}
    }
}



