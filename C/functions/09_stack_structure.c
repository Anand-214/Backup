#include<stdio.h>
int main()
{
    fun1();
    printf("In main\n");
}
void fun1(void)
{
    fun2();
    printf("In fun1\n");
}
void fun2(void)
{
    fun3();
    printf("In fun2\n");
}
void fun3(void)
{
    printf("In fun3\n");
}
