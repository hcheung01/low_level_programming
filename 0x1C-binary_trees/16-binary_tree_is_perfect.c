#include "binary_trees.h"

int base_power(int power);
int findDepth(const binary_tree_t *tree);
int total_nodes(const binary_tree_t *tree);
/**
 * binary_tree_is_perfect - check tree
 * @tree: pointer to root node
 *
 * Description: check if binary tree is perfect
 * Return: 0 if tree is null or 1 true
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = findDepth(tree);
	int d_factor = base_power(d);
	int total = total_nodes(tree);


	if (tree == NULL)
		return (0);

	if (d_factor != total)
		return (0);
	return (1);
}

/**
 * total_nodes - count nodes
 * @tree: pointer to node
 *
 * Description: count total nodes in tree
 * Return: total count or NULL
 */
int total_nodes(const binary_tree_t *tree)
{
	int total = 0;

	if (tree == NULL)
		return (0);

	total = total_nodes(tree->left) + total_nodes(tree->right) + 1;
	return (total);
}

/**
 * findDepth - find depth on one side
 * @tree: pointer to tree
 *
 * Description: calculate depth of tree
 * Return: depth
 */
int findDepth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree != NULL)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
 * base_power - calculate math
 * @power: int input
 *
 * Description: calculate total nodes of a perfect tree
 * Return: total nodes based on depth
 */
int base_power(int power)
{
	int base = 2, result = 1;

	while (power != 0)
	{
		result *= base;
		--power;
	}
	return (result - 1);
}
