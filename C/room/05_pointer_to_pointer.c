#include<stdio.h>
int main()
{
    int a=10,b=5;
    int* p=&a;
    int* q=&b;
 //1) q=p; //here after q=p--> q=&a so q will also be pointing to the adddress of a.
 //1)   *q=*p; //here *&b = *&a--> b = a  so the value of b which was earlier 5 will change to 10.
    //change the value of a without using 'a'.
    *p = 100;
    printf("Methods to access the value of 'a':\n");
 //1) printf("a= %d %d %d",a,*p,*q);
    printf("a=%d",*p);
}
