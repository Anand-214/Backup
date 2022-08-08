#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "Anand,Banglore,anand@gmail.com,9028525438";
    char* delim = ",";
    char* name = strtok (str,delim);
    printf("%s\n",name);
/*    char* address = strtok (NULL,delim);
    printf("%s\n",address);
    char* email = strtok (NULL,delim);
    printf("%s\n",email);
    char* phone = strtok (NULL,delim);
    printf("%s\n",phone);
*/
   char *data;                           //using loop for the above address,email,phone;
   while ((data = strtok(NULL,delim)) != NULL)
   {
       printf("%s\n",data);
   }
printf("%s\n",str);
printf("%s\n",str+5);
}


