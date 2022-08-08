#include<stdio.h>
char* print_array(char arr[][], int row); 
int main()
{
    char arr[4][10] = {"hello","how","are","you?"};  //this is modifiable string of arrays with 4 rows and 10 col each.
    print_array(4,arr);
}
char* print_array(char arr[][10], int row)
{
    for (int i=0; i<row; i++)
    {
	printf("%s\n", arr[i]);
    }
}

