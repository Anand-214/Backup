#include<stdio.h>
int sort_array (int *arr, int size, int (*p)(int,int));
int print_array (int*,int);
int asc (int a,int b)
{
    return a>b;
}
int dsc ( int a,int b)
{
    return a<b;
}
int main()
{
    int arr[5] = {5,12,65,90,2};
    printf("After sorting ascending:");
    sort_array(arr,5,asc);
    print_array (arr,5);
    printf("After sorting descending:");
    sort_array(arr,5,dsc);
    print_array (arr,5);
}
int print_array (int*arr,int size)
{
    for (int i=0; i<size;i++)
	printf("%d ",arr[i]);
    printf("\n");
}
int sort_array (int *arr, int size, int (*p)(int,int))
{
    int temp=0;
    for (int i=0;i<size;i++)
    {
	for (int j=i+1;j<size;j++)
	{
	    if (p (arr[i],arr[j]))
	    {
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	    }
	}
    }
}
