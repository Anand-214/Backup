#include<stdio.h>
int display (int *);
int show (int *);
int main()
{
    int i;
    int marks[] = {88,67,80,78};
    for (i=0;i<4;i++)
    {
	display(&marks[i]);
    }
}
int display (int* n)
{
    for (int i=0;i<4;i++)
    {
	show (&n[i]);
    }
}
    int show (int* m)
    {
	printf("%d ", *m);
    }



