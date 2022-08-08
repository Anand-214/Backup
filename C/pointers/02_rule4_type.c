#include<stdio.h>
int main()
{
    int a = 0x12345678;
    char *ptr1 = (char*)&a;
    if ( *ptr1 == 0x78)
	printf("Little endian");
    else 
	printf("Big endian");
}
