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
        if (node == NULL || node->parent == NULL)
		return (NULL);

	return (
		(node->parent->right == node) ?
		node->parent->left : node->parent->right
		);
}
