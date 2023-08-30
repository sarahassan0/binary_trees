#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling node
 *      NULL if node is NULL, parent is NULL, node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (!node || !node->parent || !node->parent->left || !node->parent->right)
		return (NULL);

	return ((node == node->parent->left) ?
			node->parent->right : node->parent->left);
}
