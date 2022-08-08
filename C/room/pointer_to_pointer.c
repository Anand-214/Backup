#include<stdio.h>
int main()
{
    int a = 10;
    int* p = &a;
    int** q = &p;    //q points to p and p points to a.
    int ***r = &q;   // r to q-->q to p-->p to a.
    //print value of a using p,q,r
    printf("a= %d %d %d %d\n", a, *p, **q, ***r);
    /* here a is directly giving value of a
     *p = *&a = a 
     **q = **&p = *p = *&a = a 
     ***r = ***&q = **q = **&p = *p = *&a = a.
     */
    //change the value of a using p,q,r.
    *p = 100; // value of a change to 100;
    printf("a=%d\n", *p);
    **q = 200; //value of a changed to 200;
    printf("a=%d\n", **q);
    ***r = 300; //value of a changed to 300;
    printf("a=%d\n", ***r);
    //to print address of a,p,q,r.
    printf("Address of a :%p\n",p);
    printf("Address of p :%p\n",q);   //address occupies 8 bytes so they all are having a difference of 8 in address.
    printf("Address of q :%p\n",r);
    printf("Address of r :%p\n",&r);
    int ****s = &r;
    printf("a=%d\n",****s);
    printf("address of r:%p\n",&r);
    printf("address of r:%p\n",s);
}    /* expected o/p: a = 10 10 10
                     a = 100
		     a = 200
		     a = 300.
		     address of a : 
		     address of p : 
		     address of q : 
		     address of r : 
		     */
