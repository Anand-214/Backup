#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
    int sum = 0;
    if ( argc < 3 )
    {
	printf("ERROR: Atleast pass 3 CLA's.");
    }
    else
    {
	for (int i=1; i < argc; i++)
	{
	    sum = sum + atoi(argv[i]);
	}
	printf("Sum is: %d", sum);
	return 0; 
    }
}
