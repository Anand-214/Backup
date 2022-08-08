#include<stdio.h>
int main()
{
    int *ptr = 100;
    int *ptr1 = (int *)100;
    printf("%p\n", ptr);
    printf("%p", ptr1);
}
