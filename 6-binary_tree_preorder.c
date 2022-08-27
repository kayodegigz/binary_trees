#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses the tree in a preorder config
 *
 * @tree: root of the binary tree
 *
 * @func: pointer to the function to be used
 *
 * Return: nothing at all
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
