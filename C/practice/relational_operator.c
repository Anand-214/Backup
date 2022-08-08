#include<stdio.h>
int main()
{
    float f=1.5;        //here we are comparing the float value with double because 1.7 is default considered as double.
    float g=1.7;        //so float will be promoted to double and thus size 4 will change to size 8.
    if ( f == (float)1.5)      // 1.5 has value of sign=1  exponent=(01111111)  mantisa=(100000.....upto 52)
	                //the same will be for double i.e. 100000....upto 52)
	                // so the result is true.
    {
	printf("True\n");
    }
    else
    {
	printf("False\n");
    }
    if ( g == (float)1.7)          // when we consider 1.7 the mantissa values will not be the same as its recurring.
	                    //so it will be considered as false.
{
    printf("True\n");
}
else
{
    printf("False\n");
}
}

