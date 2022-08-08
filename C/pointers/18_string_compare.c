#include<stdio.h>
#include<string.h>
int main()
{
    char* str1 = "Hello";
    char* str2 = "Hella";
    char* str3 = "Hellx";
    char* str4 = "Hello";
    int ret = strcmp (str1,str2);
    printf("%d\n",ret);
    int ret1 = strcmp (str1,str3);
    printf("%d\n",ret1);
    int ret2 = strcmp (str1,str4);
    printf("%d\n",ret2);
    if ( ret2 == 0)
	printf("Strings are equal\n"); 
    int res3 =strncmp(str1,str2,4);
    if ( res3 == 0 )
	printf("Strings are equal"); 
}



