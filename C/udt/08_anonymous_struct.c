#include<stdio.h>
struct emertxe_info
{
struct
{
    int student_id;
    char name[20];
    char address[100];
}s1;
struct
{
    int mentor_id;
    char name[20];
    char address[100];
}m1;
};
int main()
{
    struct emertxe_info e1 = {{146,"arun","mumbai"},{178,"Biju","Banglore"}};
    printf("Student Id: %d\n", e1.s1.student_id);
    printf("Mentor Name: %s\n", e1.m1.name);
    printf("student Address: %s\n", e1.s1.address);

}





