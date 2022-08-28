#include "binary_trees.h"

/**
 * binary_tree_size - calculates te size of the binary tree
 *
 * @tree: the root of the tree or subtree as the case may be
 *
 * Return: returns a size_t size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes;

	if (tree == NULL)
		return (0);

	left_nodes = binary_tree_size(tree->left);
	right_nodes = binary_tree_size(tree->right);
	return (left_nodes + right_nodes + 1);
}
