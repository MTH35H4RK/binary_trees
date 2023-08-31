#include "binary_trees.h"

/**
 * node_binary_tree - creates a binary tree node
 * @parent: Pointer to the parent node.
 * @value: Value of the current node.
 * Return: Pointer to the newly created node.
*/

binary_tree_t *node_binary_tree(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
