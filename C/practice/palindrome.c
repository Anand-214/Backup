#include<stdio.h>
int main()
{
    int temp,rem,num;
    int rev=0;
    printf("Enter the number:");
    scanf ("%d", &num);
    temp = num;
    while (num > 0)
    {
	rem=num % 10;
	rev=(rev*10)+rem;
	num=num / 10;
    }
    if (temp == rev)
	printf("It is a palidrome.");
    else
	printf("It is not a palindrome.");
    return 0;
}

