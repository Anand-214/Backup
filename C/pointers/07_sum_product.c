#include<stdio.h>
int sum_prod ( int* a, int* b, int* sum, int* prod);
int main()
{
    int a, b, sum, prod;
    printf("Enter the two numbers:");
    scanf("%d %d",&a, &b);
    sum_prod (&a,&b,&sum,&prod);
    printf("sum is:%d",sum);
    printf("product is:%d",prod);
}
int sum_prod ( int* a, int* b, int* sum, int* prod)
{
    *sum = *a + *b;
    *prod = *a * *b;
}

