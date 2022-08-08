/*Documentation
Name: Anand Arvind Kulkarni.
Date: 26/01/2022
Description: WAF to insert and delete the data at first & last position. Also to find the given node & to delete list (SLL) 
 */

#include<stdio.h>
#include"main.h"

int main()
{
    slist_t* head = NULL;
    int choice,val;
    char ch;
    do
    {
	printf("\n");        
	printf("Select Operation from the list displayed below.\n");    //display menu.
	printf("1.Insert first\n2.Insert last\n3.Delete first\n4.Delete last\n5.Delete list\n6.Find node\n7.Print list\n");
	printf("Enter your choice:");
	scanf("%d", &choice);    //get the opration from user.
	switch (choice)
	{
	    case 1: 
		printf("Enter the number you want to insert at first:");
		scanf("%d", &val);
		if (insert_first (&head, val))     //function call. if statement executes uf the return is SUCCESS.
		    printf("INFO:Insertion successful.\n");
		else                  //else executes if function returns FAILURE.
		    printf("ERROR:Insertion Failed.\n");
		break;
	    case 2:
		printf("Enter the number you want to insert at last:");
		scanf("%d", &val);
		if (insert_last (&head, val))    //function call.
		    printf("INFO:Insertion successful.\n");
		else
		    printf("ERROR:Insertion Failed.\n");
		break;
	    case 3:
		if (delete_first (&head))       //function call.
		    printf("INFO:Delete first successful.\n");
		else
		    printf("ERROR:Delete first has Failed.\n");
		break;
	    case 4:
		if (delete_last (&head))       //function call.
		    printf("INFO:Delete last successful.\n");
		else
		    printf("ERROR:Delete last has Failed.\n");
		break;
	    case 5:
		if (delete_list (&head))      //function call.
		    printf("INFO:Delete list successful.\n");
		else
		    printf("ERROR:Delete list has Failed.\n");
		break;
	    case 6:
		printf("Enter the key to find:");
		scanf("%d", &val);
		if (find_node(&head, val))    //function call.
		    printf("INFO:%d found in the list.\n", val);
		else
		    printf("ERROR:%d not found in the list.\n", val);
		break;
	    case 7:
		print_list(head);             //function call.
		break;
	    default:
		printf("ERROR:Please select option from the list displayed above.\n");
		break;
	}
	printf("\n");   
	printf("Do you want to continue?(y/n):");  //user prompt.
	scanf(" %c", &ch);
    }while(ch == 'y' || ch == 'Y');    //do-while loop executes if user enters y / Y.
}
