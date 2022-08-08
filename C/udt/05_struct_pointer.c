#include<stdio.h>
struct student_info
{
    int id;
    char name[20];
    char address[100];
};
int main()
{
    struct student_info s1 = {1234,"Anand","Banglore"};
    struct student_info *ptr = &s1;
    printf("Id:%d\n", (*ptr).id);
    printf("Id: %d\n", ptr -> id);
    printf("Name: %s\n", (*ptr).name);
    printf("Name: %s\n", ptr -> name);
}
