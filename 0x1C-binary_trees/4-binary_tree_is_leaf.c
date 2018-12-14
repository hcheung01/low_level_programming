#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if node is a leaf
 * @node: pointer to node
 *
 * Description: node is a pointer to the node to check if leaf
 * Return: 0 if node is null or other
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
