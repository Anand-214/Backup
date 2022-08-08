#include<stdio.h>
int main()
{
    int a=0, b=1, i = 0, sum, num;
    printf("Enter the number:");
    scanf("%d", &num);
    while ( a <= num)
    {
	printf("%d ", a);
	sum = a + b;
	a = b;
	b = sum;
	i++;
    }
}

