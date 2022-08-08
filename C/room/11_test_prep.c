#include<stdio.h>
int modify  (int* ptr)
{
    *ptr = *ptr + 1;
}
int main()
{
    int num = 10;
    printf("Before modification\n");
    printf("%d\n", num);
    modify(&num);
    printf("After modification\n");
    printf("%d", num);
}

    
