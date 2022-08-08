#include<stdio.h>
int min_max (int arr[],int size,int* min, int* max)
{
    *min = *max = arr[0];
    for ( int i=0; i < size; i++)
    {
	if ( arr[i] < *min)
	    *min = arr[i];
	if ( arr[i] > *max)
	    *max = arr[i];
    }
}
int main()
{
    int size,min,max;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements");
    for (int i=0; i<size; i++)
    {
	scanf("%d", &arr[i]);
	printf("%d ", arr[i]);
    }
    min_max(arr,size,&min,&max);
    printf("The min number is:%d\n", min);
    printf("The max number is:%d\n", max);
}
