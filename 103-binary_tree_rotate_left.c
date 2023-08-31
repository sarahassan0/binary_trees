#include "binary_trees.h"
/**
 * binary_tree_rotate_left - check if is complete or not
 * @tree: pointer to the root node of the tree to rotate
 * Return: 0 or 1
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new, *tmp;

	if (!tree || !tree->right)
		return (tree);

	new = tree->right;
	tmp = new->left;
	new->parent = tree->parent;
	new->left = tree;
	tree->parent = new;
	tree->right = tmp;
	tmp ? (tmp->parent = tree) : NULL;

	return (tree->parent);

}
