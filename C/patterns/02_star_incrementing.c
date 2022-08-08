#include<stdio.h>
int main()
{
    int row,col,num;
    char choice;
    do 
    {
	printf("Enter the number:");
	scanf("%d",&num);
for(row=1;row<=num;row++)
{
    for(col=1;col<=row;col++)
    {
	printf("* ");
    }
    printf("\n");
}
printf("Do you want to continue>(y/Y):");
scanf(" %c",&choice);
}while(choice=='y' || choice=='Y');
return 0;
}
