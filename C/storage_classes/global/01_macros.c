#include<stdio.h>
#define MAX 5

int main()
{
    int arr[MAX];
    printf("Enter %d elements:\n",MAX);
    for ( int i=0; i< MAX; i++)
    {
	scanf("%d", &arr[i]);
    }
    for (int i=0; i < MAX; i++)
    {
	printf("%d ", arr[i]);
    }
}
