#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* next;
}slist_t;

slist_t* create_node (int);
int insert_first (slist_t** , int);
int insert_last (slist_t** , int);
int insert_after (slist_t**,int,int);
int insert_before(slist_t**, int, int);
int delete_first (slist_t** head);
int delete_last (slist_t** head);
int delete_element (slist_t** head, int element);
int delete_list(slist_t** head);
int print_list (slist_t*);
int main()
{
    slist_t* head = NULL;
    insert_first (&head, 10);
    insert_first (&head, 5);
    insert_first (&head, 2);
    insert_last (&head, 20);
    insert_after (&head,30,5);
    insert_before (&head,15,2);
    delete_first (&head);
    delete_last (&head);
    delete_element(&head, 2);
    delete_list (&head);
    print_list (head);
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

int print_list (slist_t* head)
{
    slist_t* temp = head;
    while (temp != NULL)          //loop till NULL to print data of each node.
    {
	printf("%d ", temp->data);   
	temp = temp->next;           //here temp is pointing to the next node now.
    }
}
int insert_last (slist_t** head, int val)
{
    if (*head == NULL)
    {
	*head = create_node(val);
	return 0;
    }
    slist_t* temp = *head;
    while ( temp->next != NULL)
    {
	temp = temp->next;           //here temp is pointing to the next node now.
    }
    temp->next = create_node(val);
}
int insert_after (slist_t** head, int val, int after)
{
    if (*head == NULL)
    {
	printf("Empty list.\n");
	return 0;
    }
    slist_t* temp = *head;
    while(temp != NULL && temp->data != after)
    {
	temp = temp->next;
    }
    if (temp == NULL)
	printf("Element not found.\n");
    else
    {
	slist_t* new = create_node(val);
	new->next = temp->next;
	temp->next = new;
    }
}
int insert_before (slist_t** head, int val, int before)
{
    if (*head == NULL)
    {
	printf("Empty list.\n");
	return 0;
    }
    slist_t* temp = *head;
    slist_t* prev = temp;
    while (temp != NULL && temp->data != before)
    {
	prev = temp;
	temp = temp->next;
    }
    if ( *head == temp)
    {
	slist_t* new = create_node(val);
	new->next = *head;
	*head = new;
	return 0;
    }
    if ( temp == NULL)
	printf("Element not found.\n");
    else
    {
	slist_t* new = create_node(val);
	new->next = temp;
	prev->next = new;
    }
}
int delete_first (slist_t** head)
{
    if (*head == NULL)
    {
	printf("The list is empty.\n");
    }
    slist_t* temp = *head;
    *head = temp->next;
    free (temp);
}
int delete_element (slist_t** head, int element)
{
    if (*head == NULL)
    {
	printf("The list is empty.");
    }
    else
    {
	slist_t* temp = *head;
	slist_t* prev = temp;
	while ( temp != NULL && temp->data != element)
	{
	    prev = temp;
	    temp = temp->next;
	}
	if (*head == temp)     //if the element is present at first node.
	{
	    *head = temp->next;
	    free(temp);
	}
	else if ( temp == NULL)     //the element not found.
	{
	    printf("Element not found.");
	    return 0;
	}
	else
	{
	    prev->next = temp->next;
	    free(temp);
	}
    }
}
int delete_last (slist_t** head)
{
    if (*head == NULL)
    {
	printf("The list is empty.\n");
    }
    else
    {
	slist_t* temp = *head;
	slist_t* prev = temp;
	while ( temp->next != NULL)
	{
	    prev = temp;
	    temp = temp->next;
	}
	if ( temp == *head )    //if only one node is present.
	{
	    *head = NULL;
	    free(temp);
	}
	else
	{
	    prev->next = NULL;
	    free(temp);
	}
    }
}
int delete_list (slist_t** head)
{
    if (*head == NULL)
    {
	printf("The list is empty.\n");
    }
    else
    {
	slist_t* temp = *head;
	slist_t* prev = temp;
	while ( temp != NULL)
	{
	    prev = temp;
	    temp = temp->next;
	    free(prev);
	}
	*head = NULL;
	printf("The list has been deleted.\n");
    }
}







