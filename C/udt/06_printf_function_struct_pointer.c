#include<stdio.h>
struct student_info
{
    int id;
    char name[20];
    char address[100];
};
void print_struct (const struct student_info* ptr)
{
    printf("Id:%d\n", ptr -> id);
    printf("Name:%s\n", ptr -> name);
    printf("Address:%s\n", ptr -> address);
}
void scan_struct (struct student_info* ptr1)
{
    scanf("%d", &ptr1 -> id);    //since id is an integer we need &ptr1
    scanf("%s", ptr1 -> name);   // since name and address are strings we dont need &ptr1
    scanf("%s", ptr1 -> address);
}
int main()
{
    struct student_info s1 = {1234,"Anand","Banglore"};
    struct student_info s2; 
    print_struct (&s1);
    scan_struct (&s2);
    print_struct (&s2);

}
