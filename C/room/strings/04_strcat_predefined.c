#include<stdio.h>
#include<string.h>
int main()
{
    char str1[200],str2[200];
    printf("Enter the 1st string");
 //   fgets(str1,200,stdin);
   scanf("%s",str1);
    printf("Enter the 2nd string");
//    fgets(str2,200,stdin);
   scanf("%s",str2);
    strcat(str1,str2);
    printf("The concatenated string is:%s",str1);
}
