#include<stdio.h>
int main()
{
    int i,size,sum=0;
    printf("Enter size:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements:");
    for (i=0; i<size; i++)
    {
	scanf("%d", &arr[i]);
    }
    for (i=0; i<size; i++)
    {
	printf("arr[%d] :%d\n", i, arr[i]);
    }
    for (i=0; i<size; i++)
    {
	sum = sum + arr[i];
    }
    printf("The sum is : %d", sum);
    int avg = sum/size;
    printf("The average is : %d", avg);
}

