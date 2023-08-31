#include "binary_trees.h"

/**
 * to_bst_array - builds a Binary Search Tree from an array
 * @array: pointer to the first element of the array to be converted
 * @size: number of element in the array
 * Return: the address of the root node
*/
bst_t *to_bst_array(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t i;

	if (!array)
		return (NULL);
	for (i = 0; i < size; i++)
		insert_bst(&root, array[i]);
	return (root);
}
