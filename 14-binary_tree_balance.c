
#include "binary_trees.h"
/**
 * balance_difference -  measures the balance factor of a binary tree
 * @tree: binary tree
 * @first_node: represent the first node
 * Return: the balance factor
 */
int balance_difference(const binary_tree_t *tree, int first_node)
{
	int l = 0, r = 0;

	if (tree->left)
		l = 1 + balance_difference(tree->left, 0);
	if (tree->right)
		r = 1 + balance_difference(tree->right, 0);
	if (first_node)
		return (l - r);
	if (l > r)
		return (l);
	return (r);
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
	return (balance_difference(tree, 1));
}
