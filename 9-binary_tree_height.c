#include "binary_trees.h"

/**
 * binary_tree_height - gets the height of a tree
 *
 * @tree: the pointr to the root of the tree
 *
 * Return: returns a non-negative int
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height >= right_height)
		return left_height;
	else
		return right_height;
}
