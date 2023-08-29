#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to check.
 * Return: 0 if tree is NULL, otherwise 1.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_leaf = 0, right_leaf = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

    left_leaf++;
	right_leaf++;
	left_leaf= binary_tree_is_perfect(tree->left);
	right_leaf = binary_tree_is_perfect(tree->right);

	return (left_leaf == right_leaf);
}
