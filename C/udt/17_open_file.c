#include<stdio.h>
int main()
{
    FILE* fp = fopen ("file.txt","r");       //./out file.txt
    char ch;
    while ((ch = getc(fp)) != EOF)
	putc ( ch, stdout);
}
