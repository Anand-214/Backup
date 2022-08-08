#include<stdio.h>
void print_array(int row, int col, int arr1[][col])
{
   for (int i=0; i< row; i++)
    {
	for ( int j=0; j< col; j++)
	{
	    printf("%d ", arr1[i][j]);
	}
	printf("\n");
    }
}
int main()
{
    int arr1[3][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
    print_array (3,5,arr1);
}

