#include<stdio.h>
char* print_string (char**,int);
int main()
{
    char* str[5] = {"Hello","how","are","you","?"};
    print_string ( str , 5);
}
char* print_string (char** str, int size)   // other method: char* print_string (char* str[], int size)
{    //in both method we are colllecting the address only.
for (int i=0; i<size; i++)
    {
	printf("%s\n", str[i]);
    }
}
