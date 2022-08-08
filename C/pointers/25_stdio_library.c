#include<stdio.h>
int main()
{
    int ch;
    ch = getchar();
    putchar(ch);
    ch = getc(stdin);
    putc(ch,stdout);
}
