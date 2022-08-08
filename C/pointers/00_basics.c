#include<stdio.h>
int main()
{
    int a=10, b=9;
    int *p, *q;
    p = &a;
    q = &b;
    printf("The value of a :%d\n",a);
    printf("The value of a :%d\n",*p);  //dereferencing.
    printf("The address of a is :%p\n",p);
    printf("The address of p is :%p\n",&p);
    printf("The value of p is :%p\n",p);
}

