#include<stdio.h>
#include<string.h>
int palindrome (char*);
int main()
{
 //   char string;
 //   printf("Enter the string:");
//    scanf("%s", string);
    char* str = "malayalam";
    int ret = palindrome(str);
    if ( ret == 1 )
	printf("Its a Plaindrome.");
    else
	printf("Its not Plaindrome.");
}
int palindrome ( char* str)
{
    int n = strlen(str);
    for ( int i=0; i<n/2; i++)
    {
	if ( str[i] == str [n-i-1])
	    return 1;
    }
}


