#include "binary_trees.h"
/**
 * binary_tree_rotate_right - check if is complete or not
 * @tree: pointer to the root node of the tree to rotate
 * Return: 0 or 1
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new, *tmp;

	if (!tree || !tree->left)
		return (tree);

	new = tree->left;
	tmp = new->right;
	new->parent = tree->parent;
	new->right = tree;
	tree->parent = new;
	tree->left = tmp;
	tmp ? (tmp->parent = tree) : NULL;

	return (new);
}
