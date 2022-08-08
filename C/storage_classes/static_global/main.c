#include<stdio.h>
static int x = 10;   //definition of global variables.
static int x;

void fun1();
void fun2();
int main()
{
    printf("inside main %d\n",x);
    fun1();
    fun2();
    return 0;
}
