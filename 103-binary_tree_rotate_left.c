#include "binary_trees.h"

/**
 * rotate_left_binary_tree - performs a left-rotation on a binary tree
 * @tree: the address of the root node
 * Return: pointer to the new root node of the tree once rotated
*/
binary_tree_t *rotate_left_binary_tree(binary_tree_t *tree)
{
	binary_tree_t *new;

	if (tree == NULL || tree->right == NULL)
		return (NULL);
	new = tree->right;
	tree->right = new->left;
	if (new->left)
		new->left->parent = tree;
	new->left = tree;
	new->parent = tree->parent;
	if (tree->parent)
	{
		if (tree->parent->left == tree)
			tree->parent->left = new;
		else
			tree->parent->right = new;
	}
	tree->parent = new;
	return (new);
}
