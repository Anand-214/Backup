#include<stdio.h>
int avg ( int array[], int size)
{
    int sum = 0;
    for ( int i = 0; i <  size; i++)
    {
	sum = sum + array[i];
    }
    int res = sum / size;
//    return res;
}
int print_array ( int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
	printf("%d ", array[i]);
    }
}

int main()
{
    int array[5] = { 10, 20, 30, 40, 50};
    int res = avg (array, 5);
    printf("%d\n", res);
    print_array (array, 5);
    printf("\n");
    printf("%ld", sizeof(print_array));

}

