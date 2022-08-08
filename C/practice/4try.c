#include<stdio.h>
int main()
{
    void* vptr;
    char* cptr;
    int* iptr;
    printf("%ld", sizeof(iptr));
    printf("%ld", sizeof(cptr));
    printf("%ld", sizeof(vptr));
}
