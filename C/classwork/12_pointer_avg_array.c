#include<stdio.h>
float avg_array ( int* arr, int size)
{
    float sum=0;
    float avg;
    for (int i=0; i<size;i++)
    {
	scanf("%d",arr[i]);
	sum = sum + *(arr+i);
    }
    avg = sum/size;
    return &avg;
}
int main()
{
    int size;
    printf("Enter the size of the array:\n");
    scanf("%d",&size)
    int arr[size];
    float* ptr = avg_array(arr,size);
    printf("%g", *ptr);
}
