#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main( int argc, char* argv[], char* envp[])
{
    int i = 0;
    char* var,*val;
    if ( argc < 2)
	printf("Enter atleast 2 CLA's.");
    else
    {
	while ( envp[i]	!= NULL)
	{
	    var = strtok(envp[i], "=");
	    if ( strcmp (argv[1],var) == 0)
	    {
		val = strtok (NULL, "=");
		break;
	    }
	    i++;
	}
	printf("%s\n", val);
	if ( envp[i] == NULL)
	    printf("No match found.");
    }
}
