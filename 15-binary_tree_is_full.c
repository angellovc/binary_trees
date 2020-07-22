#include "binary_trees.h"
/**
 * binary_tree_is_full - check if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 0 in failure or 1 if its full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t l = 1, r = 1;

	if (!tree)
		return (0);
	if (tree->left)
		l = binary_tree_is_full(tree->left);
	if (tree->right)
		r = binary_tree_is_full(tree->right);
	if (tree->left && !tree->right)
		return (0);
	if (!tree->left && tree->right)
		return (0);
	if (l == 0 || r == 0)
		return (0);
	return (1);
}
