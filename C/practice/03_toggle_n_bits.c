#include<stdio.h>
int main()
{
    int i,num,mask,bit,set;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the n bit:");
    scanf("%d",&bit);
    for(i=0;i<bit;i++)
    {
    mask=(1<<i);
    num=num^mask;
    }
    printf("The set number is: %d",num);
    return 0;
}

