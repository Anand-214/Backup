#ifndef SLIST_H 
#define SUCCESS 1   //defining macro.
#define FAILURE 0
typedef int data_t;
typedef struct linked_list //Structure definition
{
    data_t data;
    struct linked_list *next;
}slist;

/* Function prototypes */

int insert_element( slist **head, data_t data);

int print_list( slist *head );

int Remove_duplicate( slist **head );
#endif

