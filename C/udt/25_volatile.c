#include<stdio.h>
int main()
{
    char led = 0;
    volatile int i;
    while (1)
    {
	led = !led;
	for (i=0xfffffff; i>=0; i--);
	printf("%hhd\r", led);
	fflush(stdout);
    }
}
