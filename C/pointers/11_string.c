#include<stdio.h>
int main()
{
    char* ptr = "hello";
    char str[6] = "hello";
    printf("ptr = %s\n", ptr);
//    printf("str = %s\n", str);
//  *ptr = 'H';
    *str = 'H';
    printf("str = %s\n",str);
}
