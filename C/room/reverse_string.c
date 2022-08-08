#include<stdio.h>
int main()
{
    int count=0;
    char str[200];
    char ch;
    printf("Enter the string:");
    while (( ch == getchar()) != '\0')
    {
	for ( int i=0; str[i] != '\0'; i++)
	{
          count++;
	}
    }
    printf("Length of string is : %d",count);
}
