#include "binary_trees.h"
/**
 * binary_tree_sibling -  finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: NULL in failure, pointer to a sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent_node = node->parent;

	if (!parent_node)
		return (NULL);
	if (!parent_node->left || !parent_node->right)
		return (NULL);
	if (parent_node->left->n == node->n)
		return (parent_node->right);
	return (parent_node->left);
}
