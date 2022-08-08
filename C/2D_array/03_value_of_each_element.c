#include<stdio.h>
int main()
{
//    printf("first array is:\n");
    int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int (*p)[4] = arr1;
    printf("p[0][0] : %d\n", **p);
    printf("p[0][1] : %d\n", *(*p+1));
    printf("p[1][0] : %d\n", **(p+1));
    printf("p[1][1] : %d\n", *(*(p+1)+1));
    printf("p[3][4] : %d\n",*(*(p+2)+3));
 
 
 
/*    for (int i=0; i<3; i++)
    {
	for ( int j=0; j<4; j++)
	{
	    printf("%d ", arr1[i][j]);
	}
	printf("\n");
    }

    printf("second array is:\n");
    int arr2[3][4] = { {1,2,3},{4,5,6,7},{8,9} };
    for (int i=0; i<3; i++)
    {
	for ( int j=0; j<4; j++)
	{
	    printf("%d ", arr2[i][j]);
	}
	printf("\n");
    }
printf("%d", arr1[0]);
*/
}

