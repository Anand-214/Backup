#include<stdio.h>
int area_rect(int length,int breadth)
{
    int area=length*breadth;
    return area;
}
int main()
{
    int l, b;
    printf("Enter the length & breadth:");
    scanf("%d %d",&l,&b);
  //  int res = area_rect(l,b);
    printf("The area of rect is :%d",area_rect(l,b));
}
