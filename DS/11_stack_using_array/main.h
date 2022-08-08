#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0       //defining macros.
#define FAILURE 1
#define STACKEMPTY 2
#define STACKFULL 3
#define STACKSIZE 5

typedef int data_t;    //data_t is of type int. 
typedef struct         //structure with Stack as it variable.
{
	int top;
	data_t Sarray[STACKSIZE];    //array with size based on the macro declared.
}Stack;


//function prototypes.
int push(Stack *, data_t);

int pop(Stack *, data_t *);

int peep(Stack);

int peek(Stack);
