#include<stdio.h>
int main(int argc, char* argv[])
{
    char ch;
    FILE* fpo = fopen (argv[1],"r");
    if ( fpo != NULL)
    {
	while ((ch = getc(fpo)) != EOF)
	    putc (ch, stdout);
    }
    else
	printf("File not present.\n");
}
