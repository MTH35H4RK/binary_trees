#include "binary_trees.h"

/**
 * insert_right_binary_tree - Inserts a node as the right child of another node
 * @parent: Pointer to the parent node.
 * @value: Value of the right node.
 * Return: Pointer to the right node.
*/

binary_tree_t *insert_right_binary_tree(binary_tree_t *parent, int value)
{
	binary_tree_t *right;

	if (parent == NULL)
		return (NULL);
	right = node_binary_tree(parent, value);
	if (right == NULL)
		return (NULL);
	right->right = parent->right;
	parent->right = right;
	if (right->right != NULL)
		right->right->parent = right;
	return (right);
}
