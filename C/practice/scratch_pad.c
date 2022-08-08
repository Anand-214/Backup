#include<stdio.h>
int main()
{
    int percent;
    char choice;
do
{
    printf("Enter the percetage scored:");
    scanf("%d",&percent);
    if (percent >= 60 && percent <66)
	printf("Your grade is 1st class.\n");
    else if (percent >=66)
	printf("Your grade is distinction.\n");
    else if (percent < 60 && percent >= 35)
	printf("Your grade is 2nd class.\n");
    else
    {
	printf("Sorry!!you failed. Please work hard.\n");
    }
    printf("Do you want to continue?(y/Y):");
    scanf(" %c",&choice);
}while( choice=='y' || choice=='Y');
 
    return 0;
}
