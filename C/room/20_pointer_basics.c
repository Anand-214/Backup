#include<stdio.h>
int function (int* a)
{
    *a = 20;
    printf("The value of x :%d\n",*a);
}

int main()
{
    int x = 10;
//    int* ptr = &x;
    function(&x);
    printf("The value of x is: %d",x);
}

