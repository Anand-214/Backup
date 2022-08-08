#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
    if ( argc < 3 )
    {
	printf("ERROR: Atleast pass 3 CLA's.");
	return 0;
    }
    else
    {
	int sum = atoi (argv[1]) + atoi (argv[2]);
	printf("Sum is: %d", sum);
	return 0; 
    }
}
