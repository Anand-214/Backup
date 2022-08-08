/*Documentation
Name: Anand Arvind Kulkarni.
Date: 26/01/2022
Description: WAF to insert and delete the data at the first and last position. ALso to delete the list (DLL).
 */

#include<stdio.h>
#include "main.h"
int main()
{
    dlist *head = NULL;         //Structure pointer initialization with NULL
    dlist *tail = NULL;
    int choice,node,option;     //Variable declaration
    char ch;
    do
    {
	//menu to be displayed.
	printf("1.Insert first\n2.Insert last\n3.Delete first\n4.Delete last\n5.Delete_list\n6.Print list\nEnter your option: ");
	scanf("%d",&choice);  //get user input.

	switch ( choice )  //Switch case initiated.
	{
	    case 1:  //if user choose to insert at first
		printf("Enter the number you have to insert at the first: ");
		scanf("%d",&node);
		if ( insert_first( &head , &tail, node ))  //Function call for insert node at first
		    printf("FAILURE\n");
		else
		    printf("INFO : Insertion sucessfully\n");
		break ;
	    case 2:  //if the user choose to insert at last 
		printf("Enter the number you have to insert at the last: ");
		scanf("%d",&node);
		if ( insert_last( &head , &tail, node ))  //Function call for insert node at last
		    printf("FAILURE\n");
		else
		    printf("INFO : Insertion sucessfully\n");
		break ;
	    case 3:  //If the user choose to delete first node
		if ( delete_first( &head , &tail ))  //Function call for delete first node
		    printf("FAILURE\n");
		else
		    printf("INFO : Deleted frst sucessfully\n");
		break ;
	    case 4:  //If the user choose to delete last node
		if ( delete_last( &head, &tail ))  //Function call for delete last node
		    printf("FAILURE\n");	
		else
		    printf("INFO : Deleted last sucessfully\n");
		break ;
	    case 5:  //If the user choose to delete entire list
		if ( delete_list( &head , &tail ))  //Function call foe delete list
		    printf("FAILURE\n");
		else
		    printf("INFO : Deleted list sucessfully\n");
		break ;
	    case 6:  //for printing the list.
		//printing the menu
		printf("1. print forward\n2. print reverse\nEnter your choice: ");
		scanf("%d", &option);  //Scan value from user
		if ( print_dlist(head, tail, option) )  //Function call for print list
		    printf("list is empty\n");
		break;
	    default :
		printf("invalid case\n");
	}
	printf("Do you want to continue?(y/Y): ");   //user asked if they want to continue.
	scanf(" %c",&ch);    //get the user input.
    }while ( ch == 'y' || ch == 'Y' );
}

