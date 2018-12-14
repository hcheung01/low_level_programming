#include "binary_trees.h"

/**
 * binary_tree_insert_right - create node
 * @parent: pointer to binary tree
 * @value: value to insert into node
 *
 * Description: right insert node into binary tree
 * Return: pointer to node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);

	if (parent->right)
	{
		node->right = parent->right;
		node->right->parent = node;
	}
	parent->right = node;
	return (node);
}
