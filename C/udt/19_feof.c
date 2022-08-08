#include<stdio.h>
int main(int argc, char* argv[])
{
    char ch;
    FILE* fps = fopen (argv[1], "r");  //the output of the program is it is copying the content of argv[1] into argv[2].
    if ( fps == NULL)
    {
	printf("File doesnt exist.");
	return 0;
    }
    FILE* fpd = fopen ( argv[2], "w");
    while (( ch = getc(fps)) != EOF)
	putc (ch, fpd);
    fclose(fps);
    fclose(fpd);
}
