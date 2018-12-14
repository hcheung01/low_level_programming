#include "binary_trees.h"

/**
 * binary_tree_postorder - traversal method
 * @tree: pointer to node
 * @func: function pointer
 *
 * Description: go through tree with post-order traversal method
 * Return: if tree or func is NULL
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
