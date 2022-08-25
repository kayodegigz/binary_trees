#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node at right of the parent
 *
 * @parent: right child will be added to the parent node
 *
 * @value: int value of new node
 *
 * Return: returns address of the created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *r_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	r_node = malloc(sizeof(binary_tree_t));

	if (r_node == NULL)
		return NULL;

	r_node->left = NULL;
	r_node->n = value;
	r_node->parent = parent;
	r_node->right = parent->right;
	parent->right = r_node;

	if (r_node->right)
		r_node->right->parent = r_node;
	return (r_node);
}
