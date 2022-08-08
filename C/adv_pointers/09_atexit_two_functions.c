#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void my_exit1 (void)
{
    printf("exit program 1.");
}
void my_exit2 (void)
{
    printf("exit program 2.");
}
int main()
{
    atexit(my_exit1);
    atexit(my_exit2);
    sleep(5);
    return 0;
}
