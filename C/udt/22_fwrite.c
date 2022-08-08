#include<stdio.h>
int main()
{
    int arr[5] = {15, 20, 23, 89, 107};
    FILE* fp = fopen ("binary.bin","w");
    fwrite (arr,sizeof(int),5,fp);
    fclose(fp);
}
