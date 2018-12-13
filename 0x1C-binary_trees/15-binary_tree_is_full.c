#include "binary_trees.h"

/**
 * binary_tree_is_full - check binary tree
 * @tree: pointer to root of tree
 *
 * Description: traverse nodes and check if tree is full
 * Return: total count or 0 if non-existing tree
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_is_full(tree->left) == binary_tree_is_full(tree->right));
}
