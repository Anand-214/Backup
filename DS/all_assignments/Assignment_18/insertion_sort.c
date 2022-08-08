#include"main.h"

int insertion_sort(int *arr, int size)      //insert sort function
{
    
    for(int i = 1; i < size; i++)
    {   
	int j = i - 1;
	int key = arr[i];
	while(j >= 0 && key < arr[j])        //Loop to shift values
	{
	    arr[j + 1] = arr[j];
	    j--;
	}
	arr[j + 1] = key;
    }   
    return SUCCESS;
}
