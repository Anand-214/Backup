#ifndef SLIST_H
#define SLIST_H

#include <stdio.h>     // header file and macros
#include <stdlib.h>  

#define SUCCESS 1
#define FAILURE 0
#define LIST_EMPTY -1   

typedef int data_t;    //integers hence onwards termed as data_t.

typedef struct node
{
    data_t data;       // structure for creating linked list
    struct node *link;
}slist_t;


//function prototypes.
data_t print_list(slist_t *);

data_t insert_last(slist_t **, data_t);  // function declarations

data_t sort(slist_t **);

#endif
