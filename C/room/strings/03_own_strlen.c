#include<stdio.h>
int main()
{
    int i=0,count=0;
    char str[200];
    printf("Enter the string name:");
    fgets(str,200,stdin);
    while ( str[i] != '\0')
    {
	count++;
	i++;
    }
    printf("%d",count-1);
}
