#include<stdio.h>
int scanf_array (int *arr, int size);    //this can also be scanf_array (int arr[], int size)
int printf_array (int *arr, int size);    //this can also be scanf_array (int arr[], int size)
int main()
{
    int arr[10];
    scanf_array (arr, 10);
    printf_array (arr, 10);
}
int scanf_array (int *arr, int size)    //this can also be scanf_array (int arr[], int size)
{
    for (int i=0; i<size; i++)
    {
	scanf("%d",arr+i);   // &arr[i]    
    }
}
int printf_array (int *arr, int size)    //this can also be scanf_array (int arr[], int size)
{
    for (int i=0; i<size; i++)
    {
	printf("%d",*(arr+i));    // arr[i]
    }
}
