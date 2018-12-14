#include "binary_trees.h"

size_t helper(const binary_tree_t *tree);
/**
 * binary_tree_balance - balancing function
 * @tree: pointer to root node
 *
 * Description: balance factor of a binary tree
 * Return: 0 if tree is NULL or height
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (helper(tree->left) - helper(tree->right));
}

/**
 * helper - balancing function
 * @tree: pointer to root node
 *
 * Description: balance factor of a binary tree
 * Return: 0 if tree is NULL or height
 */
size_t helper(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (((helper(tree->left) + 1) > (helper(tree->right) + 1)) ?
		(helper(tree->left) + 1) : (helper(tree->right) + 1));
}
