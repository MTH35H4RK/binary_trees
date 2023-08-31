#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;

typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

void binary_tree_print(const binary_tree_t *);
binary_tree_t *node_binary_tree(binary_tree_t *parent, int value);
binary_tree_t *insert_left_binary_tree(binary_tree_t *parent, int value);
binary_tree_t *insert_right_binary_tree(binary_tree_t *parent, int value);
void delete_binary_tree(binary_tree_t *tree);
int is_leaf_binary_tree(const binary_tree_t *node);
int is_root_binary_tree(const binary_tree_t *node);
void preorder_binary_tree(const binary_tree_t *tree, void (*func)(int));
void inorder_binary_tree(const binary_tree_t *tree, void (*func)(int));
void postorder_binary_tree(const binary_tree_t *tree, void (*func)(int));
size_t height_binary_tree(const binary_tree_t *tree);
size_t depth_binary_tree(const binary_tree_t *tree);
size_t size_binary_tree(const binary_tree_t *tree);
size_t leaves_binary_tree(const binary_tree_t *tree);
size_t nodes_binary_tree(const binary_tree_t *tree);
int balance_binary_tree(const binary_tree_t *tree);
int is_full_binary_tree(const binary_tree_t *tree);
int is_perfect_binary_tree(const binary_tree_t *tree);
binary_tree_t *sibling_binary_tree(binary_tree_t *node);
binary_tree_t *uncle_binary_tree(binary_tree_t *node);
binary_tree_t *ancestor_binary_trees(const binary_tree_t *first,
					const binary_tree_t *second);
void levelorder_binary_tree(const binary_tree_t *tree, void (*func)(int));
int is_complete_binary_tree(const binary_tree_t *tree);
binary_tree_t *rotate_left_binary_tree(binary_tree_t *tree);
binary_tree_t *rotate_right_binary_tree(binary_tree_t *tree);
int is_bst_binary_tree(const binary_tree_t *tree);
bst_t *insert_bst(bst_t **tree, int value);
bst_t *to_bst_array(int *array, size_t size);
bst_t *bst_search(const bst_t *tree, int value);
bst_t *bst_remove(bst_t *root, int value);
int tree_is_avl_binary(const binary_tree_t *tree);
avl_t *insert_avl(avl_t **tree, int value);
avl_t *to_avl_array(int *array, size_t size);
avl_t *remove_avl(avl_t *root, int value);
int is_heap_binary_tree(const binary_tree_t *tree);
avl_t *to_avl_sorted_array(int *array, size_t size);
heap_t *insert_heap(heap_t **root, int value);
heap_t *to_heap_array(int *array, size_t size);

#endif /* _BINARY_TREES_H_ */
