#include<stdio.h>
int main()
{
    int i,m,n,sum=0;
    printf("Enter the 1st number:");
    scanf("%d", &m);
    printf("Enter the 2nd number:");
    scanf("%d", &n);
    if (n < m)
    {
	for (i=1;i<=n;i++)
	    sum=sum+m;
    }
    else if (m < n)
    {
	for (i=1;i<=m;i++)
	    sum=sum+n;
    }
    printf("The product is %d", sum);
return 0;
}
