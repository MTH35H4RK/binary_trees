#include "binary_trees.h"

/**
 * depth_binary_tree - measures the depth of a node in a binary tree
 * @tree: the address of the root node
 * Return: the depth of a node
*/
size_t depth_binary_tree(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	depth = tree->parent ? 1 + depth_binary_tree(tree->parent) : 0;
	return (depth);
}
