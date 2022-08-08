#include<stdio.h>
int main()
{
    char choice;
    do
    {
	printf("Hello world\n");
	printf("Do you want to continue? :");
	scanf("\n%c", &choice);
    } while (choice == 'y');
    return 0;
}

