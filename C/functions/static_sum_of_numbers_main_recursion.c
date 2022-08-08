#include<stdio.h>
int main()
{
    static int a=10;
    static int sum;
    sum=sum+a;
    a--;
    if (a>0)
	main ();
    else
	printf("%d\n",sum);
    return 0;
}
