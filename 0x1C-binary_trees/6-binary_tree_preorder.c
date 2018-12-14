#include "binary_trees.h"

/**
 * binary_tree_preorder - traversal method
 * @tree: pointer to tree
 * @func: function pointer
 *
 * Description: using pre-order method to traverse the tree
 * Return: na
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
