#include<stdio.h>
#include<stdarg.h>
int variadic_sum(int count, ...)
{
    va_list ap;
    va_start (ap,count);
    int sum = 0;
    for (int i=0; i<count; i++)
    {
	sum = sum + va_arg(ap,int);
    }
    va_end(ap);
    return sum;
}
int main()
{
printf("The sum is: %d",variadic_sum(4,100,10,20,30));
}
    
