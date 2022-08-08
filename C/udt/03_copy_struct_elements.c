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
struct student_info s2;
s2 = s1;
printf("Id is:%d\n", s2.id);
printf("Name is:%s\n", s2.name);
printf("Address is:%s\n", s2.address);
}

