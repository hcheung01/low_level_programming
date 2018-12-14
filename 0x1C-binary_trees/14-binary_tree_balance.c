#include "binary_trees.h"

/**
 * binary_tree_balance - balancing function
 * @tree: pointer to root node
 *
 * Description: balance factor of a binary tree
 * Return: 0 if tree is NULL or height
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0, diff;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left = 1;
	if (tree->right)
		right = 1;
		diff = left - right;

	return (diff +
		(binary_tree_balance(tree->left) -
		 binary_tree_balance(tree->right)));
}
