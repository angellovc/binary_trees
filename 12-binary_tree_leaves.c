#include "binary_trees.h"
/**
 * binary_tree_leaves - count the number of leaf in a binary tree
 * @tree: binary tree
 * Return: number of leaf in a binary tree or
 * 0 if the binary tree does not exist
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;

	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		leaf = 1;
	return (binary_tree_leaves(tree->left) +
	binary_tree_leaves(tree->right) + leaf);
}
