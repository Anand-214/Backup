#include"main.h"

int print_array(int arr[], int data)   //function to print the array after quick sort.
{
    for(int i = 0; i < data; i++)      //iterating over the loop till last element.
	printf("%d ", arr[i]);         //print the array elements one by one.
    printf("\n");
}
