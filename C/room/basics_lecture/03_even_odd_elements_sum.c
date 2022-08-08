#include<stdio.h>
int main()
{
    int size,i,even_sum=0,dd_sum=0;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array:");
    for (i=0; i<size; i++)
    {
	scanf("%d",&arr[i]);
    }
    printf("The sum of even elements of array is:");
    for (i=0; i<size; i=i+2)
    {
      even_sum=even_sum+arr[i];
    }
    printf("%d\n",even_sum);
    printf("The sum of odd elements of array is:");
    for (i=1; i<size; i=i+2)
    {
      dd_sum=dd_sum+arr[i];
    }
    printf("%d\n",dd_sum);
}
