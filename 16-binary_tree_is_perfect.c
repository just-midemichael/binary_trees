#include "binary_trees.h"

/**
 * binary_tree_depth - calculate depth of tree
 * @tree: pointer to root node
 * Return: depth or 0 is tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{

	size_t x = 0;

	if (tree == NULL)
		return (0);

	while (!tree)
	{
		x++;
		tree = tree->left;
	}
	return (x);
}

/**
 * binary_tree_is_perfect - wrapper
 * @tree: pointer to root node
 * Return: calls other function
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = binary_tree_depth(tree);

	return (is_perfect(tree, d, 0));
}

/**
 * is_perfect - checks if tree is perfect
 * @tree: pointer to root node
 * @d: depth
 * @level: level of node
 * Return: 1 if perfect else 0
 */

int is_perfect(const binary_tree_t *tree, int d, int level)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (level + 1);
	if (!tree->left || !tree->right)
		return (0);
	return (is_perfect(tree->left, d, level + 1) &&
			is_perfect(tree->right, d, level + 1));
}
