#include "binary_trees.h"
/**
 * balance_difference -  measures the balance factor of a binary tree
 * @tree: binary tree
 * @direction: recursion direction
 * Return: the balance factor
 */
int balance_difference(const binary_tree_t *tree, int direction)
{
	int l = 0, r = 0;

	if (!tree)
		return (0);
	l = balance_difference(tree->left, 0);
	r = balance_difference(tree->right, 1);
	if (direction == 0)
		return (l + 1);
	if (direction == 1)
		return (r + 1);
	return (l - r);
}
/**
 * binary_tree_balance - prepare the terrain to call balance_difference
 * @tree: is a pointer to the root node of
 * the tree to measure the balance factor
 * Return: balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (balance_difference(tree, 2));
}
