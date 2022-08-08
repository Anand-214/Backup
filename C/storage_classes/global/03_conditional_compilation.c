#include<stdio.h>
/*#define PIC*/
int main()
{
#ifdef PIC
    {
	printf("This is for PIC");
    }
#else
    {
	printf("This is for Atmel");
    }
#endif
}

