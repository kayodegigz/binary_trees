#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a created node as the left child of parent
 *
 * @parent: parent of the created node
 *
 * @value: int value stored in left node
 *
 * Return: returns the pointr to the node created
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n_left_node;

	if (parent == NULL)
		return (NULL);

	n_left_node = malloc(sizeof(binary_tree_t));

	if (n_left_node == NULL)
	{
		return (NULL);
	}

	n_left_node->n = value;
	n_left_node->parent = parent;
	n_left_node->right = NULL;
	n_left_node->left = parent->left;
	parent->left = n_left_node;

	if (n_left_node->left)
	{
		n_left_node->left->parent = n_left_node;
	}
	return (n_left_node);
}
