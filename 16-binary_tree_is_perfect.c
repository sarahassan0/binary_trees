#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to check.
 * Return: 0 if tree is NULL, otherwise 1.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_leaf, right_leaf;

	if (!tree || (tree->parent && (!tree->left && !tree->right)))
		return (0);
    if (!tree->left && !tree->right)
		return (1);

	left_leaf = binary_tree_is_perfect(tree->left);
	right_leaf = binary_tree_is_perfect(tree->right);

	if (left_leaf == right_leaf)
	    return (1);
	return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
}
