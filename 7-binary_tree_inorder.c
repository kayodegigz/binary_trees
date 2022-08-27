#include "binary_trees.h"

/**
 * binary_tre_inorder - traverses the binary tree in in-order config
 *
 * @tree: the root of the tree
 *
 * @func: the pointer to the func to be used
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
