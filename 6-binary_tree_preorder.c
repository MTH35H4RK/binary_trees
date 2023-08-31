#include "binary_trees.h"

/**
 * preorder_binary_tree - goes through a binary tree using pre-order traversal
 * @tree: the address of the root node
 * @func: the function to apply
*/
void preorder_binary_tree(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || (*func) == NULL)
		return;
	func(tree->n);
	preorder_binary_tree(tree->left, func);
	preorder_binary_tree(tree->right, func);
}
