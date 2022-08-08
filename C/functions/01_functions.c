#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two numbers:");
    scanf("%d %d",&a,&b);
int res=add(a,b);
printf("The addition is:%d",res);
int res1=add(10,20);
printf("The addition is:%d",res1);
}
int add(int n1,int n2)
{
   return n1+n2;
}
