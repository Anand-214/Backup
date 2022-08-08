#include<stdio.h>
int main()
{
    int i=0,count1=0,count2=0,flag=0;
    char str1[200],str2[200];
    printf("Enter the 1st string:");
    scanf("%s",str1);
    printf("Enter the 2nd string:");
    scanf("%s",str2);
    for ( i=0; str1[i] != '\0' || str2[i] != '\0'; i++)
    {
	if ( str1[i] != str2[i] )
	{  
	    flag = 1;
	    break;
	}
    }
    if ( flag == 1)
	printf("Strings are not equal.");
    else
	printf("Strings are equal.");
}
