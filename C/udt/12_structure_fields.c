#include<stdio.h>
struct nibbles
{
      unsigned char lower: 4;
   // unsigned char upper: 4;
      unsigned int upper: 4;

};
int main()
{
    struct nibbles var;
    var.lower = 0xA;
    var.upper = 0x2;
    printf("size if struct bitfield: %zu\n", sizeof(var));
}


