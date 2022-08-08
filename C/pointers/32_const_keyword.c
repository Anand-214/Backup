#include<stdio.h>
int main()
{
    const int x = 10;
    //    x = 20;
    const int *ptr = &x;
    *ptr = 20;
    printf("%d",x);
}
