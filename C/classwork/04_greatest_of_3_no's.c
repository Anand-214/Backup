#include<stdio.h>
int main()
{
    int num1,num2,num3;
    char choice;
    do
    {
    printf("Enter the 1st number: ");
    scanf("%d", &num1);
    printf("Enter the 2nd number: ");
    scanf("%d", &num2);
    printf("Enter the 3rd number: ");
    scanf("%d", &num3);
    if (num1 > num2 && num1 > num3)
    {
	printf("%d is the greatest\n", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
	printf("%d is the greatest\n", num2);
    }
    else
    {
	printf("%d is the greatest\n", num3);
    }
    printf("Do you want to continue?(y/Y):");
    scanf(" %c",&choice);
    }while (choice=='y' || choice=='Y');
return 0;
}

