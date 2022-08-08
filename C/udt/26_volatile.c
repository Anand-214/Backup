#include<stdio.h>
int main()
{
    int num;
    volatile int i;
    for ( i=0xfffffff; i>=0; i--)
    {
	num = 5;
    }
    printf("%d\n", num);
}
