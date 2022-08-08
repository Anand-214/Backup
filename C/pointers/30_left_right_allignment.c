#include<stdio.h>
int main()
{
    printf("%3d\n",1);
    printf("%3d\n",10);
    printf("%3d\n",100);
    printf("%10s\n","Hello");
    printf("%10s\n","World");
    printf("%*d\n",4,10);
    printf("%*d\n",5,100);
    printf("\n");
    int i,j;
    for (i=1,j=5;i<=5,j>=1;i++,j--)
    {
	//printf("%*c %*c\n",i,'H',j,'H');
    //     printf("%*c",i,'H');
   //      printf("%*c\n",j,'H');
    
	printf("%-3d %-3d",1,1);
    }
}

