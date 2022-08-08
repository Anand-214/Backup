#include <stdio.h>
#include <stdlib.h>
 
#define SUCCESS 0       //defining macros.
#define FAILURE -1
#define ARRAYSIZE 25
#define NOELEMENT -2

//function prototypes.
int binary_Iterative(int arr[], int left, int right, int data);

int binary_Recursive(int arr[], int left, int right, int data);
				
void print_array(int* elementArray, int totalElements);
