#include<stdio.h>
int main()
{
    int arr[5];
    FILE* fp = fopen ("binary.bin","r");
    fread (arr, sizeof(int),5,fp);
    for (int i =0; i < 5; i++)
	printf("%d ", arr[i]);
}    
