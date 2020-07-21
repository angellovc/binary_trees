#include "binary_trees.h"
/**
 * binary_tree_inorder - apply a function to each node of the binary tree
 * using the inorder traversal way
 * @tree: binary tree
 * @func: function to apply to
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
