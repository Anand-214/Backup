#include<stdio.h>
void display (int*,int);
int main()
{
int i;
int arr[] = {10,15,20,25,34,78};
display (&arr[0],6);
}
void display(int* j, int n)
{
    for (int i=0; i<n; i++)
    {
	printf("element %d has address %p\n", *j, j);
	j++;
    }
}
