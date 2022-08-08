#include<stdio.h>
float temp(float);
int main()
{
    float a;
    printf("Enter the temp in fahrenhit:");
    scanf("%f",&a);
    float res=temp(a);
    printf("The temp in celsius is:%.3f",res);
}
float temp(float num)
{
    return ((float)5/9*(num-32));
}
