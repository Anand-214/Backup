#include<stdio.h>
int main()
{
    char* str[5] = {"Hello","how","are","you","?"};
    for (int i=0; i<5; i++)
    {
	printf("%s\n", str[i]);
    }
}
