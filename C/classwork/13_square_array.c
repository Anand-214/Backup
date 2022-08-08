#include<stdio.h>
void scan_array(int* arr, int size)
{
    for (int i=0; i<size; i++)
    {
	scanf("%d", (arr+i));
    }
}
void square_array(int* arr, int size)
{
    for (int i=0; i<size; i++)
    {
	arr[i] = arr[i]*arr[i];
    } 
}
void printing_array(int* arr, int size)
{
    for (int i=0; i<size; i++)
    {
	printf("%d ", *(arr+i));
    }
}
int main()
{
    int size;
    printf("Enter the size:");
    scanf("%d",&size);
    printf("Enter the array elements:");
    int arr[size];
    scan_array(arr, size);
    square_array(arr,size);
    printing_array(arr,size);
    printing_array(arr,size);
}
