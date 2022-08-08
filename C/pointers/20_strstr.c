#include<stdio.h>
#include<string.h>
int main()
{
    char* ptr = strstr("Hello how are you?","ara");
    printf("%s",ptr);
    if ( ptr == NULL )
	printf("Not found");
}
