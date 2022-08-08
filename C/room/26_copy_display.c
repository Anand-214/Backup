#include<stdio.h>
int main(int argc, char* argv[])
{
    char ch;
    if (argc == 1)
	printf("ERROR:File names not passed\n");
    else if ( argc == 3)
    {
	FILE* fpo = fopen(argv[1],"r");
	if ( fpo != NULL)
	{
	    FILE* fpw = fopen(argv[2],"w");
	    while ((ch = getc(fpo)) != EOF)
		putc (ch,fpw);
	    fclose(fpo);
	    fclose(fpw);
	    printf("Content of %s copied successfully in %s",argv[1],argv[2]);
	}
	else
	    printf("%s: No such file exists.\n",argv[1]);
    }
    else
	printf("Destination file missing.\n");
}


