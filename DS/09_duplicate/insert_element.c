#include<stdio.h>
#include "main.h"
#include<stdlib.h>

int insert_element( slist **head, data_t data )  //Function defination to insert element
{
    slist *new = malloc(sizeof(slist));  //Create new node

    //Add data in new node
    new -> data = data;
    new -> next = NULL;
    slist *temp = *head;

    if( *head == NULL )  //Cheack wheather list is empty or not
    {   
        *head = new;
        return SUCCESS;
    }   
    while( temp -> next != NULL ) //Loop will iterate till last node
    {   
        temp = temp -> next;
    }   
    //Add new node in single linked list
    temp -> next = new;
    return SUCCESS;
}

