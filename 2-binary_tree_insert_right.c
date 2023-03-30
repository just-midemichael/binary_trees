#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert node as right child of another node
 * @parent: pointer to parent node
 * @value: value to give new node
 * Return: Pointer to new node, NULL if failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (!new_node)
		return (NULL);

	new_node->right = parent->right;

	if (new_node->right)
		new_node->right->parent = new_node;

	parent->right = new_node;

	return (new_node);
}
