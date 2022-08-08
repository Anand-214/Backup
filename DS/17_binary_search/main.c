/*Documentation
Name: Anand Arvind Kulkarni
Date: 28/01/2022
Description: Write a binary search function in both iterative and recursive methods.
 */

#include "main.h"

int main()
{
    int elementArray[ARRAYSIZE];       //array declaration.
    int totalElements, result, data;   //variable declaration.
    int option, i = 0;
    char choice;
    do 
    {
	printf("1.Create an array\n2.Binary Search Iterative\n3.Binary Search Recursive\n4.Print array\nEnter the option:");	
	scanf("%d", &option);

	switch(option)
	{
	    case 1:   //case to get the array in which search needs to be done.
		printf("Enter the size of array: ");    //user prompt.
		scanf("%d", &totalElements);

		for(i = 0; i < totalElements; i++) 
		{
		    printf("%d: ", i);                //get elements one by one.
		    scanf("%d", &elementArray[i]);
		}
		break;

	    case 2:   //search element to search iteratively.
		printf("Enter the element that needs to be searced: ");   //user prompt.
		scanf("%d", &data);

		result = binary_Iterative(elementArray, 0, totalElements-1, data);
		(result == NOELEMENT)? printf("Element is not present in array \n")
		    : printf("Element is present at index %d \n", result);
		break;

	    case 3:   //function call to search element recursively.
		printf("Enter the element that needs to be searced: ");
		scanf("%d", &data);

		result = binary_Recursive(elementArray, 0, totalElements-1, data);
		(result == NOELEMENT)? printf("Element is not present in array \n")
		    : printf("Element is present at index %d \n", result);
		break;

	    case 4:          //function call to print the array.
		print_array(elementArray, totalElements);
		break;

	    default:
		printf("ERROR: Invalid entry.\n");
		break;
	}
	printf("Do you want to continue?(y/Y): ");   // check for continue.
	scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');	
    return 0;
}
