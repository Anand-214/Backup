#include<stdio.h>
void fun();
int main()
{
    void (*p)(void);    //function pointer.
    p = fun;            //assigning the function to the pointer.
    p();                //calling the function using the pointer.
}
void fun()
{
    printf("inside function.\n");
}

