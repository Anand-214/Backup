#include<stdio.h>
struct student_info
{
    int id;
    char name[20];
    char address[100];
};
int main()
{
    struct student_info s1 = {1234,"Biju","Banglore"};
    printf("Size of struct = %zu\n", sizeof(s1));
    printf("Size of struct = %zu\n", sizeof(struct student_info));
    printf("Id : %d\n", s1.id);
//    printf("Id : %d\n", s1);    in printf we cant print s1 as we do not have specific data type for it.
    printf("Name: %s\n", s1.name);
    printf("Address: %s\n", s1.address);
}
