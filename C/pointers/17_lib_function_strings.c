#include<stdio.h>
#include<string.h>
int main()
{
    char* ptr = "Emertxe";
    char str [8];
//    strcpy (str,ptr);
    strncpy (str,ptr,4);
    printf("%s",str);
}
