#include<stdio.h>
void display (int);
int main()
{
    int i;
    int marks[] = {55,78,90,76,88};
    for (i=0; i<4; i++)
    {
	display (marks[i]);
    }
}
void display (int m)
{
    printf("%d ",m); 
}


