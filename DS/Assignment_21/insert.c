#include"binary.h"

bstree_t *insert(bstree_t *root, data_t data)
{   
    //check if root is null or not
    if ( root == NULL )
    {
	root = bst_create_node(data);
	if( root == NULL )
	{
	    printf("Info:failed to insert tree\n");
	}
	else
	{
	    printf("Info:inserted tree successfully\n");
	}
	return root;
    }
    //check if root->data is less than data
    if(root->data < data) //parent node < new node
    {
	//if yes,assign insert function to root->right,it will check above condition and create data
	root->right=insert(root->right,data);
    }
    //check if root->data is greater than data
    else if ( root-> data > data )
    {
	//if yes,assign insert function to root->left,it will check above condition and create data
	root->left =insert(root->left,data);
    }
    else //else print this statement,if above conditions are false
    {
	printf(" %d is already inserted\n",data);
    }
    return root;
}

bstree_t *bst_create_node( data_t data )
{
    //create a new data using dynamic memory allocation
    bstree_t *new = malloc(sizeof(bstree_t));
    new->data =data; //make newdata equal to data
    new->left = new->right = NULL; //make right and left leg of root null
    return new;
}
