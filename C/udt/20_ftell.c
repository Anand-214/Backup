#include<stdio.h>
int main()
{
    FILE* fp = fopen ("file.txt","a+");       //./out file.txt
    FILE* fpo = fopen ("file2.txt","r");       //./out file.txt
    printf("offset : %ld\n", ftell (fp));
    char ch;
    while ((ch = getc(fpo)) != EOF)
	putc ( ch,fp );
    printf("offset : %ld", ftell (fp));
}
