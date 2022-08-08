#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the two numbers to compare: ");
    scanf("%d %d", &num1, &num2);
   if (num1 > num2) 
   {
       printf("%d is greater than %d\n", num1 , num2);
   }
   else if (num1==num2)
   {
       printf("%d and %d are equal\n", num1 , num2);
   }
   else if (num2 > num1)
   {
       printf("%d is greater than %d\n", num2 , num1);
   }
   return 0;
}
