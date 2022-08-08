#include<stdio.h>
int max(int a,int b)
{
   return a>b ? a :b ;
}
int main()
{
    int n1,n2;
    printf("Enter the first number:");
    scanf("%d",&n1);
    printf("Enter the second number:");
    scanf("%d",&n2);
int res=max(n1,n2);
printf("The larger number is:%d",res);
}


