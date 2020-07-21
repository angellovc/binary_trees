#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert new node at the right
 * as a child of the parent node
 * @parent: parent node
 * @value: value of the new node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *tmp;

	if (parent == NULL)
		return (NULL);
	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);
	if (parent->right)
	{
		tmp = parent->right;
		tmp->parent = node;
		node->right = tmp;
	}
	node->parent = parent;
	parent->right = node;
	return (node);
}
