#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter the number:");
    scanf("%d",&num);
    for (i=31;i>=0;i--)
    {
	if (num>>i&1)
	{
	    printf("1");
	}
	else
	    printf("0");
    }
    return 0;
}

