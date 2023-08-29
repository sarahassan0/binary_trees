#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *parent_left;

	if (!parent)
		return (NULL);

	parent_left = parent->left;
	if (parent->left)
	{
		parent->left = binary_tree_node(parent, value);

		if (!parent->left)
			return (NULL);

		parent->left->left = parent_left;
		parent_left->parent = parent->left;
	}
	else
		parent->left = binary_tree_node(parent, value);

	return (parent->left);
}
