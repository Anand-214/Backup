#include"main.h"

int quick_sort(int arr[], int down, int up)
{
    if(down < up)
    {
	int div = partition(arr, down, up);   //function call.
	quick_sort(arr, down, div-1);         //quick sort for left sublist
	quick_sort(arr, div+1, up);           //quick sort for right sublist
    }
}

int partition(int arr[], int down, int up) 
{
    int pivot = arr[down];    //assign variable
    int left = down;
    int right;
    for(right = down + 1; right <= up; right++)    //run loop till last element
    {
	if(arr[right] <  pivot) //compare arr[right] < pivot
	{
	    left++; //if its less,increment left 
	    if(left != right) //check left and right should not be equal
		swap(&arr[right], &arr[left]); //function call to swap the values
	}
    }
    swap(&arr[down], &arr[left]);   //function call to swap values.
    return left;
}

void swap( int *a, int *b)
{
    //swap function
    int t = *a;
    *a = *b;
    *b = t;
}

