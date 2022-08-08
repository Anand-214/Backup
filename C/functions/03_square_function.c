#include<stdio.h>
int square(int a)
{
    return a*a;
}
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int res=square(num);
    printf("The square is:%d",res);
}
