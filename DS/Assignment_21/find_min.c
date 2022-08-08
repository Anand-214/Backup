#include"binary.h"

int find_min(bstree_t *root)
{
    if ( root == NULL )
	return EMPTY_TREE;


    //check root->left is null or not
    while(root->left != NULL )
	return find_min(root->left); //return find min recursively,untill we find min value
    return root->data; //after min data found return this value
}
