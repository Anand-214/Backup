#include<stdio.h>
int main()
{
    static int num, mul = 1, flag = 1;
    if ( flag == 1 )
    {
	flag = 0;
	printf("enter a num: ");
	scanf("%d",&num);
    }
    if (num > 0)
    {
	mul=mul*num;
	num--;
	main();
    }
    else
	printf("%d\n", mul);
}
