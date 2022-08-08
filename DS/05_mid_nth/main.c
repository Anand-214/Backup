/*Documentation
Name: Anand Arvind Kulkarni
Date: 1/02/2022
Description: WAF to find the mid node & to get the nth node from the end of the linked list (SLL).
*/

#include<stdio.h>
#include"header.h"

int main ()
{
    slist *head = NULL;     //variable declaration.
    int choice, node_data, mid, nth_last;
    char ch;
    do{ 
	printf("1. Insert first\n2. Find Mid\n3. Find Nth last\n4. Print list\nChoose your option: ");  //user prompt.
	scanf("%d",&choice);         //scan input from user.
	switch ( choice )
	{
	    case 1:     //when selected insert first option.
		printf("Enter the number that you want to insert at first: ");
		scanf("%d",&node_data);  
		if ( insert_first( &head, node_data ) )  //function call.
		    printf("INFO: %d Inserted sucessfully\n",node_data);  
		else
		    printf("FAILURE\n");
		break;
	    case 2:   //when selected find mid option.
		if ( mid = find_mid( &head) )    //function call.
		    printf("Middle element in the list is %d\n",mid);
		else
		    printf("FAILURE\n");
		break;
	    case 3:   //for nth last select option.
		printf("Enter the number to find the nth last: ");
		scanf("%d",&node_data);
		if ( nth_last = find_nth( &head, node_data ) )  //function call.
		    printf("%d's last is %d\n",node_data,nth_last);
		else
		    printf("List is empty\n");
		break;
	    case 4:  //when print list option is selected.
		if ( print_list(head) )  //function to print.
		    printf("List printed sucessfully\n");
		else
		    printf("INFO: List is empty\n");
		break;
	    default :  
		printf("Invalid case\n");
	}
	printf("Do you want to continue?(y/Y):");   //user asked if wants to continue with next operation.
	scanf(" %s",&ch);
    } while ( ch == 'y'|| ch == 'Y' );   //do-while loop executed when i/p is y or Y.
}
