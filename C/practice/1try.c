#include<stdio.h>
unsigned char nibbles (unsigned char x)
{
    return ( (x & 0x0F) << 4 | (x & 0xF0) >> 4);
}
int main()
{
    unsigned char num =  100;
    printf("%u", nibbles(num));
    return 0;
}
