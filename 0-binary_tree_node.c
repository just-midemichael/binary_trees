#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to parent node
 * @value: Value to give to node
 * Return: Pointer to new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = NULL;

	tmp = malloc(sizeof(binary_tree_t));

	if (!tmp)
		return (NULL);

	tmp->parent = parent;
	tmp->n = value;
	tmp->left = tmp->right = NULL;
	return (tmp);
}
