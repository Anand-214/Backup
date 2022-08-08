#include<stdio.h>
int main()
{
int num,row,col;
char choice;
do 
{
printf("Enter the number:");
scanf("%d",&num);
for (row=1;row<=num;row++)
{
    for(col=1;col<=num;col++)
    {
	printf("* ");
    }
    printf("\n");
}
printf("Do you want to continue?(y/Y):");
scanf(" %c",&choice);
}while(choice=='y' || choice=='Y');
return 0;
}

