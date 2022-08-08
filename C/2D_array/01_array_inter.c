#include<stdio.h>
int main()
{
    int arr[5] = {10,20,30,40,50};
    printf("Base address of arr :%p\n",arr);
    printf("Base address of &arr[0] : %p\n",&arr[0]);
    printf("Entire array base address : %p\n", &arr);
    printf("arr+1 : %p\n", arr+1);      //here only 4 bytes will be added as we are printing the address of next element.
    printf("&arr+1 : %p\n", &arr+1);   //here the entire array is treated as single hence when +1 we check the next element after 5 elements.
    printf("%d\n", *arr);
    printf("%d\n", **&arr);
}

