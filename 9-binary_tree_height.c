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
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	/**
	 * Reason this(below) was done is cos
	 * alx wants me to do hard things :(.
	 * If the base case is returning 0 then I cannot just add one for
	 * every base case cos doing that for an empty tree for example will
	 * give an incorrect value of 1 instead of 0. So we skip adding 1 to
	 * the base case(ie where the node being checked is a leaf node and
	 * add 1 for the rest
	 */
	left_height = (tree->left) ? binary_tree_height(tree->left) + 1 : 0;
	right_height = (tree->right) ? binary_tree_height(tree->right) + 1 : 0;
	return ((left_height > right_height) ? left_height : right_height);
}
