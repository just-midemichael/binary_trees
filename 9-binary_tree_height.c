#include "binary_trees.h"

/**
 * binary_tree_height - calculates height of binary tree
 * @tree: pointer to root node
 * Return: Height or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right, left;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	right = binary_tree_height(tree->right);
	left = binary_tree_height(tree->left);

	if (right > left)
		return (right + 1);
	return (left + 1);
}
