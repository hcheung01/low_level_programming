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
	int diff;
	int l_height, r_height;

	if (tree == NULL)
		return (0);

	l_height = 1 + binary_tree_balance(tree->left);
	if (tree->right == NULL)
		l_height++;
	r_height = 1 + binary_tree_balance(tree->right);
	if (tree->left == NULL)
		r_height++;
	diff = l_height - r_height;

	if (tree->left == NULL && tree->right == NULL)
		return (diff);
	return (diff);
}
