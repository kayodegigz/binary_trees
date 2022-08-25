#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *r_node = malloc(sizeof(binary_tree_t));

	if (r_node == NULL || parent == NULL)
	{
		return (NULL);
	}

	r_node->left = NULL;
	r_node->n = value;
	r->node->parent = parent;
	r_node->right = parent->right;
	parent->right = r_node;

	if (r_node->right)
		r_node->right->parent = r_node;
	return (r_node);
}
