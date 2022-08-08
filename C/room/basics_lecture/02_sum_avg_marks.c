#include<stdio.h>
int main()
{
    int sum=0,i,size;
    printf("Enter the number of subjects");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the marks of each subject:");
    for ( i=0; i<size; i++)
    {
	scanf("%d", &arr[i]);
    }
    for (i=0; i<size; i++)
    {
	sum=sum+arr[i];
    }
    printf("The Total marks are:%d\n", sum);
    printf("The average of the marks score is:%f\n",((float)sum/size));
}
