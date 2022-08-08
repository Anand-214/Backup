#include<stdio.h>
union first
{
    int a;
    char c;
    float d;
};
int main()
{
    union first var;
    var.a = 10;
    var.c = 20;
    printf("%d\n", var.a);
    var.d = 1.7;
    printf("%d\n", var.a);
    printf("size of union: %zu\n", sizeof(var));
}
