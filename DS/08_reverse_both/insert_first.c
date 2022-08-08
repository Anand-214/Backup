#include<stdio.h>
#include "main.h"
#include<stdlib.h>
  
  int insert_first (slist_t**  head, int val)  //function defintion to insert first element.
  {
      slist_t *new = malloc(sizeof(slist_t));  //memory allocation
      if (new == NULL)
      {
          return FAILURE;
      }
      new->data = val;         //updating values
      new->next = NULL;
      if (*head == NULL)      //check if list is empty or not.
      {
          *head = new;
          return SUCCESS;
      }
      else                   //insert at first
      {
          new->next = *head;
          *head = new;
      }
  }

