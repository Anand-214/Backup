#ifndef Slist
#define Slist

#define FAILURE 0
#define SUCCESS 1
#define LIST_EMPTY 2
#define DATA_NOT_FOUND 3
#define FINDED 4
#define NOT_FOUND 5

#include<stdio.h>
#include<stdlib.h>

typedef int data_type;

typedef struct node
{
    data_type data;
    struct node *link;
}slist;

//function prototypes

data_type insert_sorted (slist**, data_type);
data_type insert_at_last(slist **, data_type);
data_type insert_last (slist**, data_type);  
void print_list(slist *);
data_type sort(slist **);
data_type create_loop(slist **, data_type);
data_type find_loop(slist *);

#endif
