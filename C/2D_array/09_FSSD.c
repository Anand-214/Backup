#include<stdio.h>
#include<stdlib.h>
void scan_array ( int** arr,int, int);
void print_array ( int** arr ,int, int);

int main()
{
    int* arr[3];
    for (int i=0; i<3; i++)
    {
	arr[i] = malloc ( 4 * sizeof(int));
    }
    scan_array(arr,3,4);
    print_array(arr,3,4);
}
void scan_array (int** arr ,int row, int col)
{
    for (int i=0; i<row; i++)
    {
	for (int j=0; j<col; j++)
	{
	    scanf("%d", *(arr+i)+j);
	}
    }
}
void print_array ( int** arr,int row, int col)
{
    for (int i=0; i<row; i++)
    {
	for (int j=0; j<col; j++)
	{
	    printf("%d ", *(*(arr+i)+j));
	}
   printf("\n");
    }
}


