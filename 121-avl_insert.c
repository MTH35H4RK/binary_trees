#include "binary_trees.h"

/**
 * insert_node - insert a new node
 * @tree: the address of the root node
 * @value: the value to be insert
 * Return: the address of the new node
*/
avl_t *insert_node(avl_t **tree, int value)
{
	avl_t *it = *tree;
	avl_t *new_node = node_binary_tree(NULL, value);

	if (new_node == NULL)
		return (NULL);
	if (*tree == NULL)
		return (*tree = new_node);
	while (1)
	{
		if (value < it->n)
		{
			if (it->left)
				it = it->left;
			else
			{
				new_node->parent = it;
				it->left = new_node;
				break;
			}
		}
		else if (value > it->n)
		{
			if (it->right)
				it = it->right;
			else
			{
				new_node->parent = it;
				it->right = new_node;
				break;
			}
		}
		else
		{
			free(new_node);
			return (NULL);
		}
	}
	return (new_node);
}

/**
 * save_balance - keeps the AVL tree balanced
 * @node: the new inserted node
 * @value: the value of the node
 * Return: the root
*/
avl_t *save_balance(avl_t *node, int value)
{
	int balance;

	while (node->parent)
	{
		node = node->parent;
		balance = balance_binary_tree(node);
		if (balance > 1)
		{
			if (node->left->n < value)
				node->left = rotate_left_binary_tree(node->left);
			node = rotate_right_binary_tree(node);
		}
		else if (balance < -1)
		{
			if (node->right->n > value)
				node->right = rotate_right_binary_tree(node->right);
			node = rotate_left_binary_tree(node);
		}
	}
	return (node);
}

/**
 * insert_avl - insert a new node into a avl
 * @tree: the address of the root node
 * @value: the function to apply
 * Return: the address of the new node
*/
avl_t *insert_avl(avl_t **tree, int value)
{
	avl_t *new_node = insert_node(tree, value);

	if (new_node == NULL)
		return (NULL);
	*tree = save_balance(new_node, value);
	return (new_node);
}
