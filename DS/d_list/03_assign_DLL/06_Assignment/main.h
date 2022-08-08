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

data_type insert_at_last(slist **head, data_type data);
void print_list(slist *head);
data_type sort(slist **head);
data_type create_loop(slist **head, data_type n);
data_type find_loop(slist *head);

#endif
