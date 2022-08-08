/*
Name:Abhishek Khot
Date:12/7/2021
Assignment name:Assignment_21
Description:WAF to search given data and to find max data node from the BST
input:gcc /Assignment_21$ make
./main.out
Enter the option
 1.Insert
 2.Print
 3.Search
 4.Find_min
 5.Find_max
 Enter your choice : 1
Enter the data to insert into tree: 5
Info:inserted tree successfully
Validated data
 5
do you want to continue(y/n):y
 Enter the option
 1.Insert
 2.Print
 3.Search
 4.Find_min
 5.Find_max
 Enter your choice : 1
Enter the data to insert into tree: 6
Info:inserted tree successfully
Validated data
 5 6
do you want to continue(y/n):y
 Enter the option
 1.Insert
 2.Print
 3.Search
 4.Find_min
 5.Find_max
 Enter your choice : 1
Enter the data to insert into tree: 9
Info:inserted tree successfully
Validated data
 5 6 9
do you want to continue(y/n):y
 Enter the option
 1.Insert
 2.Print
 3.Search
 4.Find_min
 5.Find_max
 Enter your choice : 1
Enter the data to insert into tree: 10
Info:inserted tree successfully
Validated data
 5 6 9 10
do you want to continue(y/n):y
 Enter the option
 1.Insert
 2.Print
 3.Search
 4.Find_min
 5.Find_max
 Enter your choice : 1
Enter the data to insert into tree: 4
Info:inserted tree successfully
Validated data
 4 5 6 9 10
do you want to continue(y/n):y
 Enter the option
 1.Insert
 2.Print
 3.Search
 4.Find_min
 5.Find_max
 Enter your choice : 3
Enter the data to search in tree: 5
Info: 5 is present in tree
Validated data
 4 5 6 9 10
do you want to continue(y/n):y
 Enter the option
 1.Insert
 2.Print
 3.Search
 4.Find_min
 5.Find_max
 Enter your choice : 4
Info:4 is Minimum number
Validated data
 4 5 6 9 10
do you want to continue(y/n):y
 Enter the option
 1.Insert
 2.Print
 3.Search
 4.Find_min
 5.Find_max
 Enter your choice : 5
Info:10 is Maximum number
Validated data
 4 5 6 9 10
do you want to continue(y/n):y
 Enter the option
 1.Insert
 2.Print
 3.Search
 4.Find_min
 5.Find_max
 Enter your choice : 2
 4 5 6 9 10
Validated data
 4 5 6 9 10
do you want to continue(y/n):n


*/
#include"binary.h"

int main()
{
    //declare variables
    int choice,data,result;
    char ch;

    bstree_t *left = NULL;
    bstree_t *right = NULL;
    bstree_t *root;
    do
    {
	printf(" Enter the option\n 1.Insert\n 2.Print\n 3.Search\n 4.Find_min\n 5.Find_max\n Enter your choice : ");
	scanf("%d", &choice);

	switch(choice)
	{
	    case 1: //function for insert data
		printf("Enter the data to insert into tree: ");
		scanf("%d",&data);
		root = insert(root,data);
		break;
	    case 2: //function for print data
		print_inorder(root);
		printf("\n");
		break;
	    case 3: //function for search data
		printf("Enter the data to search in tree: ");
		scanf("%d",&data);

		result = search(root,data);
		if( result == DATA_NOT_FOUND )
		{
		    printf("Info: %d is not present\n",data);
		}
		else if ( result == DATA_FOUND )
		{
		    printf("Info: %d is present in tree\n",data);
		}
		break;
	    case 4: //functon for find minimum
		result = find_min(root);
		if( result == EMPTY_TREE )
		{
		    printf("Info:Tree is empty\n");
		}
		else
		{
		    printf("Info:%d is Minimum number\n",result) ;
		}
		break;
	    case 5: //function for find maximum
		result = find_max(root);
		if( result == EMPTY_TREE )
		{
		    printf("Info:Tree is empty\n");
		}
		else
		{
		    printf("Info:%d is Maximum number\n",result) ;
		}
		break;
	    default:
		puts("Error:Invalid option\n");
	}

	//check for validation
	printf("Validated data\n");
	print_inorder( root );

	//asking to repeat the function
	printf("\ndo you want to continue(y/n):");
	scanf("\n%c",&ch);
    }while( ch == 'y' || ch == 'Y' );
    return 0;
}
