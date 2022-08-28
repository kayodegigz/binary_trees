#include "binary_trees.h"

/**
 * binary_tree_depth - the depth of the binary tree
 *
 * @tree: the pointer to the node whose depth is checked
 *
 * Return: returns a size_t valu of the depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
