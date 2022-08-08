#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter the name:");
    gets(str);
    puts(str);
    unsigned int count = strlen(str);
    printf("%d",count);
}
