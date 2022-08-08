#include<stdio.h>
int main()
{
    int num,row,col,count=1;
    printf("Enter the number:");
    scanf("%d",&num);
    for (row=1;row<=num;row++)
    {
	for (col=1;col<=row;col++)
	{
	    printf("%d ",count);
	    count++;
	}
	printf("\n");
    }
    return 0;
}
