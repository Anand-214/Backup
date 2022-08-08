#include<stdio.h>
#include<string.h>
int main()
{
    char str1[200],str2[200];
    printf("Enter 1st string:");
    scanf("%s",str1);
    printf("Enter 2nd string:");
    scanf("%s",str2);
    int ret= strcmp(str1,str2);
    if (ret == 0)
	printf("Strings are equal.");
    else
	printf("Strings are not equal.");
}

