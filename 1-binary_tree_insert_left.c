#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *tmp;

	node = binary_tree_node(parent, value);
	if (node == NULL || parent == NULL)
		return (NULL);
	if (parent->left)
	{
		tmp = parent->left;
		tmp->parent = node;
		node->left = tmp;
	}
	node->parent = parent;
	parent->left = node;
	return (node);
}
