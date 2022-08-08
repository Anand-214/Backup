#include<stdio.h>
int main()            //in normal declaration the memory is tried to be utilized as much as possible for reading the memory faster.So the order is changed according to the available memory locations.
{
    char c;
    int a;
    char c2;
    int b;
    short s;
    int d;
 //   double db;
    printf("Address of char c1: %p\n",&c);
    printf("Address of int a: %p\n", &a);
    printf("Address of char c2: %p\n", &c2);
    printf("Address of int b: %p\n", &b);
    printf("Address of short s: %p\n", &s);
    printf("Address of int d: %p\n", &d);
//    printf("Address of double: %d", &db);
}
