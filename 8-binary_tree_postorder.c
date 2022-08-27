#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses the tree in the postorder config
 *
 * @tree: pointer to the root node of the tree/subtree as d case may be
 *
 * @func: pointer to the function to be used
 *
 * Return: returns nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
