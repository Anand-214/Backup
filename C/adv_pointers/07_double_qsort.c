#include<stdio.h>
#include<stdlib.h>
int print_array (double*,double);
int double_asc (const void* a,const void* b)
{
    return *(double*)a > *(double*) b;
}
int double_dsc (const void* a,const void* b)
{
    return *(double*)a < *(double*) b;
}
int main()
{
    int arr[5] = {5.4,12.8,65.2,90.0,2.4};
    printf("After sorting ascending:");
    qsort (arr,5,sizeof(double),double_asc);
    print_array (arr,5);
    printf("After sorting descending:");
    qsort (arr,5,sizeof(double),double_dsc);
    print_array (arr,5);
}
int print_array (double *arr,double size)
{
    for (int i=0; i<size;i++)
	printf("%f ",arr[i]);
    printf("\n");
}
