#include<stdio.h>
int main()
{
    int out;
    volatile int num;
    printf("Enter the number:");
    scanf("%d", &out);
    while(out)
    {
	num++;
    }
    return 0;
}
