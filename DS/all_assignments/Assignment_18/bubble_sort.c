#include"main.h"

int bubble_sort(int size, int *arr)     //bubble sort function
{
    int i, j, temp;    //declare variables.
    for(i = 0; i < size; i++)
    {   
	for(j = 0; j < size - 1 - i; j++)
	{
	    if(arr[j] > arr[j+1]) //if condition to compare indexes of array
	    {
	        //swap operation
		temp = arr[j];
		arr[j] = arr[j+1];
		arr[j+1] = temp;
	    }
	}
    }  
    return SUCCESS; 
}
