#include "binary_trees.h"

/**
 * binary_tree_uncle - find node
 * @node: pointer to node of focus
 *
 * Description: finds the uncle of a binary tree node
 * Return: NULL is node is NULL or no uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent->parent == NULL)
		return (NULL);

	return (
		(node->parent == node->parent->parent->left) ?
		node->parent->parent->right : node->parent->parent->left
		);
}
