#include<stdio.h>
int main()
{
    int num,i,count=1;
    printf("Enter the number upto which the series printed:");
    scanf("%d", &num);
    for  (i=1;i<=num+1;i++)
    {
    printf("%d ", count);
    count=count*2;
    }
    return 0;
}
