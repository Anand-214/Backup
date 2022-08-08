#include<stdio.h>
#pragma pack(1)
struct                  //in struct the order of the members of structure cant be changed as it is changed for the normal declaration the order is changed
{
    char c1;
    int a;
    char c2;
    int b;
    short s;
    int d;
}var;
int main()
{
    printf("Address of char c1: %p\n",&var.c1);
    printf("Address of int a: %p\n", &var.a);
    printf("Address of char c2: %p\n", &var.c2);
    printf("Address of int b: %p\n", &var.b);
    printf("Address of short s: %p\n", &var.s);
    printf("Address of int d: %p\n", &var.d);
    printf("Size of struct is %zu\n", sizeof(var));
}
