#include"main.h"

int merge(int arr[], int down, int up)
{
    //find mid value
    int mid, high;
    int middle = (down + up) / 2;
    //assign variables
    int i = down; // <= mid 1st sublist
    int j = middle + 1; //<= high 2nd sublist
    int temp[up - down + 1]; //for size of temp array
    int k = 0;

    while(i <= mid && j <= up) //loop for array 1st sublist && 2nd sublist
    {
	if(arr[i] < arr[j])  //comparsion for 1st sublist
	    temp[k++] = arr[i++]; //store i in k array and increment
	else
	    temp[k++] = arr[j++];//for 2nd sublist and j stored in k array and  increment
    }
    //if any values misses or go beyond the limit
    while( i <= mid )  //while loop 1st sublist
	temp[k++] = arr[i++]; // store i in k  array and increment

    while( j <= high ) //while loop for 2nd sublist
	temp[k++] = arr[j++]; //store j in k array and increment

    k = 0;
    //copying the array from temp array to original array
    for (i = down;i <= up; i++)
    {
	arr[i] = temp[k++];
    }
}

