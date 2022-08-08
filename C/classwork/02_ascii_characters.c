#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character to check if it is upper case,lower case or a digit: ");
    scanf("%c", &ch );
    if ( ch >= 'a' && ch <= 'z')
	printf("%c is a lower case character\n", ch);
    else if ( ch >= 'A' && ch <= 'Z')
	printf("%c is a upper case character\n", ch);
    else if (ch >= '0' && ch <= '9')
	printf("%c is a digit\n", ch);
    else
    printf("%c is neither an upper case,not a lower case nor a digit character\n", ch);

return 0;
}

