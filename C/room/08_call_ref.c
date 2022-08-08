#include<stdio.h>
int function (int*, int*);
int main()
{
    int x=5,y=7;
    function (&x,&y);
    printf("Inside main:");
    printf("x is %d , y is %d\n",x,y);
}
int function (int* x, int* y)
{
   *x = 7;
   *y = 5;
    printf("x : %d\ny : %d\n",*x ,*y);
}

