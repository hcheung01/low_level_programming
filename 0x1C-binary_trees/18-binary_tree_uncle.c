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
	binary_tree_t *uncle = NULL, *granny = NULL;

	if (node == NULL || node->parent->parent == NULL)
		return (NULL);

	granny = node->parent->parent;
	if (granny->left && granny->right)
	{
		if (granny->left->right == node)
			uncle = granny->right;
		else if (granny->right->left == node)
			uncle = granny->left;
	}
	else
		return (NULL);

	binary_tree_uncle(node->left);
	binary_tree_uncle(node->right);
	return (uncle);
}
