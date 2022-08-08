#include<stdio.h>
char ch;
int no_arg_cat()
{
    while ((ch = getc(stdin)) != '\0')
	putc(ch,stdout);
}
int my_cat(FILE* fp1, FILE* fp2)
{
    if (fp1 != NULL )
    { 
	while ((ch = getc (fp1)) != EOF)
	    putc (ch,fp2);
    }
}
int display_content (FILE* fpo)
{
    while ((ch = getc(fpo)) != EOF)
	putc (ch,stdout);
}
int main(int argc, char* argv[])
{
    //    char ch;
    if ( argc == 1)
    {
	no_arg_cat();
    }
    else if (argc == 2)
    {
	FILE* fp1 = fopen (argv[1],"r");
	if ( fp1 != NULL)
	{
	    display_content (fp1);
	    fclose(fp1);
	}
	else
	    printf("%s: No such file or directory.\n", argv[1]);
    }
    else if ( argc == 3)
    {
	FILE* fp1 = fopen (argv[1],"r");
	if ( fp1 != NULL)
	{
	    display_content (fp1);
	    fclose(fp1);
	}
	else
	    printf("%s: No such file or directory.\n", argv[1]);
	FILE* fp2 = fopen (argv[2],"r");
	if ( fp2 != NULL)   
	{
	    display_content (fp2);
	    fclose(fp2);
	}
	else
	    printf("%s: No such file or directory.\n", argv[2]);
    }
    else if ( argc == 4 )
    {
	FILE* fp1 = fopen (argv[1], "r");
	if ( fp1 != NULL)
	{
	    FILE* fp2 = fopen (argv[3], "a+");
	    my_cat(fp1,fp2);
	    printf("Data of %s copied to %s successfully.\n",argv[1],argv[3]); 
	    fclose(fp1);
	    fclose(fp2);
	}
	else
	    printf("%s: No such file or directory.\n", argv[1]);
	FILE* fp3 = fopen (argv[2],"r");
	if ( fp3 != NULL)
	{
	    FILE* fp4 = fopen (argv[3],"a+");
	    my_cat(fp3,fp4);
	    fclose(fp3);
	    fclose(fp4);
	    printf("Data of %s copied to %s successfully.\n",argv[2],argv[3]); 
	}
	else
	    printf("%s: No such file or directory.\n", argv[2]);
    }
}
