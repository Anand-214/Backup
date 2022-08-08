#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int* arr[3] = {&a,&b,&c};   //arr is array of pointers.
    for (int i=0; i<3; i++)
    {
	printf("value at %p is %d \n", *(arr+i), **(arr+i));
    }
}
