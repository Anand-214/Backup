#include<stdio.h>
union float_ieee
{
    float var;
    struct
    {
	unsigned int mantissa : 23;
	unsigned char exp : 8;
	unsigned char sign : 1;
    } bits;
};
int main()
{
    union float_ieee f;
    f.var = 1.7;
    printf("Mantissa: %x\n", f.bits.mantissa);
    printf("Exp: %x\n", f.bits.exp);
    printf("Sign: %x\n", f.bits.sign);
}


