#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling node
 *      NULL if node is NULL, parent is NULL, node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (!node || !parent || !parent->left || !parent->right)
		return (NULL);

	return ((node == parent->left) ? parent->right : parent->left);
}
