#ifndef SLIST_H

#define SUCCESS 1    //defining macro.
#define FAILURE 0
#define EMPTYLIST -2
#define NOELEMENT -3

typedef struct node
{
	int data;
	struct node *next;
}slist_t;

// reverse the list and update that list

int reverse_iterative(slist_t **head);

int reverse_recursive(slist_t **head);

int insert_first (slist_t** , int);

int print_list (slist_t*);

#endif
