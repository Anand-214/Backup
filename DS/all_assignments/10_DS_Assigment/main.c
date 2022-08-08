/*
Name: Lokesh A Devghare
Assigment: DS_Assigment_10
Date: 08/07/2021
*/

#include "slist.h"

int main()
{
		SLink *head = NULL;
		SLink *ahead = NULL;
		SLink *bhead = NULL;

		int data, a_data, result, index;
		int choice;
		char option;
		int aListElement, bListElement, i;

		do
		{

				printf("Enter the option:\n");
				printf("1. Display List\n");
				printf("2. merge 2 links in sorted order\n");	

				printf("Choice: ");
				scanf("%d", &choice);

				switch(choice)
				{
						case 1:	
								print_list(head);
								break;
						case 2:
								ahead = NULL; 

								printf("Enter the number of elements in list a: ");
								scanf("%d", &aListElement);
								if(aListElement > 0)
								{
										printf("Enter the elements:\n");
								}
								for(i = 0; i < aListElement;i++)
								{
										printf("%d: ", i);
										scanf("%d", &data);
										result = insert_at_last(&ahead, data);
								}

								bhead = NULL;
								printf("Enter the number of elements in list b: ");
								scanf("%d", &bListElement);
								if(bListElement > 0)
								{
										printf("Enter the elements:\n");
								}
								for(i = 0; i < bListElement;i++)
								{
										printf("%d: ", i);
										scanf("%d", &data);
										result = insert_at_last(&bhead, data);
								}

								head = merge_sortedlinks(ahead, bhead);
								printf("Result\n");
								//check the list for validating
								print_list(head);

								break;
						default:
								printf("Invalid entry.\n");
								break;
				}


				/* check for continue */
				printf("Do you want to Continue (y/n): ");
				scanf("\n%c", &option);

				if ( option == 'y' || option == 'Y')
				{
						continue;
				} else
				{
						break;
				}

		} while (1);

		return 0;
}
