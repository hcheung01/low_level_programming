#include "binary_trees.h"

int help1(const binary_tree_t *tree);
int help2(const binary_tree_t *tree);
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

	return (help1(tree->left) - help2(tree->right));
}

/**
 * help1 - balancing function
 * @tree: pointer to root node
 *
 * Description: balance factor of a binary tree
 * Return: 0 if tree is NULL or height
 */
int help1(const binary_tree_t *tree)
{
	int l;

	if (tree == NULL)
		return (0);

	l = help1(tree->left);
	return (l + 1);
}

/**
 * help2 - balancing function
 * @tree: pointer to root node
 *
 * Description: right height
 * Return: 0 if tree is NULL or height
 */
int help2(const binary_tree_t *tree)
{
	int r;

	if (tree == NULL)
		return (0);

	r = help2(tree->right);
	return (r + 1);
}
