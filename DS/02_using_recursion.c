#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* next;
}slist_t;

slist_t* create_node (int);
int insert_first (slist_t** , int);
int print_recursion(slist_t* head);
int main()
{
    slist_t* head = NULL;
    insert_first (&head, 10);
    //    print_recursion(head);
    insert_first (&head, 5);
    //    print_recursion(head);
    insert_first (&head, 2);
    print_recursion(head);
}

slist_t* create_node (int val)
{
    slist_t* new = malloc (sizeof(slist_t));
    if ( new == NULL)
    {
	printf("New node creation failed.\n");
	return NULL;
    }
    new->data = val;
    new->next = NULL;
    return new;
}

int insert_first (slist_t**  head, int val)
{
    if (*head == NULL)
    {
	*head = create_node(val);
	return 0;
    }
    slist_t* new = create_node(val);
    if ( new != NULL)
    {
	new->next = *head;
	*head = new;
    }
}
int print_recursion (slist_t* head)
{
    slist_t* temp = head;
    if (temp != NULL)
    {
	printf("%d ", temp->data);
    }
    else
	return 0;
    print_recursion(temp->next);
}
