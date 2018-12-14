#include "binary_trees.h"

/**
 * binary_tree_sibling - find sibling
 * @node: pointer to node to check
 *
 * Description: finds the sibling of a node
 * Return: NULL if parent or node is the same or no siblings or node to find
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling, *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node && node->parent)
	{
		parent = node->parent;
		if (parent->left && parent->right)
		{
			if (node->n == parent->left->n)
				sibling = parent->right;
			else
				sibling = parent->left;
		}
	}
	binary_tree_sibling(node->left);
	binary_tree_sibling(node->right);

	return (sibling);
}
