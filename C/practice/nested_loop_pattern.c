#include<stdio.h>
int main()
{
    int num,i,j;
    printf("Enter the numer:");
    scanf("%d", &num);
    for (i=1;i<=num;i++)
    {
	for (j=1;j<=i;j++)
	{
	    printf("%d ", j);
	}

	printf("\n");
    }
    return 0;
}
