#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void terminated (void)
{
    printf("Program terminated.");
}
int main()
{
    atexit(terminated);
    sleep(5);
    return 0;
}
