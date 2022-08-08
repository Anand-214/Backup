#include<stdio.h>
int main()
{
    int i,j;
    printf("first array is:\n");
    int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
   
    for (i=0; i<3; i++)
    {
	for (j=0; j<4; j++)
	{
	    printf("%d ", arr1[i][j]);
	}
	printf("\n");
    }

    printf("second array is:\n");
    int arr2[3][4] = { {1,2,3},{4,5,6,7},{8,9} };
    for (i=0; i<3; i++)
    {
	for (j=0; j<4; j++)
	{
	    printf("%d ", arr2[i][j]);
	}
	printf("\n");
    }
printf("%d\n", arr1[i][j]);
printf("%zu", sizeof(arr2));
}

