#include<stdio.h>
int fun()
{
    printf("This message coming from %s function, %d line\n",__func__, __LINE__);
}

int main()
{
    printf("my c file is : %s\n", __FILE__);
    printf("Complied at %s on %s\n", __TIME__, __DATE__);
    printf("This message coming from %s function, %d line\n",__func__, __LINE__);
    fun();
}
