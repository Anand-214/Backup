#include<stdio.h>
int main(int argc, char* argv[] )
{
    if ( argc == 2 )
    {
	FILE* fp = fopen (argv[1],"r");       //./out file.txt
	if (fp != NULL)
	{
	    char ch;
	    while ((ch = getc(fp)) != EOF)
		putc ( ch, stdout);
	}
	else
	    printf("File not present.\n");
    }
    else
	printf("Pass the file name through command line.\n");
}
