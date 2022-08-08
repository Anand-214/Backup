#include"binary.h"

void print_inorder(bstree_t *root)
{   
    //check root is null or not
    if( root != NULL )
    {
	print_inorder (root->left); //call print_inorder recursively for left side of tree
	printf(" %d",root->data);    //print the root data
	print_inorder(root->right); //call print_inorder recursively for right side of tree
    }

}
