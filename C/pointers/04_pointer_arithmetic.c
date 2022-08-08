#include<stdio.h>
int main()
{
    int a = 10;
    char b = 20;
    int *p1 = &a;
    char *p2 = &b;
    printf("Sizeof int : %zu\n", sizeof(int));
    printf("initial address of int pointer: %x\n",p1);
//  printf("Initial address of char pointer: %x\n",p2);
   /* p1++,p2++;
    printf("After incrementing by 1 (int pointer) : %p\n",p1);
    printf("After incrementing by 1 (char pointer): %p\n",p2);
   */
    int *p3 = p1+3;
    char *p4 = p2+3;
    printf("Adding 3 to the int : %x\n",p3);
  //  printf("Adding 3 to char: %x\n",p4);

}
