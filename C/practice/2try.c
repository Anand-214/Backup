#include<stdio.h>
int swap ( int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int num1, num2;
    printf("Enter the number:");
    scanf("%d %d", &num1, &num2);
    swap(&num1, &num2);
    printf("%d %d", num1, num2);
}
