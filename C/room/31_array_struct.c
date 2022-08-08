#include<stdio.h>
struct student_info
{
    int id;
    char name[20];
    float marks;
};
int main()
{
    int i;
    struct student_info s[3];
    for (i=0; i<3; i++)
    {
	printf ("Enter the details of student %d\n", i+1);
	printf("S%d id:",i+1);
	scanf("%d", &s[i].id);
	printf("S%d name:",i+1);
	scanf("%s", s[i].name);
	printf("S%d Marks:",i+1);
	scanf("%f", &s[i].marks);
    }
    for (i=0; i<3; i++)
    {
	printf ("Entered details of student are:");
	printf("S%d id:",i+1);
	printf("%d\n", s[i].id);
	printf("S%d name:",i+1);
	printf("%s\n", s[i].name);
	printf("S%d Marks:",i+1);
	printf("%f\n", s[i].marks);
    }
}
