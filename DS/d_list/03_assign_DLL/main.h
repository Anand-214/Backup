#ifndef DLIST_H
#define SUCCESS 0
#define FAILURE 1
//Structure definition
typedef struct d_node
{
    int data;
    struct d_node *next, *prev;
}dlist;  //Structure variable
 
//Function prototypes.
int insert_first( dlist **,dlist **, int);
int insert_last( dlist **,dlist **, int);
int delete_first( dlist **, dlist **);
int print_dlist( dlist *, dlist *, int);
int delete_list( dlist **, dlist **);
int delete_last( dlist **, dlist **);
#endif
