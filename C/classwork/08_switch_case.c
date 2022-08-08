#include<stdio.h>
int main()
{
    char option;
    printf("Enter y/Y for yes & n/N  for no: ");
    scanf("%c", &option);
    switch (option)
    {
	case 'y':
	case 'Y':
	    printf("Your choice is YES\n");
	    break;
	case 'n':
	case 'N':
	    printf("Your choice is NO\n");
	    break;
	default:
	    printf("Invalid character\n");
    }

    return 0;
}




