/*
date: 7 july 2021
Assignment name:Assignment_20
Author name:Shresth kumar
Description:WAP to sort given array using Merge sort
*/
#include"mergesort.h"

int merge_sort(int arr[], int down, int up )
{
    if( down < up )
    {
	int mid = (down + up)/2; // find mid value
	merge_sort(arr, down, mid); //call merge sort function recursively(1st sublist)
	merge_sort(arr, mid+1, up); //call merge sort function recursively(2nd sublist)
	merge(arr, down, up); //call merge function
    }
}
