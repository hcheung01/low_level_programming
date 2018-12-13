#include "binary_trees.h"

/**
 * binary_tree_depth - find depth
 * @tree: pointer to node
 *
 * Description: measure depth of the binary tree
 * Return: if tree is NULL return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t parent;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	parent = binary_tree_depth(tree->parent) + 1;
	return (parent);
}
