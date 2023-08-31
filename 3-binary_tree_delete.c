#include "binary_trees.h"

/**
 * delete_binary_tree - Deletes an entire binary tree
 * @tree: Pointer to the tree to be deleted.
*/

void delete_binary_tree(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree->left != NULL)
		delete_binary_tree(tree->left);
	if (tree->right != NULL)
		delete_binary_tree(tree->right);
	free(tree);
}
