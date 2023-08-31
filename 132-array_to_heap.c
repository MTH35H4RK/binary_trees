#include "binary_trees.h"

/**
 * to_heap_array - builds a AVL tree from an array
 * @array: pointer to the first element of the array to be converted
 * @size: number of element in the array
 * Return: the address of the root node
*/
avl_t *to_heap_array(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t i;

	if (!array)
		return (NULL);
	for (i = 0; i < size; i++)
		insert_heap(&root, array[i]);
	return (root);
}
