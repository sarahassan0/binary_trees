#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *parent_right;

	if (!parent)
		return (NULL);

	parent_right = parent->right;
	if (parent->right)
	{
		parent->right = binary_tree_node(parent, value);

		if (!parent->right)
			return (NULL);

		parent->right->right = parent_right;
		parent_right->parent = parent->right;
	}
	else
		parent->right = binary_tree_node(parent, value);

	return (parent->right);
}
