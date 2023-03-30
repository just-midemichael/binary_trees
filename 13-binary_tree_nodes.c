#include "binary_trees.h"

/**
 * binary_tree_nodes - countes all nodes with at least 1 child
 * @tree: pointer to root node
 * Return: Number of nodes with at least 1 child or 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->right && !tree->left))
		return (0);
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
