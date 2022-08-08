#include<stdio.h>
void swap (int* a, int* b);
int main()
{
    int a=10,b=20;
    swap (&a,&b);
    printf("Value of a:%d",a);
    printf("Value of b:%d",b);
}
void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
