#include<stdio.h>
int main()
{
    int num = 40;
    int ret = num >> 2;
    printf("%d\n", ret);
    int x = 0x37;
    int res = x ^ 0xff;
    printf("%d", res);
}
