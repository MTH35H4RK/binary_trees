#include "binary_trees.h"

/**
 * uncle_binary_tree - finds the uncle of a node
 * @node: the address of the node
 * Return: address of the uncle node
*/
binary_tree_t *uncle_binary_tree(binary_tree_t *node)
{
	binary_tree_t *grand_parent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	grand_parent = node->parent->parent;
	if (grand_parent->left == node->parent)
		return (grand_parent->right);
	else
		return (grand_parent->left);
}
