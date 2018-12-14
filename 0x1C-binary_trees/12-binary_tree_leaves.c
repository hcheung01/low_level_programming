#include "binary_trees.h"

/**
 * binary_tree_leaves - count function
 * @tree: pointer to root of tree
 *
 * Description: count the leaves in a binary tree
 * Return: 0 if no tree or count of total leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 1;

	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (count);
	count = (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	return (count);
}
