#include"binary.h"

int search( bstree_t *root, data_t data )
{   
    //check if root is null and  root->data ==  data(data exists)
    if ( root == NULL )
	return DATA_NOT_FOUND;
    else if( root->data == data )
	return DATA_FOUND; 
    if( root->data > data ) //if root->data greater than data
    {
	//then return search function recursively untill we find the data needed
	search( root->left,data );
    }
    else //return search function recursively if root->data is less than data
    {
	search( root->right,data);
    }
}

