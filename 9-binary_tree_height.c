#include "binary_trees.h"

/**
 * height_binary_tree - Measures the height of a binary tree
 * @tree: Pointer to the node to measures the height
 * Return: The height of the tree starting at @node
 */
size_t height_binary_tree(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);
	left = tree->left ? 1 + height_binary_tree(tree->left) : 0;
	right = tree->right ? 1 + height_binary_tree(tree->right) : 0;
	return (left > right ? left : right);
}
