#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: Your function must return a pointer to the uncle node
 * or NULL in failure
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent_node;
	int parent_number;

	if (!node)
		return (NULL);
	parent_node = node->parent;
	if (!parent_node)
		return (NULL);
	parent_number = parent_node->n;
	parent_node = parent_node->parent;
	if (!parent_node)
		return (NULL);
	if (!parent_node->left || !parent_node->right)
		return (NULL);
	if (parent_node->left->n == parent_number)
		return (parent_node->right);
	return (parent_node->left);
}
