#include<stdio.h>
#include<stdlib.h>
int print_array (int*,int);
int int_asc (const void* a,const void* b)
{
    return *(int*)a > *(int*) b;
}
int int_dsc (const void* a,const void* b)
{
    return *(int*)a < *(int*) b;
}
int main()
{
    int arr[5] = {5,12,65,90,2};
    printf("After sorting ascending:");
    qsort (arr,5,sizeof(int),int_asc);
    print_array (arr,5);
    printf("After sorting descending:");
    qsort (arr,5,sizeof(int),int_dsc);
    print_array (arr,5);
}
int print_array (int *arr,int size)
{
    for (int i=0; i<size;i++)
	printf("%d ",arr[i]);
    printf("\n");
}
