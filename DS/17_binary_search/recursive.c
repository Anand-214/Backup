#include "main.h"

int binary_Recursive(int arr[], int left, int right, int data)    //function definition.
{

	if (right >= left)
	{
		int mid = left + (right - left)/2;

		// If the element is present at the middle itself
		if (arr[mid] == data) return mid;

		// If element is smaller than mid, then it can only be present in left array.
		if (arr[mid] > data) return binary_Recursive(arr, left, mid-1, data);

		// Else the element can only be present in right array.
		return binary_Recursive(arr, mid+1, right, data);
	}

	// We reach here when element is not present in array
	return NOELEMENT;
}
