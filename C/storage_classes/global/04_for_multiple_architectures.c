#include<stdio.h>
int main()
{
#if ARCH==1
    {
	printf("This is for PIC - 16");
    }
#elif ARCH==2
    {
	printf("This is for PIC - 18");
    }
#elif ARCH==3
    {
	printf("This is for Atmel");
    }
#endif
}

