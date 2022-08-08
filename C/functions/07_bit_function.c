#include<stdio.h>
int set_bit(int bit,int num)
{
    return (1<<bit | num);
}
int clear_bit(int bit,int num)
{
    return ~(1<<bit) & num;
}
int toggle_bit(int bit,int num)
{
    return (1<<bit ^ num);
}
int main()
{
    int num,sbit,cbit,tbit;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the bit to set:");
    scanf("%d",&sbit);
    printf("Result after %dth bit is set:%d\n",sbit,set_bit(sbit,num));
    printf("Enter the bit to clear:");
    scanf("%d",&cbit);
    printf("Result after %dth bit is clear:%d\n",cbit,clear_bit(cbit,num));
    printf("Enter the bit to toggle:");
    scanf("%d",&tbit);
    printf("Result after %dth bit is toggled:%d",tbit,toggle_bit(tbit,num));
} 

