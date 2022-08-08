#include<stdio.h>
int fact (int n)
{
    if (n==1)
    {
	return 1;
    }
    else
    {
	return n*fact(n-1);
    }
}
    int main()
    {
	int num;
	char choice;
	do
	{
	printf("Enter the number:");
	scanf("%d",&num);
	int res=fact (num);
	printf("%d!=%d\n",num,res);
        printf("Do you want to continue?(y/Y):");
	scanf(" %c",&choice);
	}while(choice=='y' || choice =='Y');
	return 0;
    }

