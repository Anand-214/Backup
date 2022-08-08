#include<stdio.h>
int main()
{
    int i,j,l,size,temp=0;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array:");
    for (i=0;i<size;i++)
    {
	scanf("%d",&arr[i]);
    }
    for (i=0;i<size;i++)
    {
	for (j=i+1;j<size;j++)
	{
	    if (arr[j] < arr[i])
	    {
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	    }
	}
    }
    printf("Ascending order is:");
    for (int l=0;l<size;l++)
    {
	printf("%d ",arr[l]);
    }
    for (i=0;i<size;i++)
    {
	for (j=i+1;j<size;j++)
	{
	    if (arr[j] > arr[i])
	    {
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	    }
	}
    }
    printf("\n");
    printf("Descending order is:");
    for (int l=0;l<size;l++)
    {
	printf("%d ",arr[l]);
    }
    return 0;
}
