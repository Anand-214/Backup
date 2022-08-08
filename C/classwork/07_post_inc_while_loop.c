#include<stdio.h>
int main()
{
    int x=10;
    while (printf("%d",x--) > 10);
	printf("Hello\n");
	printf("x=%d\n", x);
    return 0;
}

