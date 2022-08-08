#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,count=0;
    char ch;
    char str[200];
    printf("Enter the string:");
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
	for (i=0;ch='\n';i++)
	{
	    ch = str[i];
	    i++;
	}
    }
    printf("The string %s",str);
}
