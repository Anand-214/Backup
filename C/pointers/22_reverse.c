#include<stdio.h>
#include<string.h>
void reverse(char* str)
{
    if ( *str != '\0')
    {
	reverse(str+1);
	printf("%c",*str);
    }
}
int main()
{
    char* str = "emertxe";
    reverse(str);
}
