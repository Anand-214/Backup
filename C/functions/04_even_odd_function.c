#include<stdio.h>
int even_odd(int num)
{
    return num&1?1:0;
}
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
   int res=even_odd(a);
   if (res==1)
       printf("Odd number");
   else
       printf("Even number");
}
