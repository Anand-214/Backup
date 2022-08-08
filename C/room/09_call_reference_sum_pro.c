#include<stdio.h>
int sum_product ( int a, int b, int* sum, int* pro)
{
    *sum = a+b;
    *pro = a*b;
}
int main()
{
    int a,b,sum,product;
    printf("Enter the two numbers:");
    scanf("%d %d",&a,&b);
    sum_product (a,b,&sum,&product);
    printf("The sum : %d",sum);
    printf("The product : %d",product);
}


