#ifndef SLIST_H
#define SUCCESS 1   //defining macro.
#define FAILURE 0
typedef struct node   //structure definition.
{
    int data;
    struct node *next;
}slist;              //declaring structure variable.


//function prototypes.
int find_mid( slist **);

int find_nth( slist **, int);

int insert_first( slist **, int);

int print_list( slist *);
#endif
