#include "binary_trees.h"

/**
 * binary_tree_is_root - check node
 * @node: pointer to node
 *
 * Description: check if a given node is a root
 * Return: 1 if root 0 if null and other
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && node->parent == NULL)
		return (1);
	return (0);
}
