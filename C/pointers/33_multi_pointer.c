#include<stdio.h>
int main()
{
    int x = 10;
    int* p1 = &x;
    int** p2 = &p1;
    int ***p3 = &p2;
    printf("Value of x is : %d\n",x);
    printf("Value of x (using p1)is : %d\n",*p1);
    printf("Value of x is(using p2) : %d\n",**p2);
    printf("Value of x is(using p3) : %d\n",***p3);
    printf("Address of x is : %p\n", &p1);
    printf("value of p1 is : %p\n", *p2);
    printf("Value of p is : %p\n", **p3);
    printf("value of p3 is : %p\n", p3);
    printf("address of p3 is : %p\n", &p3);
}

