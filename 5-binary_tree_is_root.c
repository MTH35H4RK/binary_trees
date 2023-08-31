#include "binary_trees.h"

/**
 * is_root_binary_tree - checks if a given node is a root
 * @node: the node to be checked
 * Return: 0, 1
*/
int is_root_binary_tree(const binary_tree_t *node)
{
	return (node && node->parent == NULL);
}
