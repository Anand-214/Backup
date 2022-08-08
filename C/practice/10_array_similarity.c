#include<stdio.h>
int main()
{
    int i,flag=0;
    int a[3]={10,5,20};
    int b[3]={10,5,20};
    int c[3]={10,5,20};
    //for a and b
    for (i=0;i<3;i++)
    {
	if (a[i] != b[i])
	{
	    flag=1;
	break;
    }
    }
    for (i=0;i<3;i++)
    {
	if (b[i] != c[i])
	{    flag=1;
	break;
    }
    }
    if (flag==0)
	printf("The arrays are equal.");
    else
	printf("The arrays are not equal.");
    return 0;
}



