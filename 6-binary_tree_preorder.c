#include "binary_trees.h"
/**
 * binary_tree_preorder - apply a function to each node of the binary tree
 * using the preorder traversal way
 * @tree: binary tree
 * @func: function to apply to
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
