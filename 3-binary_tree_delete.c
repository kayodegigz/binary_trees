#include "binary_trees.h"

/**
 * binary_tree_delete - deletes all the contnts in a binary tree
 *
 * @tree: starts as the head node of the binary tree
 *
 * return: returns nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
