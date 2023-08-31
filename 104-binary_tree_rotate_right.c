#include "binary_trees.h"

/**
 * rotate_right_binary_tree - performs a right-rotation on a binary tree
 * @tree: the address of the root node
 * Return: pointer to the new root node of the tree once rotated
*/
binary_tree_t *rotate_right_binary_tree(binary_tree_t *tree)
{
	binary_tree_t *new;

	if (tree == NULL || tree->left == NULL)
		return (NULL);
	new = tree->left;
	tree->left = new->right;
	if (new->right)
		new->right->parent = tree;
	new->right = tree;
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
