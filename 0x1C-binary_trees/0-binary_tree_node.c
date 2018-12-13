#include "binary_trees.h"

/**
 * *binary_tree_node - create node
 * @parent: pointer to binary tree
 * @value: value to insert into node
 *
 * Description: insert node into binary tree
 * Return: pointer to node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
