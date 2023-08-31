#include "binary_trees.h"

/**
 * insert_bst - insert a new node into a bst
 * @tree: the address of the root node
 * @value: the function to apply
 * Return: the address of the new node
*/
bst_t *insert_bst(bst_t **tree, int value)
{
	bst_t *it = *tree;

	if (*tree == NULL)
	{
		*tree = node_binary_tree(NULL, value);
		return (*tree);
	}
	while (1)
	{
		if (value < it->n)
		{
			if (it->left)
				it = it->left;
			else
			{
				it->left = node_binary_tree(it, value);
				return (it->left);
			}
		}
		else if (value > it->n)
		{
			if (it->right)
				it = it->right;
			else
			{
				it->right = node_binary_tree(it, value);
				return (it->right);
			}
		}
		else
			break;
	}
	return (NULL);
}
