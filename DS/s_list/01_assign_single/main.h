#ifndef SLIST_H
#define SUCCESS 1     //defining macro.
#define FAILURE 0
typedef struct node   //Defining the structure.
{
    int data;
    struct node* next;
}slist_t;     //slist_t is the structure variable.

//Function prototypes.
int insert_first (slist_t** , int);
int insert_last (slist_t** , int);
int find_node (slist_t**, int);
int delete_first (slist_t** head);
int delete_last (slist_t** head);
int delete_list(slist_t** head);
int print_list (slist_t*);
#endif
