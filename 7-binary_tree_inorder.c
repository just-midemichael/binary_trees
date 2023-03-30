#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse tree with in-order traversal
 * @tree: pointer to root node
 * @func: func pointer to pass each node to
 * Return: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
