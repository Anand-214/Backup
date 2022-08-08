#include<stdio.h>
int fun(int);
int main()
{
    int a=5;
    fun(a);
}
int fun(int a)
{
    printf("a=%d\n",a);
    if (a>0)
	fun(a-1);
}

