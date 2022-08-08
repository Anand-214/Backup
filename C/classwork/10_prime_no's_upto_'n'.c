#include<stdio.h>
int main()
{
    int i,num,count=2;
    printf("Enter the number:");
    scanf("%d", &num);
    while (num>0)
    {
	    for (i=2;i<count;i++)
	    {
		if (count%i==0)
		    break;
	    }
	    if (i==count)
	    { 
		printf("%d ",count);
		num--;
	    }
	    count++;
	}
    return 0;
}
