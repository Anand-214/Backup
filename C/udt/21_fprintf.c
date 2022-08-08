#include<stdio.h>
#include<stdarg.h>
int main()
{
    FILE* fp = fopen ("file.txt","w+");       //./out file.txt
    int x = 10;
    char str[] = "EMERTXE.";
    float f = 1.2;
    char ch = 'B';
    fprintf (fp, "%d %s %g %c", x, str, f, ch);
    rewind (fp);
  //  int y; char arr[10]; float f1; char c;
  //  fscanf (fp, "%d %s %f %c", &y, arr, &f1, &c);
  //  printf("y: %d,arr: %s,f1: %g,c: %c");
}
