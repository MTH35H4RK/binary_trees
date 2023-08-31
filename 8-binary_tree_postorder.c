#include "binary_trees.h"

/**
 * postorder_binary_tree - goes through a binary tree using postorder traversal
 * @tree: the address of the root node
 * @func: the function to apply
*/
void postorder_binary_tree(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || (*func) == NULL)
		return;
	postorder_binary_tree(tree->left, func);
	postorder_binary_tree(tree->right, func);
	func(tree->n);
}
