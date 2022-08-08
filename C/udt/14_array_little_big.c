#include<stdio.h>
union int_char
{
    int val;
    char arr[4];
};
int main()
{
    union int_char var;
    var.val = 0x12345678;
    printf("arr[0] :%hhx\n", var.arr[0]); 
    printf("arr[1] :%hhx\n", var.arr[1]); 
    printf("arr[2] :%hhx\n", var.arr[2]); 
    printf("arr[3] :%hhx\n", var.arr[3]); 
    printf("size of union: %zu\n", sizeof(var));
    if (var.arr[0] == 0x78) 
	printf("Little endian");
    else
	printf("Big endian");
}
