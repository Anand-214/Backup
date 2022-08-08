#include<stdio.h>
int main()
{
    int num1,num2,sum,sub,mul,div;
    char option;
    printf("Enter the operation to be performed:");
    scanf("%d %c %d", &num1,&option,&num2);
    switch (option)
    {
	case '+':
		sum=num1+num2;
		printf("The addition is %d", sum );
                break;
	case '-':
		sub=num1+num2;
		printf("The subtraction is %d", sub );
                break;
	case 'x':
		mul=num1*num2;
		printf("The multiplication is %d", mul );
                break;
	case '/':
		div=num1/num2;
		printf("The division is %d", div );
                break;
        default:
		printf("Default executed.");
		break;
    }
    return 0;
}

