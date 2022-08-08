#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
	for (j=n;j>=i;j--)
	{
	if (i==j)
	{
	    printf("* ");
	}
	else
	    printf(" ");
	}
	printf("\n");
    }

    return 0;
}
