#include "main.h"

void print_array(int* array, int n)   //function definition to print the array.
{
	int i;

	for(i = 0; i < n; i++)    //iterate over loop.
	{
		printf("%d ", array[i]);    // print element by element.
	}
	printf("\n");
}
