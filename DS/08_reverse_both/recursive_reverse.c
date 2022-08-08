#include "main.h"

int reverse_recursive(slist_t **head)
{
    if (head == NULL || head->next == NULL)
    {
	return head;
    }
    slist_t* new = reverse_recursive(head->next);

    head->next->next = head;
    head->next = NULL;
    return new;
}

