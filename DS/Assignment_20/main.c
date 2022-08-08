/*
date: 7 july 2021
Assignment name:Assignment_20
Author name:Shresth kumar
Description:WAP to sort given array using Merge sort
input:gcc /Assignment_20$ make
./main.out
Enter the size of array: 10
Enter the array value:2 5 8 7 4 1 3 6 9 0
0 1 2 3 4 5 6 7 8 9
do you want to continue(y/n):n

 */
#include"mergesort.h"

int main()
{
    //variable declaration
    int data;
    char ch;
    do
    {
	//print the input statement for size
	printf("Enter the size of array: ");
	scanf("%d", &data);

	//assign array
	int arr[data];

	//statement for array input
	printf("Enter the array value:");
	for(int i = 0; i < data; i++)
	    scanf("%d", &arr[i]);

	merge_sort(arr, 0, data-1); //call function
	print_array(arr, data);    //call print function
	//asking to repeat the function
	printf("do you want to continue(y/n):");
	scanf("\n%c", &ch);
    }while( ch == 'y' || ch == 'Y' );
    return 0;
}

