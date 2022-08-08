#include<stdio.h>
void fun();
int main()
{
    printf("inside main\n");
    printf("%p\n", fun);
    printf("%p\n", &fun);
    fun();
}
void fun()
{
    printf("inside function.\n");
}

