#include<stdio.h>
typedef struct student_info
{
    int id;
    char name[30];
    float marks;
} student_t;

int main()
{
    student_t s1 = {1234, "jay", 63.5};
    FILE* fp = fopen("student.db","w+");
    fwrite (&s1, sizeof(s1), 1, fp);
    rewind(fp);
    student_t s2;
    fread (&s1, sizeof(s2), 1, fp);
    printf("student id:%d\n", s2.id);
    printf("student name:%s", s2.name);
}
   
