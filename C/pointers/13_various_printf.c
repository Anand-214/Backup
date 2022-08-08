#include<stdio.h>
int main()
{
      printf("%p\n", "hello");
      printf("%c\n", *"hello");
      printf("%s\n","hello"+2);
      printf("%c\n", "hello"[3]);     // *("hello" +3 )
      printf("%c\n", *("hello"+3));
}

	      
