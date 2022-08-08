/*Documentation
Name: Anand Arvind Kulkarni.
Date: 08/02/2022
Description: WAF to sort the given array using quick sort.
Sample Execution: ./output.exe 
Enter the size of array: 5
Enter the array value:1 3 14 22 25
The sorted elements are:
1 3 14 22 25 
Do you want to continue(Y/y):n
 */
#include"main.h"

int main()
{
    int size;   //variable declaration
    char choice;
    do
    {
	printf("Enter the size of array: ");   //print the input statement for size
	scanf("%d", &size);
	int arr[size];   //assign array

	//statement for array input
	printf("Enter the array value:");
	for(int i = 0; i < size; i++)
	{
	    scanf("%d", &arr[i]);
	}
	quick_sort(arr, 0, size - 1); //call function
	printf("The sorted elements are:");
	print_array(arr, size);    //call print function
	
	printf("Do you want to continue(Y/y):");   //user prompt to ask for nxt operation.
	scanf(" %c", &choice);      //get user input.
    }while( choice == 'y' || choice == 'Y' );
    return 0;
}

