#include "main.h"

int binary_Iterative(int arr[], int left, int right, int data)   //function definition
{
	while (left <= right)   //condition for loop.
	{
		int mid = left + (right - left)/2;
	
		if (arr[mid] == data)   // Check if data is present at mid
		{
			return mid;
		} 
		if (arr[mid] < data)    // If data greater, ignore left half	
		{
			left = mid + 1; 
		}
		else                    // If data is smaller, ignore right half
		{
			right = mid - 1;
		} 
	}	
	// if we reach here, then element was not present
	return NOELEMENT;
}
