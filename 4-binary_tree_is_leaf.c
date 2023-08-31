#include "binary_trees.h"

/**
 * is_leaf_binary_tree - checks if a node is a leaf
 * @node: the node to be checked
 * Return: 0 or 1.
*/
int is_leaf_binary_tree(const binary_tree_t *node)
{
	return (node && node->left == NULL && node->right == NULL);
}
