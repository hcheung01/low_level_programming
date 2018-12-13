#include "binary_trees.h"

/**
 * binary_tree_delete - delete tree
 * @tree: pointer to tree
 *
 * Description: delete entire binary tree
 * Return: na
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
