#include "binary_trees.h"

/**
 * binary_tree_nodes - count node
 * @tree: pointer to root of binary tree
 *
 * Description: counts the nodes with at least 1 child in a binary tree
 * Return: 0 if tree is NULL or count total
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int singles = 0;

	if (tree == NULL)
		return (0);
	if ((tree->left == NULL && tree->right)
	    ||
	    (tree->left && tree->right == NULL)
	    ||
	    (tree->left && tree->right))
		singles = 1;
	return (singles
		+
		binary_tree_nodes(tree->left)
		+
		binary_tree_nodes(tree->right));
}
