#include<stdio.h>
int main()
{
    char choice;
do
{
    int size;
   printf("Enter the size of array:");
   scanf("%d",&size);
   int arr[size];
   printf("Enter 5 values as array elements:");
    for ( int i=0;i<size;i++)
    {
	scanf("%d",&arr[i]);
    }
    for (int i=0;i<size;i++)
    {
	printf("arr[%d] = %d\n",i,arr[i]);
    }
    printf("Want to continue?(y/Y):");
    scanf("
    return 0;
}
