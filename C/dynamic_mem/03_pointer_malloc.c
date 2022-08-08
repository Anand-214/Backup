#include<stdio.h>
#include<stdlib.h>
int* fun ();
int main()
{
    int* ptr = fun();
    printf("%d", *ptr);
    free(ptr);
//    printf("%d", *ptr);     if we do this after fre its a dangling pointer so never do this after freeing.
}
int* fun()
{
    int *p = malloc(4);
    *p = 100;
    return p;
}
