#include<stdio.h>
int main()
{
   int size,largest,smallest;
   printf("Enter the size of array:");
   scanf("%d",&size);
   int arr[size];
   printf("Enter %d values as array elements:",size);
    for ( int i=0;i<size;i++)
    {
	scanf("%d",&arr[i]);
    }
   largest=arr[0];
   smallest=arr[0];
    for (int i=0;i<size;i++)
    {
    if (arr[i] > largest)
	largest=arr[i];
    if (arr[i] < smallest)
	smallest=arr[i];
    }
printf("The largest value is %d\n",largest);
printf("The smallest value is %d",smallest);
    return 0;
}
