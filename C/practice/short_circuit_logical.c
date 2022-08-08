#include<stdio.h>
int main()
{
    int x=0,y=1;
    if ( x++ || y++)           //here x++ is 0 for comparision hence the y++ will also be considered.
    {
	printf("True\n");
    }
    else
    {
	printf("False\n");
}
printf("%d %d", x,y);
int z=0,w=1;
 if ( z++ && w++)
{
    printf("True\n");
}
else
{
    printf("False\n");
}
printf("%d %d", z,w);
}

