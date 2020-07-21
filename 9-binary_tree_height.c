#include "binary_trees.h"
/**
 * find_height_binary - that measures the height of a binary tree
 * @tree: binary tree
 * @direction: is used to specify the node child 1 in
 * right child and 0 in left child
 * Return: height of the binary tree
 */
size_t find_height_binary(const binary_tree_t *tree, int direction)
{
	size_t h_left = 0, h_right = 0;

	if (tree == NULL)
		return (0);

	h_left = find_height_binary(tree->left, 0);
	h_right = find_height_binary(tree->right, 1);
	if (direction == 0)
		return (h_left + 1);
	if (direction == 1)
		return (h_right + 1);
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
	return (find_height_binary(tree, 2));
}
