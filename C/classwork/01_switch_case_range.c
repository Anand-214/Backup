#include<stdio.h>
int main()
{
      char choice;
      char ch;
  do
  {
      printf("Enter the character:");
      scanf("%c",&ch);
      if (ch>='A' && ch<='Z')
      {
	  printf("The character %c is Upper case.\n",ch);
      }
      else if (ch>='a' && ch<='z')
      {
	  printf("The character %c is lower case.\n",ch);
      }
      else if (ch>='0' && ch<='9')
      {
	  printf("The character %c is digit.\n",ch);
      }
      else
      {
	  printf("None of the above\n");
      }
       printf("Do you want to continue?(y/Y):");
       scanf(" %c", &choice);
  }while (choice=='y' || choice=='Y');
    return 0;
}

