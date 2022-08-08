#include<stdio.h>
int main()
{
    int i,num,half,rem;
    int flag=0;
    printf("Enter the number:");
    scanf("%d", &num);
    half=(num/2);
    for (i=2;i<=half;i++)
    {
	rem=num%i;
	if ( rem == 0)
	{
	    flag=1;
	    break;
	}
    }
    if ( flag == 1)
	printf("The number is not a prime number.");
	else
	    printf("The number is a prime number.");
    return 0;
}
