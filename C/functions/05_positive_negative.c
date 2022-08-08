#include<stdio.h>
int pos_neg(int num)
{
    return num>0?1:0;
}
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
   int res=pos_neg(a);
   if (res==1)
       printf("Positive number");
   else
       printf("Negative number");
}
