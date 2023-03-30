#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert node as left child of another node
 * @parent: pointer to parent node
 * @value: value to give new node
 * Return: Pointer to new node, NULL if failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (!new_node)
		return (NULL);

	new_node->left = parent->left;

	if (new_node->left)
		new_node->left->parent = new_node;

	parent->left = new_node;

	return (new_node);
}
