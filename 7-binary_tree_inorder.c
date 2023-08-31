#include "binary_trees.h"

/**
 * inorder_binary_tree - goes through a binary tree using in-order traversal
 * @tree: the address of the root node
 * @func: the function to apply
*/
void inorder_binary_tree(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || (*func) == NULL)
		return;
	inorder_binary_tree(tree->left, func);
	func(tree->n);
	inorder_binary_tree(tree->right, func);
}
