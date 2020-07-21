#include "binary_trees.h"
/**
 * binary_tree_postorder - apply a function to each node of the binary tree
 * using the postorder traversal way
 * @tree: binary tree
 * @func: function to apply to
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
