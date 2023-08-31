#include "binary_trees.h"

/**
 * leaves_binary_tree - measures the number of leaves in a binary tree
 * @tree: the address of the root node
 * Return: the number of a leaves
*/
size_t leaves_binary_tree(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);
	leaves += leaves_binary_tree(tree->left);
	leaves += leaves_binary_tree(tree->right);
	return ((!tree->left && !tree->right) ? leaves + 1 : leaves);
}
