#include<stdio.h>
int main()
{
    int row,i,j,num,n;
    printf("Enter the number:");
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    {
	if ( i%2==0)
	    num=0;
	else
	    num=1;
	for (j=1;j<=i;j++)
	{
	printf("%d ", num);
   num=!num;
	}
	printf("\n");
    }
return 0;
}

