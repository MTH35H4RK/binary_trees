#include "binary_trees.h"

/**
 * nodes_binary_tree - measures the number of non-leaves in a binary tree
 * @tree: the address of the root node
 * Return: the number of a non-leaves nodes
*/
size_t nodes_binary_tree(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);
	nodes += nodes_binary_tree(tree->left);
	nodes += nodes_binary_tree(tree->right);
	return ((tree->left || tree->right) ? nodes + 1 : nodes);
}
