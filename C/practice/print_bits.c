#include<stdio.h>
int main()
{
    int i,num,n;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter n:");
    scanf("%d",&n);
    for (i=(n-1);i>=0;i--)
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

