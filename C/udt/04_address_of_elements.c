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
    struct student_info s2;
    printf("Enter the id: ");
    scanf("%d", &s2.id);
    printf("Enter the name: ");
    scanf("%s", s2.name);
    printf("The entered id is: %d\n", s2.id);
    printf("The entered name is: %s", s2.name);
    printf("\n");
    printf("Size of struct = %zu\n", sizeof(s1));
    printf("Size of struct = %zu\n", sizeof(struct student_info));
    printf("Id : %d\n", s1.id);
//    printf("Id : %d\n", s1);    in printf we cant print s1 as we do not have specific data type for it.
    printf("Name: %s\n", s1.name);
    printf("Address: %s\n", s1.address);
    printf("Address of s1: %p\n", &s1);
    printf("Address of ID: %p\n", &s1.id);
    printf("Address of Name: %p\n", &s1.name);
    printf("Address of Address: %p\n", &s1.address);
    printf("Address of s2: %p\n", &s2);
    printf("Address of s2.ID: %p\n", &s2.id);
    printf("Address of s2.Name: %p\n", &s2.name);
    printf("Address of s2.Address: %p\n", &s2.address);
}
