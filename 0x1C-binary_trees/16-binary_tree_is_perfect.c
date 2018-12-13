#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check tree
 * tree: pointer to root node
 *
 * Description: check if binary tree is perfect
 * Return: 0 if tree is null or 1 true
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if ((tree->left) && (tree->right))
		return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
	return (0);
}
