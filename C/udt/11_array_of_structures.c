#include<stdio.h>
struct student_info
{
    int id;
    char name[20];
    char address[100];
};
void print_array (struct student_info* a, int size)
{
    for (int i =0; i < size; i++)
    {
	printf("Id of %d student:%d\n",i+1, a[i].id);
	printf("Name of %d student:%s\n",i+1, a[i].name);
	printf("Address of %d student:%s\n",i+1, a[i].address);
	printf("\n");
    }
}
void scan_array (struct student_info* a, int size)
{
    for ( int i =0; i < size; i++)
    {
	scanf("%d", &a[i].id);
	scanf("%s", a[i].name);   // since name and address are strings we dont need &ptr1
	scanf("%s", a[i].address);
    }
}
int main()
{
    struct student_info a[3];
    scan_array (a,3);
    print_array (a,3);
}

//struct student_info *a = malloc (3 * sizeof(struct student_info));
