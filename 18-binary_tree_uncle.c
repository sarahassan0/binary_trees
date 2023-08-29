#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node
 *        NULL if node is NULL, node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;
	binary_tree_t *grand_p = parent->parent;


	if (!node || !parent || !grand_p || (!grand_p->left && !grand_p->right))
		return (NULL);

	return ((parent == grand_p->left) ? grand_p->right : grand_p->left);
}
