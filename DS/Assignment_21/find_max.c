#include"binary.h"

int find_max(bstree_t *root)
{   
    if ( root == NULL )
	return EMPTY_TREE;
    //check root-> right is null or not


    while ( root->right != NULL )
	return find_max(root->right); // return find max untill we find max value
    return root->data; //after max data found return this value
}
