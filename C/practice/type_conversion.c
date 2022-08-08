#include<stdio.h>
int main()
{
    signed int x= -1;
    unsigned int y= 100;
    printf ("%u\n",x);
    if (x<y)
    {
	printf("True");
    }
    else
    {
	printf("False");
    }
}
