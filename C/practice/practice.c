#include<stdio.h>
int main()
{
    int i,j,n,m,sum=0;
    printf("Enter the two numbers:");
    scanf("%d %d",&n,&m);
    if (m>n)
    {
	for (i=0;i<n;i++)
	{
	sum=sum+m;
	}
	printf("The product is: %d",sum);
    }
    else if (n>m)
    {
	for (j=0;j<m;j++)
	{
	    sum=sum+n;
	}
	printf("The product is: %d",sum);
    }
    	return 0;
}
	

