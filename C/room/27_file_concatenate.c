#include<stdio.h>
int main(int argc, char* argv[])
{
    char ch,ch1;
    if ( argc == 1)
    {
	while ((ch = getc(stdin)) != '\0')
	    putc(ch,stdout);
    }
    else if ( argc >= 2 && argc <=3)
    {
	FILE* fp1 = fopen (argv[1],"r");
	if ( fp1 != NULL)
	{
	    while ((ch = getc(fp1)) != EOF)
		putc (ch,stdout);
	    fclose(fp1);
	}
	else
	    printf("%s: No such file or directory.\n", argv[1]);
	FILE* fp2 = fopen (argv[2],"r");
	if ( fp2 != NULL)   
	{    while ((ch = getc(fp2)) != EOF)
	    putc (ch,stdout);
	    fclose(fp2);
	}
	else
	    printf("%s: No such file or directory.\n", argv[2]);
    }
    else if ( argc == 4 )
    {
	FILE* fp1 = fopen (argv[1],"r");
	FILE* fp2 = fopen (argv[2],"r");
	FILE* fp3 = fopen (argv[3],"a+");
	if (fp1 != NULL )
	{ 
	    while ((ch = getc (fp1)) != EOF)
		putc (ch,fp3);
	   while ((ch1 = getc (fp2)) != EOF)
		putc (ch1,fp3);
	    printf("Success.\n");
	}
	else
	    printf("Not successful.\n");
    }
}
