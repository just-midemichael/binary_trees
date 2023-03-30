#include "binary_trees.h"

/**
 * binary_tree_height - calculates height of binary tree
 * @tree: pointer to root node
 * Return: Height or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int right, left;

	if (!(tree))
		return (-0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}

/**
 * binary_tree_balance - measure balance factor of tree
 * @tree: pointer to root node
 * Return: Balanace factor or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!(tree))
		return (0);

	right = binary_tree_height(tree->right);
	left = binary_tree_height(tree->left);

	return (left - right);
}
