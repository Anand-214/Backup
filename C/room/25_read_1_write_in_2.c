#include<stdio.h>
int main(int argc, char* argv[])
{
    char ch;
    FILE* fpo = fopen(argv[1],"r");
    if ( fpo != NULL )
    {
	FILE* fpw = fopen(argv[2],"a+");
	while ((ch = getc(fpo)) != EOF)
	    putc (ch,fpw);
    }
    else
	printf("%s doesnt exist.\n",argv[1]);
}

