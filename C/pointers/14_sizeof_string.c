#include<stdio.h>
int  main()
{
    if ( sizeof("hello") + sizeof("world") == sizeof("helloworld"))
    {
	printf("true");
    }
    else
	printf("false");
}

