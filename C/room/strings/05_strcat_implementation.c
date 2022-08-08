#include<stdio.h>
#include<string.h>
int main()
{
    int i=0;
    int count1=0,count2=0;
    char str1[200],str2[200];
    printf("Enter the 1st string:");
    scanf("%s",str1);
    printf("Enter the 2nd string:");
    scanf("%s",str2);
    while ( str1[i] != '\0')
    {
	count1++;
	i++;
    }
    //    printf("Length of 1st string is %d\n",count1);
    int j=0;
    while ( str2[j] != '\0')
    {
	count2++;
	j++;
    }
    //    printf("Length of 2nd string is %d\n",count2);
    for (int k=0; k <= count2; k++)
    {
	str1[count1+k] = str2[k];
    }
    printf("The strings concatenated look like:%s",str1);
}

