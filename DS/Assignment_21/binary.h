#ifndef BINARY_H
#define BINARY_H

#include<stdio.h>
#include<stdlib.h>


#define DATA_NOT_FOUND 3
#define DATA_FOUND 2
#define SUCCESS 1
#define FAILURE 0
#define EMPTY_TREE -1

//structure definition
typedef int data_t;
typedef struct node
{
    data_t data;
    struct node *left, *right;
}bstree_t;

//function defintion for find max
int find_max(bstree_t *);

//function defintion for print
void print_inorder(bstree_t *);

//function defintion for find min
int find_min(bstree_t *);

//function defintion for create node
bstree_t *bst_create_node( data_t );

//function defintion for insert node
bstree_t *insert(bstree_t *, data_t );

//function definition for search
int search( bstree_t *, data_t );


#endif
