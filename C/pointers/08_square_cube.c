#include<stdio.h>
int square_cube (int a,int* square, int* cube);
int main()
{
    int a,square,cube;
    printf("Enter the number:");
    scanf("%d",&a);
    square_cube ( a, &square, &cube);
    printf("The square is:%d\n",square);
    printf("The cube is:%d\n",cube);
}
int square_cube ( int a, int* square, int* cube)
{
    *square=a*a;
    *cube=a*a*a;
    return;
}
