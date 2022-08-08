#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,temp;
    char str[200];
    printf("Enter the string:");
    scanf("%[^\n]s",str);
    int l = strlen(str);
    for (i=0; i<(l/2); i++)
    {
	temp = str[i];
	str[i] = str[l-1-i];
	str[l-1-i] = temp;
    }
    printf("%s",str);
}

