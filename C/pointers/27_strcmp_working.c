#include<stdio.h>
#include<string.h>
int compare_string(char*, char*);
int main()
{
    char str1 [] = "Hello";
    char str2 [] = "world";
    int result = compare_string (&str1, &str2);
    if ( result == 1 )
	printf("Strings are equal.");
    else
	printf("Strings are not equal.");
}
int compare_string (char* str1, char* str2)
{
    if ( strlen (*str1) == strlen (*str2))
    {
	while (*str1 != '\0'&& *str2 != '\0' )
	{
	    if ( *str1 == *str2)
	    {
		int flag = 1;
		str2++;
		str1++;
	    }
	    else
	    {
		flag = 0;
		break;
	    }
	}
    }
}
