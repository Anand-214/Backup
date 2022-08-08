#include"main.h"

void print(int *arr, int size)     //print function
{
    for(int i = 0; i < size; i++) //Run loop till end of the array
    {
	printf("%d ", arr[i]);
    }
    printf("\n");
}
