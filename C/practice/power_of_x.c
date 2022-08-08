#include<stdio.h>
int main()
{
    int i,x,n,result=1;
    printf("Enter the base value:");
    scanf("%d", &x);
    printf("Enter the power value:");
    scanf("%d", &n);
for (i=0;i<=n;i++)
{
    printf("%d ", result);
    result=result*x;
}
return 0;
}

