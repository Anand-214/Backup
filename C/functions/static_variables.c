#include<stdio.h>
void fun(void)
{
    int a=10;
    printf("%d\n",a);
    a++;
    return;
}
int main()
{
    fun();
    fun();
    fun();
}
