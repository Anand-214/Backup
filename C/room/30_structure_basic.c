#include<stdio.h>
struct student_info
{
    int roll;
    char name[20];
    float marks;
};
int main()
{
    struct student_info s1;
    printf("Enter the details of s1\n");
    printf("Roll no:");
    scanf("%d", &s1.roll);
    printf("Name:");
    scanf("%s", s1.name);
    printf("Marks:");
    scanf("%g", &s1.marks);
    printf("ID: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("Marks: %g\n", s1.marks);
}

