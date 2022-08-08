#include<stdio.h>
int main()
{
    int i,j,flag=0;
    int a[3]={10,-1,17};
    int b[3]={17,10,-1};

    for (i=0;i<3;i++)
    {
	for (j=0;j<3;j++)
	{
	    if (a[i] == b[j])
	    {
		continue;
	    }
	    else
	    {
		flag=1;
		break;
	    }
	}
    }	
    if (flag==1)		
    {
	printf("The arrays are not equal");
    }
    else
    {
	printf("The arrays are equal");
    }
    return 0;
}

