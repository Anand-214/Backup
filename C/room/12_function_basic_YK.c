#include<stdio.h>
int biggest(int,int,int);
int main()
{
    int a,b,c,value;
    printf("Enter the 3 numbers:");
    scanf("%d %d %d",&a,&b,&c);
    value = biggest(a,b,c);
    printf("The largest value is:%d",value);
}
int biggest ( int x, int y, int z)
{
    if ( x > y && x > z)
	return x;
    else if ( y > x && y > z)
	return y;
    else
	return z;
}


