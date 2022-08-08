#include<stdio.h>
int main()
{
    int i, size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the elements of the array:");
    int a[size];
    for (i=0; i<size; i++)
    {
	scanf("%d",&a[i]);
    }
    for ( i=0; i<size; i++)
    {	
        int *p = &a[0];
	p=p+i;
	printf("a[%d]=%d\n",i, *p);
//	p=0;
    }
}
