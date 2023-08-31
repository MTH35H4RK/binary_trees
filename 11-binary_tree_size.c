#include "binary_trees.h"

/**
 * size_binary_tree - measures the size of a binary tree
 * @tree: the address of the root node
 * Return: the size of the binary tree
*/
size_t size_binary_tree(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree == NULL)
		return (0);
	size += size_binary_tree(tree->left);
	size += size_binary_tree(tree->right);
	return (size);
}
