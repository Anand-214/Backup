#include<stdio.h>
#include "header.c"
int main()
{
    int num1,num2;
    printf("Enter the two numbers:");
    scanf("%d %d", &num1, &num2);
    int sum = add(num1,num2);
    int diff = sub(num1, num2);
    printf("The addition is: %d\n",sum); 
    printf("The Subtraction is: %d\n",diff); 
}
