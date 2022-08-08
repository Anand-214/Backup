#include<stdio.h>
int main()
{
    int i,j,k,size1,size2;
    printf("Enter the size of both the arrays:");
    scanf("%d %d", &size1, &size2);
    printf("Enter the elements of first array");
    int arr1[size1];
    int arr2[size2];
    int arr3[size1];
    for (i=0; i<size1; i++)
    {
	scanf("%d",&arr1[i]);
    }
    printf("Enter the elements of second array");
    for (j=0; j<size2; j++)
    {
	scanf("%d",&arr2[j]);
    }
    printf("The third array is:\n");
    for (k=0; k<size1; k++)
    {
	arr3[k] = arr1[k]+arr2[k];
	printf("arr3[%d]=%d\n", k, arr3[k]);
    }
}		
