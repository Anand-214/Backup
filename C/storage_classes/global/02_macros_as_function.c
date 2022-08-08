#include<stdio.h>
#define SQUARE(x) (x*x)
#define ADD(a,b) a+b
#define SUM(a,b) (a+b)
#define MAX(a,b) (a>b ? a : b)
#define MIN(a,b) (a<b ? a : b)
#define SET_BIT(num,n) (num | 1<<n)
#define CLEAR_BIT(num,n) (num & ~(1<<n))
#define TOGG_BIT(num,n) (num ^ 1<<n)
#define SWAP(a,b)\
{\
    int temp = a;\
    a = b;\
    b = temp;\
}
int main()
{
    printf("The square macros function is:%d\n", SQUARE(10));
    printf("The addition macros function is: %d\n", ADD(10,20));
    printf("The addition macros function is: %d\n", 5*SUM(10,20));
    printf("Macro inside macro:%d\n",SUM(SQUARE(5),SQUARE(10)));
    printf("Maximun using macro:%d\n",MAX(10,15));
    printf("Minimum using macro:%d\n",MIN(100,75));
    printf("Set n bits:%d\n",SET_BIT(10,2));
//    printf("Set n bits:%d\n",SET_BIT(10.5,2.5));
    printf("Clear n bits:%d\n",CLEAR_BIT(10,1));
    printf("Toggle n bits:%d\n",TOGG_BIT(13,2));
    int a=20, b=10;
    SWAP(a,b);
    printf("Multi line swap Macro:%d %d\n",a,b);
    int c=20, d=10;
    SWAP(a,b);
    printf("c = %d\nd = %d",a,b);
}


