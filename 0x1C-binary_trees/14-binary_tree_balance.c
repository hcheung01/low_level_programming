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
	int l_height, r_height;

	if (tree == NULL)
		return (0);

	l_height = binary_tree_balance(tree->left) + 1;
	r_height = binary_tree_balance(tree->right) + 1;
	if (tree->left == NULL)
		l_height--;
	if (tree->right == NULL)
		r_height--;
	return (l_height - r_height);
}
