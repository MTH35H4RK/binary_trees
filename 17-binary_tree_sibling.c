#include "binary_trees.h"

/**
 * sibling_binary_tree - finds the sibling of a node
 * @node: the address of the node
 * Return: address of the sibling node
*/
binary_tree_t *sibling_binary_tree(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
