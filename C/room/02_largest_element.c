#include<stdio.h>
int main()
{
    int i,largest,smallest,size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the array with %d elements:",size);
    int arr[size];
    for (i=0;i<size;i++)
    {
	scanf ("%d", &arr[i]);
    }
    largest=arr[0];
    for (i=1;i<size;i++)
    {
	if ( arr[i] > largest )
	{
	    largest=arr[i];
	}
    }
    printf("The largest element is:%d\n",largest);
    smallest=arr[0];
    for (i=1;i<size;i++)
    {
	if ( arr[i]<smallest)
	{
	    smallest=arr[i];
	}
    }
	printf("The smallest element is:%d\n",smallest);
}
