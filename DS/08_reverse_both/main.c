#include<stdio.h>
#include"main.h"

int main()
{
    slist_t* head = NULL;
    int choice, val, result;
    char ch;
    do
    {
	printf("\n");        
	printf("Select Operation from the list displayed below.\n");    //display menu.
	printf("1.Insert the element\n2.Print list\n3.Reverse iterative\n4.Reverse recursive\n");
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
		print_list(head);             //function call.
		break;
	    case 3:
		result = reverse_iterative(&head);
		(result == SUCCESS)? printf("INFO: Reverse SUCCESS\n"): printf("INFO: Reverse FAILURE\n");
		if (result == EMPTYLIST)
		{
		    printf("INFO: List is empty\n");
		}
		break;
	    case 4:
		result = reverse_recursive(&head);
		(result == SUCCESS)? printf("INFO: Reverse SUCCESS\n"): printf("INFO: Reverse FAILURE\n");
		if (result == EMPTYLIST)
		{
		    printf("INFO: List is empty\n");
		}
		break;
	    default:
		printf("ERROR: Please select the option from the Displayed menu only.\n");
		break;
	}
	printf("\n");
	printf("Do you want to continue?(y/n):");  //user prompt.
	scanf(" %c", &ch);
    }while(ch == 'y' || ch == 'Y');    //do-while loop executes if user enters y / Y.
}



