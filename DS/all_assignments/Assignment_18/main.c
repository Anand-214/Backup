/*Documentation
Name: Anand Arvind Kulkarni.
Date: 08/02/2022.
Description:WAF to sort given array using bubble sort, insertion sort and selection sort
Sample Execution:    ./output.exe
Enter the size of the array : 3
Enter the 3 array elements :12 54 1
Enter the option
1.Bubble Sort
2.Insertion Sort
3.Selection Sort
Enter your choice : 2

INFO: The array is sorted using Insertion sort.
Array after sorting: 1 12 54

Do you want to continue?(Y/y): n
 */

#include"main.h"
int main()
{
    //declare variables
    int option, size, result;
    char choice;
    do
    {
	printf("Enter the size of the array : ");
	scanf("%d", &size);   //read for size of the array
	int arr[size];       //array declaration
	printf("Enter the %d array elements :", size);
	//scanning array elements
	for(int i = 0; i < size; i++)
	{
	    scanf("%d", &arr[i]);
	}
	printf("Enter the option\n1.Bubble Sort\n2.Insertion Sort\n3.Selection Sort\nEnter your choice : ");
	scanf("%d", &option);  

	switch(option)
	{
	    case 1:    //if user choose bubble sort
		{
		    result = bubble_sort(size, arr); 
		    if(result == SUCCESS)
		    {
			printf("\nINFO: The array is sorted using Bubble sort.\nArray after sorting: ");
			print(arr, size); //Print array function call
		    }
		    else
			printf("\nERROR: Bubble sort failed.\n");
		}
		break;

	    case 2:     //if user choose insertion sort
		{
		    result = insertion_sort(arr, size); //Insertion sort Function call
		    if(result == SUCCESS)
		    {
			printf("\nINFO: The array is sorted using Insertion sort.\nArray after sorting: ");
			print(arr, size); //Print array function call
		    }
		    else
			printf("\nERROR: Insertion sort failed.\n");
		}
		break;

	    case 3:   //if user choose selection sort
		{
		    result = selection_sort(size, arr); //Selection sort Function call
		    if(result == SUCCESS)
		    {
			printf("\nINFO: The array is sorted using Selection sort.\nArray after sorting: ");
			print(arr, size); //Print array function call
		    }
		    else
			printf("\nERROR: Selection sort failed.\n");
		}
		break;

	    default:
		printf("\nERROR: Invalid choice.\n");
	}
	printf("\nDo you want to continue?(Y/y): ");
	scanf("\n%c", &choice);             
    }while( choice == 'y' || choice == 'Y'); 
}
