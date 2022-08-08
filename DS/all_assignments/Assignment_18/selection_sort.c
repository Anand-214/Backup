#include"main.h"

int selection_sort(int size, int *arr)    //selection sort function
{
    int min;
    for(int i = 0; i < size; i++)
    {   
	min = i;
	for(int j = i; j < size; j++)
	{
	    if(arr[min] > arr[j]) //if condition to compare the indexes of arrays
		min = j;
	}
	//swap operation
	int temp = arr[i];
	arr[i] = arr[min];
	arr[min] = temp;
    }
    return SUCCESS;
}
