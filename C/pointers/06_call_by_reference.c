#include<stdio.h>
int fun ( int* ptr);
int main()
{
    int a=10;
    fun (&a);
    printf("value of a:%d",a);
}
int fun ( int* ptr)
{
    *ptr = 20;
}
