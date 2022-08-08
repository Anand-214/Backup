#include<stdio.h>
int main()
{
    int i;
    int arr[3];
    int * ptr = arr;  //here arr is the base address.
    printf("%p\n",ptr++);
 // printf("%p\n",arr++);
    printf("Enter the 5 elements of array:");
    for (i=0; i<3; i++)
    {
	scanf("%d", ptr+i); // &arr[i]
    }
    for (i=0; i<5; i++)
    {
	printf("%d ", *(ptr+i)); //arr[i]
    }
    return 0;
}
