#include<stdio.h>
int main()
{
    int i,num,size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr [size];
    printf("Enter the elements of array:");
    for (i=0; i<size; i++)
    {
	scanf("%d",&arr[i]);
    }
    printf("The elements of array are:");
    for (i=0; i<size; i++)
    {
	printf("%d ", arr[i]);
    }
    printf("\n");
    printf("The address of each element is:\n");
    for ( i=0; i<size; i++)
    {
	printf("The address of %d :%p\n", arr[i], &arr[i]);
    }
    printf("\n");
    printf("Elements in reverse order:");
    for (i=(size-1); i>=0; i--)
    {
	printf("%d ", arr[i]);
    }
    return 0;
}
