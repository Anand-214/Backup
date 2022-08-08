#include<stdio.h>
double add (void *a,void *b,int type)
{
    if ( type == 1)
	return *(int*)a + *(int*)b;
    else if (type ==2)
	return *(double*)a + *(double*)b;
}
int main()
{
    int a=10,b=20;
    int ret1 = add(&a,&b,1);
    double c=3.2,d=4.5;
    double ret2 = add(&c,&d,2);
    printf("%d\n",ret1);
    printf("%g\n",ret2);
}

