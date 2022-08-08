#include<stdio.h>
int my_cat(FILE* fp1, FILE* fp2);
int main(int argc, char* argv[])
{
    FILE* fp1 = fopen (argv[1],"r");
    FILE* fp2 = fopen (argv[2],"a+");
    my_cat (fp1,fp2);
    fclose(fp1);
    fclose(fp2);
}
int my_cat(FILE* fp1, FILE* fp2)
{
    char ch;
    while ((ch = getc(fp1)) != EOF)
	putc(ch,fp2);
}
