/*Documentation:
Name: Anand Arvind Kulkarni.
Date: 08/02/2022
Description:WAP to sort given array using Merge sort
Sample Execution:
 */

#include<stdio.h>
#include"main.h"

int main()
{
    int data;    //variable declaration
    char choice;
    do
    {
	printf("Enter the size of array: ");    //print the input statement for size
	scanf("%d", &data);
	int arr[data];  //assign array

	printf("Enter the array value:");       //get array elements from user.
	for(int i = 0; i < data; i++)
	{
	    scanf("%d", &arr[i]);
	}
	merge_sort(arr, 0, data-1);  //function call.
        printf("The sorted elements are:");
	print_array(arr, data);      //function call to print the array.

	printf("Do you want to continue?(y/Y):");   //user prompt for new inputs.
	scanf("\n%c", &choice);
    }while( choice == 'y' || choice == 'Y' );
    return 0;
}

