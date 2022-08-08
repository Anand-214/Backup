#include<stdio.h>
struct student_info
{
    int student_id;
    char name[20];
    char address[100];
};
struct mentor_info
{
    int mentor_id;
    char name[20];
    char address[100];
};
struct emertxe_info
{
    struct student_info s1;
    struct mentor_info m1;
};
int main()
{
    struct emertxe_info e1 = {{146,"arun","mumbai"},{178,"Biju","Banglore"}};
    printf("Student Id: %d\n", e1.s1.student_id);
    printf("Mentor Name: %s\n", e1.m1.name);
    printf("student Address: %s\n", e1.s1.address);

}





