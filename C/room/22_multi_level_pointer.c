#include<stdio.h>
int main()
{
    int x = 10;
    int* ptr1 = &x;
    int** ptr2 = &ptr1;
    int*** ptr3 = &ptr2;
    printf("%p\n", ptr3);
    printf("%p\n", *ptr3);
    printf("%d\n", ***ptr3);
}
