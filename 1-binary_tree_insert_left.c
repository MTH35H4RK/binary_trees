#include "binary_trees.h"

/**
 * insert_left_binary_tree - Inserts a node as the left child of another node
 * @parent: Pointer to the parent node.
 * @value: Value of the left node.
 * Return: Pointer to the left node.inserts a node as the left-child of another node
 * @parent: the address of the parent node
 * @value: the value of the left node
 * Return: the address to the left node
*/

binary_tree_t *insert_left_binary_tree(binary_tree_t *parent, int value)
{
	binary_tree_t *left;

	if (parent == NULL)
		return (NULL);
	left = node_binary_tree(parent, value);
	if (left == NULL)
		return (NULL);
	left->left = parent->left;
	parent->left = left;
	if (left->left != NULL)
		left->left->parent = left;
	return (left);
}
