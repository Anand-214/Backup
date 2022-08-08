#include<stdio.h>
int main()
{
    int i,size,sum=0;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the array elements:");
    int arr[size];
    for(i=0;i<size;i++)
    {
	scanf("%d",&arr[i]);
    }
    for (i=0;i<size;i++)
    {
	sum=sum+arr[i];
    }
    printf("Sum = %d",sum);
    return 0;
}
