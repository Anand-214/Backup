#include<stdio.h>
int main()
{
    int size,sum=0;
    char choice;
    do
    {
   printf("Enter the size of array:");
   scanf("%d",&size);
   int arr[size];
   printf("Enter %d values as array elements:",size);
    for ( int i=0;i<size;i++)
    {
	scanf("%d",&arr[i]);
    }
    for (int i=0;i<size;i++)
    {
    sum=sum+arr[i];
    }
    printf("Sum= %d\n",sum);
    printf("Do you want to continue?(y/Y):");
    scanf(" %c",&choice);
    }while(choice=='y' || choice=='Y');
    return 0;
}
