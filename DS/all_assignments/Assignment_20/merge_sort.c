#include"main.h"

int merge_sort(int arr[], int down, int up )
{
    if( down < up )
    {
	int mid = (down + up)/2;     // find mid value
	merge_sort(arr, down, mid);  //call merge sort function recursively(1st sublist)
	merge_sort(arr, mid+1, up);  //call merge sort function recursively(2nd sublist)
	merge(arr, down, up);        //function call to merge al the elements.
    }
}
