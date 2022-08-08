#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
	for (j=0;j<n;j++)
	{
	    if ( i==j || ((i+j)==(n-1)) )
	    { 
		printf("*");
	    if ( (n%2 != 0) || (i==(n+1)/2) && (j==(n+1)/2) )
	    {
		printf (" ");	
	    }
	}
	    else
		    printf(" ");
	    }
	    printf("\n");
	}
	return 0;
    }
