#include<stdio.h>
int main(int argc, char* argv[])
{
    printf("Total number of arguments : %d\n", argc);
    /*    for (int i=0; i<argc; i++)
	  {
	  printf("%d argument is %s\n",i, argv[i]);
	  }
     */
    int i =0;
    while ( argv[i] != NULL )
    {
	printf("%d argument : %s\n", i, argv[i]);
	i++;
    }
}
