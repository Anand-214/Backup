#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr = malloc(4);
    scanf("%d", ptr);
    printf("%d", *ptr);
    free(ptr);
}
