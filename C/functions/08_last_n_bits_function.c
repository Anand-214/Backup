#include<stdio.h>
int set_n_bits(int num,int last_bit)
{
    return num | ((1<<last_bit)-1) ;
}
int clear_n_bits(int num,int last_bit)
{
    return num & ~((1<<last_bit) -1);
}
int toggle_n_bits(int num,int last_bit)
{
    return num ^ (1<<last_bit -1);
}
int main()
{
    int num,bits;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the last 'n' bits to change:");
    scanf("%d",&bits);
    int res=set_n_bits(bits,num);
    printf("result after last %dth bit set:%d\n",bits,res);
    int res1=clear_n_bits(bits,num);
    printf("result after last %dth bit clear:%d\n",bits,res1);
    int res2=toggle_n_bits(bits,num);
    printf("result after last %dth bit toggled:%d\n",bits,res2);
}

	    

