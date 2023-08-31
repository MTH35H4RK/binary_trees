#include "binary_trees.h"

/**
 * is_full_binary_tree - checks if a binary tree is full
 * @tree: Pointer to the root node
 * Return: 0, 1
 */
int is_full_binary_tree(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	if (tree->left && tree->right)
	{
		left = is_full_binary_tree(tree->left);
		right = is_full_binary_tree(tree->right);
		return (left && right);
	}
	return (tree->left == NULL && tree->right == NULL);
}
