#include<stdio.h>
int main()
{
    int x = 15;
    char ch;
    printf("%zu\n",sizeof(&x));
    printf("%zu\n",sizeof(&ch));
int *ptr = &x;
char *ptr2 = &ch;
printf("&x = %p, ptr = %p\n", &x, ptr);
printf("&ch = %p, ptr2 = %p\n", &ch, ptr2);
}
