#include<stdio.h>
int main()
{
    volatile int n1 = 1;
    int n2 = ++n1 + n1++ + n1++ + n1++;
    printf("%d", n2);
}
