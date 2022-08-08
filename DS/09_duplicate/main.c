/*Documentation
Name: Anand Arvind Kulkarni
Date: 29/01/2022
Description:  WAP to remove duplicates in a SLL
 */

#include<stdio.h>
#include "main.h"
int main()
{
    slist *head = NULL;
    //Variable declaration
    int info, choice;
    char ch; 
    do  
    {   
	printf("1. Insert the element\n2. print list\n3. Remove duplicate\nchoose: ");
	scanf("%d",&choice);
	switch( choice )
	{
	    //Case 1 to insert data in list
	    case 1:
		printf("Enter the number that you want to insert : ");
		scanf("%d",&info );
		if( insert_element( &head, info ) ) //Function call for insert first
		{
		    printf("INFO: Data Insertation successful\n");
		}
		else
		{
		    printf("INFO: Data Insertation fail\n");
		}
		break;
		//case 2 to print list
	    case 2:
		if( print_list( head )) //Function call to print linked list
		{
		    printf(" NULL\n");
		}
		else
		{
		    printf("INFO: List is empty\n");
		}
		break;
		//case 3 to remove duplicate element
	    case 3:
		if( Remove_duplicate( &head )) //Function call to delete reverse list
		{
		    printf("INFO: Duplicate element removed\n");
		}
		else
		{
		    printf("INFO: List is empty\n");
		}
		break;
deafult:
		printf("Enter valid option\n");

	}
	//Ask user to continue
	printf("Do you want to continue (Y/y):");
	scanf("\n%c",&ch);
    }while( ch == 'y' || ch == 'Y' );
}

