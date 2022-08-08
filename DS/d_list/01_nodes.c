#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next, *prev;
}dlist_t;

dlist_t* create_node (int);
int insert_first (dlist_t**, int);
int insert_last (dlist_t** head, int val);
void print_list (dlist_t* head);
int insert_after (dlist_t**, int);

int main()
{
    dlist_t* head = NULL;
    insert_first (&head, 5);
    insert_last (&head, 20);
    print_list (head);
}
dlist_t* create_node (int val)
{
    dlist_t *new = malloc (sizeof(dlist_t));
    if ( new == NULL)
    {
	printf ("New node creation failed,\n");
	return 0;
    }
    new->data = val;
    new->next = NULL;
    new->prev = NULL;
    return new;
}
int insert_first(dlist_t** head, int val)
{
    if (*head == NULL)
    {
	*head = create_node(val);
	return 0;
    }
    dlist_t* new = create_node(val);
    new->next = *head;
    (*head)->prev = new;
    *head = new;
}
void print_list (dlist_t* head)
{
    dlist_t* temp = head;
    while (temp != NULL)          //loop till NULL to print data of each node.
    {
	printf("%d ", temp->data);
	temp = temp->next;           //here temp is pointing to the next node now.
    }
}

int insert_last (dlist_t** head, int val)
{
    if (*head == NULL)
    {
	*head = create_node(val);
	return 0;
    }
    dlist_t* temp = *head;
    while ( temp->next != NULL)
    {
	temp = temp->next;           //here temp is pointing to the next node now.
    }
    temp->next = create_node(val);
}
