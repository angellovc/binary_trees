#include "binary_trees.h"
/**
 * binary_tree_depth - find a depth of a binary tree's node
 * @tree: binary tree
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	depth = 1 + binary_tree_depth(tree->parent);
	return (depth);
}
