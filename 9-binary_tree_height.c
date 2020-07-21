#include "binary_trees.h"
/**
 * find_height_binary - that measures the height of a binary tree
 * @tree: binary tree
 * right child and 0 in left child
 * Return: height of the binary tree
 */
size_t find_height_binary(const binary_tree_t *tree)
{
	size_t h_left = 0, h_right = 0;

	if (tree == NULL)
		return (-1);
	h_left = 1 + find_height_binary(tree->left);
	h_right = 1 + find_height_binary(tree->right);
	if (h_left > h_right)
		return (h_left);
	return (h_right);
}
/**
 * binary_tree_height - prepare the terrain to find the height of
 * a binary tree using recursion
 * @tree: binary tree
 * Return: binary tree height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	return (find_height_binary(tree));
}
