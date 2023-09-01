#include "binary_trees.h"
/**
 * binary_tree_is_full - check if is full or not
 * @tree: pointer to the root node of the tree
 * Return: 0 or 1
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);
	if ((tree->right && !tree->left) || (tree->left && !tree->right))
		return (0);

	return (binary_tree_is_full(tree->right) && binary_tree_is_full(tree->left));
}

