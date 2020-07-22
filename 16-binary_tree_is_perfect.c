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
/**
 * check_levels - if a binary tree has a same number of levels
 * @tree: binary tree
 * Return: 0 if it don't have same leves or number of levels
 */
int check_levels(const binary_tree_t *tree)
{
	int l = 1, r = 1;

	if (tree->left)
		l = 1 +  check_levels(tree->left);
	if (tree->right)
		r = 1 +  check_levels(tree->right);
	if (l != r)
		l = 0;
	if (l == 0)
		return (l);
	if (l > r)
		return (l);
	return (r);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: binary tree
 * Return: 1 if its perfect, 0 if don't
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_is_full(tree) == 0)
		return (0);
	if (check_levels(tree) > 0)
		return (1);
	return (0);
}
