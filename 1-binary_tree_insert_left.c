#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	int left_val;

	if (!parent)
		return (NULL);

	if (parent->left)
	{
		left_val = parent->left->n;
		parent->left = binary_tree_node(parent, value);
		if (!parent->left)
			return (NULL);
		parent->left->left = binary_tree_node(parent->left, left_val);
	}
	else
		parent->left = binary_tree_node(parent, value);

	return (parent->left);
}
