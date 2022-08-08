#include<stdio.h>
int main()
{
    int row,col,num,var;
    printf("Enter the number:");
    scanf("%d",&num);
    for (row=1;row<=num;row++)
    {
	for (col=1;col<=(2*num-1);col++)
	{
	    if (row<=num)
	    {
		printf("* ");
	    }
	    var=(2*num)-row;
	    else

