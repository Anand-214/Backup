#include<stdio.h>
#if DEBUG==1
#warning "Debug messages enabled."
#endif

int main()
{
    int num,sum=0;
    scanf("%d", &num);
#if DEBUG == 1
    printf("num = %d\n", num);
#endif
    for (int i=1; i<num; i++)
    {
	sum += i;
#if DEBUG == 1
	printf("Sum = %d\n",sum);
#endif
    }
	printf("Sum = %d\n",sum);
}

